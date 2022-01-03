#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct key{
    int value = 0;
    vector<int> pos; // for storiing positions in order vector
};

// search for keys
int findKeyPos(vector<key> keys, int target){
    for(int i=0; i<keys.size(); i++){
        if(keys[i].value == target) return i;
    }
    return -1; // for denoting that there's no match found
}

int main(){
    uint32_t nT; cin >> nT; // get the number of testcases
    vector<key> numbers;
    vector<key*> order;
    for(int i=0; i<nT; i++){
        int modeN; cin >> modeN;
        if(modeN == 1){
            int x; cin >> x;
            int foundKeyPos = findKeyPos(numbers, x);
            if( foundKeyPos == -1){
                key push_key;
                push_key.value = x;
                if(order.size() == 0)
                    push_key.pos.push_back(0);
                else
                    push_key.pos.push_back(order.size());
                numbers.push_back(push_key);
                // push the memory address to pointer arr
                order.push_back(&numbers[numbers.size()-1]);
            }
            else{
                numbers[x].pos.push_back(order.size());
                order.push_back(&numbers[foundKeyPos]);
            }
        }
        else if(modeN = 2){
            int x, y; cin >> x >> y;
            int foundKeyPos = findKeyPos(numbers, x);
            if( foundKeyPos != -1){
                // numbers[foundKeyPos].value = y;
                int y_pos =findKeyPos(numbers, y);
                if(y_pos == -1){
                    key newKey;
                    newKey.value = y;
                    numbers.push_back(newKey);
                    int newKeyIndex = numbers.size()-1;
                    for(int k=0; k<numbers[foundKeyPos].pos.size(); k++){
                        order[numbers[foundKeyPos].pos[k]] = &numbers[newKeyIndex];
                        int orderPos = numbers[foundKeyPos].pos[k];
                        numbers[y_pos].pos.push_back(orderPos);
                    }
                    numbers[foundKeyPos].pos.clear(); // clear all the positions in the previous vector
                }
                else{
                    for(int k=0; k<numbers[foundKeyPos].pos.size(); k++){
                        order[numbers[foundKeyPos].pos[k]] = &numbers[y_pos];
                        int orderPos = numbers[foundKeyPos].pos[k];
                        numbers[y_pos].pos.push_back(orderPos);
                    }
                    numbers[foundKeyPos].pos.clear();
                }
            }
        }
    }
    // print the pointer arr
    for(int i=0; i<order.size(); i++){
        cout << order[i]->value << " ";
        for(int j=0; j<order[i]->pos.size(); i++){
            cout << order[i]->pos[j] << endl;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
