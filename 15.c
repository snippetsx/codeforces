// https://codeforces.com/problemset/problem/1294/A
#include <stdio.h>

int main(){
    int t;
	scanf("%d", &t);
	while (t--) {
		int e;
        int y;
        int n;
		scanf ("%d" "%d" "%d", &e, &y, &n);
		if (n - n % e + y <= n) {
			printf ("%d", n - n % e + y); 
		} 
		else {
			printf ("%d",n - n % e - (e - y));
		}
	}
    return 0;
}