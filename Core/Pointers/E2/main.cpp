#pragma region Pointers

#include "Headers.h"

int main() {

#pragma region 0. Tutorials and Reference
    /************************************************************************************************
    * Tutorials:
    *    http://www.cplusplus.com/doc/tutorial/pointers/
    *    http://www.cprogramming.com/tutorial/lesson6.html
    *    http://www.codeproject.com/Articles/627/A-Beginner-s-Guide-to-Pointers
    *    http://www.youtube.com/watch?v=i49_SNt4yfk & http://cslibrary.stanford.edu/#pointers
    * Reference:
    *    http://msdn.microsoft.com/en-us/library/89e4h321
    *    http://msdn.microsoft.com/en-us/library/fw63e3c3
    *    http://msdn.microsoft.com/en-us/library/64sa8b1e
    *************************************************************************************************/
#pragma endregion

#pragma region 1. Basic Pointers
	
	BasicPointers basicPointers;
	basicPointers.testBasicPointer();	

#pragma endregion

#pragma region 2. Inverse Operations
	
	InverseOperations inverseOperations;
	inverseOperations.testInverseOperations();

#pragma endregion

#pragma region 3. NULL and nullptr
    
	NullAndNullPtr nullAndNullPtr;
	nullAndNullPtr.testNullAndNullPtr();

#pragma endregion

#pragma region 4. Aliases
   
	Aliases aliases;
	aliases.testAliases();

#pragma endregion

#pragma region 5. Functions and Pointers
    
	FunctionsAndPointers functionsAndPointers;
	functionsAndPointers.testFunctionsAndPointers();

#pragma endregion

#pragma region 6. const and Pointers

	ConstAndPointers contantAndPointers;
	contantAndPointers.testConstAndPointers();

#pragma endregion

#pragma region 7. L-Values and R-Values (for pointers)

	LValuesAndRValues lValuesAndRValues;
	lValuesAndRValues.testLValuesAndRValues();

#pragma endregion

#pragma region 8. Pointers to pointers to ...

	PointerToPointers pointersToPointers;
	pointersToPointers.testPointerToPointers();

#pragma endregion
}
#pragma endregion
