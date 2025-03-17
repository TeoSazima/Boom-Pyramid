# Boom pyramids

## EN: Console game of survival in a numeric pyramid

### description

The boom of the pyramid is a console game written in C ++, where the player tries to survive as many wheels as possible without stepping on the mine. The game works on the principle of randomly generated bombs located in a numeric pyramid.

### rules of the game

- The player sees the pyramid of numbers.
- In each round he enters the number of his choice.
- If the player enters the number on which the bomb is, the game ends.
- The aim of the game is to survive 9 laps without the player to hit the bomb.
- If the player survives all the rounds, he wins.

### installation and startup

1. Clone the repository or download the `boom_pyramid.cpp` file.
2. Open the terminal and compile the program using:
 `` `SH
 G ++ -O Boom_pyramid Boom_pyramid.cpp
 `` `
3. Start the program:
 `` `SH
 ./boom_pyramid
 `` `
4. Enter the number of your choice and watch the game.

### Example of the game

```
     1  
    1 2  
   1 2 3  
  1 2 3 4  
 ...
```

- The player enters the number `2` → the game continues.
- The player enters the number `4` → the bomb explodes, the game ends.

### Structure of code

- `Vysanipole ()`: Function for plotting the pyramid of numbers.
- `Main ()`: Main game loop, bombs generation, player inputs and win/loss check.

### Author

This program was created as a demonstration project for practicing work with console input and output in C ++.

If you have any questions or comments, do not hesitate to contact me.


# Boom Pyramid

## CS: Konzolová hra o přežití v číselné pyramidě

### Popis

Boom Pyramid je konzolová hra napsaná v jazyce C++, kde se hráč snaží přežít co nejvíce kol, aniž by šlápl na minu. Hra funguje na principu náhodně generovaných bomb rozmístěných v číselné pyramidě.

### Pravidla hry

- Hráč vidí pyramidu čísel.
- V každém kole zadá číslo podle svého výběru.
- Pokud hráč zadá číslo, na kterém je bomba, hra končí.
- Cílem hry je přežít 9 kol, aniž by hráč narazil na bombu.
- Pokud hráč přežije všechna kola, vyhrává.

### Instalace a spuštění

1. Naklonujte repozitář nebo stáhněte soubor `boom_pyramid.cpp`.
2. Otevřete terminál a zkompilujte program pomocí:
   ```sh
   g++ -o boom_pyramid boom_pyramid.cpp
   ```
3. Spusťte program:
   ```sh
   ./boom_pyramid
   ```
4. Zadejte číslo podle svého výběru a sledujte průběh hry.

### Příklad hry

```
     1  
    1 2  
   1 2 3  
  1 2 3 4  
 ...
```

- Hráč zadá číslo `2` → hra pokračuje.
- Hráč zadá číslo `4` → bomba vybuchne, hra končí.

### Struktura kódu

- `vypsaniPole()`: Funkce pro vykreslení pyramidy čísel.
- `main()`: Hlavní herní smyčka, generování bomb, zadávání vstupů hráče a kontrola výhry/prohry.

### Autor

Tento program byl vytvořen jako demonstrační projekt pro procvičení práce s konzolovým vstupem a výstupem v jazyce C++.

Pokud máte jakékoli dotazy nebo připomínky, neváhejte mě kontaktovat.
