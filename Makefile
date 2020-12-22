all:
	gcc -o output.exe testprog.c
sanitize:
	gcc -o output.exe testprog.c -fsanitize=address