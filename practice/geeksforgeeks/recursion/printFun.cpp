#include <iostream> 
#include <vector> 
using namespace std; 

// recursive function
void printFun(int test){
	// base case
	if(test < 1) return; 
	else{
		cout << test << " "; 
		printFun(test-1); 
		cout << test << " "; 
	}
}
	
int main(){
	printFun(10); 
	return 0; 
}
