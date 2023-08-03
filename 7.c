// https://codeforces.com/problemset/problem/467/A
#include <stdio.h>

int main(){
    int n;
    int m;
    int t;
    int cnt = 0;
    scanf ("%d", &t);
    for (int i = 0; i < t; i++){
        scanf ("%d" "%d", &n, &m);
        if (n + 2 <= m){
        cnt++;
        }
    }
    printf ("%d", cnt);
    return 0;
}