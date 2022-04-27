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
    string suite_base_card();
    string calc_base_card();

    //setters
    void set_seeker_name(string);
    void set_birthday(int[]);
    void set_age(int);
    void set_pref_gender(string);
    void set_sign(string );

    //getters
    int get_birthday();
    int get_age();
    string get_pref_gender();
    string get_sign();
    string set_seeker_name();


private:
    //variables for the user information
    int birthday;
    int age;
    string pref_gender;
    string sign;
    string seeker_name;


    //establish functions
    void est_birthday(string);
    void est_age(int);
    void est_pref_gender(string);
    void est_sign(string );

};


#endif //THE_MYSTIC_COMPUTER_WISDOM_SEEKER_H
