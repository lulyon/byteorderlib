#ifndef BYTE_ORDER_H_
#define BYTE_ORDER_H_

/* check the byte order of local environment */
int isLittleEndian();

/*big endian integer to little endian */
short big2littles(short num);
unsigned short big2littleus(unsigned short num);
int big2littlei(int num);
unsigned int big2littleui(unsigned int num);
long big2littlel(long num);
unsigned long big2littleul(unsigned long num);

/*little endian integer to big endian */
short little2bigs(short num);
unsigned short little2bigus(unsigned short num);
int little2bigi(int num);
unsigned int little2bigui(unsigned int num);
long little2bigl(long num);
unsigned long little2bigul(unsigned long num);


/* big endian binary to integer */
short bigbinary2s(char *binary);
unsigned short bigbinary2us(char *binary);
int bigbinary2i(char *binary);
unsigned int bigbinary2ui(char *binary);
long bigbinary2l(char *binary);
unsigned long bigbinary2ul(char *binary);


/* little endian binary to integer */
short littlebinary2s(char *binary);
unsigned short littlebinary2us(char *binary);
int littlebinary2i(char *binary);
unsigned int littlebinary2ui(char *binary);
long littlebinary2l(char *binary);
unsigned long littlebinary2ul(char *binary);

#endif // BYTE_ORDER_H_
