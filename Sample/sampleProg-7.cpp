#include <iostream>
using namespace std;

int main() {
    int i;

    for ( i = 0; i < 10; i++ ) {

        cout << i << endl;

        if ( i > 5 ) {
            break;
        }
    }

    return 0;
}

/*
break文は、ループがまだ残っていても強制的に抜け出します。
*/