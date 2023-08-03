// https://codeforces.com/problemset/problem/427/A
#include <stdio.h>

int main(){
    int a;
    int d;
    int cnt = 0;
    int pd = 0;
	scanf ("%d", &a);
	for (int i = 0; i < a; i++){
		scanf ("%d", &d);
		if (d > 0){
			pd += d;
		}
		else if (d < 0){
			if (pd == 0){
				cnt += 1;
			}
			else if (pd > 0){
				pd -= 1;
			}
		}
 
	}
    printf ("%d", cnt);
    return 0;
}