#include <iostream>
using namespace std;
int linearSearch(int arr[],int n, int target){
     for(int i=0; i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<linearSearch(arr,n,target);
    
   return 0;
}
