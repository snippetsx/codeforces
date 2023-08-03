// https://codeforces.com/problemset/problem/996/A
#include <stdio.h>

int main(){
    int n;
    int cnt = 0;
    scanf ("%d", &n);
    while (n != 0){
         if(n >= 100){
            cnt++;
            n -= 100;
        }
        else if((n >= 20) && (n < 100)){
            cnt++;
            n -= 20;
        }
        else if((n >= 10) && (n < 20)){
            cnt++;
            n -= 10;
        }
        else if((n >= 5) && (n < 10)){
            cnt++;
            n -= 5;
        }
        else{
            cnt++;
            n--;
        }
    }
    printf("%d", cnt);
    return 0;
}