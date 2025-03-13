#include <iostream>
#include <string>
using namespace std;

void Prime(int number){
    int count = 0;
    for (int i = 1; i*i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
            if (number/ i != i)
            {
                count++;
            }
            
        }
        
    }
    if (count > 2)
    {
        cout<<"The given number is not prime number";
    }
    else
    {
        cout<<"The given number is a prime number";
    }
    
    
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Prime(num);
    return 0;
}