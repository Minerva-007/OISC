/*
TODO: add ddescription
*/


#include"iostream"
#include"classes.h"



int main()
{
	//Hardcoding for now
	int a=3,b=5;
	instruction i1(&a,&b);
	instructionList I;
	I.addInstruction(i1);
	I.execute();
	std::cout<<a<<std::endl<<b<<std::endl;
	return 0;
}