// reverse num printing pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    /*
        1 2 3 4 5
        1 2 3 4 
        1 2 3
        1 2
        1
      */

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
        1 
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1
        */

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1";
    //         }
    //         else
    //             cout << "0";
    //     }
    //     cout << endl;
    // }

    /*Rhombus Pattern*/

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i+1;j++){
    //         cout<<" ";
    //     }
    //     for(int k=0;k<n;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    /*
    Number pattern
        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5
    */

   for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i;j++){
           cout<<" ";
       }
       for(int k=1;k<=i;k++){
           cout<<k<<" ";
       }
       cout<<endl;
   }
}