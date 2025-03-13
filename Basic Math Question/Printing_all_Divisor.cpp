#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
void All_Divisor(int number){
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout<<i<<" ";
        }
        
    }
    
}

// Better approach
void All_Divisor2(int number){
    vector<int> ls;

    for (int i = 1; i*i <= number ; i++)
    {
        if (number % i == 0)
        {
            ls.push_back(i);
            if ((number / i) != i )
            {
                ls.push_back(number/i);
            }
            
        }

        
    }
    sort(ls.begin(),ls.end());
    for (auto it: ls)
    {
        cout<< it<<" ";
    }
    
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    All_Divisor(num);
    All_Divisor2(num);
    
    return 0;
}