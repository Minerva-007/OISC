#include"classes.h"
#include"iostream"
#define null 0

instruction::instruction()
{
	jmp=null;
	a=null;
	b=null;
}
instruction::instruction(int *op1, int *op2)
{
	jmp=null;
	a=op1;b=op2;
}
instruction::instruction(int *op1, int *op2, instruction* jleq)
{
	jmp=jleq;
	a=op1;b=op2;
}
instruction* instruction::run()
{
	if(a==null || b==null)
	{
		std::cout<<"HALT\n";
		exit(0);
	}
	//perform subtraction
	*b = *b - *a;
	return jmp;
}


int instructionList::execute()
{
	return 0;
}