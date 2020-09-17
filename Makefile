
clean:
	rm -f *.o *.bin

attack:
	gcc -o exploit exploit.c
	./exploit 517 200
	gcc -o stack -fno-stack-protector -z noexecstack stack.c
	./stack
