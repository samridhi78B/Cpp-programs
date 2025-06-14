#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n % 5 == 0  && n % 7 == 0){
       cout<<n;
       cout<<" divisible by both";
   }
   else if(n % 5 == 0){
       cout<<n;
       cout<<" divisible by 5";
   }
   else if(n % 7 == 0){
       cout<<n;
       cout<<" divisible by 7";
   }
   else{
       cout<<n;
       cout<<" is neither divisible by 5 nor 7";
   }
   return 0;
}
