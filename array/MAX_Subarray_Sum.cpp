#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    int maxSum=INT_MIN;
    for(int i=0; i<n;i++){
       sum += arr[i];
       maxSum = max(sum,maxSum);
       if(sum < 0){
           sum = 0;
       }
    }
    cout<<maxSum;
    return 0;
}
