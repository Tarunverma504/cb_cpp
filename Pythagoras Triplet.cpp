/*
Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".

Input Format
A single integer N

Constraints
N <= 10^9

Output Format
Two numbers X and Y denoting the rest of the numbers of the Pythagorean triplet in increasing order.

Sample Input
3
Sample Output
4 5
*/
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long a;
	cin>>a;
	if(a<3)
		cout<<"-1";

	else if(a%2==0){
		long var1=(a*a/4-1);
		long var2=(a*a/4+1);
		cout<<var1<<" "<<var2;
	}
	else{
		long var1=(a*a-1)/2;
		long var2=(a*a+1)/2;
		cout<<var1<<" "<<var2;
	}
	return 0;
}

/*
 (n^2 -1)/2 & (n^2 +1)/2. If the no. is divisible by 2 then 
 we can get the other two no. by the formulas (n^2/4 - 1) & (n^2/4 +1)
 */
