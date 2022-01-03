#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Adders{
    string num1 = "";
    string num2 = "";
};

void reverseStr(string &str){
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void add(string num1, string num2){
    reverseStr(num1);
    reverseStr(num2);
    string ansStr = "";
    vector<string> vectStr;
    if(stoi(num1) > stoi(num2)){ // add num1 + num2
        for(int i=0; i<num1.size(); i++){
            if(i > num2.size()-1){
                ansStr += num1[i];
                string charToStr = to_string(num1[i]);
                vectStr.push_back(charToStr);
            }
            else{
                int sum = (int)(num1[i]-'0') + (int)(num2[i]-'0');
                cout << "sum: " << sum << endl;
                ansStr += to_string(sum);
                cout << "tostringed: " << to_string(sum) << endl;
                vectStr.push_back(to_string(sum));
            }
        }
    }
    else if(stoi(num2) > stoi(num1)){ // add num2 + num1
        for(int i=0; i<num2.size(); i++){
            if(i > num1.size()-1){
                ansStr += num2[i];
                string charToStr = to_string(num2[i]);
                vectStr.push_back(charToStr);
            }
            else{
                int sum = (int)(num1[i]-'0') + (int)(num2[i]-'0');
                cout << "sum: " << sum << endl;
                string sumStr = to_string(sum);
                vectStr.push_back(sumStr);
            }
        }
    }
    reverseStr(ansStr);
    cout << ansStr << endl;
    // print the vector in reverse order
    cout << "size: " << vectStr.size() << endl;
    for(int i=vectStr.size()-1; i>0; i--){
        cout << vectStr[i];
    }
    cout << endl;
}

int main(){
    /*int nT; cin >> nT;
    vector<Adders> numbers;
    for(int i=0; i<nT; i++){
        Adders nums;
        cin >> nums.num1 >> nums.num2;
        numbers.push_back(nums);
    }*/
    string num1, num2; cin >> num1 >> num2;
    add(num1, num2);
}
