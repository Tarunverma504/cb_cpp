/*
As you're familiar with operating on arrays, let's do an intricate task. Here, we'll do swapping of array elements.

Given an array A of N positive integers. The task is to swap every ith element of the array with (i+2)th element.

Input Format
First line of input contains number of test case T. For each test case, there will be two lines, first of which contains size of array N and next line contains N space separated positive integers

Constraints
1 <= T <= 100
1 <= N <= 10^6
1 <= Ai <= 10^6

Output Format
Print array elements after formatting

Sample Input
1
5
1 2 3 4 5
Sample Output
3 4 5 2 1
Explanation
Swapping 1 and 3, makes the array 3 2 1 4 5. Now, swapping 2 and 4, makes the array 3 4 1 2 5. Again, swapping 1 and 5, makes the array 3 4 5 2 1.
*/
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-2;i++){
            int temp=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp;
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        t--;
    }
}

