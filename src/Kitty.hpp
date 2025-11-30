#pragma once
#include "cutie.hpp"
#include <string>
class Kitty : public Cutie{
    private:
        std::string description;
        int cuteness_rating;
    public:
        std::string get_description() override;
        int get_cuteness_rating() override;
        Kitty(std::string description, int cuteness_rating); 
        Kitty();
};