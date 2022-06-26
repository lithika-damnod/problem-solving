#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm>
using namespace std; 

bool isPalindrome(string s, int startPos=0, int endPos=0){
    // if endPos = 0 give it the size of the string as the value
    if(endPos == 0)
        endPos = (s.size()-1); 
    
    // create substring
    unsigned int length = endPos - startPos;  
    string substring = s.substr(startPos, length); 
    string reverseSubString = substring;  
    reverse(reverseSubString.begin(), reverseSubString.end()); 
    cout << s << " -> " << reverseSubString << endl; 
    return true; 
}

void orderTress(int n){
    
}

int main(){
    /*
        - minimise number of (r) used
        - should not have palindrome strings of size 3

    */
    //    int n; cin >> n; 
    string sample = ""; 
    isPalindrome(sample, 0, 4); 
    return 0; 
}