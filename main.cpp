#include <iostream>
#include <time.h>


using namespace sf;

int main()
{
    RenderWindow window(VideoMode(320, 480), "Game Started");

    Texture t;
    t.laodFormFile("images/titles.png");

    Sprite s(t);

    while(window.isOpen()){
        Event e;
        while(window.pollEvent(e)){
            if(e.type == Event::Closed)
                window.close();
        }

        window.clear(color::White);
        windows.draws(s);
        window.display();
    }

    return 0;
}
