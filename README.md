# Buffer_Overflow
The Buffer Overflow respository contains a collection of files designed around buffer overflow attack and defense. By exploiting fixed length buffers and overwriting critical stack sections a malicious user can inject malicious code to reroute the control flow of the program and grant unauthorized access. This project is designed to gain experience with such vulnerabilities.

This repository contains a makefile that by default creates a buffer of size 517 and an offset of 200, which are input when running the exploit that creates the file used to overflow the buffer. For this project the stack executable must be compiled with stack protection disabled and executable stack enabled.
