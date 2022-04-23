```

```


# Programa skirta studentų pažymių vidurkiui ir medianai apskaičiuoti.

### Šioje versijoje yra naudojamas konteineris list.

### Kaip paleisti programą?<br>
Versijoje [v0.5.2](https://github.com/tomasjon1/Pazymiai/tree/v0.5.2):
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
| 1000  | 0.0170497 s  | 0.0013448 s  | 0.110706 s  |
| 10000  | 0.0573852 s  | 0.0049649 s  | 0.0395351 s  |
| 100000  | 0.350059 s  | 0.0965414 s  | 0.182653 s  |
| 1000000  | 3.8139 s  | 1.75111 s  | 4.24782 s  |
| 10000000  | 62.4652 s  | 11.5866 s  | 16.2664 s  |

