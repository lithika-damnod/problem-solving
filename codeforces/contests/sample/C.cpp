#include <iostream> 
#include <vector> 
using namespace std; 

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int n = 0; cin >> n;  
        vector<int> start; 
        vector<int> finish; 
        for(int i=0; i<n; i++){
            int val; cin >> val; 
            start.push_back(val); 
        }
        for(int i=0; i<n; i++){
            int val; cin >> val; 
            finish.push_back(val); 
        }

        // calculate 
        for(int i=0; i<n; i++){
            /*
                if the starting time is greater than the finishing time of the previous event.. 
                    replace the starting time of that event with the finishing time of previous event and calculate the result.. 
                else 
                    calculate the duration in the normal way..  
            */
            if(i != (n-1) && (start[i+1] < finish[i])){
                start[i+1] = finish[i];
            }
            cout << finish[i]-start[i] << " "; 
        }
        cout << endl;
    }
    return 0; 
}