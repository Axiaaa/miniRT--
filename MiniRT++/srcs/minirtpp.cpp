#include "miniRTpp.hpp"


//Descructors
miniRT::~miniRT() {
    mlx_terminate(_mlx);
}

//Methods
void miniRT::run() {
    mlx_loop(this->_mlx);
}


void miniRT::draw() {

    for (int i = 0; i < PIXEL_COUNT; i++)
        ((int32_t*)_img->pixels)[i] = get_rgba(255, 0, 255, 255);
    mlx_image_to_window(_mlx, _img, 0, 0);

};


//Getters
mlx* miniRT::getMLX() { return this->_mlx;}

//Setters
void miniRT::setIMG(mlx_image_t *img)   {   this->_img = img; }
void miniRT::setMLX(mlx_t *mlx)         {   this->_mlx = mlx; }