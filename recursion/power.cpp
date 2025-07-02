#include <iostream>
#include <cmath>
using namespace std;
int power(int a,int b){
    if(b == 0) return 1;
    else return a*pow(a,b-1);
}
int main(){
    int m,n;
    cin>>m>>n;
   cout<<power(m,n);
    return 0;
}
