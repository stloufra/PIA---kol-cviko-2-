#ifndef OSOBA_H
#define OSOBA_H
#include <string>

#pragma once

class Osoba
{
public:
    Osoba();  
    ~Osoba();

    void Vypis_obrazovka();
    void Vypis_soubor();
    void Create();
    void Degree_sort();
    
    std::string Name;
    std::string Degree;
    std::string Surname;
    
    int Age;
    int Height;
    int Degree_edu_var;
    
private:
    
    
    void Overeni_veku();
    void Overeni_vysky();
    void Overeni_skoly();
    

    bool overeni_veku = 0;
    bool overeni_vysky = 0;
    bool overeni_skoly = 0;
   
};

 bool operator < (const Osoba& u1, const Osoba& u2);

#endif