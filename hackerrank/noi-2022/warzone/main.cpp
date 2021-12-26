#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

uint64_t maxCityThreat(vector<uint64_t> attackers, vector<uint64_t> cities){
    uint64_t oddPlanes = 0;
    uint64_t oddCities = 0;
    uint64_t cityThreat = 0;
    // finding the number of odd planes
    for(uint64_t plane:attackers)
        oddPlanes+=(plane%2==1)?1:0;

    // finding the number of odd cities
    for(uint64_t city:cities)
        oddCities+=(city%2==1)?1:0;

    // finding the even cities and the attackers
    uint64_t evenPlanes = attackers.size() - oddPlanes;
    uint64_t evenCities = cities.size() - oddCities;

    // calculate max cities that are in threat
    cityThreat += (oddCities > evenPlanes)?evenPlanes:oddCities;
    cityThreat += (evenCities > oddPlanes)?oddPlanes:evenCities;

    return cityThreat;
}

int main() {

    vector<uint64_t> fighters;
    vector<uint64_t> cities;
    int x, y; cin >> x >> y;
    fighters.reserve(x); // resize the vector to the size of x
    cities.reserve(y); // resize the vector to the size of y

    // get input for fighter planes
    for(uint64_t i=0; i<x; i++){
        uint64_t tmp;
        cin >> tmp;
        fighters.push_back(tmp);
    }

    // get input for cities
    for(uint64_t i=0; i<y; i++){
        uint64_t tmp;
        cin >> tmp;
        cities.push_back(tmp);
    }

    cout << maxCityThreat(fighters, cities) << endl; // print out maximum number of cities

    return 0;
}
