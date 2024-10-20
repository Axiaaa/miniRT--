#pragma once

#include "Vector.hpp"
#include "Sphere.hpp"
#include "MLX42.h"


#ifndef DEBUG
    #define DEBUG 0
#endif

#define WIDTH 1280
#define HEIGHT 720
#define PIXEL_COUNT WIDTH * HEIGHT

class miniRT {

    private :
        mlx *_mlx;
        mlx_image_t *_img;
 
    public : 
        ~miniRT();
        void run();
        mlx* getMLX();
        void setMLX(mlx_t *mlx);
        void setIMG(mlx_image_t *img);
        void draw();
};


int get_rgba(int r, int g, int b, int a);
void key_quit(mlx_key_data_t key, void* param);
void quit(void* param);