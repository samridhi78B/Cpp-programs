#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   if(a+b>c || b+c>a || a+c >b){
       cout<<"Sides of triangle";
   }
   else{
       cout<<" Cannot be Sides of triangle";
   }
   return 0;
}
