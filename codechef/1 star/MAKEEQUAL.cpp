#include <iostream>
#include <vector> 
#include <unordered_set>
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT=0; 
    cin >> nT; 
    while(nT--){
        int n; 
        cin >> n; 
        int nSteps=0; 
        unordered_set<int> uset; 
        for(int t=0; t<n; t++){
            int val; cin >> val; 
            uset.insert(val); 
        }
        cout << uset.size()-1 << endl; 
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}