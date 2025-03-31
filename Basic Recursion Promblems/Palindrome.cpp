#include <iostream>
#include <string>
using namespace std;
bool Palindrome(int i , string &s){
    if (i >= s.size()/2)
    {
        return true;
    }
    if (s[i] != s[s.size()-i-1])
    {
       return false;
    }
    Palindrome(i+1,s);
    
    
}
int main(){
    string S = "madam";
    cout<< Palindrome(0,S);

    return 0;
}