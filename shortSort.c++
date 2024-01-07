#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string cards;
        cin>>cards;
       bool possible=false;
       if(cards=="abc")  //already correct order
       {
        possible=true;
       }
       else if(cards=="acb") //swap c nad b
       {
          possible=true;
       }
       else if(cards=="bac")  //swap b and a
       {
        possible=true;
       }
       else if(cards=="cba")  //swap c and a
       {
          possible=true;
       }
       cout<<(possible?"Yes":"No")<<endl;
    }
}