#include"classes.h"
#include"iostream"
#include"vector"
#define null 0
#define DEBUG

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
	#ifdef DEBUG
	std::cout<<"Value of op1 prior to instruction:"<<*a<<std::endl<<"Value of op2 prior to instruction:"<<*b<<std::endl;
	#endif
	//perform subtraction
	*b = *b - *a;
	#ifdef DEBUG
	std::cout<<"Value of op2 after instruction:"<<*b<<std::endl;
	if(*b<=0)std::cout<<"LEQ zero, jumping to:"<<jmp<<std::endl;
	else std::cout<<"not LEQ zero, continuing."<<std::endl;
	#endif
	if(*b<=0)return jmp;
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
		#ifdef DEBUG
		std::cout<<"Execuring instruction number:"<<i<<std::endl;
		#endif
		unsigned int next=List[i].run();
		if(next!=null)i=next-1;
	}
	return 0;
}