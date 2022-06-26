#include <iostream> 
#include <vector>
using namespace std;

struct ConsecutiveBlackCells{
    int nCells = 0; 
    
}; 

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
       int n=0, k=0; cin >> n >> k; 
       vector<char> stripe; 
       for(int i=0; i<n; i++){
            char inp; cin >> inp; 
            stripe.push_back(inp); 
       }
       
       // calculate
       vector<int> consecutive 
       // count the number of consecutive black cells and how much is present in them 
    }
    return 0; 
}