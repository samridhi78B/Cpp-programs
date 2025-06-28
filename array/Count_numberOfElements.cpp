#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],count=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     for(int i=0; i<n; i++){
       count++;
    }
    cout<<count;
    return 0;
}
