#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
  
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    
   
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void Merge_sort(vector<int> &arr, int low, int high) {
    if (low >= high) return;  
    int mid = (low + high) / 2;
    Merge_sort(arr, low, mid);  
        Merge_sort(arr, mid + 1, high);  
    merge(arr, low, mid, high);  
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    vector<int> arr(size); 
    cout << "Enter the elements of array: " << endl;
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  
    }
    
    Merge_sort(arr, 0, size - 1);  
    
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  
    }
    cout << endl;
    
    return 0;
}
