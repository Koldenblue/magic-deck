#include <iostream>
#include <string>
using namespace std;
// The above will also be loaded by the main magic.cpp file, so they are unnecessary

typedef struct node
{
    string card_name;
    string card_text;
    struct node *next;
}
card;

class Deck
{
    Deck(int init_size)
    {
        set_deck_size(init_size);
    }

// data members are private, member functions are public
private:
    int deck_size;
    string colors[5] = {"Swamps", "Forests", "Plains", "Mountains", "Islands"};

public:
    int get_deck_size()
    {
        return deck_size;
    }

    void set_deck_size(int new_size)
    {
        deck_size = new_size;
    }

    string get_color(int color_code)
    {
        return colors[color_code];
    }

    // Create a new card node.
    card set_card(string card_name, string card_text)
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

    void add_card_to_deck(card new_card)
    {
        ;
    }

    void free_cards(card *head)
    {
        ;
    }
};

