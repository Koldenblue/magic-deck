// public member functions for class Deck
#include <iostream>
#include <string>
using namespace std;
#include "Deck.h"

    int Deck::get_deck_size()
    {
        return deck_size;
    }

    void Deck::set_deck_size(int new_size)
    {
        deck_size = new_size;
    }

    string Deck::get_color(int color_code)
    {
        return colors[color_code];
    }

    // Create a new card node.
    card Deck::set_card(string card_name, string card_text)
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

    void Deck::add_card_to_deck(card new_card)
    {
        ;
    }

    void Deck::free_cards(card *head)
    {
        ;
    }