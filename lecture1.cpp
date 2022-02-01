#include <iostream>

void ddouble(int& x){
	x *= 2;
	std::cout << x << std::endl;
}

int main()
{
	int x;
	int& r = x; // r becomes synonym to x
	
	int* p;
	int*& rp = p; // OK: reference to a pointer

	/* 
	References are not objects, but synonyms to objects
	Pointers are objects, they occupy memory
	References themselves do not have values
	Pointers' values are objects' addresses
	References do not have special operators 
	Pointers has "dereferencing"
	*/

	const int* ptr1; // Pointer to a constant object of type int
	// cannot use ptr to modify object pointed to by it
	
	int v;
	int*const ptr2 = &v; // CONSTANT POINTER to an object v. 
	// Cannot modify the value of ptr2
	
	const int*const ptr3 = &vv; // Constant pointer to a constant object
	// Cannot modify the value of ptr3 and cannot use to modify
	// object pointed to by it
}
