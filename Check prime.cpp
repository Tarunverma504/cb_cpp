/*
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format
Constraints
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
Explanation
The output is case specific
*/
#include<iostream>
using namespace std;

int isPrime(int n){
	if(n==2 || n==1 || n==3)
		return true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	if(isPrime(n))
		cout<<"Prime";
	else
		cout<<"Not Prime";
	return 0;
}
