// https://codeforces.com/gym/104441/problem/1
#include <stdio.h>
#include <ctype.h>

int main(){
    int a;
    int n;
    int p;
    int s;
    int m;
    scanf("%d" "%d" "%d" "%d", &n, &m, &s, &p);
    a = n * (60 * m + s) + (n - 1) * p;
    printf("%d\n%d", a / 60, a % 60);
    return 0;
}