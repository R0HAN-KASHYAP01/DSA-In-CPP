#include <iostream>
#include <string>
using namespace std;
/*
1
01
101
0101
10101
*/

void pattern(int n){
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i %2 == 0)  
        {
            start = 1;
        }
        
        for (int j = 0; j <= i; j++)
        {
            cout<< start;
            start = 1-start;
        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cout << "Enter the no. of lines: ";
    cin >> n;
    pattern(n);
    return 0;
}