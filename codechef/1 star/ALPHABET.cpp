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

    string s; cin >> s;  // letters that jeff can read 
    int n; cin >> n; // number of words in the book 
    for(int i=0; i<n; i++){
        string word=""; 
        cin >> word; 

        // if the word is consist of only the characters that are in knowlege print YES otherwise NO
        for(int i=0; i<word.size(); i++){
            if(s.find(word[i]) == string::npos){ // if its in knowledge 
                cout << "No" << endl; 
                break; 
            }
            if(i==word.size()-1){
                cout << "Yes" << endl;  
            }
        }

    }

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}