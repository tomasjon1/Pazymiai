#pragma once

#include <iostream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <deque>

using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

struct studentas
{
    string vardas = "";
    string pavarde = "";
    vector<int> pazymiai;
    int pazymiuKiekis = 0;
    int egzaminas;
    double rezultatasVid = 0;
    double rezultatasMed = 0;
};
