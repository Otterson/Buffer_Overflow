#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/*
  This program reads a string input from a file "badfile" and copys that string into a buffer
  size 517 then into another buffer thats only size 18. This overflow vulnerability can be easily
  exploited by the user. Our goal is to create the file "badfile" so that we can inject
  code and gain a root access shell.

  compile: gcc -o stack -z execstack -fno-stack-protector stack.c
    -z execstack defines that the program stack is executable. Must be set as linux does not allow by default
    -fno-stack-protector removes the stack boundary protection
*/

int bof(char* str){
  char buffer[18];
  strcpy(buffer,str); //Buffer Overflow Vulnerability

  return 1;
}

int main(int argc, char**argv){
  char str[517];
  FILE *badfile;
  badfile = fopen("badfile", "r");
  fread(str, sizeof(char), 517, badfile);
  bof(str);
  printf("Returned Properly\n");

  return 1;

}
