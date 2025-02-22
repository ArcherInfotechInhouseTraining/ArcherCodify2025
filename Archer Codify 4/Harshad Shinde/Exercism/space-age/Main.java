#include "space_age.h"

#define EARTH_YEAR_SECONDS 31557600.0f  

static const float periods[] = {
    0.2408467f,  // Mercury
    0.61519726f, // Venus
    1.0f,        // Earth
    1.8808158f,  // Mars
    11.862615f,  // Jupiter
    29.447498f,  // Saturn
    84.016846f,  // Uranus
    164.79132f   // Neptune
};

float age(planet_t planet, int64_t sec) 
{ 
    if (planet < MERCURY || planet > NEPTUNE) 
    {
        return -1.0f; 
    }
    return (sec / EARTH_YEAR_SECONDS) / periods[planet];
}
