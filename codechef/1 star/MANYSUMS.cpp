#include <iostream>
#include <vector> 
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int t; cin >> t; 
    while(t--){
        int l, r; cin >> l >> r; 

        // calculate
        if(l == r)
            cout << "1" << endl;
        else{
            int n = (r-l); 
            cout << (n * 2) + 1 << endl;  
        }
   }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}