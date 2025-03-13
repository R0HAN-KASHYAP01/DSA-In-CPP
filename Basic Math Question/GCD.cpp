#include <iostream>
#include <string>
using namespace std;
int GCD(int a , int b){
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a% b;
        }
        else
        {
            b = b % a;
        }
           
    }
    if (a == 0)
    {
        return b;
    }
    else return a;
    
    
}
int main(){
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>> num2;
    cout<<"GCD is "<<GCD(num1,num2);

    return 0;
}