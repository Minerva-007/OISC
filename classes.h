/*
TODO: Add description
*/
#include"vector"
class instruction{
	private:
		int* a;
		int* b;
		unsigned int jmp;
	public:
	instruction();
	instruction(int *op1, int *op2);
	instruction(int *op1, int *op2, unsigned int jleq);
	unsigned int run();
	void setJump(unsigned int);
	void displayInstruction();
};


class instructionList{
	private:
		std::vector<instruction> List;
	public:
		void displayInstructions();
		void addInstruction(instruction);
		int execute();
};