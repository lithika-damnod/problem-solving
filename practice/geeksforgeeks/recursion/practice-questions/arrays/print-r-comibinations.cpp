#include <iostream>
#include <vector> 
using namespace std; 

void printR(vector<int> arr, int r, int n){
    // base case
    if(n==r) return; 
    
}

int main(){
    int n, r; cin >> n >> r;
    vector<int> input;  
    for(int t=0; t<n; t++){
        int val; cin >> val; 
        input.push_back(val); 
    }

    return 0; 
}