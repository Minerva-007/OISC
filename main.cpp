/*
TODO: add description
*/


#include"iostream"
#include"classes.h"



int main()
{
	//Hardcoding for now
	//Program description: multiply a and b, and store value in accumulator
	int a=69,b=420;//Multipliers
	int Z=0;//Zero constant
	int O=1;//One constant
	int acc=0;//Accumulator
	int dum=0;//Dummy for unconditional jump
	instructionList I;//Instruction List duh
	
	instruction i1(&a, &Z);//load -a to Z
	instruction i2(&Z, &acc);//load a to acc
	I.addInstruction(i1);
	I.addInstruction(i2);
	
	instruction i3(&O, &b, 5);//decrement b, and jump to iend if equal to 0
	instruction i4(&Z, &acc);//does acc- (-Z) or basically acc+a
	instruction i5(&dum, &dum, 2);//Jump to 3
	
	I.addInstruction(i3);
	I.addInstruction(i4);
	I.addInstruction(i5);
	
	instruction iend;//HALT
	I.addInstruction(iend);
	
	I.displayInstructions();//Display them nicely
	system("pause");//system call to pause console
	I.execute();//Run
	std::cout<<acc<<std::endl<<Z<<std::endl;
	
	return 0;
}