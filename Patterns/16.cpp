#include <iostream>
#include <string>
using namespace std;

/*
A 
B B
C C C
D D D D
E E E E E
*/

void pattern(int n)
{
    char start = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<start<<" ";
        }
        start += 1;
        

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