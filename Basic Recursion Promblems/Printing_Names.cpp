// Here we print Names 5 time without using loops
#include <iostream>
#include <string>
using namespace std;
int count = 1;
void Print_names(auto name, int times){
    cout<<name<<endl;
    count++;
    if (count > times)
    {
        return;
    }
    Print_names(name,times);
    
}
int main(){
    int n;
    cout<<"Enter the number of times: ";
    cin>> n;
    Print_names("ROhan",n);
    return 0;
}