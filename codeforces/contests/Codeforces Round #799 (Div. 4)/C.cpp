#include <iostream> 
#include <vector> 
using namespace std; 

void solve(char chessBoard[8][8]){
    /*
                #.#
                .#.
                #.#

                check for above pattern in the chess board
                if found return it without further analyzing
            */
           for(int j=0; j<6; j++){
                // check 3 blocks after the selected index
                // search for the pattern "#.#"
                for(int k=0; k<6; k++){
                    if(chessBoard[j][k]=='#' && chessBoard[j][k+1]=='.' && chessBoard[j][k+2]=='#'){
                        if((chessBoard[j+1][k]=='.' && chessBoard[j+1][k+1]=='#' && chessBoard[j+1][k+2]=='.') && (chessBoard[j+2][k]=='#' && chessBoard[j+2][k+1]=='.' && chessBoard[j+2][k+2]=='#')){
                            // print format: row and column
                            cout << j+2 << " " << k+2 << endl;
                            return; 
                        }
                    }
                }
           }

}

int main(){
    int nT; cin >> nT; 
    for(int t=0; t<nT; t++){
        char chessBoard[8][8]; 
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> chessBoard[i][j]; 
            }
        }
        solve(chessBoard); 
    }
    return 0; 
}