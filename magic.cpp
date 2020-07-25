#include <iostream>
#include <string>
using namespace std;
#include "deck.h"


int main(void)
{
    Deck anger;
    anger.set_deck_size(60);
    cout << anger.get_deck_size() << endl;

    for (int i = 0, n = 5; i < n; i++)
    {
        cout << anger.get_color(i) << endl;
    }

    card my_card = anger.set_card("RAGE", "DO A MILLION DAMAGE");
    cout << my_card.card_name << " has the text "<< my_card.card_text << endl;

}