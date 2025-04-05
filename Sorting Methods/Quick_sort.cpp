#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void Quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        Quick_sort(arr, low, pIndex - 1);
        Quick_sort(arr, pIndex + 1, high);
    }
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    vector<int> arr; 
    cout << "Enter the elements of array: " << endl;
    
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        arr.push_back(element);  
    }
    
    Quick_sort(arr, 0, size - 1);  

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  
    }
    cout << endl;
    
    return 0;
}
