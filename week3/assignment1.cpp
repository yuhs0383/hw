#include <iostream>


void code(){
	
}
int data = 0;				//data
int bss;					//bss

int main(){
	code();					// code
	void * rodata;			//rodata
	int* heap = new int[1];
	heap[0] = 0;			//heap
	int stack[1];			//stack
	
	std::cout << "code\t" << (void*) code << std::endl;
	std::cout << "Rodata\t" << (void*) rodata << std::endl;
	std::cout << "data\t" <<&data << std::endl;
	std::cout << "BSS\t" << &bss << std::endl;
	std::cout << "HEAP\t" << heap << std::endl;
	std::cout << "Stack\t" << &stack << std::endl;
}
