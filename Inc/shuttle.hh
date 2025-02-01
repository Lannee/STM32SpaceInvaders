/*
 * shuttle.hh
 *
 *  Created on: Nov 24, 2024
 *      Author: Lannee
 */

#pragma once

#include "entity.hh"

class Shuttle : Entity {

	Shuttle() : Entity(std::make_unique<HitBox>(20, 20)) {}
};
