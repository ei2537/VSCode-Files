#include <iostream>
using namespace std;

int main() {
    int i;

    for ( i = 0; i < 10; i++ ) {
        if ( i % 2 == 0 ) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}

/*
continue文は、ループを一つ飛ばすという処理をします。
*/