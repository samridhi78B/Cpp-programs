#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    while(b!=0){
        int c =b;
        b=a % b;
        a =c;
    }
    cout<<a;
    return 0;
}
