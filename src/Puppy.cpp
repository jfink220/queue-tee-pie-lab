#include "Puppy.hpp"
std::string Puppy::get_description(){
    return description;
}

int Puppy::get_cuteness_rating(){
    return cuteness_rating;
}
Puppy::Puppy(std::string description, int cuteness_rating){
    this->description = description;
    this->cuteness_rating = cuteness_rating;
}

Puppy::Puppy()  : description(""), cuteness_rating(0){
      
}