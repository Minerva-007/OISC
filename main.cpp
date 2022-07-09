/*
TODO: add description
*/


#include"iostream"
#include"classes.h"



int main()
{
	//Hardcoding for now
	int a=1,b=5;
	int k=2;int Z=0;
	instruction i1(&a, &b);//b=b-a
	instruction i2(&b, &Z, 3);//Z=0-b (-b), jmp if
	instruction i3(&Z, &k, 1);//k=k-z = k+b
	instruction i4;
	instructionList I;
	I.addInstruction(i1);
	I.addInstruction(i2);
	I.addInstruction(i3);
	I.addInstruction(i4);
	I.displayInstructions();
	I.execute();
	std::cout<<a<<std::endl<<b<<std::endl;
	return 0;
}