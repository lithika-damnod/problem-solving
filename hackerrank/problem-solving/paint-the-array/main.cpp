#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> arr){
    int maxVal = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }

    return maxVal;
}

int findBeautiful(vector<int> arr){
    int validD = 0;
    int d = 2;
    int maxVal = findMax(arr);
    while(d <= maxVal){
        int i=1;
        bool valid = true;
        bool isRed = (arr[0]%d==0);
        while(i<arr.size() && valid){
            valid = (isRed)?(arr[i]%d!=0):(arr[i]%d==0);
            isRed = !isRed;
            //cout << "i: " << i << " d: " << d << " valid: " << valid << endl;
            i++;
        }
        if(valid)
        {
            validD = d;
        }
        d++;
    }
    return validD;
}

int main()
{
    // get input
    vector<vector<int>> arrays;
    int nT; cin >> nT;
    for(int i=0; i<nT; i++){
        int n; cin >> n;
        vector<int> pushArray;
        for(int j=0; j<n; j++){
            int val;
            cin >> val;
            pushArray.push_back(val);
        }
        arrays.push_back(pushArray);
    }

    for(int i=0; i<arrays.size(); i++){
        cout << findBeautiful(arrays[i]) << endl;
    }

}
