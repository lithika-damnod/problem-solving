/* 
    Name: Brackets
    Link: https://www.codechef.com/submit/BRACKETS
*/
#include <iostream> 
#include <string> 
using namespace std; 

// returns the maximum balance
// psuedocode given in the problemset
int f(string s){
    int balance=0; 
    int max_balance=0; 
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(') balance+=1; 
        else if(s[i]==')') balance-=1; 
        max_balance =(balance > max_balance)?balance:max_balance; 
    }
    return max_balance; 
}

int main(){

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        string a = ""; 
        cin >> a; 
        int maxBrackets = f(a); 
        for(int i=0; i<maxBrackets; i++){
            cout << "("; 
        }
        for(int i=0; i<maxBrackets; i++){
            cout << ")"; 
        }
        cout << endl;
    }
    return 0; 
}