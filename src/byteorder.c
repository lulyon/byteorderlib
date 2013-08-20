/*
 * byteorder.c
 *
 *  Created on: 2013-8-18
 *      Author: luliang
 */
#include "byteorder.h"

static void SwapWord(char *binary, int len)
{
	char tmp;
	int i, j;
	for(i = 0, j = len - 1; i < j; ++i, --j)
	{
		tmp = binary[i];
		binary[i] = binary[j];
		binary[j] = tmp;
	}
}

int isLittleEndian()
{
	int i = 1;
	return (*(unsigned char *)&i == 1);
}


short big2littles(short num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

unsigned short big2littleus(unsigned short num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

int big2littlei(int num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

unsigned int big2littleui(unsigned int num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

long big2littlel(long num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

unsigned long big2littleul(unsigned long num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}


short little2bigs(short num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

unsigned short little2bigus(unsigned short num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

int little2bigi(int num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

unsigned int little2bigui(unsigned int num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

long little2bigl(long num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}

unsigned long little2bigul(unsigned long num)
{
	SwapWord((char *)&num, sizeof(num));
	return num;
}


/*big endian integer to host endian */
short big2hosts(short num)
{
	if(isLittleEndian()) return big2littles(num);
	return num;
}

unsigned short big2hostus(unsigned short num)
{
	if(isLittleEndian()) return big2littleus(num);
	return num;
}

int big2hosti(int num)
{
	if(isLittleEndian()) return big2littlei(num);
	return num;
}

unsigned int big2hostui(unsigned int num)
{
	if(isLittleEndian()) return big2littleui(num);
	return num;
}

long big2hostl(long num)
{
	if(isLittleEndian()) return big2littlel(num);
	return num;
}

unsigned long big2hostul(unsigned long num)
{
	if(isLittleEndian()) return big2littleul(num);
	return num;
}

/*little endian integer to host endian */
short little2hosts(short num)
{
	if(isLittleEndian()) return num;
	return little2bigs(num);
}

unsigned short little2hostus(unsigned short num)
{
	if(isLittleEndian()) return num;
	return little2bigus(num);
}

int little2hosti(int num)
{
	if(isLittleEndian()) return num;
	return little2bigi(num);
}

unsigned int little2hostui(unsigned int num)
{
	if(isLittleEndian()) return num;
	return little2bigui(num);
}

long little2hostl(long num)
{
	if(isLittleEndian()) return num;
	return little2bigl(num);
}

unsigned long little2hostul(unsigned long num)
{
	if(isLittleEndian()) return num;
	return little2bigul(num);
}


/* big endian binary to short integer */
short bigbinary2s(char *binary)
{
	short result = 0;
	int len = sizeof(result);
	short exp = 1;
	int i;
	for(i = len - 1; i >= 0; --i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}

unsigned short bigbinary2us(char *binary)
{
	unsigned short result = 0;
	int len = sizeof(result);
	unsigned short exp = 1;
	int i;
	for(i = len - 1; i >= 0; --i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}


int bigbinary2i(char *binary)
{
	int result = 0;
	int len = sizeof(result);
	int exp = 1;
	int i;
	for(i = len - 1; i >= 0; --i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}

unsigned int bigbinary2ui(char *binary)
{
	unsigned int result = 0;
	int len = sizeof(result);
	unsigned int exp = 1;
	int i;
	for(i = len - 1; i >= 0; --i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}


long bigbinary2l(char *binary)
{
	long result = 0;
	int len = sizeof(result);
	long exp = 1;
	int i;
	for(i = len - 1; i >= 0; --i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}

unsigned long bigbinary2ul(char *binary)
{
	unsigned long result = 0;
	int len = sizeof(result);
	unsigned long exp = 1;
	int i;
	for(i = len - 1; i >= 0; --i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}


/* little endian binary to short integer */
short littlebinary2s(char *binary)
{
	short result = 0;
	int len = sizeof(result);
	short exp = 1;
	int i;
	for(i = 0; i < len; ++i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}

unsigned short littlebinary2us(char *binary)
{
	unsigned short result = 0;
	int len = sizeof(result);
	unsigned short exp = 1;
	int i;
	for(i = 0; i < len; ++i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}


int littlebinary2i(char *binary)
{
	int result = 0;
	int len = sizeof(result);
	int exp = 1;
	int i;
	for(i = 0; i < len; ++i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}

unsigned int littlebinary2ui(char *binary)
{
	unsigned int result = 0;
	int len = sizeof(result);
	unsigned int exp = 1;
	int i;
	for(i = 0; i < len; ++i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}


long littlebinary2l(char *binary)
{
	long result = 0;
	int len = sizeof(result);
	long exp = 1;
	int i;
	for(i = 0; i < len; ++i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}

unsigned long littlebinary2ul(char *binary)
{
	unsigned long result = 0;
	int len = sizeof(result);
	unsigned long exp = 1;
	int i;
	for(i = 0; i < len; ++i)
	{
		result += binary[i] * exp;
		exp <<= 8;
	}
	return result;
}

