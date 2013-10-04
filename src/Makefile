CC=g++
CCFLAGS=-Wall -O2

all: byteorderlib.out 

byteorderlib.out: byteorder.o byteorderlib.o
	$(CC) $(CCFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CCFLAGS) -c $<

.PHONY: clean

clean:
	rm *.o byteorderlib.out


