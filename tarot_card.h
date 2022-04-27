//Caroline Canfield: The_Mystic_Computer
//CSCE 306; Spring 2022
//header file for the tarot card class for the mystic computer program
//tarot_card.h

#ifndef THE_MYSTIC_COMPUTER_TAROT_CARD_H
#define THE_MYSTIC_COMPUTER_TAROT_CARD_H
using namespace std;
#include <iostream>
#include <string>

class tarot_card {
public:
    //tarot_card constructors
    //will always have a name and definition
    tarot_card(string, string);


    //getters
    string get_card_meaning();
    string get_card_name();


protected:
    //setters
    void set_card_meaning(string);
    void set_card_name(string);
    void print_card_data(tarot_card);

private:

    //private variables
    string card_name;
    string card_meaning;

};


#endif //THE_MYSTIC_COMPUTER_TAROT_CARD_H
