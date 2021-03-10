#include "Course.h"
#include <string>
#include <iostream>

    
 std::string Course::getMeilleurScore(){
        std::cout << meilleurScore << std::endl;
        return meilleurScore;
    }

std::string Course::getPseudoJoueur(i){
        std::cout << pseudoJoueur[i] << std::endl;
        return pseudoJoueur;
    }

int Course::getMoyenneCourse(){
        moyenne = 0;
        for(int i=0;i<4;i++){
            moyenne += scoreJoueur[i];
        }
        moyenne = moyenne*(0.25);
        std::cout <<"Votre moyenne de score est : "<< moyenne << std::endl;
        return moyenne;
    }