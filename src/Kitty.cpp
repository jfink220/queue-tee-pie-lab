#include "Kitty.hpp"
std::string Kitty::get_description(){
    return description;
}

int Kitty::get_cuteness_rating(){
    return cuteness_rating;
}

Kitty::Kitty(std::string description, int cuteness_rating){
    this->description = description;
    this->cuteness_rating = cuteness_rating;
}

Kitty::Kitty()  : description(""), cuteness_rating(0){
      
}