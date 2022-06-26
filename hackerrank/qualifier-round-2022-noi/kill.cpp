#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std; 

bool isPalindrome(string s){
    string newStr = s; 
    reverse(newStr.begin(), newStr.end()); 
    if(s==newStr) return true; 
    return false; 
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

    int n; 
    cin >>n;
    string chars; 
    cin >> chars; 
    int nPartitions=0; 
    for(int i=0; i<chars.size(); i++){
        for(int j=i+1; j<chars.size(); j++){
            string copy = chars.substr(i, j+1); 
            //cout << copy << endl;
            if(isPalindrome(copy)){
                nPartitions++; 
            }
        }
    }
    cout << nPartitions << endl;
    return 0;  
}
