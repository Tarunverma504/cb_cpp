/*
Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

Input Format
Enter a String

Constraints
1<= Length of string <= 10^4

Output Format
Display the resulting string (i.e after inserting (*) b/w all the duplicate characters)

Sample Input
hello
Sample Output
hel*lo
Explanation
We insert a "*" between the two consecutive 'l' .
*/
#include<iostream>
using namespace std;
void getstring(string str,string res,int i){
	if(i==str.length()){
		cout<<res;
		return ;
	}
	res=res+str[i];
	if(str[i]==str[i+1]){
		res=res+'*';
	}
	getstring(str,res,i+1);
}
int main() {
	string str;
	cin>>str;
	getstring(str,"",0);
	return 0;
}
