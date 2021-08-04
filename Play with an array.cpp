/*
You are given an array arr of n integers, you have to rearrange the array in such a way that element at odd index should be greater than the element at previous even index. Array has 0 based indexing.

Input Format
First line of input contains an integer n denoting number of elements in the array. Second line contains array elements.

Constraints
1 <= T <= 100
1 <= N <= 100
1 <= arr[i] <= 100

Output Format
If the array formed is according to rules print 1, else 0.

Sample Input
1
4
5 2 3 4
Sample Output
1
Explanation
The given array after modification will be as such: 4 5 2 3 1.
*/
#include <iostream>
using namespace std;
void swapElement(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
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
        for(int i=1;i<n;i++){
            if(i%2!=0){
                if(arr[i]<arr[i-1]){
                    swapElement(&arr[i],&arr[i-1]);
                }
            }
            else{
                if(arr[i]>arr[i-1]){
                    swapElement(&arr[i],&arr[i-1]);
                }
            }
        }
        bool flag=false;
        for(int i=1;i<n;i+=2){
            if(arr[i]<arr[i-1]){
                flag=true;
                break;
            }
        }
        if(flag==false)
            cout<<"1"<<endl;
        else   
            cout<<"0"<<endl;
        cout<<endl;
        t--;
    }
}

