#include <iostream>
#include <string>
using namespace std;

/*
E 
D E
C D E
B C D E
A B C D E
*/

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (char ch = 'E'-i; ch <= 'E'; ch++)
        {
            cout<<ch<<" ";
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