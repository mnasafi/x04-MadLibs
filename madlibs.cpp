/*
CSU,Chico Sp2018 CSCI-111
Professor Kevin Buffardi
Author:Mustafa Nasafi 
*/


#include <iostream>
#include <string>

int main()
{
    //declare strings with "std::string nameValue;"
    std::string name;
    std::string verb;
    std::string pronoun;
    std::string noun;

    //declare other data-types. Don't use std:: here.
    int number;
    char specialCharacter;
    double fractionNumber1;
    double fractionNumber2;

    //collect inputs as variables    
    std::cout << "What's your name stranger?" << std::endl;
    std::cin >> name;

    std::cout << "Gimme a verb" << std::endl;
    std::cin >> verb;
    
    std::cout << "Gimme a noun:" << std::endl;
    std::cin >> noun;

    std::cout << "Gimme a pronoun" << std::endl;
    std::cin >> pronoun;

    std::cout << "Gimme a number" << std::endl;
    std::cin >> number;

    std::cout << "Gimme a special character" << std::endl;
    std::cin >> specialCharacter;

    std::cout << "Gimme a fraction number: " << std::endl;
    std::cin >> fractionNumber1;

    std::cout << "Gimme another fraction number" << std::endl;
    std::cin >> fractionNumber2;

    //tell the story

    std::cout << "The story begins now..." << std::endl;

    std::cout << name << " has " << number << " cars that he " << verb << std::endl;

    std::cout << "The one " << noun << " gets " << fractionNumber1 << " mpg fuel efficiency, \nbut the other "<< pronoun << " gets " << fractionNumber2 << " mpg fuel mileage" << specialCharacter << std::endl;



    // std::cout << "Hello, " << input << std::endl;

  return 0; // exit program


}

