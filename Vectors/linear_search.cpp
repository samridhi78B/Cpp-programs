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
bool found=false;
int target=8;
for(int i =0; i<n;i++){
    if(vec[i] ==  target){
        cout<<i;
        found = true;
        break;
    }
}
if(!found)cout<<"Not found";
    return 0;
}
