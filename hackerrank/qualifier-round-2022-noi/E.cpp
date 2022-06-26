#include <iostream>
#include <string>
#include <vector> 
using namespace std; 

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
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

     
    
    return 0;  
}
