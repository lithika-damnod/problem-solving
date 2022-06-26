#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std;

void checkAll(vector<float> arr, int ignoreIndex=0){
    // base case 
        // if ignoreIndex >= size of the arr 
    if(ignoreIndex >= arr.size()){
        cout << "NO" << endl; 
        return; 
    }  
    else{
        // calculate the mean ignoring the ignoreIndex
        float total = 0; 
        for(int k=0; k<arr.size(); k++){
            if(k != ignoreIndex) total+=arr[k]; 
        } 
        float mean = total/(arr.size()-1); 
        // check whether the ignoredIndex is equal to mean  
        if(arr[ignoreIndex] == mean){
            // if it is found in the arr
            cout << "YES" << endl; 
            return; 
        }
        else{
            checkAll(arr, ignoreIndex+1); 
        }
    }
}

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n; cin >> n; 
        vector<float> vals; 
        for(int i=0; i<n; i++){
            float val; cin >> val; 
            vals.push_back(val); 
        }
        // calculate
        checkAll(vals); 
    }
    return 0; 
}