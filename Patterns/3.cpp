#include <iostream>
#include <string>
using namespace std;

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
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