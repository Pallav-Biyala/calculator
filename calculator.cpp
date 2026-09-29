#include <iostream>
#include "mathfuncs.h"

using namespace std;

int main() {
    int a = 20, b = 5;
    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << sub(a, b) << endl;
    cout << "Multiplication: " << mult(a, b) << endl;
    cout << "Division: " << division(a, b) << endl;

    return 0;
}
