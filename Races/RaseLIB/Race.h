#pragma once
#ifndef RACE_H
#define RACE_H
#include "../TransportLIB/MagicAir.h"
#include "../TransportLIB/Eagle.h"
#include "../TransportLIB/Broomstick.h"
#include "../TransportLIB/Camel.h"
#include "../TransportLIB/CamelRun.h"
#include "../TransportLIB/Centaur.h"
#include "../TransportLIB/Allterrboots.h"
#include <vector>
#include <algorithm>
class Race {
protected:
    int distance;
    Race() = default;
    virtual ~Race() = default;
};
#endif

