#include <iostream>
#include <string>
using namespace std;
int Number_of_Digits(int number){
    int result = 0;
    while (number>0)
    {
        result++;
        number = number/ 10;
    }
    return result;
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin >> num;
    if (num == 0) {
        cout << "Numbers of digit in " << num << " is: 1";
    } else {
        cout << "Numbers of digit in " << num << " is: " << Number_of_Digits(num);
    }
    return 0;
}