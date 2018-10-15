# Game Of Life

## Description

From https://bitstorm.org/gameoflife/ : 
> The Game of Life is not your typical computer game. It is a 'cellular automaton', and was invented by Cambridge mathematician John Conway.

This here, is a simulation program coded in C regrouping a small set of initial conditions for the Game Of Life to play.

## Requirements

- MacOS: 10.0+
- A terminal 

## Installation

Go to the root folder (in terminal) and execute:
```zsh
make; make clean
```

This should compile all the sources into a binary named: "**gol**"

## How to play

Once the binary is created, run:
```zsh
./gol life
```

This will launch the Game Of Life with the standard rules:<br/>
  - Each cell with **one or no** alive neighbors **dies**, as if by solitude.<br/>
  - Each cell with **four or more** alive neighbors **dies**, as if by overpopulation.<br/>
  - Each cell with **two or three** alive neighbors **survives**.
  - Each cell with **three neighbors** becomes **alive**.<br/>


The game is turn based. To play next turn, press **_space_**.<br/>
**_Red_** cells are the one which are going to **die** next turn.<br/>
**_Green_** cells are the one which are going to **live** next turn.<br/>
**_Gray_** cells are **alive** and **won't change** next turn.<br/>
**_White_** cells are **dead** and **won't change** next turn.<br/>

To clear the game playground, press the letter **_C_** <br/>
To add living cells to the playground, **_click_** the wanted position with your mouse. <br/>
To exit the game, press **_ESC_** <br/>

## Other sets of rules

You can launch the game with 5 different sets of rules, which are:<br/>
  - life
  - seeds
  - brain
  - flakes
  - maze

Enjoy!
