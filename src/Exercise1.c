/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	
	int pascalTriangle( int colum, int n) {
	if ( colum == 0 || colum == n ) {
		return 1;
	} else {
		return pascalTriangle(colum-1,n-1) + pascalTriangle(colum,n-1);
	}
}

	int row, colum;
	for (row=0; row <= n; row++) {
		for (colum=0; colum <= row; colum++) {
			printf("%d ", pascalTriangle(colum,row));
		}
		printf("\n");
	}  
    
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
