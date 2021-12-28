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

int calculateReward(vector<dragon> dragons, int n){
    vector<dragon> sortedDragons = dragons;
    // sorting dragons by their coins after copying
    sort(sortedDragons.begin(), sortedDragons.end(), [](dragon a, dragon b){
        return a.g > b.g;
    });

    int nUsed = 0; // soldiers used
    int totalCoins = 0;
    for(int i=0; i<sortedDragons.size(); i++){
        // cout << "sortedDragons size: " << sortedDragons.size() << endl;
        if(i == sortedDragons.size()-1){
            int nPoss = 0;
            int soldiers = sortedDragons[i].s;
            int coins = sortedDragons[i].g;
            // cout << "nUsed: " << nUsed << endl;
            // cout << "n: " << n << endl;
            // cout << "soldiers: " << soldiers << endl;
            // cout << "gold: " << coins << endl;
            int coinsToBeAdded = ((int)(n - nUsed)/soldiers)*coins;
            // cout << "value to be added: " << coinsToBeAdded << endl;
            totalCoins += coinsToBeAdded;
            return totalCoins;
        }
        else{
            if(nUsed == n)
                return totalCoins;
            cout << "i: " << i << endl;
            int available_arrows = sortedDragons[i].x;
            int arrows_per_one = sortedDragons[i].y;
            int soldiers = sortedDragons[i].s;
            int coins = sortedDragons[i].g;
            if(arrows_per_one == 0 || available_arrows/arrows_per_one >= 0 ){
                int nPoss = available_arrows / arrows_per_one;
                while(nUsed+(nPoss*soldiers) > n)
                    nPoss--;
                // cout << coins * nPoss << " coins added.. " << endl;
                if(nPoss > 0){
                    totalCoins += coins * nPoss;
                    cout << coins << " * " << nPoss << endl;
                    nUsed += (nPoss*soldiers);
                    // cout << "nUsed: " << nUsed << endl;
                    sortedDragons[i].x =- arrows_per_one * nPoss;
                    // cout << "total coins: " << totalCoins << endl;
                }
            }
        }
    }
    return totalCoins;
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
