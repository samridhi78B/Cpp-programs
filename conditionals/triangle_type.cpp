#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) { 
        if (a == b && b == c) {
            cout << "Equilateral triangle";
        } 
        else if (a == b || b == c || c == a) {
            cout << "Isosceles triangle";
        } 
        else {
            cout << "Scalene triangle";
        }
    } 
    else {
        cout << "Not a triangle";
    }
    return 0;
}
