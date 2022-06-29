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
        int n, s; cin >> n >> s; 
        if(s <= n){
            cout << s << endl;     
        }                
        else{
            int diff = s - n;  
            cout << n - diff << endl; 
        }
    }
    
    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}
