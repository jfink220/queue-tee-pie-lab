#pragma once
#include <string>
#include "cutie.hpp"
class PygmyMarmoset : public Cutie{
    private:
        std::string description;
        int cuteness_rating;
    public:
        std::string get_description() override;
        int get_cuteness_rating() override;
        PygmyMarmoset(std::string description, int cuteness_rating); 
        PygmyMarmoset();
};