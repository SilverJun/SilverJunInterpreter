#include "stdafx.h"
#include "Program.h"
#include "Error.h"



Program::Program(std::string filename)
{
	std::fstream file(filename, std::ios::in);

	if (file.fail())
	{
		std::cout << "Error : FileOpenError!" << std::endl;
		system("pause");
		exit(-1);
	}

	char c;

	while ((c = file.get()) != -1)	//���ϳ��� �ڵ� �� ����
	{
		code += c;
	}
	code += '\n';
	code += '\0';
}


Program::~Program()
{
}

int Program::Run()
{
	g_State->programState = eState::eLexicalAnalyzing;
	lexer.RegisterCode(code);
	lexer.LexicalAnalysis(tokenlist);

	g_State->programState = eState::ePasingTree;
	paser.RegisterTokenList(tokenlist);
	paser.SyntaxAnalysis(statementlist);

	g_State->programState = eState::eExecute;
	vm.Execute(statementlist);

	g_State->programState = eState::eEnd;
	system("pause");
	return 0;
}
