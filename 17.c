// PRESET
#include <stdio.h>
#include <ctype.h>

int main()
{
    int k;
    int n;
    int w;
    int ans = 0;
    scanf ("%d" "%d" "%d", &k, &n, &w);
    for (int i = 1; i <= w; i++){
        ans = ans + i * k;
    }
    if (ans == n || ans < n){
        printf ("0");
    }
    else{
        printf ("%d", ans - n);
    }
    return 0;
}