#include <iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    if(cp > sp){
    cout<<"Loss of : ";
    cout<<cp-sp;
    }
    else if(cp == sp){
        cout<<"No Loss No Profit";
    }
    else{
        cout<<"Profit of : ";
        cout<<sp-cp;
    }
}
