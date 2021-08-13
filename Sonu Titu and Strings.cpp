/*
Sonu and Titu have two Strings. They want to make their strings anagrams of each other. They can either delete a character from string of Titu and add a character to the string of Sonu. Find the minimum number of operations required to make the strings anagrams of each other.

Input Format
First line of input contains number of test cases T. Each test case contains two lines. First line contains string of Sonu and second line contains string of Titu.

Constraints
0 <= N <= 10 Length of each string <= 10^5

Output Format
For each test case print the minimum number of operations required in a new line.

Sample Input
1
abde
edg
Sample Output
3
*/
#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t>0){
		string str1,str2;
		cin>>str1;
		cin>>str2;
		int arr[26];
		for(int i=0;i<26;i++){
			arr[i]=0;
		}
		for(int i=0;i<str1.length();i++){
			arr[str1[i]-'a']++;
		}
		for(int i=0;i<str2.length();i++){
			arr[str2[i]-'a']--;
		}
		int count=0;
		for(int i=0;i<26;i++){
			if(arr[i]!=0)
			count+=abs(arr[i]);
		}
				cout<<count<<endl;
		
		
		t--;
	}
	return 0;
}
