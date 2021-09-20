/*
Take as input str, a string. Write a recursive function which returns all the words possible by rearranging the characters of this string which are in dictionary order smaller than the given string. The output strings must be lexicographically sorted.

Input Format
Single line input containing a string

Constraints
Length of string <= 25

Output Format
Display all the words which are in dictionary order smaller than the string entered in a new line each. The output strings must be sorted.

Sample Input
cab
Sample Output
abc
acb
bac
bca
Explanation
The possible permutations of string "cab" are "abc" , "acb" ,"bac" , "bca" , "cab" and "cba" . Only four of them are lexicographically less than "cab". We print them in lexicographical order.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string arr[1000000];
int num=0;
void getper(string str,string asf ){
	if(str.length()==0){
		arr[num++]=asf;
		return;
	}
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		string leftpart=str.substr(0,i);
		string rightpart=str.substr(i+1,str.length());
		string ros=leftpart+rightpart;
		getper(ros,asf+ch);
	}
}
int main() {
	string str;
	cin>>str;
	getper(str,"");
	sort(arr,arr+num);
	for(int i=0;i<num;i++){
		if(arr[i]<str)
			cout<<arr[i]<<endl;
	}
	return 0;
}
