#include <iostream>
#include <vector>
using namespace std;

bool dismissedAll(vector<char> str){
    for(int i=1; i<str.size(); i++){
        if(str[i] != str[i-1])
            return false;
    }
    return true;
}

int countDismissed(vector<char> str){
    int nMissed = 0;
    while(dismissedAll(str) == false){
        for(int i=1; i<str.size(); i++){
            char prev = str[i-1];
            int prev_pos = prev - 'a' + 1;
            char curr = str[i];
            int curr_pos = curr - 'a' + 1;
            if(prev_pos < curr_pos){
                nMissed++;
                str.erase(str.begin()+i);
            }
            else if(prev_pos > curr_pos){
                nMissed++;
                str.erase(str.begin()+(i-1));
            }
        }
    }
    return nMissed;
}

int main(){
    int nT; cin >> nT;
    vector<char> str;
    for(int i=0; i<nT; i++){
        char letter;
        cin >> letter;
        str.push_back(letter);
    }
    int output = countDismissed(str);
    cout << output << endl;
    return 0;
}
