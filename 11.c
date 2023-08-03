// https://codeforces.com/problemset/problem/705/A
#include <stdio.h>
#include <ctype.h>

int main(){
    int n;
    scanf ("%d", &n);
    while (n != 0){
		if (n > 1){
			printf ("%s", "I hate it ");
		}
		else if (n == 1){
			printf ("%s", "I love that ");
			break;
		}
		n -= 1;
		if (n > 1){
			printf ("%s", "I hate it ");
		}
		else if (n == 1){
			printf ("%s", "I love that ");
			break;
		}
		n -= 1;
	}
    return 0;
}