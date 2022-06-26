#include <iostream> 
#include <string> 
using namespace std;

bool isPalindrome(string str, int low, int high){
	while(low < high){
		if(str[low] != str[high]) return false; 
		low++; 
		high--; 
	}
	return true;
}

void printAllPalindromes(string str, int startPos, int endPos){
	// base case
	if(startPos >= str.size()) return; 
	
	if(endPos >= str.size()){
		endPos=0; 
		startPos++; 
	}
	// check whether the string is palindromic 
	// if palindromic print it
	if(isPalindrome(str, startPos, endPos)){
		// print substring
		for(int pos=startPos; pos<=endPos; pos++){
			cout << str[pos]; 
		}
		cout << " "; 
	}
	printAllPalindromes(str, startPos, endPos+1); 

}

int main(){
	string inputStr; cin >> inputStr; 
	printAllPalindromes(inputStr, 0, 0); 
	return 0;
}
