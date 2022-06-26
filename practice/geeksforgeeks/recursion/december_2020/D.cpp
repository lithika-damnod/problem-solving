#include <iostream> 
#include <vector> 
using namespace std; 

int main(){
    /* 
        G: Go into bathroom OR Go out of the bathroom 
        O: Switch on the shower
        F: Switch off the shower
        S: Apply shampoo
        C: Apply conditioner 
        D: Dry his hai  r 
        A: Buy a refill for shamboo bottle 
        B: Buy a refill for conditioner bottle 


        * Mr Grinch personal rules * 
            - Never apply conditioner without washing away shampoo
            - Never leaves the house without checking if he closed the shower and bathroom door 
            - He always applied conditioner when his hair is wet
            - His shampoo and conditioner bottles can hold enough for two usages each
            - He might take his towel out of bathroom to dry his hair
            - He doesn't take shampoo or conditioner out of the bathroom 

    */
    bool bathRoomOpened = false; 
    bool shampooApplied = true; 
    bool conditionerApplied = true; 
    bool shower = false; 
    bool hairDried = true;
    int conditionerRemaining = 2; 
    int shampooRemaining = 2;  

    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        int nChar; cin >> nChar;  
        for(int i=0; i<nChar; i++){
            char inp; cin >> inp; 
            switch(inp){
                case 'G': 
                    bathRoomOpened = (!bathRoomOpened)?true:false;
                case 'O': 
                    /* 
                        * should be inside bathroom to switch on the shower 
                        * shower should not be switched on 
                    */ 
                    if(bathRoomOpened && !shower){
                        shower = true; 
                        hairDried = false; 
                        shampooApplied = false; 
                        conditionerApplied = false; 
                    }
                    else{
                        cout << "N " << i << endl; 
                        break; 
                    }
                case 'F':
                    /*
                        * shower should be switched on to be switched off
                        * bath room should be opened 
                    */
                    if(bathRoomOpened && shower) shower = false; 
                    else{
                        cout << "N " << i << endl; 
                        break; 
                    } 
                case 'S': 
                    /*
                        * number of shampoo remaining should be greater than 0
                        * bath room should be opened 
                    */
                    if(shampooRemaining > 0 && bathRoomOpened){
                        hairDried = false; 
                        shampooRemaining--; 
                        shampooApplied = false; 
                        if(!shower){
                            shampooApplied = true; 
                        }
                    }
                    else{
                        cout << "N " << i << endl; 
                        break; 
                    }
                case 'C':
                    /*
                        * bath room should be opened 
                        * number of conditioner remaining should be greater than 0 
                        * should not have applied shampoo
                        * shower should not be switched on 
                    */
                    if(bathRoomOpened && conditionerRemaining > 0 && !shampooApplied){
                        hairDried = false; 
                        conditionerRemaining--; 
                        conditionerApplied = false;
                        if(!shower){
                            conditionerApplied = true; 
                        }
                    }
                    else{
                        cout << "N " << i << endl;
                        break; 
                    }
                case 'D':
                    /* 
                        * bath room should be opened 
                        * haven't applied anything 
                    */ 
                    if(((bathRoomOpened && !shower) || !bathRoomOpened) && (!shampooApplied && !conditionerApplied)){
                        hairDried = true; 
                    }
                    else{
                        cout << "N " << i << endl;
                        break; 
                    }
                case 'A':
                    if(!bathRoomOpened && !shower){
                        shampooRemaining += 2; 
                    }
                    else{
                        cout << "N " << i << endl;
                        break;  
                    }
                case 'B':
                    if(!bathRoomOpened && !shower){
                        conditionerRemaining += 2; 
                    }
                    else{
                        cout << "N " << i << endl; 
                        break; 
                    }
            }
        }
    }

    return 0; 
}