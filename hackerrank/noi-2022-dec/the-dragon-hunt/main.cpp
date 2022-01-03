#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct dragon{
    int k = 0; // type of dragon
    int x = 0; // number of arrows remaining
    int y = 0; // number of arrows needed to capture one
    int s = 0; // number of soldiers for capturing
    int g = 0; // n coins for capturing
};

struct Reward{
    int gold = 0;
    int pos = 0;
    int nPoss = 0;
};

int maxElement(vector<Reward> arr){
    int maxim = 0;
    int maxIndex = 0;
    for(int i=0; i<arr.size(); i++){
        if(maxim < arr[i].gold){
            maxim = arr[i].gold;
            maxIndex = i;
        }
    }

    return maxIndex;
}

int calculateReward(vector<dragon> dragons, int n){
    int nT = dragons.size();
    int nUsed = 0;
    int nRemained = n;
    vector<int> totalCoins;
    for(int i=0; i<nT; i++){
        vector<Reward> rewards;
        for(int j=0; j<dragons.size(); j++){
            int arrows = (dragons[j].y <= 0 )?0:dragons[j].x / dragons[j].y; // arrows left / arrows per
            int soldiers = (dragons[j].s <= 0)?0:nRemained / dragons[j].s;
            int minElem = min(arrows, soldiers);
            int totalGold = minElem * dragons[j].g;
            Reward push_reward;
            push_reward.gold = totalGold;
            push_reward.pos = j;
            push_reward.nPoss = minElem;
            rewards.push_back(push_reward);
        }
        // find the index with max
        int maxElem = maxElement(rewards); // get the position of the max Element;
        // reduce the number of soldiers left and used
        int n_s_to_be_added = dragons[rewards[maxElem].pos].s * rewards[maxElem].nPoss;
        nUsed = nUsed + n_s_to_be_added;
        nRemained = nRemained - n_s_to_be_added;
        // add the number of coins to the answer
        totalCoins.push_back(rewards[maxElem].gold);
        // delete the row of data with max gold
        dragons.erase(dragons.begin()+rewards[maxElem].pos);
    }

    //  find the total and return
    int total = 0;
    for(int i=0; i<totalCoins.size(); i++){
        total+=totalCoins[i];
    }

    return total;
}

int main() {
    vector<dragon> dragons;
    int n; cin >> n; // number of soldiers in his army
    int k; cin >> k; // k lines to continue
    dragon firstDragon;
    cin >> firstDragon.s >> firstDragon.g;
    dragons.push_back(firstDragon);
    for(int i=0; i<k; i++){
        dragon inpDragon;
        inpDragon.k = i+1;
        cin >> inpDragon.x >> inpDragon.y >> inpDragon.s >> inpDragon.g;
        dragons.push_back(inpDragon);
    }

    cout << calculateReward(dragons, n) << endl;
    return 0;
}
