#include<iostream>
using namespace std;

struct square {
    int side;
};

int area (square s) {
    return s.side * s.side;
}

int main()
{
    square s1;
    s1.side = 10;
    
    int a = 0;
    a = area(s1);
    cout << "Area of square = " << a << endl;
    return 0;
}