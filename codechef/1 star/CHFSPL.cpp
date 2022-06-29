#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        vector<int> vals(3, 0); 
        cin >> vals[0] >> vals[1] >> vals[2]; 
        sort(vals.begin(), vals.end(), greater<int>()); 
        cout << vals[0]+vals[1] << endl;
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}