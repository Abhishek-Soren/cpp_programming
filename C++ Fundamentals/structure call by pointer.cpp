#include<iostream>
using namespace std;

struct square {
    int side;
};

void change (square *s) {
    s-> side = 20;
}

int main()
{
    square s1;
    s1.side = 10;
    cout << "square side = " << s1.side << endl;
    
    change(&s1);
    cout << "square side = " << s1.side << endl;
    return 0;
}