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

//constructs a tarot spread where all positions are null
spread::spread()
    : past_card(tarot_card()), present_card(tarot_card()), future_card(tarot_card()),
    circum_card(tarot_card()), pot_solu_card(tarot_card()), base_card(tarot_card())
{}


//setters
void spread::set_past(tarot_card card){
    this -> past_card = card;
}
void spread::set_present(tarot_card card){
    this -> present_card = card;
}

void spread::set_future(tarot_card card){
    this -> future_card = card;
}
void spread::set_circum(tarot_card card){
    this -> circum_card = card;
}
void spread::set_pot_solu(tarot_card card){
    this -> pot_solu_card = card;
}
void spread::set_base_card(tarot_card card){
    this -> base_card = card;
}


//getters
tarot_card spread::get_past(){
    return past_card;
}
tarot_card spread::get_present(){
    return present_card;
}
tarot_card spread::get_future(){
    return future_card;
}
tarot_card spread::get_circum(){
    return circum_card;
}
tarot_card spread::get_pot_solu(){
    return pot_solu_card;
}
tarot_card spread::get_base_card(){
    return base_card;
}

//print functions
void spread::print_past(){
    cout << "Hmmm..." << endl;
    cout << "You pulled " << past_card.get_card_name() << " for you past..." << endl;
    cout << "I see you have come across a lot of " << past_card.get_card_meaning() << "." << endl << endl;
}
void spread::print_present(){
    cout << "Oh wow! This is very, very interesting... " << present_card.get_card_name() << "!" << endl;
    cout << "Are you currently experiencing " << present_card.get_card_meaning() << "?" << endl << endl;
}
void spread::print_future(){
    cout << future_card.get_card_name() << "!" << endl;
    cout << "This card tells us much about what you can expect in the near future." << endl;
    cout << "Look for " << future_card.get_card_meaning() << "." << endl << endl;
}
void spread::print_circum(){
    cout << "Ah! this make much sense... " << endl;
    cout << "As you can see here, " << circum_card.get_card_name() << "is telling us..." << endl;
    cout << circum_card.get_card_meaning() << ". Verrrry interesting." << endl << endl;

}

void spread::print_pot_solu(){
    cout << "Before you go I must tell you... " << endl;
    cout << pot_solu_card.get_card_name() << " is communicating to you... " << endl;
    cout << "Be weary of situations consisiting of  " << pot_solu_card.get_card_meaning() << endl;
}

