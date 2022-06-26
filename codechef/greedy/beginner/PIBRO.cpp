#include <iostream>
#include <vector> 
#include <string> 
using namespace std; 

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n, k; 
        string a="";  
        cin >> n >> k >> a;
        // calculate
        vector<int> head(n, 0); 
        vector<int> tail(n, 0); 

        // workout values for head and tails 
        for(int i=0; i<a.size(); i++){
            if(i==0){
                head[i]=0;  
            }
            else if(i==(n-1)){
                tail[i]=0; 
            }
            else{
                int nLeft=0; 
                int nRight=0; 
                // count the number of consecutive to left and modify head
                int indexLeft=i-1; 
                int indexRight=i+1; 
                int selectedLeft=a[indexLeft]; 
                int selectedRight=a[indexRight]; 
                
                while(selectedLeft=='1'){
                    nLeft++; 
                    indexLeft--; 
                    selectedLeft=a[indexLeft]; 
                }
                while(selectedRight=='1'){
                    nRight++; 
                    indexRight++; 
                    selectedRight=a[indexRight]; 
                }
                head[i]+=nLeft; 
                tail[i]+=nRight; 
            }
        }
        int max=0;
        for(int i=0; i<n-k; i++){
            int nP=head[i]+(k)+tail[k-1]; 
            if(nP>max) max=nP; 
        }
        cout << max << endl;
    } 
    return 0; 
}
