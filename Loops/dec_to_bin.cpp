#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0, power=1;
 while(n > 0){
     int rem = n%2;
     n /= 2;
     ans += (rem*power);
     power *= 10;
 }
   
cout<<ans;
    return 0;
}
