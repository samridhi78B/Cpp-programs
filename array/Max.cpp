#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int large = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     for(int i=0; i<n; i++){
     if(arr[i] > large){
         large = arr[i];
     }
    }
    cout<<large;
    return 0;
}
