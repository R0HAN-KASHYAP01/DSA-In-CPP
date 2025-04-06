#include <iostream>
#include <string>
using namespace std;

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

void pattern(int n)
{
    int iniSpace = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }

        //space
        for (int j = 0; j < iniSpace; j++)
        {
            cout<<" ";
        }
        

        // stars
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        iniSpace += 2;
        
        cout << endl;
    }
    iniSpace = 2*n -2;
    for (int i = 1; i <= n; i++)
    {
        //stars
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }

        //space
        for (int j = 0; j < iniSpace; j++)
        {
            cout<<" ";
        }
        
        //stars
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        iniSpace -= 2;
        cout<<endl;
        
    }
    
}
int main()
{
    int n;
    cout << "Enter the no. of lines: ";
    cin >> n;
    pattern(n);
    return 0;
}