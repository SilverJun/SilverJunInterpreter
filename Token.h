#pragma once

#include <string>
#include <list>

enum TokenID			//��ū ������
{
	If = 250,
	While,
	For,
	To,
	Step,
	Output,
	Input,
	Func,
	ReturnType,
	Return,
	FuncCall,
	Identifier,
	Int,
	Float,
	Number,
	String,
	ConstString,
	Letter,
	Annotation,
	LessEqual,
	GreatEqual,
	Equal,
	NotEqual,
	Increment,
	Decrement,
	Eof,
	Comma = ',',
	Assignment = '=',
	Begin = '{',
	End = '}',
	Quotmark = '"',
	Plus = '+',
	Minus = '-',
	Multi = '*',
	Divide = '/',
	Mod = '%',
	And = '&',
	Or = '|',
	Less = '<',
	Great = '>',
	OpenBracket = '(',
	CloseBracket = ')',
	Not = '!'
};

struct Token		//��ū ����ü
{
	Token(TokenID token, int number = 0, std::string name = "") :
	token(token),
	number(number),
	name(name)
	{
	}

	Token(TokenID token, std::string name = "", int number = 0) :
		token(token),
		name(name),
		number(number)
	{
	}

	TokenID token;	//��ū��
	std::string name;		//��ū�̸�
	long number;		//��
};



typedef std::list<Token> tokenList;				//��ū ����Ʈ
typedef tokenList::iterator tokenItor;		//��ū ����Ʈ �ݺ���


