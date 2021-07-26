/*
Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format
a single lined integer N

Constraints
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120
Explanation
for factorial of 5 we have 5 x 4 x 3 x 2 x 1 = 120
*/
#include<iostream>
using namespace std;

int mult(int k,int arr[],int arr_size);

void fact ( int n)
{
	int arr[1000000];
	arr[0]=1;
	int arr_size = 1;
	for(int i=2;i<=n;i++)
	{
	   arr_size = mult(i,arr,arr_size);	
	}
	for( int i=arr_size-1;i>=0;i--)
	{
		cout<<arr[i];
	}

}
int mult( int k,int arr[],int arr_size)
{
	int carry =0;
	for(int i=0;i<arr_size;i++)
	{
		int prod = arr[i]*k + carry;
        arr[i]=prod%10;
		carry = prod/10;
	}
	while(carry)
	{
		arr[arr_size]=carry%10;
		carry = carry/10;
		arr_size++;
	}
	return arr_size;
}
int main() {
	int n;
	cin>>n;
	fact(n);
	return 0;
}
