//all number should be occur twice except 1 number then find out that 1 number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int no;
   
    int ans=0;//a^a=0,a^0=a//
    for(int i=0;i<n;i++)
    { 
        cin>>no;
        ans=ans^no;
    }
    cout<<ans<<endl;
    return 0;
}