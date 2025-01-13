#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

// ------7. Find Maximum and Minimum in Array
    // int arr[10] = {1, 2, 44, 21, 3, 61,0, 111};
    vector<int> arr = {1, 2, 44, 21, 3, 61,0, 111};
    int n = arr.size();
    int max = INT_MIN;
    int min = INT_MAX;
    int ans;
    
    for(int i=0; i<n ; i++){
        // sort(arr.begin(), arr.end());
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"maximum value is "<<max<<endl;
    cout<<"mininmum value is "<<min;

    return 0;

    }