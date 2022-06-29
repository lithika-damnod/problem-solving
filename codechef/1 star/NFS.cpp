#include <iostream>
#include <vector> 
#include <cmath>
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int u, v, a, s; 
        cin >> u >> v >> a >> s; 
        
        // calculate v - final velocity 
        float final_vel = pow(u, 2) - 2 * a * s; 
        if(final_vel <= pow(v, 2))
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    } 

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}