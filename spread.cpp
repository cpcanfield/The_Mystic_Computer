//Caroline Canfield: The_Mystic_Computer
//CSCE 306; Spring 2022
//driver file for the tarot spread class for the mystic computer program
//spread.cpp

#include <random>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include<vector>
#include <iostream>
#include<string>
using namespace std;
#include "spread.h"



//returns the name of the users base card for reading
string spread::suit_base_card(string sign){

    if(sign == "Cancer" || "Scorpio" || "Pisces"){
        return "Cups";
    }
    if (sign == "Aries" || "Leo" || "Sagittarius") {
        return "Wands";
    }
    if (sign == "Gemini" || "Libra" || "Aquarius") {
        return "Swords";
    }
    if (sign == "Taurus" || "Virgo" || "Capricorn") {
        return "Pentacles";

    }
}
