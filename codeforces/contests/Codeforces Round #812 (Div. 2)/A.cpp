// A. Traveling Salesman Problem
#include <iostream>
#include <vector> 
using namespace std; 
void fastIO(); 

struct coord{
    int x=0; 
    int y=0;  
}

int main(){
    fastIO(); 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin); 
    #endif


    int nT; cin >> nT; 
    while(nT--){
        int n; cin >> n; 
        vector<coord> coords; 
        for(int t=0; t<n; t++){
            int x, y; cin >> x >> y; 
            coord inp_coord;
               inp_coord.x=x; 
            inp_coord.y=y; 
            coords.push_back(inp_coord); 
        }

    }        

    return 0; 
}

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}