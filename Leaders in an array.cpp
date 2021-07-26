/*
Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.

Input Format
First line contains size of the array.
Second line contains the elements of the array.

Constraints
1 <= Size of array <= 100000

Output Format
Print the leaders in increasing order.

Sample Input
4
5 7 10 6 
Sample Output
6 10 
*/
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=arr[n-1]-1;
	//cout<<max<<" ";
	for(int i=n-1;i>=0;i--){
		if(max<=arr[i]){
			max=arr[i];
			cout<<max<<" ";
		}
	}
	return 0;
}
