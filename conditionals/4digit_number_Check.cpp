#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n > 999  && n < 10000){
       cout<<n;
       cout<<" is a 4 digit number";
   }
   else{
       cout<<n;
       cout<<" is not a 4 digit number";
   }
   return 0;
}
