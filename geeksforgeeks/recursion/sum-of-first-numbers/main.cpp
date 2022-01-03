#include <iostream>
using namespace std;

// returns the sum of first n numbers
int sum(int n){
    // base case
    if(n == 1){
        // if the n == 1 return 1 so the recursion can be ended
        return 1;
    }
    return n + sum(n-1); // after getting the output from the last call return the n + returned value
}

int main(){
    cout << sum(10) << endl;
    return 0;
}
