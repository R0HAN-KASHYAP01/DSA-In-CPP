// Here we print number from 1 to N 
#include <iostream>
#include <string>
using namespace std;
int count = 1;
void Print_num(int number){
    cout<<count<<endl;
    count++;
    if (count > number)
    {
        return;
    }
    Print_num(number);
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    Print_num(num);
    return 0;
}