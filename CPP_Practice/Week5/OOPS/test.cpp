#include <iostream>
using namespace std;

class MyObject {
public:
    int value;
};

int main() {
    MyObject obj1;
    obj1.value = 5;

    MyObject obj2;
    obj2.value = 10;

    MyObject obj3;
    obj3.value = 15;

    MyObject arr[] = {obj1, obj2, obj3};

    cout << arr[1].value;

    return 0;
}

