#include "Headers.h"

void DeclareAndAllocate::TestDeclareAndAllocate() {
cout << "In Declare and Allocate";
#pragma region Declare an array
	// General info:
	// http://msdn.microsoft.com/en-us/library/7wkxxx2e.aspx
	// For each of the following lines, determine which works and which fails and note the 
	// behavior to the right in a comment. I also ask a question about print2 at bottom.
	// Nothing else to do here other than click on the link 3 lines up.
#pragma endregion

#pragma region Declare an array
	// see Declarators (scroll down to arrays)
	// http://msdn.microsoft.com/en-us/library/tb971bed.aspx
	// http://msdn.microsoft.com/en-us/library/7wkxxx2e.aspx
	//int[] a1;  // 
	//int []a2;  //
	//int a3[];  //
#pragma endregion

#pragma region Declare and allocate 1-D array
	// see Initializers
	// http://msdn.microsoft.com/en-us/library/sdwe79a4.aspx
	// and new operator:
	// http://msdn.microsoft.com/en-us/library/kewsb8ba.aspx
	// http://msdn.microsoft.com/en-us/library/y1w9bk0b.aspx
	int b1[2];               //
	//int b2[0];               // 
	//int b3[] = new int[2];   //
	// how to use delete on b3? // and why?
	// int b4[] = {0, 0};       // 
	// int b5[] = { };          // 
	// int b6[0] = { } ;        //
#pragma endregion


}