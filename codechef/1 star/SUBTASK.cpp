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
        int n, m, k; 
        cin >> n >> m >> k; 
        int nPassed=0; 
        int consPassed=0; 
        int consPassedEnded=false; 
        for(int t=0; t<n; t++){
            int passStatus; cin >> passStatus;   
            if(passStatus == 1)
                nPassed++; 
            else
                consPassedEnded=true; 

            if(!consPassedEnded)
                consPassed++; 

        }

        // calculate 
        if(nPassed == n)
            cout << "100" << endl; 
        else if(consPassed >= m)
            cout << k << endl; 
        else
            cout << "0" << endl; 

    }  


    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}