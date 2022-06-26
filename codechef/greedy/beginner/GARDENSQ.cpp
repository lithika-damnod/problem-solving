#include <iostream>
#include <vector> 
#include <string> 
using namespace std; 


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
    #endif  
    
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n, m; 
        cin >> n >> m; 
        vector<string> garden; 
        for(int i=0; i<n; i++){
            string mStr; cin >> mStr; 
            garden.push_back(mStr); 
        }
        // calculate
        int ans=0; 
        for(int N=0; N<n; N++){
            for(int M=0; M<garden[N].size(); M++){
                for(int j=M+1; j<garden[N].size(); j++){
                    if((N+j) < n && (M+j) < garden[N].size()){
                        // print four corners 
                        //cout << garden[N][M] << " " << garden[N][M+j] << " " << garden[N+j][M] << " " << garden[N+j][M+j] << endl;
                        int target = garden[N][M]; 
                        if(garden[N][M+j]==target && garden[N+j][M]==target && garden[N+j][M+j]==target){
                            ans++; 
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0; 
}
