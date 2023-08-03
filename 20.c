// PRESET
#include <stdio.h>
#include <ctype.h>

int main(){
    int n;
    int m;
    int i = 0;
    scanf ("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < m; i++){
        a[i] = n / m;
    }
    n =  n % m;
    while (n-- && i < m) {
        a[i]++;
        i++;
    }
    for (int i = 0; i < m; i++){
        printf ("%d ", a[i]);
    }
    return 0;
}