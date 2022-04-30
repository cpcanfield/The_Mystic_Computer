//Caroline Canfield: The_Mystic_Computer
//CSCE 306; Spring 2022
//driver file for the tarot card class for the mystic computer program
//tarot_card.cpp


#include<string>
#include<iomanip>
#include <iostream>
#include <sstream>
using namespace std;
#include "tarot_card.h"

//constructor
tarot_card::tarot_card(string name, string def, string orient)
    : card_name(name), card_meaning(def), orientation(orient)
{}

tarot_card::tarot_card(string name, string def)
: card_name(name), card_meaning(def), orientation("")
{}


tarot_card::tarot_card()
: card_name(""), card_meaning(""), orientation("")
{}

tarot_card::tarot_card(string name)
: card_name(name), card_meaning(""), orientation("")
{}

//setters
void tarot_card::set_card_meaning(string card) {
    this -> card_meaning = card;
}
void tarot_card::set_card_name(string card){
    this -> card_name = card;
}

void tarot_card::set_orientation(string orient){
    this -> orientation = orient;
}

//getters
string tarot_card::get_card_meaning(){
    return this -> card_meaning;
}

string tarot_card::get_card_name(){
    return this -> card_name;
}

string tarot_card::get_orientation(){
    return this -> orientation;
}
void tarot_card::print_card_data(tarot_card card){
    cout << card.get_card_name() << ": " << card.get_card_meaning()<< endl;
}

