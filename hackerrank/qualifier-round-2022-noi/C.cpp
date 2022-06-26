#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std; 

vector<int> f(string s){
    int balance=0; 
    int max_balance=0; 
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(') balance+=1; 
        else if(s[i]==')') balance-=1; 
        max_balance =(balance > max_balance)?balance:max_balance; 
    }
    vector<int> ans; 
    ans.push_back(balance); 
    ans.push_back(max_balance); 
    return ans; 
}


int count_k(string s){
    // count consecutive ()
    for(int i=0; i<s.size(); i++){
        // count consecative parenthesis
        int cons=0; 
        int index=i; 
        while(s[index]=='('){
            if(s[index+1]=='('){
                cons++;  
                index++; 
            }
        }
        size_t found;   
        for(int j=0; j<cons; j++){
            string substring = s.substr(j, (s.size()-1)-j); 
            found = substring.find('('); 
        }
        s.erase(s.begin()+i, s.begin()+found); 
        cout << s << endl; 
    }
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT;
    for(int t=0; t<nT; t++){
        int n, k;
        cin >> n >> k; 
        string bracket; cin >> bracket; 
        vector<int> curr = f(bracket); 
        if(curr[0]==0 && curr[0]==k){
            cout << "0" << endl;
        }
        else{
            for(int i=0; i<n; i++){
                bool ansFound=false; 
                string newStr = bracket; 
                int operations=0; 
                vector<vector<int> > current;
                for(int j=0; j<n; j++){
                    reverse(newStr.begin()+i, newStr.begin()+j); 

                    vector<int> positions; 
                    positions.push_back(i); 
                    positions.push_back(j); 
                    current.push_back(positions); 

                    operations++; 
                    vector<int> ans = f(newStr); 
                    if(ans[0]==0 && ans[1]==k){
                        // print the array 
                        for(int k=0; k<current.size(); k++){
                            cout << current[k][0] << " " << current[k][1] << endl;
                        }
                        cout << newStr << endl;
                        cout << "balance: " << ans[0] << " k: " << ans[1] << endl;
                        ansFound=true; 
                        cout << "operations: " << operations << endl;
                        break;
                    }
                }
                if(ansFound)
                    break;
            }
        }
    } 
    
    return 0;  
}
