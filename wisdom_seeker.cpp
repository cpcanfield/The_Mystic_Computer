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


//null constructor
wisdom_seeker::wisdom_seeker(){}


//constructor
wisdom_seeker::wisdom_seeker(string name, int month, int day, int age, string gender)
    : seeker_name(name), birth_month(month), birth_day(day), seeker_age(age), pref_gender(gender), zodiac_sign(calc_zodiac_sign())
{}



//setters
void wisdom_seeker::set_seeker_name(string name){
    this -> seeker_name = name;
}
void wisdom_seeker::set_birth_month(int month){
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



//getters
int wisdom_seeker::get_birth_month(){
    return birth_month;
}
int wisdom_seeker::get_birth_day(){
    return birth_day;
}
int wisdom_seeker::get_age(){
    return seeker_age;
}
string wisdom_seeker::get_pref_gender(){
    return pref_gender;
}
string wisdom_seeker::get_sign(){
    return sign;
}
string wisdom_seeker::get_seeker_name(){
    return seeker_name;
}
string wisdom_seeker::get_zodiac_sign(){
    return zodiac_sign;
}


//establish functions
void wisdom_seeker::est_birth_day(int month, int day){
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
     set_seeker_name(name);
}




//calculate the user zodiac sign based off of their birthday entered
string wisdom_seeker::calc_zodiac_sign(){
    int month = birth_month;
    int day = birth_day;
    if(month == 1){
        if(day <= 20){
            return zodiac_sign = "Capricorn";
        }else{
            return zodiac_sign = "Aquarius";
        }
    }if(month == 2){
        if(day <= 19){
            return zodiac_sign = "Aquarius";
        }else{
            return zodiac_sign = "Pisces";
        }
    }if(month == 3){
        if(day <= 20){
            return zodiac_sign = "Pisces";
        }else{
            return zodiac_sign = "Aries";
        }
    }if(month == 4){
        if(day<= 20){
            return zodiac_sign = "Aries";
        }else{
            return zodiac_sign = "Taurus";
        }
    }if(month == 5){
        if(day<= 21){
            return zodiac_sign = "Taurus";
        }else{
            return zodiac_sign = "Gemini";
        }
    }if(month == 6){
        if(day<=21){
            return zodiac_sign = "Gemini";
        }else{
            return zodiac_sign = "Cancer";
        }
    }if(month == 7){
        if(day <=22){
            return zodiac_sign = "Cancer";
        }else{
            return zodiac_sign = "Leo";
        }
    }if(month == 8){
        if(day <=21){
            return zodiac_sign = "Leo";
        }else{
            return zodiac_sign = "Virgo";
        }
    }if(month == 9){
        if( day <= 23){
            return zodiac_sign = "Virgo";
        }else{
            return zodiac_sign = "Libra";
        }
    }if(month == 10){
        if(day <=24){
            return zodiac_sign = "Libra";
        }else{
            return zodiac_sign = "Scorpio";
        }
    }if(month == 11){
        if(day <= 22){
            return zodiac_sign = "Scorpio";
        }else{
            return zodiac_sign = "Sagittarius";
        }
    }if(month == 12){
        if(day <= 22){
            return zodiac_sign = "Sagittarius";
        }else{
            return zodiac_sign = "Capricorn";
        }
    }
}

