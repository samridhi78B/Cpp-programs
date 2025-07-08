#include <iostream>
#include <vector>
using namespace std;
int main(){
    int target = 8;
    vector <int> vec = {4,2,7,8,1,2,5};
    for(int i = 0; i<vec.size();i++){
        if(vec[i] == target){
            cout<<i;
            break;
        }
    }
    return 0;
}

