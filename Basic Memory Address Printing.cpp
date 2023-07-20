#include <Windows.h>
#include <iostream>
#include <string>
 
#define CHAR_ARRAY_SIZE 128
 
 
int main() {
	int varInt {123456};
	std::string varString {"Default String"};
	char arrChar[CHAR_ARRAY_SIZE] = "Long char array right there ->";
	int* ptr2int {&varInt}; //Declaring a pointer to integer named ptr2int pointing to varInt
	int** ptr2ptr {&ptr2int}; //Declaring a pointer to pointer to int named ptr2ptr pointing to ptr2int 
	int*** ptr2ptr2 {&ptr2ptr}; //Declaring a pointer to pointer to pointer to int named ptr2ptr2 pointing to ptr2ptr
 
	do {
		std::cout << "Process ID: " << std::dec << GetCurrentProcessId() << std::endl;
		std::cout << std::endl;
		std::cout << "varInt       (0x" << std::hex << std::uppercase << (uintptr_t)&varInt << ") = " << std::dec << varInt << std::endl;
		std::cout << "varString    (0x" << std::hex << std::uppercase << (uintptr_t)&varString << ") = " << varString << std::endl;
		std::cout << "arrChar[" << std::dec << CHAR_ARRAY_SIZE << "] (0x" << std::hex << std::uppercase << (uintptr_t)&arrChar << ") = " << arrChar << std::endl;
		std::cout << std::endl;
		std::cout << "ptr2int      (0x" << std::hex << std::uppercase << (uintptr_t)&ptr2int << ") = 0x" << ptr2int << std::endl;
		std::cout << "ptr2ptr      (0x" << std::hex << std::uppercase << (uintptr_t)&ptr2ptr << ") = 0x" << ptr2ptr << std::endl;
		std::cout << "ptr2ptr2     (0x" << std::hex << std::uppercase << (uintptr_t)&ptr2ptr2 << ") = 0x" << ptr2ptr2 << std::endl;
		std::cout << std::endl;
		std::cout << "Press ENTER to print again." << std::endl;
		getchar();
		std::cout << std::endl << "---------------------------------------------------" << std::endl << std::endl;
	} while (true);
	
	return EXIT_SUCCESS;
}