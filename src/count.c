#include <stdio.h>
/* count characters in input; 1st version */
main(){
	char s[] = "wo cao lai~";
	count(s);
}

int count(char a[]){
	char *p;
	p = &a[1];
	printf("this is pointer p's value %c\n", *p);
	p = &a[111111];
	printf("this is pointer p's value %d\n", *p);
	printf("this is pointer p's value %c\n", a[1]);
}
