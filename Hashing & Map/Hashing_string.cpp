#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int hash[26] = {0}; 
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    cout<<"Enter the no. of times you want to use:"<<endl;
    int q;
    cin >> q;
    while (q != 0)
    {
        char c;
        cout<<"Enter the character: ";
        cin >> c;
        cout << hash[c - 'a'] << endl;
        q--;
    }

    return 0;
}