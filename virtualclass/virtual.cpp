#include <stdio.h>
class CVirtual{
public:
	~CVirtual(){
       printf("~CVirtual\n");
	}
	virtual int GetNumber(){
		return m_nNumber;
	}
	virtual void SetNumber(int nNumber){
		m_nNumber = nNumber;
	}
private:
	int m_nNumber;
};
int main(int argc){
	CVirtual cvirtual;
	cvirtual.SetNumber(argc);
	return sizeof(cvirtual);
}