#include <iostream>
using namespace std;
int fact(int a){
    int product = 1;
    for(int i=1;i<=a;i++){
        product *= i;
    }
    return product;
}

int printFact(int a,int b){
    return fact(a) /(fact(b)*fact(a-b));
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n;i++){
        for(int j=0; j<=n-i;j++){
        cout<<"  ";
    }
      for(int j=0; j<=i;j++){
          cout<<printFact(i,j)<<"  ";
      }
      cout<<endl;
    }
    return 0;
}
