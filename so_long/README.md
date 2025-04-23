# so_long

so_long is a simple 2D game where a player collects items and reaches an exit

## Description
In so_long, you control a character that must collect all the collectibles on the map and then reach the exit. The game features:

- A simple and intuitive map system
- Player movement using WASD or arrow keys
- Collectibkes that must be gathered
- An exit that is only accessible after collecting all items
- Movement counter displayed in the terminal

## Installation
1. Clone this repository
2. Run make to compile the game
```bash
$ make
```
3. Run the game with a map file
```bash
$ ./so_long maps/map.ber
```

## Controls
- Move: WASD or Arrow keys
- Exit: ESC key or click the window close button

## Map Format
Maps are stored in .ber files with the following characters:
- 1: Wall
- 0: Empty Space
- P: Player starting position
- C: Collectible
- E: Exit 
