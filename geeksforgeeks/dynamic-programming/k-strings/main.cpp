#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printKString(string s, string prefix, int k){
    cout << "\tprefix: " << prefix << endl;
    // base case
    if(k == 0){
        cout << prefix << endl;
        return;
    }

    for(int i=0; i<s.size(); i++){
        string newPrefix;
        newPrefix = prefix + s[i];
        printKString(s, newPrefix, k-1);
    }
}

int main(){
    int k; cin >> k;
    string inp; cin >> inp;
    printKString(inp, "", k);
    return 0;
}
