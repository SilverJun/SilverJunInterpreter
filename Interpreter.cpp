// Interpreter.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include "Program.h"


int main(int argc, char* argv[])
{
	//if (argc == 1)
	//{
	//	cout << "사용법 : 실행파일.exe <파일명>" << endl;
	//	return -1;
	//}

	//Program * Program = new Program(argv[1]);

	Program* Interpreter = new Program("./test6.txt");

	int result = Interpreter->Run();

	return result;
}

