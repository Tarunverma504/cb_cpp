/*
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.
For example, the saying and conversion for digit string "3322251":
= two 3's + three 2's + one 5 + one 1
= "23" + "32" + "15" + 11"
= "23321511"

Given a positive integer n, return the nth term of the count-and-say sequence.

Input Format
A single integer n

Constraints
1 <= n <= 30

Output Format
Output a string containing numbers

Sample Input
4
Sample Output
1211
Explanation
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
*/
#include<iostream>
using namespace std;
string count(string str){
	int c=1;
	string result="";
	int i;
	for(i=0;i<str.length()-1;i++){
		if(str[i]!=str[i+1]){
			result=result+to_string(c)+str[i];
			c=1;
		}
		else{
			c++;
		}
	}
	result=result+to_string(c)+str[i];
	return result;
}
int main () {
	int n;
	cin>>n;
	string str="1";
	string ans="1";
	for(int i=1;i<n;i++){
		ans=count(str);
		str=ans;
	}
	cout<<ans;

	return 0;
}
