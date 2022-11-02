#include <iostream>
#include <string>
#include <unordered_map>
using namespace std; 
void fastIO();

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    unordered_map<string, int> compres;  
    int n_lines; cin >> n_lines; 
    for(int i=0; i<=n_lines; i++){
        string inp_line;
        getline(cin, inp_line); 
        // seperate by word
        string word = ""; 
        for(int j=0; j<inp_line.size(); j++){
            if(j==(inp_line.size()-1)){
                word += inp_line[j]; 
                compres[word]++; 
                word = ""; 
            }
            else if(inp_line[j] != ' '){
                word += inp_line[j]; 
            }
            else{
                compres[word]++; 
                word = "";   
            }
        }
    }

    // print the compressed version 
    for(auto x : compres){
        cout << x.first << " " << x.second << endl; 
    } 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}   