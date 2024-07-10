#include<stdio.h>
#include<conio.h>
typedef struct car{
	int model;
	int year;
	int price;
}car;
main(){
	int i;
	car arr[4];
	arr[0].model=24;
	arr[0].year=2018;
	arr[0].price=230000;
	
	arr[1].model=15;
	arr[1].year=2016;
	arr[1].price=330000;
	
	arr[2].model=56;
	arr[2].year=2009;
	arr[2].price=540000;
	
	arr[3].model=10;
	arr[3].year=1985;
	arr[3].price=540000;
	
	for(i=0;i<4;i++){
		printf("\nYour model is %d",arr[i].model);
		printf("\nYour year is %d",arr[i].year);
		printf("\nYour  is %d",arr[i].price);
		printf("\n\n");
	}
	getch();
}
