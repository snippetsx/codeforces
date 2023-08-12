// https://codeforces.com/gym/104441/problem/2
#include <stdio.h>
#include <ctype.h>

int tv_channels(int p, int u, int k){
    int t1;
    int t2;
    int d;
    int a1;
    int a2;
    int lp;
    if (p > u){
        t1 = p;
        t2 = u;
        u = t1;
        p = t2;
    }
    d = (u - p);
    lp = d / k;
    a1 = lp + d % k;
    a2 = (lp + 1) + (k - d % k);
    if (a1 < a2){
        return a1;
    }
    else{
        return a2;
    }
}
int min(int a, int b, int c){
    int x = 10000000;
    if(x > a){
        x = a;
    }
    if(x > b){
        x = b;
    }
    if(x > c){
        x = c;
    }
    return x;
}


int main(){
    int n;
    int p;
    int k;
    int u;
    int cnt;
    scanf("%d" "%d" "%d" "%d", &n, &k, &p, &u);
    cnt = min(tv_channels(p, u, k), (p - 1 + k - 1) / k + tv_channels(1, u, k), (n - p + k - 1) / k + tv_channels(n, u, k));
    printf("%d", cnt);
    return 0;
}