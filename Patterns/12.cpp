#include <iostream>
#include <string>
using namespace std;

/*
1      1
12    21
123  321
12344321
*/

void pattern(int n){
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++)
    {
        // num 
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        //space
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
        // num
        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        cout<<endl;
        space -=2;
        
    }
    
}
int main(){
    int n;
    cout << "Enter the no. of lines: ";
    cin >> n;
    pattern(n);
    return 0;
}