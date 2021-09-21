/*
We are given a hashmap which maps all the letters with number. Given 1 is mapped with A, 2 is mapped with B…..26 is mapped with Z. Given a number, you have to print all the possible strings.

Input Format
A single line contains a number.

Constraints
Number is less than 10^6

Output Format
Print all the possible strings in sorted order in different lines.

Sample Input
123
Sample Output
ABC
AW
LC
Explanation
'1' '2' '3' = ABC
'1' '23' = AW
'12' '3' = LC
*/
#include<iostream>
using namespace std;
string mapping[]={"", "A", "B", "C", "D", "E", 
        "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", 
        "S", "T", "U", "V", "W", "X", "Y", "Z"}; 
	// getCombination(str,"",0);
void getCombination(string str,string asf,int count){
	if(count==str.length()){
		cout<<asf<<endl;
		return;
	}
	if(str[count]!='0'){
		int num=str[count]-'0';
		string ch=mapping[num];
		getCombination(str,asf+ch,count+1);
	}
	if(count<str.length()-1){
		int num2=str[count]-'0';
		int num3=str[count+1]-'0';
		int num4=(num2*10)+num3;
		if(num4<=26){
			string ch=mapping[num4];
			getCombination(str,asf+ch,count+2);
		}
	}
}
int main() {
	string str;
	cin>>str;
	getCombination(str,"",0);
	return 0;
}
