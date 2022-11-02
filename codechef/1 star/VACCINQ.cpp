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
    while(nT--){
        int n, p, x, y; 
        cin >> n >> p >> x >> y; 
        vector<int> q(n, 0);
        int nElders=0, nChilds=0; 
        for(int t=0; t<n; t++){
            cin >> q[t]; 
            nElders += (t<p && q[t]==1)?1:0;
            nChilds += (t<p && q[t]==0)?1:0; 
        }

        int ans = (x*nChilds) + (y*nElders); 
        cout << ans << endl; 
    }    

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}