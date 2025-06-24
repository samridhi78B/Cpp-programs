#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x=a;
    int y =b;
    while(b!=0){
        int c =b;
        b=a % b;
        a =c;
    }
    int gcd = a;
    int lcm = (x*y)/ gcd;
    cout<<lcm;
    return 0;
}
