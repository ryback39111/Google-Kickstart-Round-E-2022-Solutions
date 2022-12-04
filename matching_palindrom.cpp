#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, x, y, i;
    long long int tip = 0;
    int arr1[101000], arr2[101000];

    scanf("%d%d%d", &N, &x, &y);
    for(i = 0; i<N; i++) {
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i<N; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < N; i++) {
        arr2[i] = arr2[i] - arr1[i];
    }
    sort(arr2, arr2+N);

    for(i = 0; i < N; i++) {
        if(((y>0)&&(arr2[i]>0)) || (x==0)) {
            tip += arr1[i] + arr2[i];
            y--;
        }
        else {
            tip += arr1[i];
            x--;
        }
    }

    printf("Case" ,"%lld\n", tip);

    return 0;
}
