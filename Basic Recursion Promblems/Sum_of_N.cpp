#include <iostream>
#include <string>
using namespace std;

// To print sum of first N numbers there are two ways

// Way 1 : Parameterised way
void Sum_N(int num, int sum){
    if (num < 1)
    {
        cout<<"The sum is "<< sum <<endl;
        return;
    }
    Sum_N(num-1,sum+num);
    
}

// Way 2: Functional way
int SUM_n(int num){
    if (num == 1)
    {
        return 1;
    }
    return num + SUM_n(num-1);
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    Sum_N(num,0);
    cout<< "The sum of first "<< num << " terms is "<< SUM_n(num);
    return 0;
}