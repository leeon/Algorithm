#include <stdio.h>

#include <stdlib.h>

char list[] = "abcde";
int getPointerParaSize(char*a);
int getArrayParaSize(char a[]);

void printPointerAddress(char *a);
void printArrayAddress(char a[]);
int main()
{
        char *p = list;
        printf("%c\n",p[1]);
	printf("The size of list[] is %d \n" , sizeof(list));
	printf("The size of list in Pointer  para is %d \n", getPointerParaSize(list));
	printf("The size of list in Array para is %d \n",getArrayParaSize(list));

	
	
	
	printf("\nthe address of global a is %#x\n",&list);
	printf("the address of global a[0] is %#x \n",&(list[0]));
	printf("the address of global a[1] is %#x \n",&(list[1]));

	printArrayAddress(list);
	printPointerAddress(list);
	return 0;
}


/*
 two method to get the size of the parameter. 
 Goal: to test what real type the parameter is.
*/
int getArrayParaSize(char a[])
{
	return sizeof(a);
}

int getPointerParaSize(char *a)
{
	return sizeof(a);
} 


/*
 functions to exmaine the address of an array.
*/



void printArrayAddress(char a[])
{
	printf("address in the Array Parameter:\n");
	printf("the address of a is %#x \n",&a);
	printf("the address of a[0] is %#x \n",&(a[0]));
	printf("the address of a[1] is %#x \n",&(a[1]));

}

void printPointerAddress(char *a)
{
	printf("address in the Pointer Parameter:\n");
	printf("the address of a is %#x \n",&a);
	printf("the address of a[0] is %#x \n ",&(a[0]));
	printf("the address of a[1] is %#x \n",&(a[1]));
}






