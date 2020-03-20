int main(){
char cVar[5] = {0x01,0x23,0x45,0x67,0x89};
int *pnVar = (int*)cVar;
char* pcVar = (char*)cVar;
short *psnVar = (short*)cVar;
pnVar += 1;
pcVar += 1;
psnVar +=1;
}