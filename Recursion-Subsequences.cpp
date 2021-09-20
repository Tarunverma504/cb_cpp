/*
Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
Note: Use cin for input for C++

Input Format
Enter a string

Constraints
None

Output Format
Print all the subsequences in a space separated manner and isplay the total no. of subsequences.

Sample Input
abcd
Sample Output
 d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
16
Explanation
Print all possible subsequences of the given string.
*/
#include<iostream>
using namespace std;
int count=0;
void printss(string str,string ans){
	if(str.length()==0){
		cout<<ans<<" ";
		count++;
		return;
	}
	char ch=str[0];
	string ros=str.substr(1);
	printss(ros,ans+"");
	printss(ros,ans+ch);
}
int main() {
	string str;
	cin>>str;
	printss(str,"");
	cout<<endl;
	cout<<count;
	return 0;
}
