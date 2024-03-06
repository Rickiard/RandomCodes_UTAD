//Prog. Proc. exer. 12

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float bytes;
	float kbytes;
	float mbytes;
	float gbytes;
	float tbytes;
	
	printf("Introduza o valor de bytes:");
	scanf("%f", &bytes);
	
	kbytes = bytes / 1024;
	mbytes = kbytes / 1024;
	gbytes = mbytes / 1024;
	tbytes = gbytes / 1024;
	
	if(kbytes >= 1 && kbytes < 1024)
	{
		printf("\nO valor e %.2f KB\n", kbytes);
	}
	else if(mbytes >= 1 && mbytes < 1024)
	{
		printf("\nO valor e %.2f MB\n", mbytes);
	}
	else if(gbytes >= 1 && gbytes < 1024)
	{
		printf("\nO valor e %.2f GB\n", gbytes);
	}
	else if(tbytes >= 1)
	{
		printf("\nO valor e %.2f TB\n", tbytes);
	}
	else
	{
		printf("\nO valor e %.2f B\n", bytes);
	}
	
	return 1;
}
