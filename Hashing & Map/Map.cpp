#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;
    
    int arr[n];
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
        mpp[arr[i]]++;
    }

    cout<<"Enter the no. of times you want to use:"<<endl;
    int q;
    cin >> q;
    while (q != 0)
    {
        int number;
        cout<<"Enter the number: ";
        cin >> number;
        cout << mpp[number] << endl;
        q--;
    }
    
    return 0;
}