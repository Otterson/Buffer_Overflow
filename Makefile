


attack:
	gcc -o exploit exploit.c
	gcc -o stack -z execstack -fno-stack-protector stack.c
	./exploit
	./stack
