#include <iostream>
#include <vector> 
using namespace std; 
void fastIO(); 

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif

    int nT; cin >> nT; 
    while(nT--){
        int m, x, y; 
        cin >> m >> x >> y; 
        vector<int> houses(m, 0); 
        for(int i=0; i<m; i++)
            cin >> houses[i]; 

        int maxPossibleHouses = x * y; // max number of houses that can be searched 
        sort(houses.begin(), houses.end()); // sort the arr
        vector<bool> checked(houses.size()+1, false);       

        // search whether it's possible to be checked 
        for(int i=0; i<houses.size(); i++){
            // left  
            int l_houses=0; 
            if(i==0){
                l_houses=(houses.size()-1); 
                float speedRequired = l_houses/y; 
                if(speedRequired <= x){
                    checked[0]=true; 
                }
            }
            else{
                l_houses=(houses[i]-houses[i-1]); 
                float speedRequired = l_houses/y; 
                if(speedRequired <= x){
                    checked[i]=true; 
                }
            } 

            // right
            int r_houses=0; 
            if(i==(houses.size()-1)){
                r_houses=(100-houses[i]); 
                float speedRequired = r_houses/y; 
                if(speedRequired <= x){
                    checked[checked.size()-1]=true; 
                }
            }
            else{
                r_houses=(houses[i+1]-houses[i]); 
                float speedRequired = r_houses/y; 
                if(speedRequired <= x){
                    checked[i+1]=true; 
                }
            }
        } 
        // count houses which are open for hiding 
        int nHousesOpened=0; 
        for(int i=0; i<checked.size(); i++){
            if(!checked[i]){
                nHousesOpened += (houses[i]-houses[i-1]-1); 
            
        }    
        cout << nHousesOpened << endl;
    }

    return 0; 
}


void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}