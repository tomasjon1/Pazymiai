﻿#include "headers/data.h"
#include "headers/validation.h"
#include "headers/InputAndOutput.h"
#include "headers/calculations.h"
#include "headers/generation.h"

#include <chrono>

using namespace std;
using hrClock = std::chrono::high_resolution_clock;
using durationDouble = std::chrono::duration<double>;

int main()
{

    auto programStart = hrClock::now();

    srand(time(NULL));

    int studentuKiekis = 0;
    string atsGeneravimas;
    string atsStudentuSkaicius;
    string atsFailoSkaitymas;
    string atsFailoGeneravimas;
    bool generavimas = false;
    bool studentuSkaicius = false;
    bool failoSkaitymas = false;
    bool failoGeneravimas = false;

    string genFile_name;

    deque<studentas> studentai;

    cout << "Ar notire studentus nuskaityti is failo (taip/ne): ";
    atsFailoSkaitymas = atsakymoIvedinimoPatikrinimas();

    if (atsFailoSkaitymas == "taip")
    {

        cout << "Ar notire studentu duomenis sugeneruoti (taip/ne): ";
        atsFailoGeneravimas = atsakymoIvedinimoPatikrinimas();
        cout << "Kokia strategija norite naudoti? Jei taupyti laika iveskite 1 (1 strategija), jei taupyti atminti iveskite 2 (2 strategija)." << endl;
        int strategijosRez = ivestoSkaiciausPatikrinimas();

        if (atsFailoGeneravimas == "taip")
        {

            cin.ignore();
            cout << "Koks turetu buti failo pavadinimas?(studentai.txt by default): ";
            getline(cin, genFile_name);
            genFile_name.empty() ? genFile_name = "studentai1.txt" : genFile_name += ".txt";
            cout << "Kiek generuoti studentu?" << endl;
            int studCount;
            studCount = ivestoSkaiciausPatikrinimas();
            cout << "Kiek generuoti namu darbu?" << endl;
            int ndCount;
            ndCount = ivestoSkaiciausPatikrinimas();
            cout << "-------------------------" << endl;
            cout << studCount << " irasu testavimas" << endl;
            auto genStart = hrClock::now();
            genFile(studCount, genFile_name, ndCount);
            cout << "Failo generavimo laikas: " << durationDouble(hrClock::now() - genStart).count() << " s" << endl;

            bufer_read(studentai, genFile_name);
        }
        else
        {
            vector<string> antrastineEilute;

            try
            {
                bufer_read(studentai, "studentai.txt");
            }
            catch (std::exception &e)
            {
                cout << "Failas nerastas" << endl;
            }
        }

        galutiniai(studentai);
        std::sort(studentai.begin(), studentai.end(), [](studentas &a, studentas &b)
                  { return a.vardas < b.vardas; });

        deque<studentas> vargsai;

        if (strategijosRez = 1)
        {
            deque<studentas> kietiakai;
            auto sortStart = hrClock::now();
            sortStudents(kietiakai, vargsai, studentai);
            cout << "Studentu dalinimo i dvi grupes laikas: " << durationDouble(hrClock::now() - sortStart).count() << " s" << endl;
            auto newWrite = hrClock::now();
            dequeTofile("kietiakai.txt", kietiakai);
            dequeTofile("vargsai.txt", vargsai);
            cout << "Surusiuotu studentu isvedimas i naujus failus uztruko: " << durationDouble(hrClock::now() - newWrite).count() << " s" << endl;
        }
        else
        {
            auto sortStart = hrClock::now();
            sortStudents2(studentai, vargsai);
            cout << "Studentu dalinimo i dvi grupes laikas: " << durationDouble(hrClock::now() - sortStart).count() << " s" << endl;
            auto newWrite = hrClock::now();
            dequeTofile("kietiakai.txt", studentai);
            dequeTofile("vargsai.txt", vargsai);
            cout << "Surusiuotu studentu isvedimas i naujus failus uztruko: " << durationDouble(hrClock::now() - newWrite).count() << " s" << endl;
        }
    }
    else
    {
        cout << "Ar studentu skaicius yra zinomas (taip/ne): ";
        atsStudentuSkaicius = atsakymoIvedinimoPatikrinimas();
        cout << "Ar notire namu darbu pazymius generuoti automatiskai (taip/ne): ";
        atsGeneravimas = atsakymoIvedinimoPatikrinimas();
        cout << endl;

        if (atsStudentuSkaicius == "taip")
        {
            cout << "Studentu skaicius yra zinomas" << endl;
            studentuSkaicius = true;
        }
        else
            cout << "Studentu skaicius yra nezinomas" << endl;

        if (atsGeneravimas == "taip")
        {
            cout << "Namu darbu pazymiai bus genereruojami" << endl;
            generavimas = true;
        }
        else
            cout << "Namudarbu pazymiai nebus genereruojami" << endl;

        if (studentuSkaicius)
        {
            cout << "Iveskite studentu kieki: ";
            studentuKiekis = ivestoSkaiciausPatikrinimas();
            for (int x = 0; x < studentuKiekis; x++)
            {
                studentas temp;
                ivedimas(temp, generavimas);
                studentai.push_back(temp);
            }
        }
        else
        {
            string ats;
            while (true)
            {
                studentas temp;
                ivedimas(temp, generavimas);
                studentai.push_back(temp);
                cout << "Ar notire ivesti dar studenta (taip/ne): ";
                ats = atsakymoIvedinimoPatikrinimas();
                if (ats == "ne")
                    break;
            }
        }

        galutiniai(studentai);
        std::sort(studentai.begin(), studentai.end(), [](studentas &a, studentas &b)
                  { return a.vardas < b.vardas; });
        bufer_write(studentai);
    }

    cout << "Visos programos veikimo laikas: " << durationDouble(hrClock::now() - programStart).count() << " s" << endl;
    cout << "-------------------------" << endl;
}
