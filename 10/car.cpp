#include<stdio.h>
#include<math.h>    
#include<conio.h>
int main() {
	float time,	price;
	char k;
	printf("Motorcycle 20 baht per hours press 'M' \nPrivate car  25 baht per hours press 'P'\nTruck  40 baht per hours press 'T'\n");
	printf("What kind of vehicles: ");
	scanf_s("%c", &k);
	printf("Enter number of Hours: ");
	scanf_s("%f", &time);

	switch (k)
	{
	case'M':case'm':printf("Motorcycle :");
		price = 20 * ceil(time);
		printf("%.0f baht", price);
		break;
	case'P':case'p':printf("Private car :");
		price = 25 * ceil(time);
		printf("%.0f baht", price);
		break;
	case'T':case't':printf("Truck :");
		price = 40 * ceil(time);
		printf("%.0f baht", price);
		break;
	default:printf("Sorry..That car can't be parked here\n");
		break;
	}

	return 0;

}