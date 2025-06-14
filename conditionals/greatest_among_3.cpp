#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b && a > c){
        cout<<a;
        cout<<" is greater";
    }
    else if(b > a && b > c){
        cout<<b;
        cout<<" is greater";
    }
    else{
        cout<<c;
        cout<<" is greater";
    }
    return 0;
}
