cmake_minimum_required(VERSION 3.21)
project(The_Mystic_Computer)

set(CMAKE_CXX_STANDARD 14)

add_executable(The_Mystic_Computer 
        wisdom_seeker.cpp
        wisdom_seeker.h
        tarot_card.cpp
        tarot_card.h
        tarot_deck.h
        tarot_deck.cpp
        tarot_reading.h
        tarot_reading.cpp
        spread.cpp
        spread.h)
