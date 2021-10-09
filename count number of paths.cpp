#include<iostream>
using namespace std;
int countPath(int start,int end)
{
    
    if(start==end)
    {
        return 1;
    }
    if(start>end)                                                    // -----------------------------------------------
    {                                                                // |             |                |              | 
        return 0;                                                    // |             |                |              |
    }                                                                // -----------------------------------------------
    int count=0;                                                     //       0              1               2
    for(int i=1;i<=6;i++)    //dice value range from 1 to 3 ;         we need to count total paths by which we can reach 0 to 2 
    {
        count+=countPath(start+i,end);
    }
    cout<<count<<endl;
    return count;
}
int main()
{
    int start;
    cin>>start;
    int end;
    cin>>end;
  
    cout<<countPath(start,end);
    return 0;
}
