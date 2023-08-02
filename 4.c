// https://codeforces.com/problemset/problem/791/A
#include <stdio.h>
#include <ctype.h>

int main(){
    int a;
    int b;
    int cnt = 0;
    scanf("%d" "%d", &a, &b);
    while (a <= b){
        b = b * 2;
        a = a * 3;
        cnt = cnt + 1;
    }
    printf("%d", cnt);
    return 0;
}