OBJ=kernel
CC=gcc -Wall -m32

all: $(OBJ) 

kernel: boot.o int.o kernel.o screen.o lib.o gdt.o interrupt.o idt.o pic.o
	ld -m elf_i386 -Ttext=100000 --entry=_start $^ -o $@

boot.o: boot.asm
	nasm -f elf32 -o $@ $^

int.o: int.asm
	nasm -f elf32 -o $@ $^

.o: .c 
	$(CC) -c $^

clean:
	rm -f $(OBJ) *.o
