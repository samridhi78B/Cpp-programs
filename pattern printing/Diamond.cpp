#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //First half
    for(int i=1; i<=n;i++){
       for(int j=1; j<=n-i;j++){
        cout<<" ";
    } 
    for(int k=1; k<=2*i-1;k++){
        cout<<"*";
    }
        cout<<endl;
    }
    //Second half (reverse)
    for(int i=n-1; i>=1;i--){
       for(int j=1; j<=n-i;j++){
        cout<<" ";
    } 
    for(int k=1; k<=2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
    }
    
    return 0;
}
