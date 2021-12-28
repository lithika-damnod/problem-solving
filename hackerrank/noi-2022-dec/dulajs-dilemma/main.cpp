#include <iostream>
#include <vector>
using namespace std;

struct nCount{
    int value = 0;
    int nT = 0;
};

struct nCount_t{
    int num1 = 0;
    int num2 = 0;
    int nT = 0;
};

struct Add{
    int num1 = 0;
    int num2 = 0;
};

int searchValue(vector<nCount> arr, int target){
    for(int i=0; i<arr.size(); i++){
        if(arr[i].value == target)
            return i;
    }
    return -1; // no match found
}

int searchValue(vector<nCount_t> arr, int num1, int num2){
    for(int i=0; i<arr.size(); i++){
        if(arr[i].num1 == num1 && arr[i].num2 == num2)
            return i;
    }
    return -1; // no match found
}

// for storing the position of num1 match and num2 match
struct resultPos{
    int num1_pos = -1;
    int num2_pos = -1;
};

// returns the positions as a vector where num1 matches the search
resultPos searchValue(vector<nCount_t> arr, int num){
    resultPos res;
    for(int i=0; i<arr.size(); i++){
        if(arr[i].num1 == num)
            res.num1_pos = i;
        if(arr[i].num2 == num)
            res.num2_pos = i;
    }
    return res; // if no match found: returns empty 2d vector
}

vector<nCount_t> searchDuplicates(vector<Add> arr){
    vector<nCount_t> res;
    for(int i=0; i<arr.size(); i++){
        int searchRel = searchValue(res, arr[i].num1, arr[i].num2);
        if(searchRel != -1){
            nCount_t sample;
            sample.num1 = arr[i].num1;
            sample.num2 = arr[i].num2;
            sample.nT++;
        }
        else{
            res[searchRel].nT++;
        }
    }
    return res;
}

vector<nCount> searchDuplicates(vector<Add> arr){
    vector<nCount> res;
    for(int i=0; i<arr.size(); i++){
        int searchRel =  searchValue(res, arr[i]);
        if(searchRel != -1){
            res[searchRel].nT++;
        }
        else{
            nCount sample;
            sample.value = arr[i];
            sample.nT++;
        }
    }
    return res;
}

void handleDuplicates(vector<nCount> unique_inp, vector<nCount_t> &arr){
    for(int i=0; i<unique_inp.size(); i++){
        if(unique_inp[i].nT != 1){
            int nOcc = unique_inp[i].nT;
            int nPoss = nOcc / 2;
            resultPos resOut = searchValue(arr, unique_inp[i].value);
            while(arr[resOut.num1_pos].nT > nPoss){
                arr[resOut.num1_pos].nT--;
            }
            while(arr[resOut.num2_pos].nT > nPoss){
                arr[resOut.num2_pos].nT--;
            }
        }
    }
}

int countMaxTeams(vector<int> arr){
    vector<nCount> unique_arr = searchDuplicates(arr);
    vector<Add> tab; // for storing all the addition details
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            Add sample;
            sample.num1 = arr[i];
            sample.num2 = arr[j];
            tab.push_back(sample);
        }
    }
    // print table
    for(int i=0; i<tab.size(); i++){
        cout << "num1: " << tab[i].num1 << " num2: " << tab[i].num2 << endl;
    }
    cout << endl;
    // search the table searching duplicates
    vector<nCount_t> unique_tab = searchDuplicates(tab);
    handleDuplicates(unique_arr, unique_tab);

    vector<nCount> additionOcc;
    for(int i=0; i<unique_tab.size(); i++){
        int sum = unique_tab[i].num1 + unique_tab[i].num2;
        int searchRes = searchValue(additionOcc, sum);
        if(searchRes == -1){
            nCount push;
            push.nT = unique_tab[i].nT;
            push.value = sum;
            additionOcc.push_back(push);
        }
        else{
            additionOcc[searchRes].nT += unique_tab[i].nT;
        }
    }

    // search the maximum nT
    int maxN = 0;
    for(int i=0; i<additionOcc.size(); i++){
        if(maxN < additionOcc[i].nT){
            maxN = additionOcc[i].nT;
        }
    }
    cout << maxN << endl;
    return maxN;
}


int main(){
    // get input
    int nT; cin >> nT;
    vector<vector<int>> data;
    for(int i=0; i<nT; i++){
        int sT; cin >> sT;
        vector<int> push_arr;
        for(int j=0; j<sT; j++){
            int val = 0;
            cin >> val;
            push_arr.push_back(val);
        }
        data.push_back(push_arr);
    }

    // calculate the result
    for(int i=0; i<data.size(); i++){
        int nMax = countMaxTeams(data[i]);
    }
    return 0;
}
