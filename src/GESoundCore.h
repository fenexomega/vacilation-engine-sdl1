#ifndef GESOUNDCORE_H
#define GESOUNDCORE_H

#include "SDL/SDL.h"
#include "SDL_mixer.h"
#include "GEGlobal.h"

class GESoundCore
{
private:
    GESoundCore();
public:
    static bool initSound();
};

#endif // GESOUNDCORE_H
