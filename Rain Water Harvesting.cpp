/*
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units

Input Format
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Constraints
1 <= N <= 10^6

Output Format
Print a single integer containing the maximum unit of waters she can save.

Sample Input
10
0 2 1 3 0 1 2 1 2 1
Sample Output
5
Explanation
Refer to the image for explanation. Count the number of cells having water in them.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n<=2)
		cout<<0;
	else{
		int left[n];
		int right[n];
		left[0]=arr[0];
		for(int i=1;i<n;i++){
			left[i]=max(left[i-1],arr[i]);
		}
		right[n-1]=arr[n-1];
		for(int i=n-2;i>=0;i--){
			right[i]=max(right[i+1],arr[i]);
		}
		int trapped=0;
		for(int i=0;i<n;i++){
			trapped+=min(left[i],right[i])-arr[i];
		}
		cout<<trapped;
	}

	return 0;
}
