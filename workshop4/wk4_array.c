#include <stdio.h>
#define SIZE 3
int main(void)
{
	int items[SIZE];  // = { 0 };
	int i;
	int mark;
	//float sum = 0;
	float mean;
	int sum = 0;
	
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a value: ");
		scanf("%d", &items[i]);
		sum += items[i];
		printf("items [%d] = %d\n", i, items[i]);
		
	}
	
	mean = (float) sum / SIZE;
	printf("The average is: %.2f\n", mean);

	return 0;
}    
























//scanf("%d", &mark);
//items[i] = mark;
//items[i] = i + 1;

/*
for (i = 0; i < SIZE; i++) {
sum += items[i];
// sum = sum + items[i];
}*/

//	float noOfItem = SIZE;

//float mean = sum / SIZE;
