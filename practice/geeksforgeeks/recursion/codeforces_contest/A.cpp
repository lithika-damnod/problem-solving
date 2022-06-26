#include <iostream> 
#include <vector> 
using namespace std; 

int main(){
    int nT; cin >> nT; 
    for(int i=0; i<nT; i++){
        int n; cin >> n; 
        vector<int> a;  
        for(int j=0; j<n; j++){
           int val; cin >> val;
           a.push_back(val); 
        }
        int nRemove = 0; 
        for(int j=0; j<n-1; j++){
            if((a[j]%2 == 0 && a[j+1]%2 == 0) || (a[j]%2 == 1 && a[j+1] == 1)){
                continue; 
            }
            else nRemove++; 
        }
        cout << nRemove/2 << endl;
    }
    return 0; 
}