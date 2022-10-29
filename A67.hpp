//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int &a, int &b, int &c) {
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap (b, c);

}

void swap(int &a, int &b, int &c, int &d) {
    swap(a, b);
    swap(b, c);
    swap(c, d);
}