// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    // Write C++ code here
    
    // Q5 Fibonacci Series
    //  0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    int n=8;
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