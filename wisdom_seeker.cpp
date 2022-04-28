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


void wisdom_seeker::set_age(int age){
    this -> seeker_age = age;
}

void wisdom_seeker::set_pref_gender(string gen){
    this -> pref_gender = gen;
}

void wisdom_seeker::set_sign(string zod){
    this -> sign = zod;
}
