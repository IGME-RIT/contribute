//
// EXERCISE
// Essentially, a streamlined tutorial--for each class below,
// + work your way top down
// + look up the notes via the supplied links
// + uncomment each line of test function
// + comment on what each statement/block does to the right
// + feel free to add your own experimentation
//


#include "Headers.h"
#pragma region main

int main() 
{
	#pragma region Class declarations

	DeclareAndAllocate declareAndAllocate;
	Values values;
	Initializers initializers;	
	MultiDimensional multiDimensional;
	Pointers pointers;
	ArrayOfPointers arrayOfPointers;
    Const constant;
	ReferencesAndArrays referencesAndArrays;
	Vectors vectors;
	CharacterArrays charArrays;
	ArrayOfStructs arrOfStructs;
	
	#pragma endregion 

	#pragma region Test Functions

	//declareAndAllocate.TestDeclareAndAllocate();

	//values.TestValues();

	//initializers.TestInitializers();

	//multiDimensional.TestMultiDimensional();
	
	//pointers.TestPointers();

	//arrayOfPointers.TestArrayOfPointers();

	//constant.TestConst();

	//referencesAndArrays.TestReferencesAndArrays();

	//vectors.TestVectors();

	//charArrays.TestCharacterArrays();
          
	//arrOfStructs.TestArrayOfStructs();
	#pragma endregion 


getchar();
}

#pragma region Print functions
void print1(int a[], int SIZE) {
	cout << endl;
	for (int col = 0; col < SIZE; col++)
		cout << a[col];
}

// See http://msdn.microsoft.com/en-us/library/7wkxxx2e.aspx
// Why did I use a[][3]?
void print2(int a[][3], int ROWS) {
	cout << endl;
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < 3; col++)
			cout << a[row][col];
		cout << endl;
	}
}
#pragma endregion
#pragma endregion

