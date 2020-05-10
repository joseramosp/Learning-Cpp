//
// Created by Jose Ramos on 4/9/20.
//

#include "Deck.h"

Deck::Deck() {

    cards.emplace_back(Card("Infantry","Alaska","North America"));
    cards.emplace_back(Card("Cavalry","Alberta","North America"));
    cards.emplace_back(Card("Artillery","Central America","North America"));
    cards.emplace_back(Card("Artillery","Eastern United States","North America"));
    cards.emplace_back(Card("Cavalry","Greenland","North America"));
    cards.emplace_back(Card("Artillery","Northwest Territory","North America"));
    cards.emplace_back(Card("Cavalry","Ontario","North America"));
    cards.emplace_back(Card("Cavalry","Quebec","North America"));
    cards.emplace_back(Card("Artillery","Western United States","North America"));

    cards.emplace_back(Card("Infantry","Argentina","South America"));
    cards.emplace_back(Card("Artillery","Brazil","South America"));
    cards.emplace_back(Card("Infantry","Peru","South America"));
    cards.emplace_back(Card("Infantry","Venezuela","South America"));

    cards.emplace_back(Card("Artillery","Great Britain","Europe"));
    cards.emplace_back(Card("Infantry","Iceland","Europe"));
    cards.emplace_back(Card("Artillery","Northern Europe","Europe"));
    cards.emplace_back(Card("Cavalry","Scandinavia","Europe"));
    cards.emplace_back(Card("Artillery","Southern Europe","Europe"));
    cards.emplace_back(Card("Cavalry","Ukraine","Europe"));
    cards.emplace_back(Card("Artillery","Western Europe","Europe"));

    cards.emplace_back(Card("Infantry","Congo","Africa"));
    cards.emplace_back(Card("Infantry","East Africa","Africa"));
    cards.emplace_back(Card("Infantry","Egypt","Africa"));
    cards.emplace_back(Card("Cavalry","Madagascar","Africa"));
    cards.emplace_back(Card("Cavalry","North Africa","Africa"));
    cards.emplace_back(Card("Artillery","South Africa","Africa"));

    cards.emplace_back(Card("Cavalry","Afghanistan","Asia"));
    cards.emplace_back(Card("Infantry","China","Asia"));
    cards.emplace_back(Card("Cavalry","India","Asia"));
    cards.emplace_back(Card("Cavalry","Irkutsk","Asia"));
    cards.emplace_back(Card("Artillery","Japan","Asia"));
    cards.emplace_back(Card("Infantry","Kamchatka","Asia"));
    cards.emplace_back(Card("Infantry","Middle East","Asia"));
    cards.emplace_back(Card("Infantry","Mongolia","Asia"));
    cards.emplace_back(Card("Infantry","Siam","Asia"));
    cards.emplace_back(Card("Cavalry","Siberia","Asia"));
    cards.emplace_back(Card("Cavalry","Ural","Asia"));
    cards.emplace_back(Card("Cavalry","Yakutsk","Asia"));

    cards.emplace_back(Card("Artillery","Eastern Australia","Australia"));
    cards.emplace_back(Card("Artillery","Indonesia","Australia"));
    cards.emplace_back(Card("Infantry","New Guinea","Australia"));
    cards.emplace_back(Card("Artillery","Western Australia","Australia"));

}

void Deck::showDeck() {
    if(!cards.empty()){
        for(Card card : cards){
            cout << card.getCardInfo() << endl;
        }
    }
}

int Deck::size() {
    return cards.size();
}

void Deck::shuffle() {
    for(Card card : cards){
        cards.insert(cards.cbegin() + rand()%cards.size(), cards.erase(cards.cbegin() + rand()%cards.size())->copy());
    }
}

Card Deck::throwCard() {
    if(!cards.empty()){
        return cards.erase(cards.cend() - 1)->copy();
    }
}

