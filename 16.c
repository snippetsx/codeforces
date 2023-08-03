// https://codeforces.com/problemset/problem/703/A
#include <stdio.h>

int main()
{
    int chris;
    int mish;
    int m = 0;
    int c = 0;
    int r;
    scanf ("%d", &r);
    for (int i = 0; i < r; i++){
        scanf ("%d" "%d", &mish, &chris);
        if (mish > chris){
            m += 1;
        }
        else if (mish < chris){
            c += 1;
        }
    }
    if (c > m){
        printf ("Chris");
    }
    else if (c < m){
        printf ("Mishka");
    }
    else if (c == m){
        printf ("Friendship is magic!^^");
    }
    return 0;
}