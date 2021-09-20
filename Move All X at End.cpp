/*
Take as input str, a string. Write a recursive function which moves all ‘x’ from the string to its end.
E.g. for “abexexdexed” return “abeedeedxxx”.
Print the value returned

Input Format
Single line input containing a string

Constraints
Length of string <= 1000

Output Format
Single line displaying the string with all x's moved at the end

Sample Input
axbxc
Sample Output
abcxx
Explanation
All x's are moved to the end of string while the order of remaining characters remain the same.
*/
#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]!='x')
			cout<<s[i];
		else
			count++;
	}
	while(count>0){
		cout<<"x";
		count--;
	}
	
	return 0;
}
