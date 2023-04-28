section .text
	global main

 main:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4	;system call (sys_write)
	int 0x80	;to call kernel

	mov eax, 1	;system call (sys_exit)

	int 0x080

section .rodata
	msg: db "Hello, Holberton", 10
	len: equ $ - msg
