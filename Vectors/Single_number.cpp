#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,1,4,2};
    int ans =0;
    for(int val : vec){
        ans ^= val;
    }
    cout<<ans;
    return 0;
}


