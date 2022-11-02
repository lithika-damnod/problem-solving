#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT; 
    while(nT--){
        string s; cin >> s;
        /*
            lapindrome: 
                a string which when split in thhe middle, gives two halves having
                the same characters and same frequency of each character 
        */

        // check whether the string is lapindrome

        // split the string into two parts
        if(s.size()%2 == 0){ // if the string length is even
            string left_s = s.substr(0, s.size()/2);    
            string right_s = s.substr((s.size()/2), (s.size()-(s.size()/2))); 

            if(left_s == right_s)
                cout << "YES" << endl; 
            else
                cout << "NO" << endl; 
        }
        else{
            string left_s = s.substr(0, (s.size()/2)); 
            string right_s = s.substr(((s.size()/2)+1), (s.size()-(s.size()/2))); 
            
            if(left_s == right_s)
                cout << "YES" << endl; 
            else
                cout << "NO" << endl; 
        }
    }
    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}