#ifndef __GAME_OF_LIFE
#define __GAME_OF_LIFE

#include <vector>

class GameOfLife {
    GameOfLife(); // unbounded grid
    GameOfLife(int height, int width, bool toroid); // bounded grid
    GameOfLife(bool** grid, int height, int width, bool toroid); // copy grid
    ~GameOfLife();

    void setAlive(int x, int y);
    void printGrid();
    void run_round();
    void run(int rounds) {
        for(int i = 0; i < rounds; i++) {
            run_round();
        }
    }

private:
    std::vector<std::vector<bool> > grid;
    std::vector<std::vector<bool> > copy;
    bool grow, wrap_around;
    int height, width;
};

#endif
