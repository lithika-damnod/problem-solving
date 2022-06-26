#include <iostream> 
#include <vector> 
using namespace std; 

// recursive function 
int fib(int n){
	// base case
	if(n == 0 || n == 1){
		return n; 
	}
	else{
		return fib(n-1) + fib(n-2); 		
	}
}

int main(){
	// print fib sequence
	cout << "fib(12): "  << fib(12) << endl; 	
	for(int i=0; i<12; i++){
		cout << " " << fib(i) << " " << endl; 
	}
	return 0; 
}
