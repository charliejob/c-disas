#include <stdio.h>
class CReturn{
public:
	int m_nNumber;
	int m_nArry[10];
};
CReturn GetCReturn(){
	CReturn RetObj;
	RetObj.m_nNumber = 0;
	for(int i=0;i<10;i++){
		RetObj.m_nArry[i] = i+1;
	}
	return RetObj;
}

int main(int argc,char* argv[]){
	CReturn objA;
	objA = GetCReturn();
	printf("%d %d %d",objA.m_nNumber,objA.m_nArry[0],objA.m_nArry[9]);
}


9		RetObj.m_nNumber = 0;
(gdb) disas
Dump of assembler code for function GetCReturn():
   0x00000000004005ed <+0>:	push   %rbp
   0x00000000004005ee <+1>:	mov    %rsp,%rbp
   0x00000000004005f1 <+4>:	mov    %rdi,-0x18(%rbp)
=> 0x00000000004005f5 <+8>:	mov    -0x18(%rbp),%rax
   0x00000000004005f9 <+12>:	movl   $0x0,(%rax)
   0x00000000004005ff <+18>:	movl   $0x0,-0x4(%rbp)
   0x0000000000400606 <+25>:	jmp    0x400620 <GetCReturn()+51>
   0x0000000000400608 <+27>:	mov    -0x4(%rbp),%eax
   0x000000000040060b <+30>:	lea    0x1(%rax),%ecx
   0x000000000040060e <+33>:	mov    -0x18(%rbp),%rax
   0x0000000000400612 <+37>:	mov    -0x4(%rbp),%edx
   0x0000000000400615 <+40>:	movslq %edx,%rdx
   0x0000000000400618 <+43>:	mov    %ecx,0x4(%rax,%rdx,4)
   0x000000000040061c <+47>:	addl   $0x1,-0x4(%rbp)
   0x0000000000400620 <+51>:	cmpl   $0x9,-0x4(%rbp)
   0x0000000000400624 <+55>:	jle    0x400608 <GetCReturn()+27>
   0x0000000000400626 <+57>:	nop
   0x0000000000400627 <+58>:	mov    -0x18(%rbp),%rax
   0x000000000040062b <+62>:	pop    %rbp
   0x000000000040062c <+63>:	retq   
End of assembler dump.
(gdb) 



















