/*
TODO: Add description
*/

class instruction{
	private:
		int* a;
		int* b;
		instruction* jmp;
	public:
	instruction();
	instruction(int *op1, int *op2);
	instruction(int *op1, int *op2, instruction* jleq);
	instruction* run();
};


class instructionList{
	private:
		
	public:
		int execute();
		
};