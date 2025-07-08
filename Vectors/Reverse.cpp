#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec = {2,3,1,4,5};
    cout<<"Vector Before reversing: "<<endl;
    for(int val : vec){
   cout<<val<<" ";
   }
    int start=0, end= vec.size()-1;
    while(start < end){
        swap(vec[start],vec[end]);
       start++;
       end--;
   }
   cout<<endl;
   cout<<"Vector after reversing: "<<endl;
   for(int val : vec){
   cout<<val<<" ";
   }
    return 0;
}

