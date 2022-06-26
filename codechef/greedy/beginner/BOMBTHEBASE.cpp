#include <iostream> 
#include <vector>
using namespace std; 

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n, x; 
        vector<int> a(n, 0); 
        int bombPos=0; 
        for(int i=0; i<n; i++){
            cin >> a[i]; 
            if(a[i]<x){
                bombPos=i+1; 
            }
        }
        cout << "answer: " << bombPos << endl;
    }
    return 0; 
}