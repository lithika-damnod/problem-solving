#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
#include <sstream> 
using namespace std; 

bool isPalindromic(string s){
    string p = s; 
    reverse(p.begin(), p.end()); 
    if(s == p) return true; 
    else return false; 
}

int main(){
    int nT; cin >> nT; 
    for(int n=0; n<nT; n++){
        string time; 
        int nMins; 
        cin >> time >> nMins; 
        int hours = stoi(time[0] + time[1]); 
    }
    return 0; 
}