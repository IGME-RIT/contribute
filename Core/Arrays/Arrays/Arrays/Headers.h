#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Headers
{
public:
	Headers();
	~Headers();
};

class DeclareAndAllocate {
public:
	void TestDeclareAndAllocate();
};

class Values {
public:
	void TestValues();
};

class Initializers {
public:
	void TestInitializers();
};

class MultiDimensional {
public:
	void TestMultiDimensional();
};

class Pointers {
public:
	void TestPointers();
};

class ArrayOfPointers {
public:
	void TestArrayOfPointers();
};


class Const {
public:
	void TestConst();
};

class ReferencesAndArrays {
public:
	void TestReferencesAndArrays();
};

class Vectors {
public:
	void TestVectors();
};

class CharacterArrays {
public:
	void TestCharacterArrays();
};

class ArrayOfStructs {
public:
	void TestArrayOfStructs();
};



// forward declarations
void print1(int[], int);
void print2(int[][3], int);

