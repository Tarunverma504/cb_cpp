/*
Given a string containing duplicates, print all its distinct permutations such that there are no duplicate permutations and all permutations are printed in a lexicographic order.

Input Format
The first and only line of the test case contains the input string.

Constraints
Length of the string <= 8

Output Format
Print all the distinct permutations in a lexicographic order such that each permutation is in a new line. Note that there should not be any duplicate permutations.

Sample Input
ABA
Sample Output
AAB
ABA
BAA
Explanation
The possible permutations for the given string are { "AAB" , "AAB" , "ABA" , "BAA" } . We skip the repeating "AAB" permutation and only print it in once. Also we print the final output in lexicographical order.
*/
#include<iostream>
#include <bits/stdc++.h>

using namespace std;
string ans[1000000];
int num=0;
void getper(string str, string asf){
	if(str.length()==0){
		ans[num++]=asf;
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
	sort(ans,ans+num);
	cout<<ans[0]<<endl;
	for(int i=1;i<num;i++){
		if(ans[i]!=ans[i-1])
		cout<<ans[i]<<endl;
	}
	return 0;
}
