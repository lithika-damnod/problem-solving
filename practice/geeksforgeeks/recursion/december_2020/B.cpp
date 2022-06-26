#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm>
using namespace std; 

int main(){
    int m; cin >> m; 
    for(int t=0; t<m; t++){
        int n; cin >> n;
        string superSpell = ""; 
        for(int i=0; i<n; i++){
            string spell; cin >> spell;
            sort(spell.begin(), spell.end()); 
            superSpell += spell[0];
        }
        sort(superSpell.begin(), superSpell.end()); 
        cout << superSpell << endl; 
    }
    return 0; 
}