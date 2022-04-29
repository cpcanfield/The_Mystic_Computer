//Caroline Canfield: The_Mystic_Computer
//CSCE 306; Spring 2022
//header file for the tarot deck class for the mystic computer program
//tarot_deck.h

#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <random>
#include <iterator>
#include <fstream>
#include <iostream>
#include<string>
#include <iostream>
#include<array>
using namespace std;
#include "tarot_card.h"
#ifndef THE_MYSTIC_COMPUTER_TAROT_DECK_H
#define THE_MYSTIC_COMPUTER_TAROT_DECK_H


class  tarot_deck {

public:

   //constructor, reads file, and stores into a vector (i.e the tarot deck)
   tarot_deck(string);

    //function that reads the file with all the tarot card data
    //and puts data into vector
    vector<tarot_card>  scan_file(string);

    //function to print the current deck
    void print_deck();

    //function to shuffle deck
    void shuffle_deck();

    //deletes and removes card from the deck
    void del(tarot_card);

    //checks to see if cards are the same when searching for a specified card
    bool check_same_card(tarot_card , tarot_card);

    //selects top card from the deck, deletes it, and returns it
    tarot_card select_top_card();

    //functions to determine the users base card based off data entered
    string suit_base_card(string);
    string get_character(string, int);
    tarot_card calc_base_card(string, string, int);

    //vector<tarot_card> tarot_card_deck;
    vector<tarot_card> tarot_card_deck;

private:

};


#endif //THE_MYSTIC_COMPUTER_TAROT_DECK_H
