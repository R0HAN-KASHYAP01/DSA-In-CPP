#include <iostream>
#include <string>
using namespace std;
void Reverse(int i,int arr[], int n){
    if (i > n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    Reverse(i+1,arr,n);

}
int main(){
    int size;
    cout<< "Enter the size of array: ";
    cin>> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    Reverse(0,arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
    
    
    return 0;
}