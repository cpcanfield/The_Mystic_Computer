//Caroline Canfield: The_Mystic_Computer
//CSCE 306; Spring 2022
//driver file for the tarot reading class for the mystic computer program
//tarot_reading.cpp


#include <random>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include<vector>
#include <iostream>
#include<string>


#include "tarot_reading.h"
#include "tarot_card.h"
#include "tarot_deck.h"
#include "wisdom_seeker.h"
#include "spread.h"

int main() {
    //welcome the user
    cout << "Welcome, I see you have decided to configure the power of the Mystical Computer." << endl;
    cout << "\nHave you ignited my transistors for no reason, or would you like me to read your tarot cards? " << endl;
    cout << "(type 'yes' to continue)" << endl;
    string read_cards;
    cin >> read_cards;
    //start loop to read the users card
    while(read_cards == "yes"){

        //create the spread for this reading
        spread mythical_spread = spread();

        //create the deck for this reading
        tarot_deck mythical_deck = tarot_deck("/Users/carolinecanfield/Desktop/card_definitions.txt");

        //input variables
        string name;
        int month;
        int day;
        int age;
        string gender;
        string shuffle_deck;

        //prompt for users name
        cout << "\n\nWonderful! let's see what the cards have to say for you... " << endl;
        cout << "First, you must tell me what is you name? " << endl;
        cout << "Please type it here: ";
        cin >> name;
        cout << "\n" << name << ", what an extraordinary name!" << endl << endl;

        //prompt for users birthday
        cout << "Now, this may be the most important question of all..." << endl;
        cout << "What is your birthday? " << endl;
        cout << "Enter the number of the month here: ";
        cin >> month;
        cout << "\n\nNow, enter the day: " ;
        cin >> day;

        //prompt for age
        cout<< "I am almost done asking questions... don't worry " << endl;
        cout << "But, I must ask... How old are you? " << endl;
        cout << "Please type here: ";
        cin >> age;

        //prompt for gender
        cout << "\n\nFinally, I hope this last one isn't too personal..." << endl;
        cout << "But, it is essential I ask for a proper reading!" << endl;
        cout << "What gender to you associate with most? " << endl;
        cout << "(type 'female' if you feel like a girl!, type 'male' if you think boy!" << endl;
        cout << "and type anything else for anything in between!" << endl;
        cin >> gender;

        //create an object of the wisdom seeker class out of this information
        wisdom_seeker seeking_wisdom = wisdom_seeker(name, month, day, age, gender);

        //establish their sign
        string seeking_sign = seeking_wisdom.get_zodiac_sign();

        //establish their base card





        cout << "\n\nWonderful! " << seeking_wisdom.get_seeker_name() << ", a " << seeking_sign << "!" << endl;


        cout << "We may commence the reading! " << endl;
        cout << "You may shuffle the deck as many times as you wish! " << endl;
        cout << "While you do so, don't forget to set your intentions and put your energy into the deck!" << endl;
        cout << "Type shuffle to shuffle the deck once: " << endl;
        cin >> shuffle_deck;
        while(shuffle_deck == "shuffle"){
            mythical_deck.shuffle_deck();
            cout << " ^*((&&%&$%^*(&*()*&^" << endl;
            cout << "%&*(__(*&*^%$^ " << endl;
            cout << ")**(&^^%(%$###%*&^**^@#!#" << endl;
            cout << ")*)(*&^%^^%*&**^&*( " << endl;
            cout << "\n\nAs you can see, I just shuffled the deck!" << endl;
            cout << "Do you feel like you put enough of your energy into it?" << endl;
            cout << "\nI can shuffle it again. Would you like me to shuffle it again?" << endl;
            cout << "Please enter 'shuffle' for me to shuffle again, and anything else to contiue: " << endl;
            cin >> shuffle_deck;
        }

        //variable to input
        string input;

        cout << "\n\nHazzuh! you are ready to pull cards!!" << endl;
        cout << "All cards you will be pulling are from the top of the deck." << endl;
        cout << "To pull the first card you must enter the number 1: " << endl;
        cin >> input;
        //pull

    }


    return 0;
};