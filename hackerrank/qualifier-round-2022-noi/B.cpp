#include <iostream>
#include <string>
#include <vector> 
#include <map>
using namespace std; 


map<int, bool> create_map(int n){
    map<int, bool> ret; 
    for(int i=1; i<n; i++)
        ret[i]=false;  

    return ret; 
}

vector<int> func(int n, int originalN, map<int, bool>used, vector<int> currentVals, vector<signed int> set){
    
    // base case
    if(n<0 || n>originalN) return currentVals; 
    if(used[n]) return currentVals; 

    used[n]=true; 
    // if all digits are used.. 
    // here's the solution and print, return 
    bool allSet=true; 
    map<int, bool>::iterator itr; 
    for(itr=used.begin(); itr!=used.end(); itr++){
        if(itr->second == false) allSet=false;
    }
    if(allSet && set.size() == originalN){
        // print the vector
        for(int i=0; i<currentVals.size(); i++){
            cout << currentVals[i] << " "; 
        }
        cout << endl;
        return currentVals; 
    }
    else{
        currentVals.push_back(n); 
    }

    for(int i=0; i<set.size(); i++){
        func(n+(set[i]), n, used, currentVals, set);         
    }

    vector<int> v1 = func(n+3, originalN, used, currentVals, set);         
    vector<int> v2 = func(n+2, originalN, used, currentVals, set);         
    vector<int> v3 = func(n+3, originalN, used, currentVals, set);         
    vector<int> v4 = func(n-2, originalN, used, currentVals, set);         
    vector<int> v5 = func(n-4, originalN, used, currentVals, set);            
    vector<int> v6 = func(n-4, originalN, used, currentVals, set);         

    return vector<int>(); 
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

    vector<signed int> set; 
    set.push_back(2); 
    set.push_back(3); 
    set.push_back(4); 
    set.push_back(-2); 
    set.push_back(-3); 
    set.push_back(-4); 

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n; cin >> n; 
        // calculate
        if(n<=2){
            cout << "-1" << endl;
        }
        else{
            // calculate the difference between vectors and put it in a umap
            map<int, bool> valmap = create_map(n);   
            vector<int> curr_vals; 
            func(n-1, n-1, valmap, curr_vals, set); 
        }
    } 
    
    return 0;  
}
