// https://codeforces.com/problemset/problem/617/A
#include <stdio.h>

int main(){
    int cnt = 0;
    int a = 0;
    int x;
    scanf ("%d", &x);
    while (a < x){
        if (a + 5 <= x){
            a = a + 5;
            cnt += 1;
        }
        else if (a + 4 <= x){
            a = a + 4;
            cnt += 1;
        }
        else if (a + 3 <= x){
            a = a + 3;
            cnt += 1;
        }
        else if (a + 2 <= x){
            a = a + 2;
            cnt += 1;
        }
        else if (a + 1 <= x){
            a = a + 1;
            cnt += 1;
        }
    }
    printf ("%d", cnt);
    return 0;
}