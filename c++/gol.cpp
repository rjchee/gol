#include "gol.h"

GameOfLife::GameOfLife() : GameOfLife(false, 16, 16, false) {}

GameOfLife::GameOfLife(int height, int width, bool toroid) :
    GameOfLife(true, height, width, toroid) {}

GameOfLife::GameOfLife(bool** grid, bool bounded, int height, int width, bool toroid) : GameOfLife(bounded, height, width, toroid) {
    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {
            setAlive(r, c, grid[r][c]);
        }
    }
}

GameOfLife::GameOfLife(std::vector<std::vector<bool> >& grid, bool bounded, int height, int width, bool toroid) : GameOfLife(bounded, height, width, toroid) {
    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {
            setAlive(r, c, grid[r][c]);
        }
    }
}
GameOfLife::GameOfLife(bool bounded, int height, int width, bool toroid) :
    grow(!bounded),
    wrap_around(toroid),
    height(height),
    width(width) {}

void GameOfLife::setAlive(int r, int c, bool alive) {
    if (r < 0 || r >= height || c < 0 || c >= height) {
        if (grow) {
        }
    }
    grid[r][c] = alive;
}

void GameOfLife::printGrid() {
}

void GameOfLife::run_round() {
}

int main() {
}
