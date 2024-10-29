#include <iostream>
using namespace std;

int main(){
	const int sizeOfInt = sizeof(int);
	const int sizeOfPointer = sizeof(int*);
	static_assert (sizeOfInt == sizeOfPointer, "Pointers and int are different sizes");
}