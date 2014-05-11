#ifndef GRAPHICS_H
#define GRAPHICS_H


#define SCREEN_WIDTH 160
#define SCREEN_HEIGHT 144

typedef enum {WHITE = 0, GREY = 1, DARK_GREY = 2, BLACK = 3} Colour;
typedef enum {TYPE0 = 0, TYPE1 = 1} TileType;

typedef struct {
    Colour colour[8][8];
} Tile;



int init_gfx();

void draw_row(uint8_t row);

#endif /* GRAPHICS_H */