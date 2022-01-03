#include <iostream>
#include <string>
using namespace std;

// checks whether a string is palindrome
bool isPalindrome(string str, int low, int high){
    while(lower < high){
        if(str[low] != str[high])
            return false;
        low++;
        high--;
    }
    return true;
}

void partitionPalindromes(vector<vector<string>> &all, vector<string> &currentStr, int start, int n, string str){
    // if start has reached the size
    if(start >= n){
        all.push_back(currentStr)
    }
}

int main(){
    string palString; cin >> palString;
    return 0;
}
