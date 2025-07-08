#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n;i++){
        int count =0;
         for(int j=0; j<n;j++){
        if(arr1[i] == arr1[j]){
         count++;
        }
    }
    if(count == 1){
        cout<<arr1[i]<<" ";
    }
   
    }
    
    return 0;
}
