/*
ou will be given an array containing only 0s, 1s and 2s. you have sort the array in linear time that is O(N) where N is the size of the array.

Input Format
The first line contains N, which is the size of the array. The following N lines contain either 0, or 1, or 2.

Constraints
1 <= N <= 10^6
Each input element x, such that x ? { 0, 1, 2 }.

Output Format
Output the sorted array with each element separated by a newline.

Sample Input
5
0
1
2
1
2
Sample Output
0
1
1
2
2
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
		cout<<arr[i]<<endl;
	return 0;
}
