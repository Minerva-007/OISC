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
};


class instructionList{
	private:
		std::vector<instruction> List;
	public:
		void addInstruction(instruction);
		int execute();
};