// #include <iostream>
// #include<bits/stdc++.h>
// #include <cmath>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;  // Number of testcases

//     for (int i = 0; i < t; ++i) {
//         // Input coordinates
//         int x1, y1, x2, y2, x3, y3, x4, y4;
//         cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

//         // Find side length
//         int side =max({abs(x2 - x1), abs(y2 - y1), abs(x3 - x1), abs(y3 - y1)});

//         // Calculate and print the area of the square
//         cout << side * side << endl;
//     }

//     return 0;
// }

#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int side=max({abs(x1-x2),abs(y1-y2),abs(x3-x1),abs(y3-y1)});
        cout<<side*side<<endl;
    }
}
