#include "GESoundCore.h"

GESoundCore::GESoundCore()
{
}

bool GESoundCore::initSound()
{
    GE_PRINT("Initializing Sound: ");
    
    //Se for pra usar ogg ou mod, escrever aqui o Mix_Init()
    if (Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,2,4096) != 0) 
    {
        GE_LOG("Sound couldn't be initialized: " << Mix_GetError);
        return false;
    }
    
    Mix_Init(MIX_INIT_OGG | MIX_INIT_MOD);
    
    GE_LOG("Great");
    return true;
    
}
