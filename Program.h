#pragma once

#include "Token.h"

#include "Lexer.h"
#include "Paser.h"
#include "VM.h"

#include "State.h"

#include "Statement.h"

class Program
{
public:
	Program(std::string filename);
	~Program();

	int Run();			//���ο��� ����� ��ü

private:
	Lexer lexer;
	Paser paser;
	VM vm;

	std::string code;
	tokenList tokenlist;
	
	statementList statementlist;
};

