#include <stdio.h>
//#include <conio.h>

int main(){
	int i;
	char *point1;
	char nice = 'n';
	char v[4][8] = {"green", "cyan", "red", "blue"};	
	char * pointzero[] = {"Gorillaz", "Guns N Roses", "Gamma Ray"};

	point1 = &v[1][0];

	printf("%c\t", *point1);
	printf("%p\n", point1);

	point1 = point1 + 2;

	printf("%c\t", *point1);
	printf("%p\n", point1);
	
	point1 = &v[3][2];

	printf("%c\t", *point1);
	printf("%p\n", point1);

	point1 = &v[1][2];

	printf("%c\t", *point1);
	printf("%p\n", point1);

	point1++;

	printf("%c\t", *point1);
	printf("%p\n\n", point1);	

	printf("%s\t %s\t %s\t", &pointzero[0][0], &pointzero[1][0], &pointzero[2][0]);
	
	/*
	point1 = &nice;

	printf("%s\t", *point1);
	printf("%p\n", point1);

	printf("%c", pointzero[0]);
	printf("%p", point1);

	printf("%c", *point1);
	printf("%p", point1);*/

	return 0;

};
