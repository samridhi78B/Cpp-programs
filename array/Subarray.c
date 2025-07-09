#include <iostream>
using namespace std;
int main(){
    int n;
cin>>n;
int arr[n];
for(int i=0; i<n;i++){
    cin>>arr[i];
}
int start,end;
for(start =0; start<n;start++){
    for(end=start; end<n;end++)
    {
        for(int i=start; i<=end;i++){
        cout<<arr[i];
    }
    cout<<endl;
    }
    cout<<" ";
}
    return 0;
}
