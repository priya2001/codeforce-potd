#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        string str;
        cin>>str;
        map<char,int>mp;
        for(int i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        if(mp.size()>2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }
}