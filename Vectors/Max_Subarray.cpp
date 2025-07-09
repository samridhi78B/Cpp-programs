#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int sum = 0;
    int maxSum=INT_MIN;
    for(int val: vec){
       sum += val;
       maxSum = max(sum,maxSum);
       if(sum < 0){
           sum = 0;
       }
    }
    cout<<maxSum;
    return 0;
}
