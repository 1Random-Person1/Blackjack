cmake_minimum_required(VERSION 4.3)
project(Blackjack)

set(CMAKE_CXX_STANDARD 14)

add_executable(Blackjack main.cpp
        Card.h
        Card.cpp
        Hand.cpp
        Hand.h
        Deck.cpp
        Deck.h
        GenericPlayer.cpp
        GenericPlayer.h
        Player.cpp
        Player.h
        House.cpp
        House.h
        Game.cpp
        Game.h)
