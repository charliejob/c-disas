#include <stdio.h>
class CTest{
public:
	void SetNumber(int nNumber){
		m_nInt = nNumber;
	}
public:
	int m_nInt;
	static int s_in;
};
int CTest::s_in = 6;
int main(){
	CTest test;
	test.SetNumber(5);
	printf("CTest : %d\n",test.m_nInt);
	printf("CTest::s_in : %d\n", CTest::s_in);
	return sizeof(test);
}



Dump of assembler code for function main():
   0x00000000004005ed <+0>:	push   %rbp
   0x00000000004005ee <+1>:	mov    %rsp,%rbp
   0x00000000004005f1 <+4>:	sub    $0x10,%rsp
   0x00000000004005f5 <+8>:	lea    -0x10(%rbp),%rax
   0x00000000004005f9 <+12>:	mov    $0x5,%esi
   0x00000000004005fe <+17>:	mov    %rax,%rdi
   0x0000000000400601 <+20>:	callq  0x400638 <CTest::SetNumber(int)>
   0x0000000000400606 <+25>:	mov    -0x10(%rbp),%eax
=> 0x0000000000400609 <+28>:	mov    %eax,%esi
   0x000000000040060b <+30>:	mov    $0x4006e0,%edi
   0x0000000000400610 <+35>:	mov    $0x0,%eax
   0x0000000000400615 <+40>:	callq  0x4004d0 <printf@plt>
   0x000000000040061a <+45>:	mov    0x200a14(%rip),%eax        # 0x601034 <_ZN5CTest4s_inE>
   0x0000000000400620 <+51>:	mov    %eax,%esi
   0x0000000000400622 <+53>:	mov    $0x4006ec,%edi
   0x0000000000400627 <+58>:	mov    $0x0,%eax
   0x000000000040062c <+63>:	callq  0x4004d0 <printf@plt>
   0x0000000000400631 <+68>:	mov    $0x4,%eax
   0x0000000000400636 <+73>:	leaveq 
   0x0000000000400637 <+74>:	retq  