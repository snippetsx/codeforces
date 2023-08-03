// https://codeforces.com/problemset/problem/71/A
#include <stdio.h>
#include <string.h>


int main(){
    int n;
    char str[100];
    scanf ("%d", &n);
    for (int i = 0; i <= n - 1; i++){
        scanf ("%s", &str);
        int a = strlen(str);
        if (a > 10){
            printf ("%s%d%s", str[0], a - 2, str[a - 1]);
        }
        else{
            printf ("%s", str);
        }
 
    }
    return 0;
}