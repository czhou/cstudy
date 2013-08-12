#include <stdio.h>
/* count characters in input; 1st version */
main(){
	long nc;
	nc = 0;
	int c ;
	while(c = getchar()){
		if(c == EOF){
			break;
		}else{

			if(c == '\n'){
				++nc;
			}
		}
	}
	printf("%ld\n", nc);
}
