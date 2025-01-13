// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    // Write C++ code here
    //Q3 Palindrome check
    
    char ch[100]="RACECARR";
    // cin.getline(ch,100);
    int n;
    while(ch[n]!= '\0'){
        n++;
    }
    int i=0;
    int j =n-1;
    bool isPalindrome = true;
    
    
    while(i<=j){
        // swap(ch[i],ch[j]);
        if(ch[i]!=ch[j]){
            isPalindrome = false;
        }
        i++; j--;
    }
    
    if(isPalindrome){
        cout<<"Valid Palindrome"<<endl;
    }else{
        cout<<"Invalid Palindrome"<<endl;
    }
    

    return 0;
}