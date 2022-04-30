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


    //setters
    void set_past(tarot_card);
    void set_present(tarot_card);
    void set_future(tarot_card);
    void set_circum(tarot_card);
    void set_pot_solu(tarot_card);
    void set_base_card(tarot_card);


    //getters
    tarot_card get_past();
    tarot_card get_present();
    tarot_card get_future();
    tarot_card get_circum();
    tarot_card get_pot_solu();
    tarot_card get_base_card();

    //print functions
    void print_past();
    void print_present();
    void print_future();
    void print_circum();
    void print_pot_solu();



private:
    tarot_card past_card;
    tarot_card present_card;
    tarot_card future_card;
    tarot_card circum_card;
    tarot_card pot_solu_card;
    tarot_card base_card;

};


#endif //THE_MYSTIC_COMPUTER_SPREAD_H
