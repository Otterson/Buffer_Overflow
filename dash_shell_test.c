#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>

/*
This is just an example of C code that includes a Set-UID call to elevate permission,
which gives us more access and control when we inject and run our shellcode. Assembly code for 
the setuid(0) call is included in the updated version of exploit.c

Set up and compile commands:
$ gcc dash_shell_test.c -0 dash_shell_test
$ sudo chown root dash_shell_test 
$ sudo chmod 4755 dash_shell_test
*/

int main(){
	char* argv[2];
	argv[0] = "/bin/sh";
	argv[1] = NULL;

	setuid(0);
	execve("/bin/sh", argv, null);
	
	return 0;
}
