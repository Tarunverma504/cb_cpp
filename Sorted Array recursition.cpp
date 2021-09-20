/*
Take as input N, the size of an integer array. Take one more input, which is a list of N integers separated by a space, and store that in an array. Write a recursive function which prints true if the array is sorted in Increasing Order, and false otherwise.

Input Format
N x y z

Constraints
1 < N < 1000
-10^9 < i < 10^9, where i is an element of the array

Output Format
true OR false

Sample Input
5
1 2 3 4 5
Sample Output
true
*/
#include<iostream>
using namespace std;

string check(int *arr,int i,int n){
	if(i==n-1)
		return "true";
	if(arr[i]<=arr[i+1])
		return check(arr,i+1,n);
	else
		return "false";
	return "";
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<check(arr,0,n);
	return 0;
}
