#include <iostream>
#include <string>
using namespace std;
void Print_1TO_N(int i,int num){
    if (i < 1)
    {
        return;
    }
    Print_1TO_N(i-1,num);
    cout<< i<< endl;
    
}
int main(){

    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Print_1TO_N(num,num);
    return 0;
}