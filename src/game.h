#ifndef GAME_H
#define GAME_H

#define DEBUG 1

#include <Arduboy2.h>
#include <ArduboyPlaytune.h>


#define WALL_FREQ   220
#define PADDLE_FREQ 440
#define POINT_FREQ  494
#define WALL_DUR    16
#define PADDLE_DUR  96
#define POINT_DUR   257

extern Arduboy2 arduboy; // found in pong.ino
extern ArduboyPlaytune sound;

extern Sprites sprites;

void tick();



#endif // GAME_HPP
