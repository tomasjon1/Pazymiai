```

```

# Programa skirta studentų pažymių vidurkiui ir medianai apskaičiuoti.

### Kaip paleisti programą?<br>
Versijoje [v0.4](https://github.com/tomasjon1/Pazymiai/tree/v0.4):
- Jums reikia įsijungti terminal.
- Su komanda cd nueiti iki savo v0.4.cpp failo. 
- Įrašyti `g++ -o main -I . -I ./cpp *.cpp cpp/*.cpp`komandą.
- Įrašyti `main.cpp` arba `./main`.

### Paleidus programą Jums reikės:<br>
- Pasirinkti ar norite skaityti is failo.
  - Pasirinkti ar norite sugeneruoti norima duomenų faila, su norimu studentu dydžiu bei pazymiu kiekiu.
- Kitu atveju: 
  - Pasirinkti ar studentų skaičius yra fiksuotas, su galimybė nutraukti studentų   duomenų suvedimą.
  - Pasirinkti ar norite matyti automatiškai sugeneruotus duomenis, turėsite įvesti studentų vardus ir pavardes bei namų darbų kiekį vienam studentui.
  - Pasirinkus įvesti duomenis patiems, turėsite įvesti šįuos duomenis: studentų vardus, pavardes, jų namų darbų kiekį, pažymius ir egzamino pažymį).

### Pasirinkus skaityma is failo
- Studentai bus surasyti i 2 skirtingus failus: Vargsiukai.txt ir Kietekai.txt

### Pasirinkus duomenu ivedima ranka
- Matysite sudarytą lentelę su studentu pavardėmis, vardais ir pažymių vidurkiais ir medianomis "rez.txt" faile.

## PC stats
- CPU Intel Core i7-8750H
- RAM 16
- SSD 500GB

## Rezultatai

| Dydis  | Failo Generavimas | Studentu dalinimas  | isvedimas i failus | Programos veikimo laikas |
| ------------- | ------------- | ------------- | ------------- | ------------- |
| 1000  | 0.0090721 s  | 0.0009283 s  | 0.0265609 s  |  12.5268 s  |
| 10000  | 0.0208313 s  | 0.0044929 s  | 0.0224853 s  |  6.23675 s  |
| 100000  | 0.350059 s  | 0.0965414 s  | 0.182653 s  |  N\A   |
| 1000000  | 0.164239 s  | 0.0438312 s  | 0.159213 s  |  7.61452 s  |
| 10000000  | 16.7132 s  | 6.11869 s  | 15.3828 s  |  103.824 s  |

