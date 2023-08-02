// https://codeforces.com/problemset/problem/1030/A
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int v;
    char state[5] = "EASY";
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
        scanf ("%d", &v);
        if (v == 1){
            strcpy (state, "HARD");
        }
    }
    printf ("%s", state);
    return 0;
}