/*
Pratik was given an array of integers arr of n elements and an integer k that could be considered as the threshold to divide each element of the array into the sum of different numbers.For example: if k=3, 5 can be represented as (3+2) , 13 can be represented as (3+3+3+3+1) . Pratik has to find the sum of count of the numbers in which array elements can be divided.

Input Format
First line of input contains integers n and k denoting length of the array and threshold value to divide the elements of the array. Next n lines contain the elements of the array.

Constraints
1<=n<=10^7
0<=arr[i]<=10^7
1<=k<=10^7

Output Format
An integer representing total count.

Sample Input
4 3
5 8 10 13
Sample Output
14
Explanation
Each number can be expressed as sum of different numbers less than or equal to K as 5 (3 + 2), 8 (3 + 3 + 2), 10 (3 + 3 + 3 + 1), 13 (3 + 3 + 3 + 3 + 1). So, the sum of count of each element is (2+3+4+5)=14.
*/
#include <iostream>
using namespace std;
using namespace std;
int main() {
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++){
        int qu=arr[i]/x;
        int rem=arr[i]%x;
        sum+=qu;
        if(rem!=0)
            sum+=1;
    }
    cout<<sum;
}

