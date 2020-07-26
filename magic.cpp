// for linking files, see https://stackoverflow.com/questions/47665886/vs-code-will-not-build-c-programs-with-multiple-ccp-source-files
// or use:
// g++ Deck.cpp magic.cpp -o magic

#include <iostream>
#include <string>
using namespace std;
#include "Deck.h"


int main(void)
{
    Deck anger(60, "burn");
    anger.set_deck_size(60);
    cout << "deck name is " << anger.get_deck_name() << endl;
    cout << anger.get_deck_size() << endl;

    for (int i = 0, n = 5; i < n; i++)
    {
        cout << anger.get_color(i) << endl;
    }

    card *my_card = anger.create_card("RAGE", "DO A MILLION DAMAGE");
    cout << my_card->card_name << " has the text "<< my_card->card_text << endl;
    card *my_card2 = anger.create_card("Lightning bolt", "deal 3 damage");
    cout << my_card2->card_name << " has the text "<< my_card2->card_text << endl;
    card *deck = anger.add_to_deck(my_card, my_card2);
    
    // Lightning bolt (card2) is the new head
    cout << deck->next->card_name << endl;
    cout << deck->card_name << endl;

    // card *burn_deck = anger.create_deck();
    // cout << burn_deck->card_name << endl;
    // anger.add_card_to_deck(my_card, burn_deck);
    // cout << burn_deck.card_name << endl;


    anger.free_cards(my_card);
    // anger.free_cards(burn_deck);
}