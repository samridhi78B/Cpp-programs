#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0, power=1;
 while(n > 0){
     int rem = n%10;
     n /= 10;
     ans += (rem*power);
     power *= 2;
 }
   
cout<<ans;
    return 0;
}
