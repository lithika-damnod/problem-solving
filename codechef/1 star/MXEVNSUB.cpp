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
        
        // calculate
        int sum=0; 
        for(int i=1; i<=n; i++)
            sum += i;  

        if(sum%2 == 0)
            cout << n << endl;
        else    
            cout << n-1 << endl;
    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}