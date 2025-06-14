#include <iostream>
using namespace std;
int main() {
    int marks;
    cin>>marks;
    if(marks >= 80 and marks <= 100){
        cout<<"A";
    }
    else if(marks >= 70 and marks <= 79){
        cout<<"B";
    }
    else if(marks >= 60 and marks <= 59){
        cout<<"C";
    }
    else if(marks >= 59 and marks <= 40){
        cout<<"D";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}
