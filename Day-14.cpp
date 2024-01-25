#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ch;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            continue;
        }
        else
        {
            ch[i]=s[i]; 
        }
    } 
    for(int i=0;i<s.size();i++)
    {
        cout<<ch[i];
    }
    
}