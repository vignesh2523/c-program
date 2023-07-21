#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//char binaryNumber[] = "10001000";
	//int bin, dec = 0;
     int bin,dec=0;
     scanf("%d",&bin);
	//bin = atoi(binaryNumber);

	for(int i = 0; bin; i++, bin /= 10)
		if (bin % 10==1)
			dec += pow(2, i);

	printf("%d", dec);

	return 0;
}
