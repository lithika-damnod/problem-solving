#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std;

int main(){
    int n; cin >> n; 
    for(int t=0; t<n; t++){
        string segment; cin >> segment; 
        // sort the text so, we can know whether this is a adjacant string
        sort(segment.begin(), segment.end()); 
        // check whether they are adjacant by taking ascii difference
        bool adjacant = true;
        for(int i=1; i<segment.size(); i++){
           if(((int)segment[i] - (int)segment[i-1] ) != 1){
               // not adjacant 
               // so, make adjacant false and break
               adjacant = false; 
               break; 
           } 
        }
        if(!adjacant) cout << "No" << endl; 
        else cout << "Yes" << endl; 
    }    
    return 0;
}