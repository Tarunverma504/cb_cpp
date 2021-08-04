/*
Given a sorted array and you just need to remove the duplicates from the array

Input Format
First line contains integer N as size of array.
Next line contains a N integer as element of array.

Constraints
Length of the array is less than 150000
The array is in ascending order

Output Format
The first line prints the new reduced length The second line prints the elements of the array till the new length

Sample Input
3
1 1 2
Sample Output
2
1 2
Explanation
{ 1, 1, 2}
If there is an element that is already present in the array remove the element. Here 1 occurs twice in the array therefore remove one of them and return the reduced list with no duplicates.
The length is = 2 and the array is { 1, 2 }
*/
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(n<2){
		cout<<n<<endl;
		cout<<arr[0];
	}
	else{
		int brr[n];
		//int prev=arr[0];
		int k=0;
		brr[k++]=arr[0];
		for(int i=1;i<n;i++){
			if(brr[k-1]!=arr[i]){
				brr[k++]=arr[i];
			}
		}
		cout<<k<<endl;
		for(int i=0;i<k;i++){
			cout<<brr[i]<<" ";
		}
	}
	
}
