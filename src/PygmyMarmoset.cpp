#include "PygmyMarmoset.hpp"
std::string PygmyMarmoset::get_description(){
    return description;
}

int PygmyMarmoset::get_cuteness_rating(){
    return cuteness_rating;
}
PygmyMarmoset::PygmyMarmoset(std::string description, int cuteness_rating){
    this->description = description;
    this->cuteness_rating = cuteness_rating;
}

PygmyMarmoset::PygmyMarmoset()  : description(""), cuteness_rating(0){
      
}