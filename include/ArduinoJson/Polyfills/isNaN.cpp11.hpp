// Copyright Benoit Blanchon 2014-2016
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson
// If you like this project, please add a star!

#pragma once

#include <cmath>

namespace ArduinoJson {
namespace Polyfills {

using isNaN = std::isnan;
}
}
