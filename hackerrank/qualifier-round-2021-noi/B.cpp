#include <iostream>
#include <string>
#include <vector> 
#include <map>
using namespace std; 


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin); 
    #endif

    // input
    int n, c; cin >> n >> c; 
    vector<vector<int> > conn; 
    string ans=""; 
    map<int, vector<int> > deps; 
    for(int t=0; t<c; t++){
        int a, b; 
        cin >> a >> b;
        deps[a].push_back(b);
        if(deps[a].size()>1 || a==b) ans="NO"; 
    } 
    if(ans=="NO") cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0; 
}
