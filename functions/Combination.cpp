#include <iostream>
using namespace std;
int fact(int x){
    int product = 1;
    for(int i=1; i<=x;i++){
        product *= i;
    }
    return product;
}
int main(){
    int n,r;
    cin>>n>>r;
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    cout<<a/(b*c);
    return 0;
}
