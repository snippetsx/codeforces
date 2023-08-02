// https://codeforces.com/problemset/problem/282/A
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char str[3];
    int x = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
        scanf ("%s", &str);
        if (strcmp (str, "X++") == 0 || strcmp (str, "++X") == 0){
            x++;
        }
        else if (strcmp (str, "X--") == 0 || strcmp (str, "--X") == 0){
            x--;
        }

    }
    printf ("%d", x);
    return 0;
}