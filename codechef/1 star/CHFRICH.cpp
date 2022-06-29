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
        int a, b, x; cin >> a >> b >> x; 
        int diff = b - a;  
        if(diff%x != 0){
            int div = diff/x; 
            cout << div + 1 << endl;
        }
        else{
            int div = diff/x; 
            cout << div << endl;
        }
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}