#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int Number_of_Digits(int number){
    if (number == 0) return 1; 
    int result = 0;
    while (number>0)
    {
        result++;
        number = number/ 10;
    }
    return result;
    
}

bool Armstrong_number(int number){
    if (number < 0)
    {
        return false;
    }
    
    int digit = 0;
    int result = 0;
    int num = number;
    int n = Number_of_Digits(number);
    while (num> 0)
    {
        digit = num % 10;
        result = result + round(pow(digit,n));
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
    if (Armstrong_number(num) == true)
    {
        cout<<"The given number is an Armstrong number";
    }
    else cout<<"The given number is not an Armstrong number";
    

    return 0;
}