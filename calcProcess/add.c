
#include <stdio.h>
int main(){
	int nVarOne = 0;
	int nVarTwo = 0;
	nVarOne = nVarOne + 1;
	nVarOne = 1 + 2;
	nVarOne = nVarOne + nVarTwo;
	printf("nVarOne = %d \n", nVarOne);
	return -3;
}

Breakpoint 1, main () at 1.cpp:4
4		int nVarOne = 0;
Dump of assembler code for function main():
3	int main(){
   0x00000000004005ed <+0>:	push   %rbp
   0x00000000004005ee <+1>:	mov    %rsp,%rbp
   0x00000000004005f1 <+4>:	sub    $0x10,%rsp

4		int nVarOne = 0;
=> 0x00000000004005f5 <+8>:	movl   $0x0,-0x4(%rbp)

5		int nVarTwo = 0;
   0x00000000004005fc <+15>:	movl   $0x0,-0x8(%rbp)

6		nVarOne = nVarOne + 1;
   0x0000000000400603 <+22>:	addl   $0x1,-0x4(%rbp)

7		nVarOne = 1 + 2;
   0x0000000000400607 <+26>:	movl   $0x3,-0x4(%rbp)

8		nVarOne = nVarOne + nVarTwo;
   0x000000000040060e <+33>:	mov    -0x8(%rbp),%eax
   0x0000000000400611 <+36>:	add    %eax,-0x4(%rbp)

9		printf("nVarOne = %d \n", nVarOne);
   0x0000000000400614 <+39>:	mov    -0x4(%rbp),%eax
   0x0000000000400617 <+42>:	mov    %eax,%esi
Missing separate debuginfos, use: debuginfo-install libgcc-4.8.5-39.el7.x86_64 libstdc++-4.8.5-39.el7.x86_64
---Type <return> to continue, or q <return> to quit---
   0x0000000000400619 <+44>:	mov    $0x4006c0,%edi
   0x000000000040061e <+49>:	mov    $0x0,%eax
   0x0000000000400623 <+54>:	callq  0x4004d0 <printf@plt>

10		return -3;
   0x0000000000400628 <+59>:	mov    $0xfffffffd,%eax

11	}
   0x000000000040062d <+64>:	leaveq 
   0x000000000040062e <+65>:	retq  