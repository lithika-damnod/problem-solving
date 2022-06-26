#include <iostream> 
#include <vector>
using namespace std; 

void mergeSort(vector<int> &arr, int nPivots, int startPos, int endPos, int arrSize){
	// base case
	if(nPivots >= arrSize){
		nPivots = 0; 
		return; 
	}  
	// find median 
	int medianIndex = (( arrSize + 1 ) / 2) - 1; 
	int median = arr[medianIndex];
	nPivots++; // increase the number of pivots when median is determined 
	vector<int> tempArr = arr; 
	arr.clear(); // clear vector
	// move all the values less than median to beginning of the arr	
	for(int i=0; i<tempArr.size(); i++){
		if(tempArr[i] <= median){
			arr.push_back(tempArr[i]); 
		}
	}
	for(int i=0; i<tempArr.size(); i++){
		if(tempArr[i] > median){
			arr.push_back(tempArr[i]); 
		}
	}
	// print array
	//for(int i=0; i<arr.size(); i++){
		// cout << " " << arr[i]; 
	//}
	// carry out merge sort again 
	int leftArrSize =  medianIndex-1; // 0 to index before median 
	int rightArrSize = (arr.size() - 1) - ( medianIndex + 1 ); // index after median to (length-1)
	cout << "\t leftArraySize: " << leftArrSize << " nPivots: " << nPivots << " startPos: " << 0 << " endPos: " << leftArrSize << endl; 
	cout << endl; 
	mergeSort(arr, nPivots, 0, (medianIndex - 1), leftArrSize); // for left array 
	cout << "rightArraySize: " << rightArrSize << " nPivots: " << nPivots << " startPos: " << (medianIndex+1) << " endPos: " << (arr.size() - 1) << endl; 
	cout << endl; 
	mergeSort(arr, nPivots, (medianIndex+1), (arr.size() - 1), rightArrSize); // for right array   
	cout << "after right array sort" << endl; 
	 for(int i=0; i<arr.size(); i++){
 		cout << " " << arr[i]; 
	 }
	cout << endl; 
}

int main(){

	vector<int> para_vect = {10, 22, 111, 25, 14, 63, 82, 11, 15, 15, 99, 10};
	// print init vector 
	for(int i=0; i<para_vect.size(); i++){
		cout  << " " << para_vect[i]; 
	}
	mergeSort(para_vect, 0, 0, (para_vect.size()-1), para_vect.size()); 
	return 0; 
}
