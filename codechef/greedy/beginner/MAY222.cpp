#include <iostream> 
#include <vector> 
using namespace std; 

void findMax(int nA, int nB, int nC, int nD){
    int curr_max=nA; 
    if(nB>curr_max) curr_max = nB; 
    if(nC>curr_max) curr_max = nC; 
    if(nD>curr_max) curr_max = nD; 
    cout << curr_max << endl;
}

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n, nA, nB, nC, nD; 
        cin >> n >> nA >> nB >> nC >> nD; 
        findMax(nA, nB, nC, nD); 
    } 
    return 0; 
}