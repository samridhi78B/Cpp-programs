#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if((a % 5 == 0 or a % 3 == 0 )and a % 15 != 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
