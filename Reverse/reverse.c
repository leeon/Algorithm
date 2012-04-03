#include<stdio.h>
#include<stdlib.h>

#define BUF 300

void printChar(char*s);
char* normal_reverse(char*s);
char* swap_reverse(char*s);
char* XOR_reverse(char*s);
char* word_reverse(char*s);
void reverse(char*left,char*right);

int main()
{
	char buf[BUF];
	
    	printf("please intput your favorite string!\n");
	gets(buf);
	printChar(buf); /*a regular sequence*/
	printChar(normal_reverse(buf));
//	printChar(swap_reverse(buf));
//	printChar(XOR_reverse(buf));
	printChar(word_reverse(buf));
	
	return 0;
}

/*function to print a string*/
void printChar(char* s)
{
	char *p =s;
	while(*p)
	{
		printf("%c",*p++);
	}
	printf("\n");
}


/*a normal reverse algorithm*/
char* normal_reverse(char * s )
{
	char *p = s;
	int size = 0;
	while(*++p)
	{
		size++;

	} //do nothing
	p--; // back from '\0'
	char * store = (char*)malloc((size+1)*sizeof(char));
        char * q  = store;
	while(p >= s)
	{
		*q++ = *p--;
	}
	*q = '\0';
	return store;
}


/*a swap reverse algoritm*/

char* swap_reverse(char*s)
{
	char *left = s;
	char *right = s;
        while(*right)
	{
		right++;
	}
	right--; // BACK from '\0'
	
	char temp = 'a';
	while(right> left)
	{
		temp = *right;
		*right-- = *left;
		*left++ = temp;
	}	
	return s;

}

/*a reverse method that dosen't use any addtional space*/

char* XOR_reverse(char*s)
{
	char *left = s;
	char *right = s;
	while(*right)
	{
		right++;
	}
	right--; // back from '\0'

	while(right > left)
	{
		*left = *left ^ *right;
		*right = *left ^ *right;
		*left = *left++ ^ *right--;
		
	}
	return s;
}

/*the basic method to reverse a string*/
void reverse(char*left,char*right)
{
	char temp = 'a';
	while(right > left)
	{
		temp = *right;
		*right-- = *left;
		*left++ = temp;
	}
}

char* word_reverse(char* s)
{
	char* p = s;
	char* tag = s;
        while(*p != '\0')
	{
		if(*p == ' ')
		{
			reverse(tag,p-1);
			tag = ++p;
		}
		else
		{
			p++;
		}

	}

       	reverse(tag,p-1);  // the last word
	reverse(s,p-1);
		
	return s;
}













