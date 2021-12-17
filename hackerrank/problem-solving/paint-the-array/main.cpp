#include <iostream>
#include <vector>

using namespace std;

bool checkValid(vector<int64_t> arr, bool isEven, int64_t factor)
{
    for(int i=(isEven)?1:0;i<arr.size(); i+=2)
    {
        if(arr[i]%factor==0)
        {
            return false;
        }
    }
    return true;
}

int64_t gcd(int64_t a, int64_t b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int64_t findBeautiful(vector<int64_t> arr){
    //Find even branch gcd
    int64_t evenFactor = 0;
    for(int i=0; i<arr.size() && evenFactor != 1; i+=2)
    {
        evenFactor = gcd(evenFactor, arr[i]);
    }
    //Find odd branch gcd
    int64_t oddFactor = 0;
    for(int i=1; i<arr.size() && oddFactor != 1; i+=2)
    {
        oddFactor = gcd(oddFactor, arr[i]);
    }
    //For each factor check the opposite branch for validity
    if(checkValid(arr, true, evenFactor))
    {
        return evenFactor;
    }else if(checkValid(arr, false, oddFactor))
    {
        return oddFactor;
    }
    return 0;
}

int main()
{
    // get input
    vector<vector<int64_t>> arrays;
    int nT; cin >> nT;
    for(int i=0; i<nT; i++){
        int n; cin >> n;
        vector<int64_t> pushArray;
        for(int j=0; j<n; j++){
            int64_t val;
            cin >> val;
            pushArray.push_back(val);
        }
        arrays.push_back(pushArray);
    }

    for(int i=0; i<arrays.size(); i++){
        cout << findBeautiful(arrays[i]) << endl;
    }

}