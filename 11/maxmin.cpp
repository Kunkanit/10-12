#include<stdio.h>
int main() {
	int i, min, max,num[10];
	printf("Enter nuber: \n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
	}
	max = num[0];
	min = num[0];
	for (i = 0; i < 10; i++) {
		if (max < num[i]) {
			max = num[i];
		}
		else if (num[i] < min) {
			min = num[i];
		}
	}
	printf("%d is max %d is min ", max, min);

	return 0;
}