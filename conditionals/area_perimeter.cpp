#include <iostream>
using namespace std;
int main(){
   int radius;
    cout<<"Enter radius: ";
    cin>>radius;
  int area = 3.14*radius*radius;
  int perimeter = 2*3.14*radius;
  cout<<"Area of circle : ";
  cout<<area<<endl;
  cout<<"perimeter of circle : ";
  cout<<perimeter<<endl;
  if(area >= perimeter){
      cout<<"Area is greater";
  }
  else{
      cout<<"perimeter is greater";
  }
}
