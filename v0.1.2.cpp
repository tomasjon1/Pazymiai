#include <string>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


class Student {
private:
    string firstName;
    string lastName;
    vector<int> homeWork;
    int homeWorkAmount = 0;
    int exam = 0;
    int rezMed = 0;
    int rezAvg = 0;

public:
    Student(string firstName, string lastName) { 
        this->firstName = firstName; 
        this->lastName = lastName; 
    }

    void setFirstName(string firstName)         { this->firstName = firstName; }
    void setlastName(string lastName)           { this->lastName = lastName; }
    void sethomeWork(int homeWork)              { this->homeWork.push_back(homeWork); }
    void sethomeWorkAmount(int homeWorkAmount)  { this->homeWorkAmount = homeWorkAmount; }
    void setexam(int exam)                      { this->exam = exam; }
    void setrezMed(int rezMed)                  { this->rezMed = rezMed; }
    void setrezAvg(int rezAvg)                  { this->rezAvg = rezAvg; }

    string getFirstName()                       { return this->firstName; }
    string getlastName()                        { return this->lastName; }
    int gethomeWorkAmount()                     { return this->homeWorkAmount; }
    int getexam()                               { return this->exam; }
    int getrezMed()                             { return this->rezMed; }
    int getrezAvg()                             { return this->rezAvg; }
};

//int main() {
//    Student stud("tomas", "jon");
//
//    cout << stud.getFirstName();
//}


//struct studentas {
//    string vardas = "";
//    string pavarde = "";
//    int *pazymiai = nullptr;
//    int pazymiuKiekis = 0;
//    int egzaminas;
//    double rezultatas = 0;
//};
//
Student ivedimas( bool generavimas);
//void isvedimas(studentas& data, bool mediana);
int ivestoSkaiciausPatikrinimas();
string atsakymoIvedinimoPatikrinimas();
bool pazymioPatikrinimas(int n);
int ivestiPazymi();

int main()
{
    srand(time(NULL));

    int studentuKiekis = 0;
    string atsMediana;
    string atsGeneravimas;
    string atsStudentuSkaicius;
    bool mediana = false;
    bool generavimas = false;
    bool studentuSkaicius = false;

    vector<Student> studentai;

    cout << "Ar notire naudoti mediana vietoje vidurkio (taip/ne): "; atsMediana = atsakymoIvedinimoPatikrinimas();
    cout << "Ar studentu skaicius yra zinomas (taip/ne): "; atsStudentuSkaicius = atsakymoIvedinimoPatikrinimas();
    cout << "Ar notire namu darbu pazymius generuoti automatiskai (taip/ne): "; atsGeneravimas = atsakymoIvedinimoPatikrinimas(); cout << endl;

    if (atsMediana == "taip") {
        cout << "Atsakymas bus su mediana." << endl;
        mediana = true;
    }
    else  cout << "Atsakymas bus su vidurkiu." << endl;

    if (atsStudentuSkaicius == "taip") {
        cout << "studentu skaicius yra zinomas" << endl;
        studentuSkaicius = true;
    }
    else cout << "namu darbu skaiciai yra nezinomi" << endl;

     if (atsGeneravimas == "taip") {
         cout << "namu darbu pazymiai bus genereruojami" << endl;
         generavimas = true;
     }
     else cout << "namudarbu pazymiai ne bus genereruojami" << endl;

    if (studentuSkaicius)
    {
        cout << "Iveskite studentu kieki: "; studentuKiekis = ivestoSkaiciausPatikrinimas();
        for (int x = 0; x <studentuKiekis; x++)
        {
            studentai.push_back(ivedimas(generavimas));
        }
    }
    /*else
    {
        string ats;
        while (true) {
            cout << "Ar notire ivesti dar studenta (taip/ne): "; ats = atsakymoIvedinimoPatikrinimas();
            if (ats == "ne")
                break;
            studentas temp;
            ivedimas(temp, generavimas);
            studentai.push_back(temp);
        }
    }*/
     
   /* if(mediana) cout << std::setw(20) << "VARDAS" << std::setw(20) << "PAVARDE" << std::setw(20) << "GALUTINS (Med.)" << endl;
    else        cout << std::setw(20) << "VARDAS" << std::setw(20) << "PAVARDE" << std::setw(20) << "GALUTINS (Vid.)" << endl;

    for (studentas studentas : studentai) isvedimas(studentas, mediana);*/

    
}

Student ivedimas(bool generavimas) {
    cout << endl;
    string vardas, pavarde;
    cout << "Iveskite studento pavarde: "; cin >> vardas;
    cout << "Iveskite studento varda: "; cin >> pavarde;

    Student student(vardas, pavarde);

        cout << "Iveskite studento namu darbu kieki: "; student.sethomeWorkAmount(ivestoSkaiciausPatikrinimas()); cout << endl;
        if (generavimas) {
            /*for (int x = 0; x < data.pazymiuKiekis; x++) {
                data.pazymiai[x] = rand() % 10 + 1;
                cout << "Ivestas " << x + 1 << " pazimys bus: " << data.pazymiai[x] << endl;
            }
            data.egzaminas = rand() % 10 + 1;
            cout << "Ivestas studento egzamino pazymis bus: " << data.egzaminas << endl;*/
        }
        else {
            for (int x = 0; x < student.gethomeWorkAmount(); x++) {
                cout << "Iveskite " << x + 1 << " -a(-i) pazymi: "; student.sethomeWork(ivestiPazymi());
            }
            cout << "iveskite studento egzamino pazymi: "; student.setexam(ivestiPazymi());
        }
    cout << endl;
    
    return student;
}

//void isvedimas(studentas& data, bool mediana) {
//    cout << std::setw(20) << data.vardas << std::setw(20) << data.pavarde;
//
//    if (mediana) {
//        std::sort(data.pazymiai, data.pazymiai + data.pazymiuKiekis);
//        if (data.pazymiuKiekis % 2 !=  0)
//            data.rezultatas = 0.4 * (double)data.pazymiai[data.pazymiuKiekis / 2] + 0.6 * data.egzaminas;
//        else
//            data.rezultatas = 0.4 * ((double)(data.pazymiai[(data.pazymiuKiekis - 1) / 2] + data.pazymiai[data.pazymiuKiekis / 2]) / 2.0) + 0.6 * data.egzaminas;
//    }
//    else {
//        for (int x = 0; x < data.pazymiuKiekis; x++) data.rezultatas += data.pazymiai[x] * 1.0;
//        data.rezultatas = (0.4 * (data.rezultatas / data.pazymiuKiekis)) + 0.6 * data.egzaminas;
//    }
//    cout << std::setw(20) << data.rezultatas << endl;
//
//    delete[] data.pazymiai;
//}
//
int ivestoSkaiciausPatikrinimas()
{
    int n;
    while (true)
    {
        cin >> n;
        if (cin.good())
            return n;
        else
        {
            cout << "ne numeris" << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
    }
}

string atsakymoIvedinimoPatikrinimas() {
    string ats;
    do {
        cin >> ats;
        if (ats != "taip" && ats != "ne")
        {
            cout << ats;
            cout << "Ataskymas turi buti (taip arba ne)" << endl;
        }
    } while (ats != "taip" && ats != "ne");
    return ats;
}

bool pazymioPatikrinimas(int paz)
{
    if (paz > 0 && paz <= 10)
        return true;
    else
    {
        cout << "Blogas pazymys" << endl;
        return false;
    }
}

int ivestiPazymi() 
{
    while (true)
    {
        int paz = ivestoSkaiciausPatikrinimas();
        if (pazymioPatikrinimas(paz)) return paz;
    }
}
