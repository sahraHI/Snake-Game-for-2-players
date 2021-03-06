#include "Game.h"

Game::Game() {

    //Load texture for floor.
    if (!floorTexture.loadFromFile("static\\1.png")) {
        cout << "Error loading texture 1 file";
    }
    floorSprite.setTexture(floorTexture);

    //Load texture for food.
    if (!food1Texture.loadFromFile("static\\2.png")) {
        cout << "Error loading texture 2 file";
    }
    food1Sprite.setTexture(food1Texture);
    food1.x = (rand() % 40) * SIZE_OF_TEXTURE;
    food1.y = (rand() % 30) * SIZE_OF_TEXTURE;
    food1Sprite.setPosition(food1);

    if (!food2Texture.loadFromFile("static\\3.jpg")) {
        cout << "Error loading texture 3 file";
    }
    food2Sprite.setTexture(food2Texture);
    food2.x = (rand() % 40) * SIZE_OF_TEXTURE;
    food2.y = (rand() % 30) * SIZE_OF_TEXTURE;
    food2Sprite.setPosition(food2);
}

Game::~Game() {

}

//To update food1.
void Game::updateFood1() {
    food1.x = (rand() % 40) * SIZE_OF_TEXTURE;
    food1.y = (rand() % 30) * SIZE_OF_TEXTURE;
    food1Sprite.setPosition(food1);
}

//To update food2.
void Game::updateFood2() {
    food2.x = (rand() % 40) * SIZE_OF_TEXTURE;
    food2.y = (rand() % 30) * SIZE_OF_TEXTURE;
    food2Sprite.setPosition(food2);
}

//To draw game page.
void Game::draw(sf::RenderWindow &window) {

    //Draw floor.
    for (int i = 0; i < 40; ++i) {
        for (int j = 0; j < 30; ++j) {
            floorSprite.setPosition(i * SIZE_OF_TEXTURE, j * SIZE_OF_TEXTURE);
            window.draw(floorSprite);
        }
    }

    //Draw foods.
    window.draw(food1Sprite);
    window.draw(food2Sprite);
}
