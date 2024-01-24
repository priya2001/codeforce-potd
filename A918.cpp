#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ans=0;
    cin>>t;
    while(t--)
    {
        int ans=0;
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<3;i++)
        {
            ans=ans^a[i];
        }
       cout<<ans<<endl;
  

    }
    
}