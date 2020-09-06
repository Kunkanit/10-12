#include<stdio.h>
int odd_even(int x) {


	if ((x % 2) == 0 || x == 0) {

		return 0;////even

	}
	else if (x % 2 != 0) {
		return 1;///odd

	}
	else {
		return 2;///Error

	}


}

int main() {
	int num, i,j;
	printf("Enter number: ");
	scanf_s("%d", &num);
	int Odd = odd_even(num);
	if (num> 0&&Odd == 1) {
		for (i = 1; i <= num; i++) {
			for (j = 1; j <= num; j++) {
				if (i == j || i + j == num + 1) {
					printf("X");
				}
				else {
					printf(" ");
				}
			}

			printf("\n");
		}


	}
	else {
		printf("Enter wrong number");
	}

	return 0;
}