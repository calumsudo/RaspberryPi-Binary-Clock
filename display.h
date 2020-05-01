#include <string.h>
#include "framebuffer.h"
#include <stdio.h>


#define WHITE 0xFFF
#define BLACK 0x0000
#define RED 0xF800
#define GREEN 0x07E0
#define BLUE 0x001F
#define HOURS_ROW 6
#define MINS_ROW 3
#define SECS_ROW 0

void display_colons(pi_framebuffer_t*);
void display_hours(int hours, pi_framebuffer_t*);
void display_minutes(int minutes, pi_framebuffer_t*);
void display_seconds(int seconds, pi_framebuffer_t*);
void display_time(int hours, int minutes, int seconds, pi_framebuffer_t*);
