// Interpreter.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include "Program.h"


int main(int argc, char* argv[])
{
	//if (argc == 1)
	//{
	//	cout << "���� : ��������.exe <���ϸ�>" << endl;
	//	return -1;
	//}

	//Program * Program = new Program(argv[1]);

	Program* Interpreter = new Program("./test6.txt");

	int result = Interpreter->Run();

	return result;
}

