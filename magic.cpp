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

    card my_card = anger.set_card("RAGE", "DO A MILLION DAMAGE");
    cout << my_card.card_name << " has the text "<< my_card.card_text << endl;

    anger.set_deck_name();
    cout << anger.get_deck_name() << endl;
} 