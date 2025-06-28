#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool isPal = true;
    for(int i=0; i<n/2; i++){
     if(arr[i] != arr[n-1-i]){
         isPal = false;
         break;
     }
    }
 if(isPal) cout<<"YES";
 else cout<<"NO";
    return 0;
}
