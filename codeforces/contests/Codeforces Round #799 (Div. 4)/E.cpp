#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std; 

// returns the sum of the arr by considering start and end positions
int sum(vector<int> arr, int startPos=0, int endPos=0){  
    int sumVal=0; 
    for(int i=startPos; i<=endPos; i++){
        sumVal+=arr[i]; 
    }
    return sumVal; 
}

void deque(vector<int> arr, int startPos, int endPos, int nSteps, int target, vector<int> &answer){
    // base case 
    // if no element left in the array 
    if(startPos>(arr.size()-1) || endPos < 0){
        answer.push_back(-1); 
        return; 
    }
    // if the solution is found 
    int cSum = sum(arr, startPos, endPos); 
    if(cSum == target){
        answer.push_back(nSteps); 
        return; 
    }
    // left
    deque(arr, startPos+1, endPos, nSteps+1, target, answer);
    // right
    deque(arr, startPos, endPos-1, nSteps+1, target, answer);
}

void solve(vector<int> arr, int target){
    int arr_size = arr.size(); 
    int currentSum = sum(arr, 0, (arr_size-1)); 
    if(currentSum==target){
        cout << "0" << endl;
        return; 
    }
    else{
        int endPos = (arr.size()-1); 
        vector<int> answer; 
        // fire up the recursive function 
        deque(arr, 0, endPos, 0, target, answer); 
        cout << *min_element(answer.begin(), answer.end()) << endl; 
    }

}


int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int arr_size, target;
        vector<int> arr; 
        cin >> arr_size >> target; 
        for(int n=0; n<arr_size; n++){
            int val; cin >> val;
            arr.push_back(val); 
        }
        solve(arr, target); 
    }
    return 0; 
}