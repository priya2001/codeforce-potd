#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,k;
         cin>>n>>k;
         int a[n];
         int num=1;
         int count=0;
         for(int i=0;i<n;i++)
         {
            if(a[i]==num)
            {
                num++;
            }
            else
            {
               count++;
            }
         }
         int ans=(count+k-1)/k;
         cout<<ans<<endl;
         
    }
}