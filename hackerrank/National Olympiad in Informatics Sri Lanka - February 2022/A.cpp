/* 
    Problem: No Electricity Hour
    Link: https://www.hackerrank.com/contests/noi-2022-feb/challenges/no-electricity-hour
*/ 
#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

// converts time to hours
int time_to_hours(int m, int d, int h, int &maxDays, int &maxHours){
    int nHours=0; 
    nHours += (m*maxDays*maxHours); 
    nHours += (d*maxHours); 
    nHours += h; 
    return nHours; 
}

// returns LCM ( Least Common Multiple ) of an array 
int lcm(vector<int> arr){
    if(arr.size()==0) return -1; // show error: no LCM since array is empty 
    if(arr.size()==1) return arr[0]; // if the array has only one element return [0] as the LCM 

    sort(arr.begin(), arr.end()); 
    int key=arr[0]; 
    for(int i=1; i<arr.size(); i++){
        if(arr[i]%key != 0){
            // multiply all the elements in the arr
            int sum = arr[0]; 
            for(int j=1; j<arr.size(); j++){
                sum*=arr[j]; 
            }
            return sum;  
        }
    }
    return arr[arr.size()-1]; 
}

int main(){
    int d, h, s;
    cin >> d >> h >> s; 
    vector<int> cutTimes(s, 0); 
    for(int i=0; i<s; i++){
        cin >> cutTimes[i]; 
    }    
    // input T1 and T2
    vector<int> t1(3, 0);
    vector<int> t2(3, 0); 
    cin >> t1[0] >> t1[1] >> t1[2] >> t2[0] >> t2[1] >> t2[2]; 
    int totalHours = time_to_hours(t1[0], t1[1], t1[2], d, h); 
    int copyTotalHours = totalHours; 
    int targetHours = time_to_hours(t2[0], t2[1], t2[2], d, h); 
 //   cout << "currentHours: " << totalHours << " targetHours: " << targetHours << endl; 
    if(s==1){
        int difference = targetHours - totalHours; 
        if(difference==0 || difference%cutTimes[0]==0)
            cout << "NO ELECTRICITY HOUR" << endl;
    }
    else{
        int cutLCM = lcm(cutTimes); 
        bool terminate=false; 
        while(!terminate){
            totalHours += cutLCM; 
            if(totalHours >= targetHours){
                int diff = totalHours-targetHours; 
                cout << diff << endl;
                terminate=true; 
            }
        }
    }
    
    return 0; 
}