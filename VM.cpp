#include "stdafx.h"
#include "VM.h"

#include "Error.h"

VM::VM()
{
}


VM::~VM()
{
}


void VM::Execute(statementList StatementList)
{
	statementList::iterator itor;
	for (itor = StatementList.begin(); itor != StatementList.end(); itor++)		//실행문들을 수행!
	{
		try
		{
			itor->get()->Execute(symbolTable);
		}
		catch (Error& error)
		{
			std::cout << "Runtime Error : " << error.what() << std::endl;
			system("pause");
			exit(-1);
		}
		catch (std::bad_alloc)
		{
			std::cout << "Runtime Error : bad_alloc" << std::endl;
			system("pause");
			exit(-1);
		}
		catch (...)
		{
			std::cout << "Runtime Error : Unexcepted Error" << std::endl;
			system("pause");
			exit(-1);
		}
	}
}
