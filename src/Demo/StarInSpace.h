#ifndef StarInSpace_H
#define StarInSpace_H

#include "../GEGame.h"
#include "../GESystems.h"

extern float deltaTime;

class StarInSpace : public GEGame
{
private:
    vector<GEVector2D *> points;
public:
    StarInSpace();
    ~StarInSpace();
    void gameUpdate(long currentTime);
    void gameDraw();
    void gameDispose();

};

#endif // StarInSpace_H
