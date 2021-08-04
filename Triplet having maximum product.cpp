/*
Given an integer array, find a triplet having the maximum product.

Input Format
First line of input contains integer n denoting the size of the array. Next line of the input contains n space separated integers denoting the elements of the array.

Constraints
1<=n<=10^3

Output Format
Print the triplet, having the maximum product.

Sample Input
5
1 7 2 -2 5
Sample Output
7 5 2
Explanation
7 * 5 * 2 = 70 which is the maximum product from all the triplets of the array.
Notes: Output Must be in Decreeing Order
*/

#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j+1]<arr[j]){
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int sum1=arr[n-1]*arr[1]*arr[0];
	int sum2=arr[n-1]*arr[n-2]*arr[n-3];
	if(sum1>sum2)
		cout<<arr[n-1]<<" "<<arr[1]<<" "<<arr[0];
	else{
		cout<<arr[n-1]<<" "<<arr[n-2]<<" "<<arr[n-3];
	}
		
	return 0;
}
