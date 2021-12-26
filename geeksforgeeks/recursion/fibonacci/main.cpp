#include <iostream>
using namespace std;

int fib(int n){
    // base case
    if(n <= 2){
        cout << "base case reached n = " << n << ": returned 1" << endl;
        return 1;
    }
    cout << "calls: fib( " << n << " )" << endl;
    return fib(n-1) + fib(n-2);
}

int main(){
    cout << fib(10) << endl;
    return 0;
}
