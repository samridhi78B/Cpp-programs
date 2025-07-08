#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(2);//insert
    vec.push_back(4);//insert 
    vec.push_back(8);//insert
    vec.push_back(16); //insert 
    vec.push_back(32); //insert at last
    vec.pop_back(); //Delete last element
    cout<<"AT first index: "<<vec.front()<<endl;
     cout<<"AT last index: "<<vec.back()<<endl;
     cout<<"Value at index: "<<vec.at(1)<<endl;
    cout<<vec.size()<<endl; // size(number of element)
    cout<<vec.capacity(); // capacity
    return 0;
}
