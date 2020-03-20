int main(){
	const int nConst = 5;
	int *pConst = (int*)&nConst;
	*pConst = 6;
}

Breakpoint 1, main () at 1.cpp:3
3		const int nConst = 5;
Dump of assembler code for function main():
2	int main(){
   0x00000000004005ed <+0>:	push   %rbp
   0x00000000004005ee <+1>:	mov    %rsp,%rbp
   0x00000000004005f1 <+4>:	sub    $0x10,%rsp

3		const int nConst = 5;
=> 0x00000000004005f5 <+8>:	movl   $0x5,-0xc(%rbp)

4		int *pConst = (int*)&nConst;
   0x00000000004005fc <+15>:	lea    -0xc(%rbp),%rax
   0x0000000000400600 <+19>:	mov    %rax,-0x8(%rbp)

5		*pConst = 6;
   0x0000000000400604 <+23>:	mov    -0x8(%rbp),%rax
   0x0000000000400608 <+27>:	movl   $0x6,(%rax)

6	       printf("nConst [%d]\n",nConst);
   0x000000000040060e <+33>:	mov    $0x5,%esi
   0x0000000000400613 <+38>:	mov    $0x4006c0,%edi
   0x0000000000400618 <+43>:	mov    $0x0,%eax
   0x000000000040061d <+48>:	callq  0x4004d0 <printf@plt>

7	       return nConst;
   0x0000000000400622 <+53>:	mov    $0x5,%eax
