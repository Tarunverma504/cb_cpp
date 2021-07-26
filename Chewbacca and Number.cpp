/*
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input Format
The first line contains a single integer x (1 = x = 10^18) � the number that Luke Skywalker gave to Chewbacca.

Constraints
x <= 100000000000000000

Output Format
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input
4545
Sample Output
4444
Explanation
There are many numbers form after inverting the digit. For minimum number, check if inverting digit is less than or greater than the original digit. If it is less, then invert it otherwise leave it.
*/
#include<iostream>
using namespace std;
int main() {

	char a[50];
	cin>>a;
	int i=0;
	if(a[i]=='9')
		i++;
		for(;a[i]!='\0';i++){
			int digit=a[i]-'0';
			if(digit>=5){
				digit=9-digit;
				a[i]=digit+'0';
			}
		
		}
		cout<<a<<endl;
	// int n;
	// cin>>n;
	// int rev=0;
	// int size=0;
	// while(n>0){
	// 	int temp=n%10;
	// 	rev=rev*10+temp;
	// 	size++;
	// 	n=n/10;
	// }
	// int ans;
	// while(rev>0){
	// 	int temp=rev%10;
	// 	if(temp>=5 && temp!=9){
	// 		temp=9-temp;
	// 	}
	// 	ans=ans*10+temp;
	// 	rev=rev/10;
	// }
	// cout<<ans;
	return 0;
}
