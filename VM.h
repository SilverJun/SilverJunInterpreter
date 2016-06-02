#pragma once

#include "Statement.h"
#include "SymbolTable.h"

class VM
{
public:
	VM();
	~VM();

	void Execute(statementList StatementList);

private:
	SymbolTable symbolTable;
};

