#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <windows.h>


sf::ContextSettings settings(24, 8, 4 , 3, 1 , sf::ContextSettings::Debug, 0);
sf::RenderWindow RWINdow (sf::VideoMode(800, 600), L"The Restart", sf::Style::Close, settings);
sf::Event Event;




class BaseManager
{
    public:
        BaseManager(sf::RenderWindow & R) : WINdow(R){};
     sf::RenderWindow & WINdow;
    void draw()
    {
        sf::RectangleShape s(sf::Vector2f(10, 10));
        s.setFillColor(sf::Color::Black);
        WINdow.draw(s);
    }

};

int WinMain (HINSTANCE hThisInstance,HINSTANCE hPrevInstance,LPSTR lpszArgument,int nCmdShow)
{

    BaseManager B(RWINdow);
    while (RWINdow.isOpen())
    {
        while (RWINdow.pollEvent(Event))
        {
            switch ((int)Event.type)
            {
            }
        }
        RWINdow.clear(sf::Color(0, 0 , 0 , 0));
        B.draw();
        RWINdow.display();
    }
    return 360;
}

