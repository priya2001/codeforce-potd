#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

//   ############################ 1st approach######################################      
       int n;
       cin>>n;
       long long a[n];
       long long Maxi=INT_MIN,prod=1;
       for(int i=0;i<n;i++)
       {
          cin>>a[i];
       }

    //    for(int i=0;i<n-1;i++)
    //    {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         prod=a[i]*a[j];
    //         Maxi=max(Maxi,prod);
    //     }
    //    }
    //    cout<<Maxi<<endl; 

// ##################range ER....

    // }
    // return 0;

//   ########################### 2nd approach using sort funtion ######################################  
   
    sort(a,a+n);
    cout<<max(a[0]*a[1],a[n-1]*a[n-2])<<endl;
    }
    return 0;
}
