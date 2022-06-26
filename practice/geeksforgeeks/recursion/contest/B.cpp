#include <iostream> 
#include <vector> 
using namespace std; 

int countInversions(vector<int> arr, int startPos=0, int endPos){
    /* 
        arr[i] > arr[j]
        i < j
    */ 
    int nInversions = 0; 
    for(int i=startPos; i<endPos; i++){
        for(int j=i+1; j<endPos; j++){
            if((i < j) && (arr[i] > arr[j])){
                nInversions++; 
            }  
        }
    }
    return nInversions;
}

void findMaxSubArrays(vector<int> arr, int factor=2, int prevNArr=1){ // default value for factor is 2
    int nInv = countInversions(arr, 0, arr.size()-1); // count init inversions
    
    // new data
    int inv1 = countInversions(arr, 0, factor-1); 
    int inv2 = countInversions(arr, factor, arr.size()); 
     
}

int main(){
    return 0; 
}