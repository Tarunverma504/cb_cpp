/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that returns true if the array is mirror-inverse and false otherwise. An array is called mirror-inverse if it's inverse is equal to itself.

1.It reads a number N.
2.Take Another N numbers as input and store them in an Array.
3.Inverse the array and print true if array is mirror inverse else print false .

Input Format
Constraints
N cannot be Negative. Range of Numbers can be between 0 to N-1.

Output Format
Sample Input
5
4
0
2
1
3
Sample Output
false
Explanation
For the sample case, array=[4,0,2,1,3]. Inverse of this array is [1,3,2,4,0]. Since inverse of the array is not equal to the array therefore, array is not a mirror inverse.Hence, ans is false.
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	int brr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		int x=arr[i];
		brr[x]=i;
	}
	bool flag=false;
	for(int i=0;i<n;i++){
		if(arr[i]!=brr[i]){
			flag=true;
			break;
		}
	}
	if(flag== true)
		cout<<"false";
	else
		cout<<"true";
	return 0;
}
