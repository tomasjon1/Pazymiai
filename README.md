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

| Dydis  | Studentu dalinimas  | isvedimas i failus | 
| ------------- | ------------- | ------------- |
| 1000  | 0.0005445 s  | 0.0037623 s  |  
| 10000  |  0.0056571 s  | 0.0212252 s  |  
| 100000  |  0.0466536 s  | 0.1786713 s  |  
| 1000000  |  0.589681 s  | 1.64982 s  | 
| 10000000  |  8.09341 s  | 16.4875 s  | 

## Bendri V0.5 rezultatai
### Skaidymas i grupes

| Tipas  | 1000  | 10000 | 100000  | 1000000 | 10000000 | 
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| Vector  | 0.0009283   | 0.0044929  | 0.0965414   | 0.0438312  | 6.11869  | 
| Deque  | 0.0005445  | 0.0056571 | 0.0466536  | 0.589681 | 8.09341 | 
| List  | 0.0013448   | 0.0049649 | 0.0965414  | 1.75111  | 11.5866  | 

### Rasymas i faila

| Tipas  | 1000  | 10000 | 100000  | 1000000  | 10000000 | 
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| Vector  | 0.0265609   | 0.0224853  | 0.182653   | 0.159213  | 15.3828  | 
| Deque  | 0.0037623  | 0.0212252 | 0.1786713  |  1.64982 | 16.4875 | 
| List  | 0.110706  | 0.0395351 | 0.182653  | 4.24782  | 16.2664  | 


