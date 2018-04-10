#include <stdio.h>
//#include <conio.h>

int main(){
	int i;
	char *point1;
	char nice = 'n';
	char v[4][8] = {"green", "yellow", "red", "blue"};	
	char * pointzero[] = {"Gorillaz", "Guns N Roses", "Gamma Ray"};

	point1 = &v[1][0];

	printf("%c\t", *point1);
	printf("%p\t", point1);

	point1++;

	printf("%c\t", *point1);
	printf("%p\t", point1);
	
	point1 = &nice;

	printf("%c\t", *point1);
	printf("%p\t", point1);

	/*
	printf("%c", pointzero[0]);
	printf("%p", point1);

	printf("%c", *point1);
	printf("%p", point1);*/

	return 0;

};
