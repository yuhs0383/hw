#include<iostream>
#include<windows.h>
#include<stdlib.h>


#define LEFT_KEY     97		//a
#define RIGHT_KEY     100	//d
#define DOWN_KEY      115	//s
#define PUSH_KEY     120 	//x
#define TURN_KEY     101	//e
#define START_KEY     115 // S
#define QUIT_KEY     113 // Q

bool can_make(int type);
void delete_block(int x, int y);
void print();
void move_down();
void new_block();

int arr[5][12];

int main() {
	print();
	arr[0][3] = 1;
	while (1) {
		system("cls");	//È­¸éÀ» ±ú²ýÇÏ°Ô
		move_down();
		print();
		Sleep(1000);
	}

}


void print() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << arr[j][i];
			std::cout << "	";
		}
		std::cout<<""<<std::endl;
	}
}

void move_down() {
	int tempArr[5][12];
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 5; j++) {
			tempArr[j][i] = arr[j][i];
		}
	}
	
	for (int i = 0; i < 5; i++) {
		arr[0][i] = 0;
	}
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 4; j++) {
			arr[j][i + 1] = tempArr[j][i];
		}
	}

}