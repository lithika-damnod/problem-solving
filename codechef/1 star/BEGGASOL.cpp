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
        vector<int> f(n, 0);   
        for(int i=0; i<n; i++)
            cin >> f[i]; 

        // calculate
        if(f[0] == 0) // if it has no fuel in the beginning of the queue 
            cout << "0" << endl; 

        else{
            int power = f[0]; // init power 
            int i=1; 
            int queuePassed=0; 
            while(power != 0 && i<n){
                power+=(f[i]-1); // add the number of fuel available in the index and charge the fuel spend on a unit distance 
                i++; 
            }
            if(power == 0)
                cout << i-1 << endl; 
            else{
                cout <<  (power-1) + (i) << endl; 
            }
        }
    }    

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}