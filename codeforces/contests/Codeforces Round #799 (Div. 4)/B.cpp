#include <iostream> 
#include <unordered_set>
using namespace std; 

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n; cin >> n; 
        unordered_set<int> arr; 
        for(int i=0; i<n; i++){
            int val; cin >> val; 
            arr.insert(val); 
        }
        int notDistinct = n - arr.size(); 
        cout << (arr.size()-(notDistinct%2)) << endl; 
    }
    return 0; 
}