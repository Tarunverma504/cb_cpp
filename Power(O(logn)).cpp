/*
Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn). NOTE: Try both recursive and bitmasking approach.

Input Format
Enter the number N and its power P

Constraints
None

Output Format
Display N^P

Sample Input
2
3
Sample Output
8
*/
#include<iostream>
using namespace std;
int powerxn(int x,int n){
	if(n==0)
		return 1;
	return x*powerxn(x,n-1);

}

int main() {
	int x,n;
	cin>>x>>n;
	cout<<powerxn(x,n)<<endl;

	return 0;
}
