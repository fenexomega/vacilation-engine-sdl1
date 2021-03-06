#ifndef FINALGAME_H
#define FINALGAME_H

#include "../GEGame.h"
#include "../GESystems.h"

extern float deltaTime;

class FinalGame : public GEGame
{
private:
    vector<GEVector2D *> points;
public:
    FinalGame();
    ~FinalGame();
    void gameUpdate(long currentTime);
    void gameDraw();
    void gameDispose();

};

#endif // FINALGAME_H
