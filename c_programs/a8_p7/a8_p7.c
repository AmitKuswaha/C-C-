/*
CH-230-A
a8_p7.c
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[50]; 	/* array to store input string from keyboard */
	char txt1[100] ;		
	char txt2[100] ;
	printf("Name of first file: ");
	fgets(input, sizeof(input), stdin);
	
	input[strlen(input) - 1] = '\0'; /* ignore '\n' character */

	FILE *first;
	first = fopen(input, "r");
	if (first == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}
	fgets(txt1, 100, first);
	fclose(first);


	printf("Name of second file: ");
	fgets(input, sizeof(input), stdin);

	input[strlen(input) - 1] = '\0'; /* ignore '\n' character */

	FILE *second;
	second = fopen(input, "r");
	if (second == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}
	fgets(txt2, 100, second);
	fclose(second);


	FILE *out;
	out = fopen("merge12.txt", "w");
	
	if (out == NULL)
	{
		printf("Cannot open file!\n");
		exit(1);
	}

	fputs(txt1, out);
	fputs(txt2, out);
	

	fclose(out);

	return 0;

}