#include <stdio.h>

int main() {
	int i = 1;

	for ( ; i <= 100; i++){
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		
        printf("\n");
	}	

	return 0;
}