#include "Headers.h"


void ArrayOfPointers::TestArrayOfPointers(){
	 //rem: http://avsharath.googlepages.com/2dArray.png
	 char* a[3] = {"aa","bb","cc"};
	 cout << endl;
	 for (int row=0 ; row < 3 ; row++) {
		  for (int col=0 ; col < 2 ; col++)
			  cout << a[row][col];
		  cout << endl;
	 }
	 //what does the above block of code do?
	 //see http://msdn.microsoft.com/en-us/library/bkbs2cds.aspx
	 //and http://msdn.microsoft.com/en-us/library/126fe14k.aspx
	 //  http://blogs.msdn.com/vcblog/archive/2009/02/03/rvalue-references-c-0x-features-in-vc10-part-2.aspx
	 //for (int i=0;i<3;i++)
	 //	 cout << *(a++) << endl;
	 char** b = a;
	 for (int i=0;i<3;i++)
		 cout << **(b++) << endl;
	 //what does the above block of code do?
}