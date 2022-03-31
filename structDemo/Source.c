#include <stdio.h>
#include <stdlib.h>
#define SIZE 25

typedef struct {
	int lot_id;
	char brand[SIZE];
	char model[SIZE];
	int man_year;
	float price;
}car_c;

void printCar(car_c);
void scanCar(car_c* car);

int main(void)
{
	car_c car1, car2, car3 = { 3,"Honda","Civic",2013,115.000 };
	car_c* p = &car1;

	scanCar(p);
	printCar(car1);
	printCar(car3);

	return (0);
}

void printCar(car_c car) {
	printf("Id: %d\n", car.lot_id);
	printf("Marka: %s\n", car.brand);
	printf("Model: %s\n", car.model);
	printf("Uretim Yili: %d\n", car.man_year);
	printf("Fiyat: %f\n", car.price);
	printf("\n");
}

void scanCar(car_c* car) {

	printf("Id: ");
	scanf("%d", &car->lot_id);
	printf("Marka: ");
	scanf("%s", car->brand);
	printf("Model: ");
	scanf("%s", car->model);
	printf("Uretim Yili: ");
	scanf("%d", &car->man_year);
	printf("Fiyat: ");
	scanf("%f", &car->price);
	printf("\n");

}