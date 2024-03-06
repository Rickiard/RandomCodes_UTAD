#include <stdio.h>

int main()
{
	int a, b;
	int *p;
	
	p = &a;
	
	a = 5; //*p = 5
	*p = 7; //a = 7
	
	p = &b;
		
	b = 10;	//*p = 10
	*p = 20; //b = 20; a = 7	
	
	*p = a + b; //27
	(*p)+= a; //34
	(*p)++; //35
	(*p)+= 10; //45
	
	printf("%d", sizeof(*p));
	return 1;
}
