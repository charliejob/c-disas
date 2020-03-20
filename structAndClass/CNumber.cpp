class CNumber{
public:
	CNumber(){
		m_nOne = 1;
		m_nTwo = 2;
	}
	int GetNumberOne(){
		return m_nOne;
	}
	int GetNumberTwo(){
		return m_nTwo;
	}
private:
	int m_nOne;
	int m_nTwo;
};

void main(){
	CNumber number;
	//number.GetNumberOne();
	return sizeof(number);
}

disas CNumber::GetNumberOne

(gdb) disas
Dump of assembler code for function main():
   0x00000000004005ad <+0>:	push   %rbp
   0x00000000004005ae <+1>:	mov    %rsp,%rbp
   0x00000000004005b1 <+4>:	sub    $0x10,%rsp
   0x00000000004005b5 <+8>:	lea    -0x10(%rbp),%rax
   0x00000000004005b9 <+12>:	mov    %rax,%rdi
=> 0x00000000004005bc <+15>:	callq  0x4005c8 <CNumber::CNumber()>
   0x00000000004005c1 <+20>:	mov    $0x0,%eax
   0x00000000004005c6 <+25>:	leaveq 
   0x00000000004005c7 <+26>:	retq   
End of assembler dump.
(gdb) ni
21	}
(gdb) disas
Dump of assembler code for function main():
   0x00000000004005ad <+0>:	push   %rbp
   0x00000000004005ae <+1>:	mov    %rsp,%rbp
   0x00000000004005b1 <+4>:	sub    $0x10,%rsp
   0x00000000004005b5 <+8>:	lea    -0x10(%rbp),%rax
   0x00000000004005b9 <+12>:	mov    %rax,%rdi
   0x00000000004005bc <+15>:	callq  0x4005c8 <CNumber::CNumber()>
=> 0x00000000004005c1 <+20>:	mov    $0x0,%eax
   0x00000000004005c6 <+25>:	leaveq 
   0x00000000004005c7 <+26>:	retq   
End of assembler dump.
(gdb) x/20x  -0x10+$rbp
0x7fffffffe260:	0x00000001	0x00000002	0x00000000	0x00000000
0x7fffffffe270:	0x00000000	0x00000000	0xf7211495	0x00007fff
0x7fffffffe280:	0x00000000	0x00000000	0xffffe358	0x00007fff
0x7fffffffe290:	0x00000000	0x00000001	0x004005ad	0x00000000
0x7fffffffe2a0:	0x00000000	0x00000000	0xb535ac11	0xf0424c0a


End of assembler dump.
Missing separate debuginfos, use: debuginfo-install libgcc-4.8.5-39.el7.x86_64 libstdc++-4.8.5-39.el7.x86_64
(gdb) x/20x 0x400614
0x400614 <CNumber::GetNumberOne()>:	0xe5894855	0xf87d8948	0xf8458b48	0xc35d008b
0x400624:	0x1f0f2e66	0x00000084	0x90660000	0x89415741
0x400634 <__libc_csu_init+4>:	0x495641ff	0x5541f689	0x41d58949	0x258d4c54
0x400644 <__libc_csu_init+20>:	0x00200798	0x2d8d4855	0x00200798	0xe5294c53
0x400654 <__libc_csu_init+36>:	0xc148db31	0x834803fd	0x05e808ec	0x48fffffe
(gdb) x/20i 0x400614
   0x400614 <CNumber::GetNumberOne()>:	push   %rbp
   0x400615 <CNumber::GetNumberOne()+1>:	mov    %rsp,%rbp
   0x400618 <CNumber::GetNumberOne()+4>:	mov    %rdi,-0x8(%rbp)
   0x40061c <CNumber::GetNumberOne()+8>:	mov    -0x8(%rbp),%rax
   0x400620 <CNumber::GetNumberOne()+12>:	mov    (%rax),%eax
   0x400622 <CNumber::GetNumberOne()+14>:	pop    %rbp
   0x400623 <CNumber::GetNumberOne()+15>:	retq   
   0x400624:	nopw   %cs:0x0(%rax,%rax,1)
   0x40062e:	xchg   %ax,%ax
   0x400630 <__libc_csu_init>:	push   %r15
   0x400632 <__libc_csu_init+2>:	mov    %edi,%r15d
   0x400635 <__libc_csu_init+5>:	push   %r14
   0x400637 <__libc_csu_init+7>:	mov    %rsi,%r14
   0x40063a <__libc_csu_init+10>:	push   %r13
   0x40063c <__libc_csu_init+12>:	mov    %rdx,%r13
   0x40063f <__libc_csu_init+15>:	push   %r12
   0x400641 <__libc_csu_init+17>:	lea    0x200798(%rip),%r12        # 0x600de0
   0x400648 <__libc_csu_init+24>:	push   %rbp
   0x400649 <__libc_csu_init+25>:	lea    0x200798(%rip),%rbp        # 0x600de8
   0x400650 <__libc_csu_init+32>:	push   %rbx
