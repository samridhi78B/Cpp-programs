#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    while(n != 0){
        int digit =n%10;
        if(digit % 2 == 0){
            sum += digit;
        }
        n /= 10;
    }
    cout<<sum;
    return 0;
}
