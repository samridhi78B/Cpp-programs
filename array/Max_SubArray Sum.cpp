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
int start,end;
int maxSum=INT_MIN;
for(start=0; start<n;start++){
    int sum = 0;
    for(end=start; end<n;end++){
        sum += arr[end];
        maxSum = max(sum,maxSum);
    }
    
}
cout<<maxSum;
return 0;
}
