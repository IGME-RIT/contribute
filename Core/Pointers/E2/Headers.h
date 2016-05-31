#pragma once
#include <iostream>
using namespace std;

class BasicPointers
{
public:
	 void testBasicPointer();
};

class InverseOperations
{
public:
	void testInverseOperations();
};

class NullAndNullPtr
{
public:
	void testNullAndNullPtr();
};

class Aliases
{
public:
	void testAliases();
};

class FunctionsAndPointers
{
public:
	void testFunctionsAndPointers();
private:
	void test1(int*);
	void test2(int*);
	void test3(int*, int*);
	int* test4();
};

class ConstAndPointers
{
public:

	void testConstAndPointers();
};

class LValuesAndRValues
{
public:
	void testLValuesAndRValues();
};

class PointerToPointers
{
public:
	void testPointerToPointers();
};

