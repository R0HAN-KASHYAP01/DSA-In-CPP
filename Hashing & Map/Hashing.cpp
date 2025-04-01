#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    int hash[13] = {0}; // Here we assume that 12 be the greatest number that can be store
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash[arr[i]]++;
    }

    cout<<"Enter the no. of times you want to use:"<<endl;
    int q;
    cin >> q;
    while (q != 0)
    {
        int number;
        cout<<"Enter the number: ";
        cin >> number;
        cout << hash[number] << endl;
        q--;
    }

    return 0;
}