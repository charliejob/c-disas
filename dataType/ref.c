void Add(int &nVar){
	nVar ++;
}
int main(){
int nVar = 0x12345678;
int &nVarType = nVar;
Add(nVar);
}
