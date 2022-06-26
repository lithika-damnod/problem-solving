#include <iostream> 
#include <vector> 
#include <string>
using namespace std; 

int main(){
    int nPlanes=0, nCities=0; 
    cin >> nPlanes >> nCities; 
    int nOddPlanes = 0, nEvenPlanes=0, nOddCities=0, nEvenCities=0; 
    for(int i=0; i<nPlanes; i++){
        int code; cin >> code; 
        if(code%2 == 0) nEvenPlanes++;
        else nOddPlanes++;              
    }
    for(int i=0; i<nCities; i++){
        int code; cin >> code; 
        if(code%2 == 0) nEvenCities++;  
        else nOddCities++; 
    }
    // calculate
    int answer = ((nEvenCities > nOddPlanes)?nOddPlanes:nEvenCities) + ((nEvenPlanes>nOddCities)?nOddCities:nEvenPlanes); 
    cout << answer << endl; 
    return 0; 
}