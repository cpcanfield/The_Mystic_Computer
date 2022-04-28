//Caroline Canfield: The_Mystic_Computer
//CSCE 306; Spring 2022
//driver file for the user (the wisdom seeker) class for the mystic computer program
//wisdom_seeker.cpp


#include <random>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include<vector>
#include <iostream>
#include<string>
using namespace std;
#include "wisdom_seeker.h"


//helper functions





//setters
void wisdom_seeker::set_seeker_name(string name){
    this -> seeker_name = name;
}

void wisdom_seeker::set_birth_month(string month){
    this -> birth_month = month;
}

void wisdom_seeker::set_birth_day(int day){
    this -> birth_day = day;
}

void wisdom_seeker::set_age(int age){
    this -> seeker_age = age;
}

void wisdom_seeker::set_pref_gender(string gen){
    this -> pref_gender = gen;
}

void wisdom_seeker::set_sign(string zod){
    this -> sign = zod;
}

//establish functions
void wisdom_seeker::est_birth_day(string month, int day){
    set_birth_month(month);
    set_birth_day(day);
}

void wisdom_seeker::est_age(int age){
    set_age(age);
}

void wisdom_seeker::est_pref_gender(string gen){
    set_pref_gender(gen);
}
void wisdom_seeker::est_sign(string zod){
    set_sign(zod);
}

void wisdom_seeker::est_seeker_name(string name){
     est_seeker_name(name);
}
