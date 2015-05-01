#include <stdio.h>
#include <string.h>

struct Object{
	char name[100];
	int number;
}lol;

Object yo;

void main(){
	yo.number = 11;
	strcpy(yo.name, "yooooooooo");

	Object *lel;
	lel = &yo;
	(*lel).number = 12;
	strcpy((*lel).name,"Sap");

	printf("%d, %s.\n", yo.number, yo.name);
	strcmp("bob", "bob");
	while (1 == 1){

	}
}