#include <iostream>
#include <vector> 
#include <string> 
using namespace std; 

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int a, b, c, d; 
        cin >> a >> b >> c >> d; 
        int nPpl = 0; 
        nPpl += (b > a)?1:0; 
        nPpl += (c > a)?1:0; 
        nPpl += (d > a)?1:0; 
        cout << nPpl << endl;
    }
    return 0; 
}