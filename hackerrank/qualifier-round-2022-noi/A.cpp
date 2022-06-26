#include <iostream>
#include <string>
#include <vector> 
using namespace std; 


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 


    long long pencils, pens; 
    cin >> pencils >> pens;

    // calculate
    /* 
        11
        1
        0
    */  
    string ans=""; 
    bool errorOccured = false; 
    while(pencils!=0 && pens!=0 && !errorOccured){
        
        // add pencils
        bool errorMade=false; 
        long long newlyAddedPencils=0; 
        while(pencils!=0 && !errorMade){
            if((pencils==0 && pens>2) || (pens==0 && pencils>1)){
                cout << "-1" << endl;
                errorOccured=true; 
                break;
            }
            if(newlyAddedPencils >= 1){
                errorMade=true; 
                newlyAddedPencils=0; 
                break; 
            }
            newlyAddedPencils++; 
            pencils--; 
            ans+="0"; 
        }
        // add pens
        errorMade=false; 
        long long newlyAddedPens=0; 
        while(pens!=0 && !errorMade){
            if((pencils==0 && pens>2) || (pens==0 && pencils>1)){
                cout << "-1" << endl;
                errorOccured=true; 
                break;
            }
            if(newlyAddedPens >= 2){
                errorMade=true; 
                newlyAddedPens=0; 
                break; 
            }
            newlyAddedPens++; 
            pens--; 
            ans+="1"; 
        }
       
    }

    if(!errorOccured){
        cout << ans << endl;
    }
    return 0;  
}
