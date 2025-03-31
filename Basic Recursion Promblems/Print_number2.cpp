// Here we print number from N to 1 
#include <iostream>
#include <string>
using namespace std;
void Print_num(int number){
    cout<<number<<endl;
    if (number == 1)
    {
        return;
    }
    Print_num(number-1);
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    Print_num(num);
    return 0;
}