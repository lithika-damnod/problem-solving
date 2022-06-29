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
        int d, l, r; 
        cin >> d >> l >> r; 

        // calculate
        if(d>=l && d<=r)
            cout << "Take second dose now" << endl;
        else if(d > r)
            cout<< "Too Late" << endl;
        else
            cout << "Too Early" << endl; 
    }
    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}