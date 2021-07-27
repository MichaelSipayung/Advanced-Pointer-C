// cPointer.cpp : Defines the entry point for the application.
//

#include "cPointer.h"


int main()
{
	printf("hello cmake \n");
	pointer();
	assignmentPointer();
	aritmaticOperation();
	traverseElementPoin();
	advancedTraverse();
	return 0;
}
void pointer() {
	char* x_address, x,y;
	x = 'x';
	y = 'y';
	x_address = &x;
	printf("test address \t: %p  and value \t: %c \n", x_address, *x_address);
	//exchange 
	char* y_add;
	y_add = &y;
	char temp;
	temp = *x_address;
	*x_address = *y_add;
	*y_add = temp;
	printf("x_value after swap \t: %c , y_value after move\t: %c \n", *x_address, *y_add);
}
void assignmentPointer() {
	float y, * y1, * y2;
	y = 126;
	y1 = &y;
	y2 = y1;
	printf("1.Point to address \t: %p \n", y1);
	printf("2.Point to address \t: %p \n", y2);
}
void aritmaticOperation() {
	int addData[] = { 1,2,3,4,5 };
	int* p;
	p = addData;
	printf("1.addition operation, data 1 \t: %d , address \t: %p \n", *(p), p);
	printf("2.addition operation, data 2 \t: %d , address \t: %p \n", *(p+1), p+1);
}
void traverseElementPoin() {
	char address[] = "address";//null terminated string
	int size = sizeof(address) / sizeof(*address);
	char* point;
	point = address;//has same meaning to &address[0]
	printf("Traverse result \t: ");
	while (size-1>0)
	{
		printf("%c |", *point);
		--size;
		++point;
	}
	printf("\n");
}
void advancedTraverse() {
	int* p_first, * s_second;
	int x[5] = { 25,15,55,5,75 };
	p_first = &x[0];
	s_second = &x[5];
	while (p_first!=s_second)
	{
		printf("%d | ", *p_first);
		++p_first;
	}
}