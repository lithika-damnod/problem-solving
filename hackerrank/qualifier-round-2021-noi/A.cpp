#include <iostream>
#include <vector> 
using namespace std; 

int find_max(vector<int> arr, int startPos, int endPos){
    int max=0; 
    int maxPos=0; 

    for(int i=startPos; i<=endPos; i++){
        if(arr[i]>max){
            maxPos=i; 
            max=arr[i]; 
        }
    }
    return maxPos; 
}
vector<int> maximumSum(vector<int> arr, int selectedPos=0){
    int value=arr[selectedPos]; 
    for(int i=selectedPos+2; i<arr.size(); i++){
         
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

    // input
    int n; cin >> n; 
    vector<int> powers(n, 0); 
    for(int t=0; t<n; t++){
        cin >> powers[t]; 
    }     

    // calculate
    vector<int> ans(2, 0); 
    int i=0; 
    while(i<n && i+2 < n){
        // start at powers[0]
        int maxPos = find_max(powers, i+2, powers.size()-1);          
        i+=maxPos;  
        ans[0]+=powers[maxPos]; 
    }
    i=1; 
    ans[0]+=powers[0]; 
    ans[1]+=powers[1]; 
    while(i<n && i+2 < n){
        int maxPos = find_max(powers, i+2, powers.size()-1); 
        i+=maxPos; 
        //cout << "i: " << i << endl;
        ans[1]+=powers[maxPos]; 
    }  
    int max = (ans[0]>=ans[1])?ans[0]:ans[1];
    cout << max << endl;

    // calculate using dp 


    return 0; 
}
