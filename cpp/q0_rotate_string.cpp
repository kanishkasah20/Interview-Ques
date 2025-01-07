#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Ques---------Rotate String
int main() {
    
    // Rotate String
    string s = "abcde";
    string goal = "cdeab";
    // cdeab
    
    int n = s.length();
    int m = goal.length();
    
    if(n != m){
        cout<<"false";
    }
    if((s+s).find(goal) != string::npos){
        cout<<"true";
    }else{
        cout<<"false";
    }
    // for(int i=1; i<=n; i++){
    //     rotate(s.begin(),s.begin()+1,s.end());
    //     if(s == goal){
    //         cout<<"True";
    //         // return true;
    //     }
    // }
    
    return 0;
}