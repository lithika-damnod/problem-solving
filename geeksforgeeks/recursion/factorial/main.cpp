#include <iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n <= 1){
        cout << "base case reached returned 1" << endl;
        return 1;
    }
    cout << "called: factorial( " << n << " )" << endl;
    return n*factorial(n-1); // after getting the return value from the last call multiply it with n
}

int main()
{
    cout << factorial(10) << endl;
    return 0;
}
