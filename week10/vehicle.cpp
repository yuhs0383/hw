#include "vehicle.h"


vehicle::vehicle(){
    has_name = false;
}

vehicle::vehicle(int wheel_number, int max_speed){
    this->wheel_number = wheel_number;
    this->max_speed = max_speed;
}

vehicle::vehicle(int wheel_number, int max_speed, bool has_name){
    this->wheel_number = wheel_number;
    this->max_speed = max_speed;
    this->has_name = has_name;
}

int vehicle::get_wheel_number(){ 
	return wheel_number;
}
int vehicle::get_max_speed(){
	return max_speed; 
}
bool vehicle::get_has_name(){ 
	return has_name;
}
const char* vehicle::get_class_name(){ 
	return "vehicle"; 
}
void vehicle::set_wheel_number(int wheel_number){
    this->wheel_number = wheel_number;
}
void vehicle::set_max_speed(int max_speed){
    this->max_speed = max_speed;
}
void vehicle::set_has_name(bool has_name){
    this->has_name = has_name;
}

        
