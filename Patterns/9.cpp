#include <iostream>
#include <string>
using namespace std;

/*
    *    
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

void pattern(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        int stars = 2*i +1;
        int space = n-i-1;
        if (i >= n)
        {
            space = i - n+1;
            stars = (2*n-1)- (2* space);
        }
        
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        cout << endl;
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