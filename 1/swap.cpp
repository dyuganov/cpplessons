#include <iostream>

using namespace std;

void swapByRefernce(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swapByPointer(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a = 1, b = 2;
    cout << "before swapByRefernce" << "a = " << a << endl << "b = " << b << endl;
    swapByRefernce(a, b);
    cout << "after swapByRefernce" << "a = " << a << endl << "b = " << b << endl << endl;

    int a = 1, b = 2;
    cout << "before swapByPointer" << "a = " << a << endl << "b = " << b << endl;
    swapByPointer(&a, *b);
    cout << "after swapByPointer" << "a = " << a << endl << "b = " << b << endl << endl;
    
    return 0;
}