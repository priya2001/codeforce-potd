#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count[3]={};
        for(int i=0;i<9;i++)
        {
            char c;
            cin>>c;
            if(c!='?')
            {
                count[c-'A']++;
            }
        }
        for(int i=0;i<3;i++)
        {
            if(count[i]<3)
// Convert 'A' + i to its corresponding character
            {
                cout<<char('A'+i)<<endl;
            }
        }
    }
}