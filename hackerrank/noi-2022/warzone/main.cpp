#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// checks for a value in a vector
bool check(vector<int> arr, int value){
    if(std::find(arr.begin(), arr.end(), value) != arr.end()) {
        return true;
    } else {
        return false;
    }
}

int main() {

    vector<int> fighters;
    vector<int> cities;
    int x, y; cin >> x >> y;
    // get input for fighter planes
    for(int i=0; i<x; i++){
        int tmp;
        cin >> tmp;
        fighters.push_back(tmp);
    }
    // get input for cities
    for(int i=0; i<y; i++){
        int tmp;
        cin >> tmp;
        cities.push_back(tmp);
    }
    // calculate max deployment cities
    vector<int> city; // for storing city indexes
    vector<int> planes; // for storing plane indexes
    int nCities = 0;
    for(int i=0; i<fighters.size(); i++){
        for(int j=0; j<cities.size(); j++){
            if((fighters[i] + cities[j]) % 2 == 1 && !check(city, j) && !check(planes, i)){
                city.push_back(j);
                planes.push_back(i);
                nCities++;
            }
        }
    }
    cout << nCities << endl; // print out maximum number of cities
    return 0;
}
