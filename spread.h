//Caroline Canfield: The_Mystic_Computer
//CSCE 306; Spring 2022
//header file for the tarot spread class for the mystic computer program
//spread.h

#ifndef THE_MYSTIC_COMPUTER_SPREAD_H
#define THE_MYSTIC_COMPUTER_SPREAD_H

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
#include "tarot_card.h"



class spread {
public:
    //constructor
    spread();


    string calculate_base_card();

    //setters
    void set_past(tarot_card);

    void set_present(tarot_card);

    void set_future(tarot_card);

    void set_circum(tarot_card);

    void set_pot_solu(tarot_card);




    //getters
    string get_past();

    string get_present();

    string get_future();

    string get_circum();

    string get_pot_solu():

    string get_birthday();

    string get_user_name();

    string get_gender();

    string get_sign();

    string get_base_card();








private:

};


#endif //THE_MYSTIC_COMPUTER_SPREAD_H
