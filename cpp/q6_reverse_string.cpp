// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    
    // Q6) Reverse a string
    string s = "SSUSHILL";
    int n = s.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++; j--;
    }
    // reverse(s.begin(), s.end());
    cout<<s<<endl;
    
    

    return 0;
}