#include <string>
using namespace std;

typedef struct node
{
    string card_name;
    string card_text;
    struct node *next;
}
card;

class Deck
{

// data members are private, member functions are public
private:
    int deck_size;
    string colors[5] = {"Swamps", "Forests", "Plains", "Mountains", "Islands"};
    string deck_name;

// member function prototypes are declared here, then defined in Deck.cpp
/* reason for this: only the functions prototypes are required by the main client code -
the client does not need to know how these functions work! So it is better to 
encapsulate them. The client code does not actually see the function definitions.
*/
public:
    // Constructor:
    Deck(int init_size, string deck_name);

    void set_deck_size(int new_size);
    int get_deck_size();

    void set_deck_name();
    string get_deck_name();

    string get_color(int color_code);

    card create_deck();
    card create_card(string card_name, string card_text);
    // void add_card_to_deck(card my_card, card my_deck);
    void free_cards(card *head);
};

