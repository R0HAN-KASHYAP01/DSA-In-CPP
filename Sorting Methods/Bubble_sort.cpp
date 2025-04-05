#include <iostream>
#include <string>
using namespace std;
void Bubble_sort(int arr[],int n){
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
        
        
    }
    
}
int main(){
    int size;
    cout<< "Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    Bubble_sort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    
    
    return 0;
}