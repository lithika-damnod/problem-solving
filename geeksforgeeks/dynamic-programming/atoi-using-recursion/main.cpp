#include <iostream>
#include <string>
using namespace std;

int myAtoi(char *str, int n){
    // base case
    if(n == 1){
        return *str-'0';
    }
    return (myAtoi(str, n-1)*10) + str[n-1] - '0';
}

int main(){
    char str[] = "112";
    cout << myAtoi(str, 3) << endl;
    return 0;
}
