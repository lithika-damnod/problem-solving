#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
#include <map>
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

    int vehicals, petrol; cin >> vehicals >> petrol; 
    vector<int> distrib(vehicals, 0); 
    map<int, int> graph; 
    for(int t=0; t<vehicals; t++){
        cin >> distrib[t];  
        graph[distrib[t]]++; 
    }
    if(is_non_increasing(distrib)){
        cout << "0" << endl; 
    }
    else{
        int target = graph.begin()->first;   
        int max=0;
        map<int, int>::iterator it; 
        for(it=graph.begin(); it!=graph.end(); it++){
            if(it->second > max){
                target = it->first; 
                max=it->second; 
            } 
        }
        int operations=0; 
        for(int i=distrib.size()-1; i>0; i--){
            if(distrib[i] != target){
                distrib[i-1]--; 
                distrib[i]++; 
                operations++; 
            }
        }
        // print
        for(int i=0; i<distrib.size(); i++){
            cout << distrib[i] << " "; 
        }
        cout << endl;
        cout << operations << endl;
    }
    return 0;  
}
