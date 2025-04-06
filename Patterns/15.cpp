#include <iostream>
#include <string>
using namespace std;

/*
A B C D E 
A B C D
A B C
A B
A
*/

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n-i; ch++)
        {
            cout << ch << " ";
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