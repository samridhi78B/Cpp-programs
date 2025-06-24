#include <iostream>
using namespace std;
int main(){
    for(char ch= 'A'; ch <= 'Z';ch++){
        cout<<ch<<" - "<<(int)ch<<endl;
    }
    cout<<endl;
    cout<<"ASCII Values: ";
    for(char ch= 'a'; ch <= 'z';ch++){
        cout<<ch<<" - "<<(int)ch<<endl;
    }
    return 0;
}
