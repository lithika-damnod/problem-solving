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
        int n; cin >> n; 
        vector<int> speeds(n, 0); 
        for(int i=0; i<n; i++){
            cin >> speeds[i]; 
        } 
        if(n == 1)
            cout << "1" << endl; 
        else {
            int max_speed_cars=1; 
            for(int i=1; i<n; i++){
                if(speeds[i-1] >= speeds[i]){
                    max_speed_cars++; 
                }
            } 
            cout << max_speed_cars << endl; 
        }
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}