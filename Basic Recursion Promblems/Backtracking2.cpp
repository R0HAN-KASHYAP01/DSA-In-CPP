#include <iostream>
#include <string>
using namespace std;
void Print_N_1(int i , int num){
    if (i > num)
    {
        return;
    }
    Print_N_1(i+1,num);
    cout<<i<<endl;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Print_N_1(1,num);

    return 0;
}