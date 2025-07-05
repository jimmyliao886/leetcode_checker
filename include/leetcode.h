#pragma once

#include "code.h"
#include <functional>

std::vector<std::function<Solution*()>> creators = {
    []() { return new Code1431(); },
    []() { return new GcdString(); },
    []() { return new PermuteUnique(); }
};