/*
Given an array consisting only of 0's, 1’, 2’s, sort it in linear time and using constant space.

Input Format
First line of input contains integer n, denoting the size of the array. Next line of input contains n space separated integers denoting the elements of the array.

Constraints
1<=n<=10^4

Output Format
Print the array in sorted ascending order.

Sample Input
6
2 2 1 1 0 0
Sample Output
0 0 1 1 2 2
*/
#include<iostream>
using namespace std;
void swap_number(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0,j=0,k=n-1;
	while(i<=k){
		if(arr[i]==0){
			swap_number(arr,i,j);
			i++;
			j++;
		}
		else if(arr[i]==1)
			i++;
		else{
			swap_number(arr,i,k);
			k--;
		}
			
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
