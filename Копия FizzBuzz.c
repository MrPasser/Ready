#include <stdio.h>

int main() {
	int i = 1;

	for ( ; i <= 100; i++){
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
            printf("%d", i);
		}
        printf("\n");
	}	

	return 0;
}