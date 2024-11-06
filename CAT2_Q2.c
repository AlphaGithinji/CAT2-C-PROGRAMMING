/*
Alpha Githinji
CT102/G/24626/24
*/


#include <stdio.h>

int main() {
	int i,j;
    
    int scores[2][2][2] = {
        { {65, 92}, {84, 72} }, 
        { {35, 70}, {59, 67} }  
    };

    
    printf("Matrix 1:\n");
    for ( i = 0; i < 2; i++) {  
        for ( j = 0; j < 2; j++) {  
            printf("%d\t", scores[0][i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i = 0; i < 2; i++) {  
        for ( j = 0; j < 2; j++) {  
            printf("%d\t", scores[1][i][j]);
        }
        printf("\n");
    }

    return 0;
}
