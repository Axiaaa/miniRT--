#pragma once

class Rgba {

    private :
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a;

    public :

        Rgba();
        Rgba(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
        ~Rgba();

};