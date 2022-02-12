/*
    contest: Codeforces Round #770 (Div. 2)
    problem: A. Reverse and Concatenate
    link: https://codeforces.com/contest/1634/problem/A
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std; 

// checks a string whether it's a palindromic string: recursive function 
bool checkPalindromic(string str, int start, int end){
	if(start == end)
		return true; 
	if(str[start] != str[end])
		return false; 
	if(start < end+1)
		return checkPalindromic(str, start+1, end-1); 
	return true; 
}

bool isPalindromic(string str){
	int endPos = str.size()-1; 
	return checkPalindromic(str, 0, endPos);
}

int main(){
	int nT; cin >> nT; 
	for(int i=0; i<nT; i++){
		int stringLength, nOp; 
		cin >> stringLength >> nOp; 
		string inpString; cin >> inpString; 
		// calculate
		if(nOp == 0)	
			cout << 1 << endl; 
		else{
			int answer = (isPalindromic(inpString) == true)?1:2;  
			cout << answer << endl; 
		}
	}
	return 0; 
}
