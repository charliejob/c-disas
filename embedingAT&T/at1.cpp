#include <stdio.h>
int main(void) {
     long eax1=4;
     long ebx=2;
     __asm__ __volatile__ ("add %1, %0"
              : "=c"((long)ebx)
              : "a"((long)eax1), "c"((long)ebx)
              : "1" 
              );  
      printf("ebx=%d/n", ebx);
    return 0;
}




Reading symbols from /unimrcp/conf/a.out...(no debugging symbols found)...done.
(gdb) disas main
Dump of assembler code for function main:
   0x00000000004005ed <+0>:	push   %rbp
   0x00000000004005ee <+1>:	mov    %rsp,%rbp
   0x00000000004005f1 <+4>:	sub    $0x10,%rsp
   0x00000000004005f5 <+8>:	movq   $0x4,-0x8(%rbp)
   0x00000000004005fd <+16>:	movq   $0x2,-0x10(%rbp)
   0x0000000000400605 <+24>:	mov    -0x8(%rbp),%rax
   0x0000000000400609 <+28>:	mov    -0x10(%rbp),%rcx
   0x000000000040060d <+32>:	add    %rax,%rcx
   0x0000000000400610 <+35>:	mov    %rcx,%rax
   0x0000000000400613 <+38>:	mov    %rax,-0x10(%rbp)
   0x0000000000400617 <+42>:	mov    -0x10(%rbp),%rax
   0x000000000040061b <+46>:	mov    %rax,%rsi
   0x000000000040061e <+49>:	mov    $0x4006d0,%edi
   0x0000000000400623 <+54>:	mov    $0x0,%eax
   0x0000000000400628 <+59>:	callq  0x4004d0 <printf@plt>
   0x000000000040062d <+64>:	mov    $0x0,%eax
   0x0000000000400632 <+69>:	leaveq 
   0x0000000000400633 <+70>:	retq   
End of assembler dump.
