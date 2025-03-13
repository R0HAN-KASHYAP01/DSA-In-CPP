#include <iostream>
#include <string>
using namespace std;
bool Palindrome_number(int number){
    int digit = 0;
    int result = 0;
    int num = number;
    while (num> 0)
    {
        digit = num % 10;
        result = result* 10 + digit;
        num /= 10;
    }
    if (number == result)
    {
        return true;
    }
    else return false;
    
    
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if (Palindrome_number(num) == true)
    {
        cout<<"The given number is a Palindrome number";
    }
    else cout<<"The given number is not a Palindrome number";
    

    return 0;
}