#pragma once

enum ValueType
{
	vNull,
	vInt,
	vFloat,
	vString
};

struct Value
{
	union
	{
		int intValue;
		float floatValue;
		std::string* stringValue;
	};

	ValueType valueType;

	Value() : valueType(vNull) { intValue = 0; }

	Value(ValueType T) : valueType(T) { intValue = 0; }
	Value(ValueType T, int data) : valueType(T), intValue(data) {}
	Value(ValueType T, float data) : valueType(T), floatValue(data) {}
	Value(ValueType T, std::string data) : valueType(T) { stringValue = new std::string(data); }

	Value operator=(const Value rhs);

	Value operator!();

	Value operator++(int back);
	Value operator--(int back);

	~Value() { if (valueType == vString) delete stringValue; }
};

Value operator+(const Value lhs, const Value rhs);
Value operator-(const Value lhs, const Value rhs);
Value operator*(const Value lhs, const Value rhs);
Value operator/(const Value lhs, const Value rhs);
Value operator%(const Value lhs, const Value rhs);

Value operator<(const Value lhs, const Value rhs);
Value operator>(const Value lhs, const Value rhs);
Value operator<=(const Value lhs, const Value rhs);
Value operator>=(const Value lhs, const Value rhs);
Value operator!=(const Value lhs, const Value rhs);
Value operator==(const Value lhs, const Value rhs);

Value operator&(const Value lhs, const Value rhs);
Value operator|(const Value lhs, const Value rhs);

Value operator&&(const Value lhs, const Value rhs);
Value operator||(const Value lhs, const Value rhs);


