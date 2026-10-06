#include <cassert>
#include "mathfuncs.h"

int main() {
    assert(add(20, 5) == 25);
    assert(sub(20, 5) == 15);
    assert(mult(20, 5) == 100);
    assert(division(20, 5) == 4);

    return 0;
}