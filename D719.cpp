#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]-a[i]==j-i&&i<j)
                {
                    count++;
                }
            }
        }
       cout<<count<<endl;
    }
     
    
}