/*
 ============================================================================
 Name        : byteorderlib.c
 Author      : luliang
 Version     :
 Copyright   : Mozilla Public License, version 2.0
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "byteorder.h"

int main(void)
{
	{/* check the byte order of local environment */
		if(isLittleEndian()) printf("The host is little endian\n");
		else printf("The host is big endian\n");
	}
	{/*big endian integer to little endian */
		srand((unsigned)time(NULL));
		int num = rand();
		printf("big endian number %d is converted to little endian number %d\n",
				num, big2littlei(num));
	}
	{/*little endian integer to big endian */
		srand((unsigned)time(NULL));
		int num = rand();
		printf("little endian number %d is converted to big endian number %d\n",
				num, little2bigi(num));
	}
	return 0;
}
