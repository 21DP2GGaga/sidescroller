#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include <vector>
#include "Platform.h"
#include <SFML/Audio.hpp>

static const float VIEW_HEIGHT = 1080.0f;

void ResizeView(const sf::RenderWindow& window, sf::View& view)
{
    float aspectRatio = float(window.getSize().x) / float(window.getSize().y);
    view.setSize(VIEW_HEIGHT * aspectRatio, VIEW_HEIGHT);

}

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "now playing: lmfao - party rock anthem", sf::Style::Close | sf::Style::Resize);
    sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));
    sf::Texture playerTexture;

    playerTexture.loadFromFile("animacija_1.png");
    Player player(&playerTexture, sf::Vector2u(4, 2), 0.3, 100.0f, 200.0f);
    
    std::vector<Platform>platforms;
    // (platums ,biezums)(y ase, bīde pa x asi)
    
    platforms.push_back(Platform(nullptr, sf::Vector2f(1323.0f, 100.0f), sf::Vector2f(1000.0f, 5870.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(50.0f, 20.0f), sf::Vector2f(850.0f, 5500.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(50.0f, 20.0f), sf::Vector2f(1300.0f, 5600.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(50.0f, 20.0f), sf::Vector2f(500.0f, 5200.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(50.0f, 20.0f), sf::Vector2f(1000.0f, 5250.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(50.0f, 20.0f), sf::Vector2f(1000.0f, 5000.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(50.0f, 20.0f), sf::Vector2f(400.0f, 4600.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(50.0f, 20.0f), sf::Vector2f(750.0f, 4800.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(40.0f, 20.0f), sf::Vector2f(1600.0f, 4400.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(40.0f, 20.0f), sf::Vector2f(400.0f, 4600.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(40.0f, 20.0f), sf::Vector2f(400.0f, 4600.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(40.0f, 20.0f), sf::Vector2f(800.0f, 4150.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(40.0f, 20.0f), sf::Vector2f(800.0f, 4150.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(500.0f, 3850.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(1000.0f, 3550.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(800.0f, 3300.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(400.0f, 3100.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(900.0f, 2850.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(1600.0f, 2600.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(700.0f, 2500.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(370.0f, 2300.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(30.0f, 20.0f), sf::Vector2f(1650.0f, 2220.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(20.0f, 20.0f), sf::Vector2f(400.0f, 1950.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(20.0f, 20.0f), sf::Vector2f(760.0f, 1750.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(20.0f, 20.0f), sf::Vector2f(800.0f, 1450.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(20.0f, 20.0f), sf::Vector2f(400.0f, 1150.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(10.0f, 20.0f), sf::Vector2f(1350.0f, 1200.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(10.0f, 20.0f), sf::Vector2f(760.0f, 1000.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(10.0f, 20.0f), sf::Vector2f(1600.0f, 1000.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(10.0f, 20.0f), sf::Vector2f(1100.0f, 750.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(10.0f, 20.0f), sf::Vector2f(1600.0f, 650.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(10.0f, 20.0f), sf::Vector2f(500.0f, 500.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(100.0f, 20.0f), sf::Vector2f(1100.0f, 250.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(20.0f, 6000.0f), sf::Vector2f(1655.0f, 2850.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(1600.0f, 100.0), sf::Vector2f(0.0f, 5870.0f)));
    platforms.push_back(Platform(nullptr, sf::Vector2f(20.0f, 7500.0f), sf::Vector2f(350.0f, 1800.0f)));
    
    
    
    float deltaTime = 0.0f;
    sf::Clock clock;

    
   

    sf::Texture windowTexture;
    windowTexture.loadFromFile("background.png");
    sf::Sprite s(windowTexture);    
    
    while(window.isOpen())
    {
        
        deltaTime = clock.restart().asSeconds(); 
        if (deltaTime > 1.0f / 60.0f)
            deltaTime = 1.0 / 60.0f;

        sf::Event evnt;
        while (window.pollEvent(evnt))
        {
            switch(evnt.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::Resized:
                ResizeView(window, view);
                break;
            }
        }
        
        player.Update(deltaTime);

        sf::Vector2f direction;
        for (int i = 0; i < platforms.size(); i++)
        {
            Platform& platform = platforms[i];
        }

        for (Platform& platform : platforms)
            if (platform.GetCollider().CheckCollision(player.GetCollider(), direction, 1.0f))
                player.OnCollision(direction);


        
        view.setCenter(player.GetPosition());
        
        window.clear(sf::Color::Black);
        window.draw(s);
        window.setView(view);
        
        player.Draw(window);     
        for (Platform& platform : platforms)
            platform.Draw(window);
        
        window.display();

    }
        return 0;
} 