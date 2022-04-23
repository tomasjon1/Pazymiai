```

```

# Programa skirta studentų pažymių vidurkiui ir medianai apskaičiuoti.

### Šioje versijoje yra naudojamas konteineris deque.

### Kaip paleisti programą?<br>
Versijoje [v0.5.1](https://github.com/tomasjon1/Pazymiai/tree/v0.5.1):
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

| Dydis  | Failo nuskaitymas | Studentu dalinimas  | isvedimas i failus |
| ------------- | ------------- | ------------- | ------------- |
| 1000  | 0.0180054 s  | 0.0013585 s  | 0.0053357 s  |
| 10000  | 0.0593331 s  | 0.0202382 s  | 0.0607152 s  |
| 100000  | 0.295306 s  | 0.0871569 s  | 0.15996 s  |
| 1000000  | 3.34229 s  | 1.0377 s  | 1.58053 s  |
| 10000000  | 35.2251 s  | 11.5859 s  | 15.9421 s  |


