#include"classes.h"
#include"iostream"
#include"vector"
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
instruction::instruction(int *op1, int *op2, unsigned int jleq)
{
	jmp=jleq;
	a=op1;b=op2;
}

void instruction::setJump(unsigned int j)
{
	jmp=j;
}

unsigned int instruction::run()
{
	if(a==null || b==null)
	{
		std::cout<<"HALT\n";
		exit(0);
	}
	//perform subtraction
	*b = *b - *a;
	if(*b<0)return jmp;
	else return null;
}

void instructionList::addInstruction(instruction in)
{
	List.push_back(in);
}

int instructionList::execute()
{
	for(int i=0;i<List.size();i++)
	{
		unsigned int next=List[i].run();
		if(next!=null)i=next-1;
	}
	return 0;
}