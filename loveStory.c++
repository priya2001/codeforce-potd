#include<iostream>
#include<string.h>
using namespace std;
int checkElement(string &s)
{
    string target="codeforce";
    int count=0;
    for(int i=0;i<=target.size();i++)
    {
         if(target[i]!=s[i])
         {
            count++;
         }
    }
    return count;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int result=checkElement(s);
        cout<<result;
    }
}