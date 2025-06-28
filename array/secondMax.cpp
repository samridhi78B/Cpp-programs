#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int largest = INT_MIN;
    int secLarge = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     for(int i=0; i<n; i++){
     if(arr[i] > largest){
         largest = arr[i];
     }
    }
     for(int i=0; i<n; i++){
     if(arr[i] != largest && secLarge < arr[i]){
         secLarge= arr[i];
     }
    }
    cout<<secLarge;
    return 0;
}
