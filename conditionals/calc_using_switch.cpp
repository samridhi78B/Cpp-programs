#include <iostream>
using namespace std;
int main(){
    int x,y;
    char ch;
    cin>>x>>ch>>y;
    switch (ch){
        case '+':
        cout<<x+y;
        break;
        case '-':
        cout<<x-y;
        break;
        case '*':
        cout<<x*y;
        break;
        case '/':
        if(y != 0){
        cout<<x/y;
        }
        else{
            cout<<"Error";
        }
        break;
        default:
        cout<<"Invalid operator";
    }
    return 0;
}
