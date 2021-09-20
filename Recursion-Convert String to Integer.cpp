/*
Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

Input Format
Enter a number in form of a String

Constraints
1 <= Length of String <= 10

Output Format
Print the number after converting it into integer

Sample Input
1234
Sample Output
1234
Explanation
Convert the string to int. Do not use any inbuilt functions.
*/
#include<iostream>
using namespace std;

int getNumber(string str,int n){
	if(n==0)
		return 0;
	int digit=str[n-1]-'0';
	return getNumber(str,n-1)*10+digit;
}
int main() {
	string str;
	cin>>str;
	cout<<getNumber(str,str.length());
	return 0;
}
