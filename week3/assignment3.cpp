#include <iostream>

int main() {
	char target[] = "Yu HyeonSu";
	long b[32];
	int a = 17;
	int i = 294;
	int *c = new int[602];
	char * copy = "is no no";
	char name = 'a';
	std::cout << &target << std::endl;		//1
	std::cout << &b << std::endl;			//2
	std::cout << &a << std::endl;			//6
	std::cout << &i << std::endl;			//5
	std::cout << &c << std::endl;			//4
	std::cout << (void*)&copy << std::endl;	//3
	std::cout << (void*)&name << std::endl;	//7
	std::cout << &name+i << std::endl;		//문제
}
