#include <iostream> 
#include <vector> 
using namespace std;

// recursive function 
int fact(int n){
	// base case
	if( n == 1 || n == 0){
		return 1; 
	}
	return n*fact(n-1);
}

int main(){
	cout << fact(5) << endl; 
	return 0; 
}
