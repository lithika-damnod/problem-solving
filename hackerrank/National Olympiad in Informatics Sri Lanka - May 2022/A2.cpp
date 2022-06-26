#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string inp;
    getline(cin,inp);
    int n = inp.size();
    vector<int> allChars;
    int runT = 0;
    for(int i = 0; i < n; i++){
        if(i >= 3){
            if(inp[i] == '9' and inp[i-1] == '4' and inp[i-2] == '0' and inp[i-3] == '2'){
                allChars.push_back(runT);
                cout << runT << endl;
                runT = -1;
            }
        }
        runT += 1;
    }
    allChars.push_back(runT);
    if(allChars.size() <= 1){
        cout << 0 << endl;
        return 0;
    }
    allChars[0] -= 3;
    long total = 0;
    for(int i = 0; i < allChars.size(); i++){
        //cout << allChars[i] << " ";
        for(int j = i+1; j < allChars.size(); j++){
            total += (allChars[i] + 1) * (allChars[j] + 1);
        }
    }
    //cout << endl;
    cout << total << endl;

}