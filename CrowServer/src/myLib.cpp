#include <myLib.h>

std::string sayHello(){
    return "Hello World";
}

std::string echoWord(std::string word){
    return word;
}

ucm::json getSuperBowlScore(){
        ucm::json data;      
          
        data["home_team"] = "New England Patriots";
        data["home_score"] = 13;
        data["away_team"] = "Los Angeles Rams";
        data["away_score"] = 3;

        return data;
}

std::string upperWord(std::string word){
        return word;
}

std::string lowerWord(std::string word){
        return word;
}

