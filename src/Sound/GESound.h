#ifndef GESOUND_H
#define GESOUND_H

#include <iostream>
using namespace std;

class GESound
{
private:
    bool playing;
    long long int miliseconds;
public:
    GESound(string name);
    void play();
    void pause();
    void stop();
    
    long long int duration();
};

#endif // GESOUND_H
