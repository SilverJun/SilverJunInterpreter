// Interpreter.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include "Program.h"


int main(int argc, char* argv[])
{
	//if (argc == 1)
	//{
	//	std::cout << "���� : ��������.exe <���ϸ�>" << std::endl;
	//	return -1;
	//}
	//Program * Interpreter = new Program(argv[1]);

	Program* Interpreter = new Program("./test.txt");

	int result = Interpreter->Run();

	return result;
}

