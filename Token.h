#pragma once

#include <string>
#include <list>

enum TokenID			//토큰 열거형
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

struct Token		//토큰 구조체
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

	TokenID token;	//토큰값
	std::string name;		//토큰이름
	long number;		//값
};



typedef std::list<Token> tokenList;				//토큰 리스트
typedef tokenList::iterator tokenItor;		//토큰 리스트 반복자


