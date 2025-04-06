#include <iostream>
#include <string>
using namespace std;

/*
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
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