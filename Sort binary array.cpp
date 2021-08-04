/*
Given a binary array, sort it in linear time and constant space. The output should print all zeroes, followed by all ones.

Input Format
First line of input contains integer N, denoting the size of the array. Next line of input contains N space separated integers denoting the elements of the array.

Constraints
1<=N<=10^3

Output Format
Print the array in sorted ascending order.

Sample Input
10
0 0 1 0 1 1 0 1 0 0
Sample Output
0 0 0 0 0 0 1 1 1 1
Explanation
0 0 0 0 0 0 1 1 1 1 are in sorted ascending order.
*/
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int i=0,j=0;
	while(i<n){
		if(arr[i]==0){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j++;
		}
		else
		i++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
