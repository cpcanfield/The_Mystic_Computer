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
    //name and definition
    tarot_card(string, string, string);

    //just with a name constructor
    tarot_card(string);

    //name and meaning
    tarot_card(string, string);

    //null constructor
    tarot_card();


    //getters
    string get_card_meaning();
    string get_card_name();
    string get_orientation();

    //setters
    void set_card_meaning(string);
    void set_card_name(string);
    void set_orientation(string);

    void print_card_data(tarot_card);



protected:


private:

    //private variables
    string card_name;
    string card_meaning;
    string orientation;

};


#endif //THE_MYSTIC_COMPUTER_TAROT_CARD_H
