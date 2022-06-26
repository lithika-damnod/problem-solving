#include <iostream>
#include <vector> 
using namespace std; 

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n; cin >> n; 
        // solve
        int nP = n / 3; 
        int nR = n % 3; 
        if(nR == 0)
            cout << nP << " " << nP+1 << " " << nP-1 << endl; 
        else if(nR == 1)
            cout << nP << " " << nP+2 << " " << nP-1 << endl; 
        else if(nR == 2)
            cout << nP+1 << " " << nP+2 << " " << nP-1 <<endl; 
    }
    return 0; 
}