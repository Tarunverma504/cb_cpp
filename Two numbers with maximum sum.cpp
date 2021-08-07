/*
Given an integer array between 0 and 9, find two numbers with maximum sum formed using all the array digits. The difference in the number of digits of the two numbers should be +1,-1.

Input Format
First line of input contains integer n, denoting the size of the array. Next line of input contains n space separated integers denoting the elements of the array.

Constraints
1<=n<=12

Output Format
Print two numbers with maximum sum formed using all the array digits.

Sample Input
6
4 6 2 7 9 8
Sample Output
974 862
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
	if(n==1){
		cout<<arr[0]<<" "<<0;
	}
	else{
		int num1=0;
		int num2=0;
		for(int i=n-1;i>=0;i--){
			if(i%2==0){
				num2=num2*10+arr[i];
			}
			else{
				num1=num1*10+arr[i];
			}
		}
		if(num1>num2){
			cout<<num1<<" "<<num2;
		}
		else{
			cout<<num2<<" "<<num1;
		}
		
	}
	
	
	return 0;
}
