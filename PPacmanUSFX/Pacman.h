#pragma once
#include <iostream>
#include <string>
#include <algorithm>

#include <SDL.h>

#include "GamePawn.h"
#include "Texture.h"
#include "Tile.h"
#include "TileGraph.h"
#include "MoveDirection.h"
#include "Moneda.h"
#include "GamePawnControllerKey1.h"

using namespace std;

class Pacman : public GamePawn
{
protected:

	GameObjectType returType() { return PACMAN; }
public:
	//Constructores y destructores
	Pacman(Tile* _tile, Texture* _textura);
	~Pacman() {};

	//Metodos accesores
	void setTileActual(Tile* _tileNuevo) override;
	// Mover pacman
	void update();
	// Renderizar imagen pacman
	void render() override;
	//void update();
	void deleteGameObject() override;

};