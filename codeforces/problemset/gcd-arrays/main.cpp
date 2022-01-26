#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main(){
    uint64_t nT; cin >> nT;
    for(uint64_t i=0; i<nT; i++){
        uint64_t l, r, k;
        cin >> l >> r >> k;
        // calculate: count the number of odds
        int oddCount = ceil((r-l)/2);
        oddCount += (l%2==1 || r%2==1)?1:0;
        if(k == 0){
            if(l == r && l !=1){
                cout << "YES" << endl;
            }
            else
            if(oddCount > k)
                cout << "NO" << endl;
        }
        else{
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}
