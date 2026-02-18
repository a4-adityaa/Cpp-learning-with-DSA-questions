// operator overloading in complile time

#include <iostream>
using namespace std;

class Number {
public:
    int value;

    // Constructor
    Number(int v) {
        value = v;
    }

    // Operator Overloading (+)
    Number operator + (Number n) {
        return Number(value + n.value);
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number result = n1 + n2;   // '+' overloaded

    cout << "Sum = " << result.value;

    return 0;
}
