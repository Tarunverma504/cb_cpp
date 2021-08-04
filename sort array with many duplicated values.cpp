/*
Given an integer array with many duplicated elements, write an algorithm to efficiently sort it in linear time, where the order of equal elements doesn’t matter.

Input Format
First line of input contains integer n, denoting the size of the array. Next line of input contains n space separated integers denoting the elements of the array.

Constraints
1<=n<=10^3
1<=arr[i]<=100

Output Format
Print the array in sorted ascending order.

Sample Input
5
3 3 3 1 0
Sample Output
0 1 3 3 3
Explanation
3 3 3 1 0 will become 0 1 3 3 3 after sorting.
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
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
