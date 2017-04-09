/*
 * =====================================================================================
 *
 *       Filename:  Overjas_hw9_task2.c
 *       	Usage:  ./Overjas_hw9_task2.c
 *    Description:  task2
 *
 *        Version:  1.0
 *        Created:  04/04/2017 04:01:21 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kyle Webb (), kylewebbear@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* Standard Library */
#include <math.h>		/* Math Libarary compile with -lm */

/* Function Prototypes */

/* Main Program */
int main(int argc, char *argv[])
{
	FILE *inFile;
	int rcValue [ROWS][COLUMNS];
	int r, c;
	inFile = fopen("zone1.txt", "r");
	if(inFile == NULL)
	{
		printf("The file was not opened.\n");
		exit(1);
	}
	else
	{
		for(r = 0; r < ROWS; r++)
		{
			for(c = 0; c < COLUMNS; c++)
			{
				fcanf(inFile, "%d", &rcValue[r][c]);
			}
		}
	}
	
	return 0;
}


/* Function Defenitions */


