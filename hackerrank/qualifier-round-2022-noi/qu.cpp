#include <iostream>
#include <string>
#include <vector> 
using namespace std; 

bool is_non_increasing(vector<int> veh){
    for(int i=1; i<veh.size(); i++)
        if(veh[i-1]<veh[i]) return false; 
    return true; 
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

    int vehicals, amount; cin >> vehicals >> amount; 
    vector<int> distrib(vehicals, 0); 
    for(int i=0; i<vehicals; i++){
        cin >> distrib[i];  
    }

    for(int i=0; i<distrib.size(); i++){
        cout << distrib[i] << " "; 
    }
    cout << endl;
    // calculate
    if(is_non_increasing(distrib)){
        cout << "0" << endl;
    }
    else{
        int nOps=0; 
        for(int i=(distrib.size()-1); i>0; i--){
            cout << "i-1: " << distrib[i-1] << " i: " << distrib[i] << endl;
            if(distrib[i-1]<distrib[i]){
                distrib[i]--; 
                distrib[i-1]++; 
                nOps++; 
            }
        }
        // print array 
        for(int i=0; i<distrib.size(); i++){
            cout << distrib[i] << " "; 
        }
        cout << nOps << endl;
    }
    return 0;  
}
