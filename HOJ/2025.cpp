#include <iostream>
#include <utility>
#include <stdio.h>
using namespace std;

int main(){
    pair <float,float> xy1;
    pair <float,float> xy2;
    cin >> xy1.first >> xy1.second;
    cin >> xy2.first >> xy2.second;
    if(xy1.first>xy2.first){
        printf("%f ",xy1.first);
    }else printf("%f ",xy2.first);
    if(xy1.second<xy2.second){
        printf("%f\n",xy1.second);
    }else printf("%f\n",xy2.second);
    return 0;
}