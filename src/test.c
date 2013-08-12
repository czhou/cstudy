#include <stdio.h>
#include <limits.h>
main(){
	unsigned int test = 2;
	unsigned int printv = 0;
	int i;
	for( i = 2; i <= 32; i++){
		printv = test * 2 - 1;
		test = test * 2;
		printf("2 ^ %d - 1 = %u\n", i, printv);
		printf("2 ^ %d = %u\n", i, test);
	}
	printf("Size of Char %d\n", CHAR_BIT);
	printf("Size of Char Max %d\n", CHAR_MAX);
	printf("Size of Char Min %d\n", CHAR_MIN);
	printf("Size of int min %d\n", INT_MIN);
	printf("Size of int max %d\n", INT_MAX);
	printf("Size of long min %ld\n", LONG_MIN);       /* RB */
	printf("Size of long max %ld\n", LONG_MAX);       /* RB */
	printf("Size of short min %d\n", SHRT_MIN);
	printf("Size of short max %d\n", SHRT_MAX);
	printf("Size of unsigned char %u\n", UCHAR_MAX);  /* SF */
	printf("Size of unsigned long %lu\n", ULONG_MAX); /* RB */
	printf("Size of unsigned int %u\n", UINT_MAX);    /* RB */
	printf("Size of unsigned short %u\n", USHRT_MAX); /* SF */
	
	unsigned int qq = 4294967295;
	printf("shit is %u\n", qq);
	return 0;

}
