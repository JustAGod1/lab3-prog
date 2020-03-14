#include <iostream>
#include "data.h"

using namespace std;

void triangles() {
    cout << "Testing traingles..." << endl;
    Triangle t1(
            0, 0,
            1, 2,
            2, 0
    );
    Triangle t2(
            0, 0,
            1, 2,
            2, 0
    );

    cout << "t1 < t2: " << ((t1 < t2) ? "true" : "false") << endl;
}

void tuples() {
    cout << "Testing tuples..." << endl;

    int d1[] = {1, 2, 3, 4};
    Tuple t1(d1, 4);

    int d2[] = {1, 2, 3, 4};
    Tuple t2(d2, 4);

    cout << "t1 == t2: " << (t1 == t2 ? "true" : "false") << endl;
}

int main() {
    triangles();
    tuples();
    return 0;
}
