// https://codeforces.com/problemset/problem/785/A
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int c;
    scanf ("%d", &n);
    int cnt = 0;
    char fig[14];
    for(int i = 0; i < n; i++){
    	scanf ("%s", &fig);
    	if (strcmp (fig, "Tetrahedron")){
    		cnt += 4;
    	}
    	else if (strcmp (fig, "Cube")){
    		cnt += 6;
    	}
    	else if (strcmp (fig, "Octahedron")){
    		cnt += 8;
    	}
    	else if (strcmp (fig, "Dodecahedron")){
    		cnt += 12;
    	}
    	else if (strcmp (fig, "Icosahedron")){
    		cnt += 20;
    	}
     
    }
    printf ("%d", cnt);
    return 0;
}