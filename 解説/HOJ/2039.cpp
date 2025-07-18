#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int pascal(int n ,int c){
    if(c==0||c==n) return 1;
    return pascal(n-1,c-1)+pascal(n-1,c);
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        cout << pascal(n,i);
        if(i<n) cout << " ";
    }
    cout << endl;
    return (0);
}

/*
n=4の場合

pascal(4,0)====1

pascal(4,1)====4
    3,0==1
    3,1
        2,0==1
        2,1
            1,0==1
            1,1==1

pascal(4,2)==6
    3,1
        2,0====1
        2,1
            1,0==1
            1,1==1
    3,2
        2,1
            1,0==1
            1,1==1
        2,2==1

pascal(4,3)====4
    3,2
        2,1
            1,0==1
            1,1==1
        2,2==1
    3,3==1
pascal(4,4)====1


1,4,6,4,1
*/