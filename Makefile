
clean:
	rm -f *.o *.bin

attack:
	gcc -o exploit exploit.c
	./exploit 517 200
	gcc -o stack -z execstack -fno-stack-protector stack.c
	./stack
