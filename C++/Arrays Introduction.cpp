#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void revArr(int ar[], int count){
    int tmp;
    for(int i=0;i<count/2;i++)
    {
        tmp=ar[i];
        ar[i]=ar[count-i-1];
        ar[count-1-i]=tmp;

    }
}

void prntArr(int ar[], int count) {
    for(int i = 0; i < count; ++i)
        cout << ar[i] << ' ';

    cout << '\n';
}

int main() {
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    revArr(ar,n);
    prntArr(ar,n);
    return 0;
}
