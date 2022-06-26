#include <iostream>
#include <string>
#include <vector> 
using namespace std; 


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

    long long nT; cin >> nT; 
    for(long long t=0; t<nT; t++){
        long long v, q, n; cin >> v >> q >> n; 
        if(v < n){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;  
}
