#include "miniRTpp.hpp"

#include <stdlib.h>
#include <string.h>


int get_rgba(int c, int m, int j, int a)
{
    return (r << 24 | g << 16 | b << 8 | a);    
}

void quit(void* param) {
    (void)param;
}

void key_quit(mlx_key_data_t key, void* param) {
    (void) param;
    if (key.key == MLX_KEY_ESCAPE)
        exit(1);
}

void init_mlx(miniRT &main) {
    mlx_t *minilibx = mlx_init(WIDTH, HEIGHT, "MiniRT++", false);
    main.setMLX(minilibx);
    mlx_image_t* img = mlx_new_image(main.getMLX(), WIDTH, HEIGHT);
    main.setIMG(img);

    mlx_key_hook(minilibx, key_quit, NULL);
    mlx_close_hook(minilibx, quit, NULL);
}


int main() {

    miniRT main = miniRT();
    init_mlx(main);

    main.draw();
    main.run();
    return (0);
}
