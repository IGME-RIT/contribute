#include "Headers.h"


void PointerToPointers::testPointerToPointers() {
	/*********************************************************************************
	* Tutorials:
	* http://www.eskimo.com/~scs/cclass/int/sx8.html
	* http://www.codeproject.com/KB/cpp/PtrToPtr.aspx
	* later on, you'll see "old-style C" arrays and strings as pointers to pointers
	* Hint for code below:

	┌───┐         ┌───┐     ┌────┐
	│ p │────────>│ q │────>│  i │
	└─┬─┘         └─┬─┘     └─┬──┘
	│             │         │
	┌─────┴─────┐  ┌────┴────┐  ┌─┴──┐
	│  address  │  │ address │  │ 10 │
	│   of q    │  │  of i   │  │    │
	└───────────┘  └─────────┘  └────┘
	***********************************************************************************/
	cout << "8. Testing pointers to pointers: " << endl; 
	int** p;                        // p points to ...?
	int* q;                         // q points to ...?
	int i = 10;                     // i stores 10
	p = &q;                        // what does p store?
	q = &i;                        // what does q store?
	printf("%s%i\n","p: ",p);      // output?
	printf("%s%i\n","*p: ",*p);    // output?
	printf("%s%i\n","**p: ",**p);  // output?
}