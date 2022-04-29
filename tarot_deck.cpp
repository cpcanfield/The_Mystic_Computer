//Caroline Canfield: The_Mystic_Computer
//CSCE 306; Spring 2022
//driver file for the tarot deck class for the mystic computer program
//tarot_deck.cpp



#include <random>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include<vector>
#include <iostream>
#include<string>
using namespace std;
#include "tarot_card.h"
#include "tarot_deck.h"
#include "wisdom_seeker.h"

//constructor
//constructor, reads file, and stores into an array (i.e the tarot deck)
tarot_deck::tarot_deck(string file_name)
:tarot_card_deck(scan_file(file_name))
{}


//function that reads the file with all the tarot card data
vector<tarot_card> tarot_deck::scan_file(string file_name){
    //create a file out of the string file_name
    ifstream myFile(file_name);
    //check to see if file exits/can open
    if(!myFile){
        std::cerr<<"Could not open the file!"<< std::endl;
    }//else:
    //create temporary variables
    string name, def;
    string myString;
    string line;
    //create a vector to hold the future data
    vector<tarot_card> card_deck;
    //read the file until the end
    while(getline(myFile, line, '\n')){
        //create instance of stringstream class to be able to parse
        //using the delimiter
        stringstream ss(line);
        //read until ":" for the name of the card
        getline(ss, name, ':');
        //read until ";" for the definition of the card
        getline(ss, def, ';');
        //create a tarot card object by calling that constructor
        //with the newly created strings
        tarot_card temp_card = tarot_card(name, def);
        //add this to the card_deck vector
        card_deck.push_back(temp_card);
    }
return card_deck;
}


//prints the current deck when called
void tarot_deck::print_deck() {
    for(int i = 0; i<tarot_card_deck.size(); i++){
        cout<< tarot_card_deck[i].get_card_name() << ":" <<
        tarot_card_deck[i].get_card_meaning() << endl;
    }
}


//function to shuffle deck the current deck
void tarot_deck:: shuffle_deck(){
    random_device rd;
    mt19937 g(rd());
    shuffle(tarot_card_deck.begin(), tarot_card_deck.end(), g);
}


//deletes card from the deck
void tarot_deck::del(tarot_card card){
    //card that will be deleted
    tarot_card find_card = card;
    for(int i = 0; i<tarot_card_deck.size(); i++){
        if(check_same_card(find_card, tarot_card_deck[i]) == true)
            tarot_card_deck.erase(tarot_card_deck.begin() +i);
    }
}

//checks to see if cards are the same when searching for a specified card
bool tarot_deck::check_same_card(tarot_card current_card, tarot_card find_card){
    if(current_card.get_card_name() == find_card.get_card_name() && current_card.get_card_meaning() == find_card.get_card_meaning()){
        return true;
    }return false;
}


//deletes and returns the card that is at the top of the deck
tarot_card tarot_deck::select_top_card(){
    tarot_card top_card = tarot_card_deck.front();
    del(top_card);
    return top_card;
}


//returns the name of the users base card for reading
string tarot_deck::suit_base_card(string sign){

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


string tarot_deck::get_character(string gen, int age ){
    if(gen == "Female"){
        if(age <= 15){
            return "Princess";
        }else{
            return "Queen";
        }
    }if(gen == "Male"){
        if(age <= 15){
            return "Prince";
        }else{
            return "King";
        }
    }else{
        return "Ace";
    }
}

tarot_card tarot_deck::calc_base_card(string sign, string gen, int age){
    string suit = suit_base_card(sign);
    string character = get_character(gen, age);
    string base_card_name = character + " of " + suit;
    //create tarot card object out of information
    tarot_card base_card = tarot_card(base_card_name);
    return base_card;
}


 void tarot_deck:: delete_base_card(string sign, string gen, int age) {
    //calculate the base card
    tarot_card this_base_card = calc_base_card(sign, gen, age);
    //remove the card from the deck
    del(this_base_card);
}
