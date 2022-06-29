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
        int a, b, a1, b1, a2, b2; 
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;  
        if((a1 == b || a1 == a) && (b1 == b || b1 == a)){
            cout << "1" << endl;
        }
        else if((a2 == b || a2 == a) && (b2 == b || b2 == a)){
            cout << "2" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}