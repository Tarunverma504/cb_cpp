/*
Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

Input Format
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.

Constraints
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + ?..+ a * 20.
*/
#include<iostream>
using namespace std;
int main() {
	int x;
	cin>>x;
	for(int k=0;k<x;k++){
		int n;
		cin>>n;
		int p=1;
		int res=0;
		while(n>0){
			int temp=n%10;
			res+=temp*p;
			n=n/10;
			p=p*2;
		}
		cout<<res<<endl;
	}
	return 0;
}
