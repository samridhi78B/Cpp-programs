#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product = 1;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        product *= arr[i];
    }
    cout<<product;
    return 0;
}
