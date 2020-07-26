// This file is NOT given to client code, magic.cpp. Only header file, Deck.h,
// is given to main file.

// public member functions for class Deck
#include <iostream>
#include <string>
using namespace std;
#include "Deck.h"

// Constructor:
Deck::Deck(int init_size, string name)
{
    set_deck_size(init_size);
    deck_name = name;

}


void Deck::set_deck_size(int new_size)
{
    deck_size = new_size;
}
int Deck::get_deck_size()
{
    return deck_size;
}

void Deck::set_deck_name()
{
    cout << "What is the name of the deck?" << endl;
    getline(cin, deck_name);
    // deck_name = deck_name; // unnecessary
}
string Deck::get_deck_name()
{
    return deck_name;
}


string Deck::get_color(int color_code)
{
    return colors[color_code];
}


// Create a new card node.
card Deck::create_card(string card_name, string card_text)
{
    card *new_card = (card*) malloc(sizeof(card));
    if (new_card == NULL)
    {
        cout << "Mem error!" << endl;
        EXIT_FAILURE;
    }
    new_card->card_name = card_name;
    new_card->card_text = card_text;
    new_card->next = NULL;
    return *new_card;
}

card Deck::create_deck()
{
    card *new_deck = (card*) malloc(sizeof(card));
    if (new_deck == NULL)
    {
        cout << "MEM ERROR" << endl;
        EXIT_FAILURE;
    }
    new_deck->card_name = "none";
    new_deck->card_text = "none";
    new_deck->next = NULL;
    return *new_deck;
}

// void Deck::add_card_to_deck(card my_card, card my_deck)
// {
//     if (my_deck.next == NULL)
//     {
//         my_deck.next = *my_card;
//     }

// }


void Deck::free_cards(card *head)
{
    ;
}