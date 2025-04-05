#include <iostream>
#include <string>
using namespace std;
void Insertation_sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
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
    Insertation_sort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    
    
    return 0;
}