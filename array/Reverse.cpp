#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int start=0,end=n-1;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
     while(start < end){
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}
