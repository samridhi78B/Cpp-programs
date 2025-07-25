#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec;

int n;
cin>>n;
for(int i =0; i<n;i++){
    int x;
    cin>>x;
    vec.push_back(x);
}
int start=0,end=n-1;
while(start < end){
    swap(vec[start],vec[end]);
    start++;
    end--;
}
for(int val : vec){
    cout<<val;
}
    return 0;
}

