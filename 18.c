// https://codeforces.com/problemset/problem/233/A
#include <stdio.h>
#include <ctype.h>

int main(){
    int n;
    int e;
    int o;
    int i;
    scanf ("%d", &n);
    if (n % 2 == 1){
        printf ("-1");
    }
    else {
        e = 2;
        o = 1;
        for(i = 1; i <= n; i++) {
            if(i % 2 == 0) {
                printf ("%d ", o);
                o = o + 2;
            }
            else
            {
                printf ("%d ", e);
                e = e + 2;
            }
        }
    }
    return 0;
}