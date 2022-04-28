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

class wisdom_seeker {
public:
    //constructor
    //will call the establish functions
    wisdom_seeker();

    //functions to figure out the users base card
    string calc_zodiac_sign(int);
    string calc_birth_day(string, int);
    string suite_base_card();
    string calc_base_card();



    //setters
    void set_seeker_name(string);
    void set_birth_month(string);
    void set_birth_day(int);
    void set_age(int);
    void set_pref_gender(string);
    void set_sign(string );

    //getters
    string get_brith_month();
    int get_birth_day();
    int get_age();
    string get_pref_gender();
    string get_sign();
    string set_seeker_name();


private:
    //variables for the user information
    string birth_month;
    int birth_day;
    int seeker_age;
    string pref_gender;
    string sign;
    string seeker_name;


    //establish functions
    void est_seeker_name(string);
    void est_birth_day(string, int);
    void est_age(int);
    void est_pref_gender(string);
    void est_sign(string );

};


#endif //THE_MYSTIC_COMPUTER_WISDOM_SEEKER_H
