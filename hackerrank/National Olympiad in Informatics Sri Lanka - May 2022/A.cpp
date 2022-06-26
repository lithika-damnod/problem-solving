#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 

vector<int> find_key_positions(string s){
    vector<int> keyPos; 
    for(int i=0; i<=(s.size()-4); i++){
        // check whether it has the key "2049"
        if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='4' && s[i+3]=='9'){
            keyPos.push_back(i); 
        }
    }
    return keyPos;
}

int main(){
    string s; cin >> s; 

    // calculate
    
    // get key positions
    vector<int> keyPos = find_key_positions(s); 
    int nKeys=0; 
    // if there's no "2049" present in the string no solutions can be made so return 0 
    if(keyPos.size() == 0){
        cout << "0" << endl;
        return 0; 
    }
    for(int i=0; i<keyPos.size(); i++){
        nKeys+=1;  

        int maxPos=keyPos[i]+3; 
        // count the number of characters around the key "2049"
        int nCharLeft=keyPos[i]; 
        int nCharRight=(s.size()-(maxPos+1)); 
        //cout << "nCharLeft: " << nCharLeft << " nCharRight: " << nCharRight << endl; 
        nKeys+=nCharLeft; 
        nKeys+=nCharRight;         
    }
    nKeys -= (keyPos.size()-1); 
    cout << nKeys << endl;
    return 0; 
}