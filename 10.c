// https://codeforces.com/problemset/problem/271/A
#include <stdio.h>

int main(){
    int n;
    int a;
    int b;
    int c;
    int d;
    scanf ("%d", &n);
    while(n){
        n += 1;
        a = n % 10;
        d = n / 10 / 10 / 10 % 10;
        b = n / 10 % 10;
        c = n / 10 / 10 % 10;
        if ((a != b) && (b != c) && (c != d) && (d != a) && (a != c) && (b != d) ){
            break;
        }
    }
    printf("%d", n);
    return 0;
}