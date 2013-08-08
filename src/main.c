#include <stdio.h>
int main(argv){
	/**
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("======== This is a Celsius to Fahr convertion =========\n");
	printf("%s\t\t%10s\n", "Fahr", "Celsius");
	while (fahr <= upper){
		celsius = 5.0 * (fahr - 32.0) /9.0;
		printf("%3.0f\t\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
	**/
	c_to_f_convertion_with_for();
	return 0;
}

int c_to_f_convertion(){
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	printf("======== This is a Celsius to Fahr convertion =========\n");
	printf("%s\t\t%10s\n", "Celsius", "Fahr");
	while (celsius <= upper){
		fahr = celsius * 9.0 / 5.0 + 32.0;
		// celsius = 5.0 * (fahr - 32.0) /9.0;
		printf("%3.0f\t\t%6.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}

int c_to_f_convertion_with_for(){
	int fahr;
	for(fahr = 300; fahr >= 0; fahr -= 20){
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}
	return 0;
}
