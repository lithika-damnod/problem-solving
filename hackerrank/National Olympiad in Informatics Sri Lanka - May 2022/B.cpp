#include <iostream>
#include <vector> 
using namespace std; 

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n; cin >> n; 
        vector<int> arr; 
        signed int currAns=0; 
        for(int i=0; i<n; i++){
            signed int val; cin >> val; 
            currAns += (val); 
        }
        cout << currAns << endl;
    }
    return 0; 
}