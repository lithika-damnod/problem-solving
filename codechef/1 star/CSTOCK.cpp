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
        int s, a, b;  
        signed int c;
        cin >> s >> a >> b >> c; 

        // calculate
        int uB = s+((s*c)/100.0);; 
        if(uB >= a && uB <= b)
            cout << "Yes" << endl; 
        else
            cout << "No" << endl;
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}