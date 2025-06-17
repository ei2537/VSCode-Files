#include <bits/stdc++.h>
#include "sc3/sc3.h"
using namespace std;

/*
# define SC_L 10                    //length
# define SC_SC 100                  //max
# define SC_alpha 0.20              //alpha
int SC_S0[SC_L+1][SC_L+1];          //input
int SC_Sf[SC_L+1][SC_L+1];          //output
*/

int main() {
    // input
    SC_input();

    // 震源の座標を保存する。
    queue <pair<int, int>> shingen;

    // 探す
    for ( int i = 1; i <= SC_L; i++ ) {
        for ( int j = 1; j <= SC_L; j++ ) {

            if ( SC_S0[i][j] >= SC_SC ) {
                shingen.push ( { i, j } );
            }

            // 答えにひずみの初期値を格納する。
            SC_Sf[i][j] = SC_S0[i][j];

        }
    }

    int x, y;

    while ( ! ( shingen.empty() ) ) {
        // 座標を変数に格納
        x = shingen.front().first;
        y = shingen.front().second;
        shingen.pop();

        // x + 1, y
        if ( x < SC_L ) {
            SC_Sf[ x + 1 ][y] += SC_Sf[x][y] * SC_alpha;
            
            // 震源になったかを判定
            if ( SC_Sf[ x + 1 ][y] >= SC_SC ) {
                shingen.push ( { x + 1, y } );
            }
        }
        // x, y + 1
        if ( y < SC_L ) {
            SC_Sf[x][ y + 1 ] += SC_Sf[x][y] * SC_alpha;

            // 震源になったかを判定
            if ( SC_Sf[x][ y + 1 ] >= SC_SC ) {
                shingen.push ( { x, y + 1 } );
            }
        }
        // x - 1, y
        if ( x > 1 ) {
            SC_Sf[ x - 1 ][y] += SC_Sf[x][y] * SC_alpha;

            // 震源になったかを判定
            if ( SC_Sf[ x - 1 ][y] >= SC_SC ) {
                shingen.push ( { x - 1, y } );
            }
        }
        // x, y - 1
        if ( y > 1 ) {
            SC_Sf[x][ y - 1 ] += SC_Sf[x][y] * SC_alpha;

            // 震源になったかを判定
            if ( SC_Sf[x][ y - 1 ] >= SC_SC ) {
                shingen.push ( { x, y - 1 } );
            }
        }

        // 震源を 0 リセット
        SC_Sf[x][y] = 0;

    }

    // for ( int i = 1; i <= 10; i++ ) {
    //     for ( int j = 1; j <= 10; j++ ) {
    //         cout<<SC_Sf[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    SC_output();

    return 0;
}