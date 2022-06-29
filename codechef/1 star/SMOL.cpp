#include <iostream>
#include <vector> 
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n, k; cin >> n >> k; 
        if(k > n || k == 0){
            cout << n << endl;
        }
        else{
            int div = n/k; 
            cout << n-(k * div) << endl;
        }
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}