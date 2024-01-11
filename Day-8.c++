#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++)
        {
            if (str.size() == 2)
            {
                cout << str[1] << endl;
                break;
            }
            else{
                sort(str.begin(),str.end());
                cout<<str[0]<<endl;
                break;
            }
        }
    }
}