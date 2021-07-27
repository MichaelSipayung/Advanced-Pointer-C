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
	logicalOperation();
	pointerAndArray();
	traverseArrayPointer();
	advancedArrayPoin();
	traverseChar();
	accessingArrayPoint();
	
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
void logicalOperation() {
	int nilai = 100, nilai2 = 100,*pn1,*pn2;
	pn1 = &nilai;
	pn2 = &nilai2;
	//compare the address
	printf("\n");
	if (pn1<pn2)
	{
		printf("first address point to the lower addreses\n");
	}
	else {
		printf("the second address point to the lower addreses\n");
	}
}
void pointerAndArray() {
	int array[] = { 1,2,3,4,5 };
	printf("test the relation between an array and pointer %d", *(array));//equivalent call .. array[i]
	printf("test the relation between an array and pointer %d", *(array+1));//without make temporary pointer
}
void traverseArrayPointer() {
	int array[] = { 1,2,3,4,5,6 };
	int end = sizeof(array) / sizeof(*array);
	int begin = 0;
	printf("\nResult \t: [");
	while (begin!=(end))
	{
		printf("%d|", *(array+begin));
		++begin;
	}
	printf("]\n");
}
void advancedArrayPoin() {
	int array[] = { 1,2,3,4,5,6 };
	int total = 0;
	int end = sizeof(array) / sizeof(*array);
	int begin = 0;
	while (begin!=end)
	{
		total += (*(array + begin));
		++begin;
	}
	printf("Result sum all element \t: %d \n", total);
}
void traverseChar() {
	char sequence[] = "michael sipayung",*point;
	point = sequence;
	int end = sizeof(sequence) / sizeof(*sequence);
	int begin = 0;
	while (begin!=(end-1))//detection through null character
	{
		*(sequence+begin) = toupper(*(sequence+begin));
		++begin;
	}
	printf("Result %s ", sequence);
}
void accessingArrayPoint() {
	int x[5],*pointer;
	pointer = x;
	*(pointer) = 12;
	*(pointer + 1) = 13;
	printf("\n1.First data\t: %d \n", *pointer);
	printf("2.The Second data\t: %d \n", *(pointer+1));
	int begin=0,nexbegin = 0;
	int end = sizeof(x) / sizeof(*x);
	while (begin!=end)
	{
		*(pointer+begin) = begin;
		++begin;
	}
	printf("After assign a new value to array through pointer \t: [ ");
	while (nexbegin!=end)
	{
		printf("%d|", *(x + nexbegin));
		++nexbegin;
	}
	printf("]\n");
}

