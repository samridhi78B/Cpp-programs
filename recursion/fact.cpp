#include <iostream>
using namespace std;
int fact(int n){
    if(n<=1) return n;
    else return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
   cout<<fact(n);
    return 0;
}
