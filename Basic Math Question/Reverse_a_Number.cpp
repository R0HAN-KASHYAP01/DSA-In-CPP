#include <iostream>
#include <string>
using namespace std;
int Reverse_num(int number){
    int result = 0;
    int digit = 0;
    while (number > 0)
    {
        digit = number %10;
        if (digit > 0)
        {
            result = result * 10 + digit;
        }
        number /= 10;
        

    }
    return result;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Reverse of number "<< num << " is: "<< Reverse_num(num);

    return 0;
}