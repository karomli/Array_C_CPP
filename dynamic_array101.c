#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *data = NULL;
	int size = 0, i;

	printf("How many numbers do you want to input?\n");
	scanf("%d", &size);

	if(size > 0)
		data = malloc(sizeof(size));
	else {
		printf("array size is 0\n");
		return 1;
	}
	
	printf("Please enter your number: \n");
	for(i = 0; i < size; i++) {
		printf("%d. ", i+1);
		scanf("%d", &data[i]);
	}

	i = 0;
	printf("Entered numbers are:\n");
	while(i < size) {
		printf("%d. %d\n", i+1,data[i]);
		i++;
	}
	return 0;
}
