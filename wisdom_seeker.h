//
// Created by Caroline Canfield on 4/27/22.
//

#ifndef THE_MYSTIC_COMPUTER_WISDOM_SEEKER_H
#define THE_MYSTIC_COMPUTER_WISDOM_SEEKER_H
#include <random>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include<vector>
#include <iostream>
#include<string>
using namespace std;
#include "tarot_deck.h"


class wisdom_seeker {


public:
    //constructor
    //will call the establish functions
    wisdom_seeker(string, int, int, int, string);
    wisdom_seeker();

    //functions to figure out the users base card
    string calc_zodiac_sign();



    //setters
    void set_seeker_name(string);
    void set_birth_month(int);
    void set_birth_day(int);
    void set_age(int);
    void set_pref_gender(string);
    void set_sign(string );

    //getters
    int get_birth_month();
    int get_birth_day();
    int get_age();
    string get_pref_gender();
    string get_sign();
    string get_seeker_name();
    string get_zodiac_sign();


private:
    //variables for the user information
    int birth_month;
    int birth_day;
    int seeker_age;
    string pref_gender;
    string sign;
    string seeker_name;
    string zodiac_sign;



    //establish functions
    void est_seeker_name(string);
    void est_birth_day(int, int);
    void est_age(int);
    void est_pref_gender(string);
    void est_sign(string );

};


#endif //THE_MYSTIC_COMPUTER_WISDOM_SEEKER_H
