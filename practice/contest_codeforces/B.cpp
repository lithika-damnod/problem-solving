#include <iostream> 
#include <vector> 
using namespace std; 

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n=0; cin >> n; 
        vector<int> a; 
        vector<int> b;  
        for(int aT=0; aT<n; aT++){
            int value; cin >> value; 
            a.push_back(value); 
        }
        for(int bT=0; bT<n; bT++){
            int value; cin >> value; 
            b.push_back(value); 
        }

        // calculate
        
   }
    return 0; 
}