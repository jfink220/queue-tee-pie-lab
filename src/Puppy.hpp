#pragma once
#include <string>
#include "cutie.hpp"
class Puppy : public Cutie{
    private:
        std::string description;
        int cuteness_rating;
    public:
        std::string get_description() override;
        int get_cuteness_rating() override;
        Puppy(std::string description, int cuteness_rating); 
        Puppy();

};