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


//constructor
wisdom_seeker::wisdom_seeker(string name, int month, int day, int age, string gender)
    : seeker_name(name), birth_month(month), birth_day(day), seeker_age(age), pref_gender(gender), seeker_sign("")
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
    this -> seeker_sign = zod;
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
    return seeker_sign;
}
string wisdom_seeker::get_seeker_name(){
    return seeker_name;
}



//calculate the user zodiac sign based off of their birthday entered
string wisdom_seeker::calc_zodiac_sign(string zodiac_sign) {
    int month = birth_month;
    int day = birth_day;
    if (month == 1) {
        if (day <= 20) {
            set_sign("Capricorn");
            return "Capricorn";
        } else {
            set_sign("Aquarius");
            return "Aquarius";
        }
    }
    if (month == 2) {
        if (day <= 19) {
            set_sign("Aquarius");
            return "Aquarius";
        } else {
            set_sign("Pisces");
            return "Pisces";
        }
    }
    if (month == 3) {
        if (day <= 20) {
            set_sign("Pisces");
            return "Pisces";
        } else {
            set_sign("Aries");
            return "Aries";
        }
    }
    if (month == 4) {
        if (day <= 20) {
            set_sign("Aries");
            return "Aries";
        } else {
            set_sign("Taurus");
            return "Taurus";
        }
    }
    if (month == 5) {
        if (day <= 21) {
            set_sign("Taurus");
            return "Taurus";
        } else {
            set_sign("Gemini");
            return "Gemini";
        }
    }
    if (month == 6) {
        if (day <= 21) {
            set_sign("Gemini");
            return "Gemini";
        } else {
            set_sign("Cancer");
            return "Cancer";
        }
    }
    if (month == 7) {
        if (day <= 22) {
            set_sign("Cancer");
            return "Cancer";
        } else {
            set_sign("Leo");
            return "Leo";
        }
    }
    if (month == 8) {
        if (day <= 21) {
            set_sign("Leo");
            return "Leo";
        } else {
            set_sign("Virgo");
            return "Virgo";
        }
    }
    if (month == 9) {
        if (day <= 23) {
            set_sign("Virgo");
            return "Virgo";
        } else {
            set_sign("Libra");
            return "Libra";
        }
    }
    if (month == 10) {
        if (day <= 24) {
            set_sign("Libra");
            return "Libra";
        } else {
            set_sign("Scorpio");
            return "Scorpio";
        }
    }
    if (month == 11) {
        if (day <= 22) {
            set_sign("Scorpio");
            return "Scorpio";
        } else {
            set_sign("Sagittarius");
            return "Sagittarius";
        }
    }
    if (month == 12) {
        if (day <= 22) {
            set_sign("Sagittarius");
            return "Sagittarius";
        } else {
            set_sign("Capricorn");
            return "Capricorn";
        }
    }
    return "None!";
}

//returns the name of the users base card for reading
string wisdom_seeker::suit_base_card(string zodiac_sign) {

    if (zodiac_sign == "Cancer" || zodiac_sign == "Scorpio" || zodiac_sign == "Pisces") {
        return "Cups";
    }
    if (zodiac_sign == "Aries" || zodiac_sign == "Leo" || zodiac_sign == "Sagittarius") {
        return "Wands";
    }
    if (zodiac_sign == "Gemini" || zodiac_sign == "Libra" || zodiac_sign == "Aquarius") {
        return "Swords";
    }
    if (zodiac_sign == "Taurus" || zodiac_sign == "Virgo" || zodiac_sign == "Capricorn") {
        return "Pentacles";
    }
    return "None!";
}


string wisdom_seeker::get_character(){
    if(pref_gender == "female"){
        if(seeker_age <= 15){
            return "Princess";
        }else{
            return "Queen";
        }
    }if(pref_gender == "male"){
        if(seeker_age <= 15){
            return "Prince";
        }else{
            return "King";
        }
    }else{
        return "Ace";
    }
}

//returns the name of the string of the users base card
string wisdom_seeker::get_base_card(){
    string suit = suit_base_card(seeker_sign);
    string character = get_character();
    seeker_base_card = character + " of " + suit;
    return seeker_base_card;
}

