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

   //function to shuffle deck
   void shuffle_deck();

   //function to print the current deck
   void print_deck();

   //checks to see if cards are the same when searching for a specified card
   bool check_same_card(tarot_card , tarot_card);

   tarot_card select_random_card();

   //setter
   void set_card(tarot_card);

   //getter
   tarot_card get_card();

    //deletes and removes card from the deck
    void del(tarot_card);

   //deletes and removes card from the deck
   tarot_card remove(tarot_card);


    //vector<tarot_card> tarot_card_deck;
    vector<tarot_card> tarot_card_deck;

private:

};


#endif //THE_MYSTIC_COMPUTER_TAROT_DECK_H
