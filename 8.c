// https://codeforces.com/problemset/problem/231/A
#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    int a;
    int b;
    int c;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
        scanf ("%d" "%d" "%d", &a, &b, &c);
        if (((a == 1) && (b == 1)) || ((b == 1) && (c == 1)) || ((c == 1) && (a == 1)) || ((a == 1) && (b == 1) && (c == 1))){
            cnt += 1;
        }
    }
    printf ("%d", cnt);
    return 0;
}