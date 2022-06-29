#include <iostream>
#include <vector> 
#include <map>
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n, x; cin >> n >> x;
        vector<int> ratings; 
        int max=0; 
        for(int i=0; i<n; i++){
            int s, r; 
            cin >> s >> r; 
            if(s <= x){
                if(r > max)
                    max=r; 
            }
        }
        cout << max << endl;
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}