#include <string>
#ifndef COURSE_H 
#define COURSE_H

    class Course
    {
    private:
        int meilleurScore = 0;
        int ancienScore = 999;
        int moyenne;
        int PseudoMeilleurJoueur;
        std::string pseudoJoueur[4] = {"pseudo1","pseudo2","pseudo3","pseudo4"}
        int scoreJoueur[4] = {-1,-1,-1,-1};

    public:
        std::string getPseudoJoueur();
        int getMeilleurScore();
        int getMoyenneCourse();
        Course ();
        Course(std::string name);
    };

    class Championnat{
        private:
            int moyennechampionnat;
            int meilleurTempsCourse[4] = {-1,-1,-1,-1};
            int meilleurTemps;

        public:
    };
    #endif