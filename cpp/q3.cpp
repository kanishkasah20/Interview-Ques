// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


// Q4 Factorial calculation
int fact(int n){
        int ans = 1;
        while(n>=1){
            ans = n*ans;
            n--;
        }
        return ans;
}
    

int main() {
    // Write C++ code here
    //Q3 Palindrome check
    
    // char ch[100]="RACECARR";
    // // cin.getline(ch,100);
    // int n;
    // while(ch[n]!= '\0'){
    //     n++;
    // }
    // int i=0;
    // int j =n-1;
    // bool isPalindrome = true;
    
    
    // while(i<=j){
    //     // swap(ch[i],ch[j]);
    //     if(ch[i]!=ch[j]){
    //         isPalindrome = false;
    //     }
    //     i++; j--;
    // }
    
    // if(isPalindrome){
    //     cout<<"Valid Palindrome"<<endl;
    // }else{
    //     cout<<"Invalid Palindrome"<<endl;
    // }
    
    
    // Q4 Factorial calculation
    //  0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    int n=8;
    // cout<<fact(n);
    
    // Q5 Fibonacci Series
    int n1=0;
    int n2=1;
    cout<<n1<<" "<<n2<<" ";
    
    for(int i=0;i<n;i++){
    int op = n1 + n2;
    cout<<op<<" ";
    n1=n2;
    n2=op;
    }
    

    return 0;
}