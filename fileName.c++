#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='x'&&str[i+1]=='x'&&str[i+2]=='x')
        {
            count++;
        }
    }
    cout<<count;
}