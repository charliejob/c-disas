#include <string>
#include <stdio.h>
int main(){
 int nVar = 0x12345678;
 int* pnVar = &nVar;
 char* pcVar = (char*)&nVar;
 short* psVar = (short*)&nVar;
 long* plVar = (long*)&nVar;
 printf("aa %08x\n",*pnVar);
 printf("bb %8x\n",*pcVar);
 printf("cc %8x\n",*psVar);
 printf("dd %8x\n",*plVar);
}


