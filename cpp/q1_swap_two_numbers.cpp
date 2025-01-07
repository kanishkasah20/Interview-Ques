#include <iostream>
using namespace std;

// i/p a=10 b=5
// o/p a=5  b=10

int main(){

    //---solution 1 : by using add and sub
    // int a = 100;
    // int b = 210;
    
    // cout<<"a:"<<a <<"b:"<<b<<endl;
    // int c = a+b; //30
    // b = c - b; //30-20=10
    // a = c - a;  //30-
    
    // cout<<"a:"<<a<<"b:"<<b<<endl;
    
    //---solution 2 : by using swap
    // int a = 100;
    // int b = 210;
    
    // cout<<a<<" "<<b<<endl;
    // swap(a,b);
    // cout<<a<<" "<<b<<endl;
    
    //---solution 3 : by using XOR operator(same pe 0, diff pe 1)

    //The idea is to use the properties of XOR to swap the two variables.

    // a = a ^ b: Store the Bitwise XOR of a and b in a. Now, a holds the result of (a ^ b).
    // b = a ^ b: Bitwise XOR the new value of a with b to get the original value of a. This gives us, b = (a ^ b) ^ b = a.
    // a = a ^ b: Bitwise XOR the new value of a with the new value of b (which is the original a) to get the original value of b. This gives us, a = (a ^ b) ^ a = b.
    int a = 100;
    int b = 210;
    
    cout<<a<<" "<<b<<endl;
    a = a ^ b;
    b = a ^ b;
    
    a = a ^ b;
    cout<<a<<" "<<b<<endl;


    return 0;
}