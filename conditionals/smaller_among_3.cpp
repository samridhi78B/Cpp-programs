#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b and a < c){
        cout<<a;
        cout<<" is smaller";
    }
    else if(b < a and b < c){
        cout<<b;
        cout<<" is smaller";
    }
    else{
        cout<<c;
        cout<<" is smaller";
    }
    return 0;
}
