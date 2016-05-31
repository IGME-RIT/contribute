#include "Headers.h"

void MultiDimensional::TestMultiDimensional() {

#pragma region MultiDimensional ("normal")
	// http://msdn.microsoft.com/en-us/library/7wkxxx2e.aspx
	// (scroll down to "Conceptual Layout..."
	 int A[2][3];                         // col or row major?
	 A[0][0]=1; A[0][1]=2; A[0][2]=3;     //
	 A[1][0]=4; A[1][1]=5; A[1][2]=6;     //
	 print2(A,2);                         //
	 int b[2][3] = { {1,2,3}, {4,5,6} };  //
	 print2(b,2);                         //
#pragma endregion

#pragma region MultiDimensional (row-major order)
	// http://msdn.microsoft.com/en-us/library/h5yafhs2.aspx
	// http://msdn.microsoft.com/en-us/library/7wkxxx2e.aspx
	// (scroll down to "Conceptual Layout..."
	// see also http://avsharath.googlepages.com/2dArray.png
	 int c[2][3] = { 1,2,3,4,5,6 };        // 2d or 1d? or trick question?
	 print2(c,2);                          //
	 //cout << sizeof(int);                  //
	 for (int row=0 ; row < 2 ; row++)     //
		for (int col=0 ; col < 3 ; col++)    //
			printf("%i ",&c[row][col]);      //
#pragma endregion
}

