/*
 * model.hh
 *
 *  Created on: Nov 24, 2024
 *      Author: Lannee
 */

#pragma once

typedef bool Pixel;

/*
 * Represents model shown on screen a.k.a. texture
 */
class Model {
	Model(size_t height, size_t width, std::unique_ptr<std::vector<std::vector<Pixel>>> repr)
		: height(height), width(width), repr(std::move(repr)) {}
private:
	const size_t height;
	const size_t width;
	const std::unique_ptr<std::vector<std::vector<Pixel>>> repr;
};

// for reference see:
// https://spaceinvaders.fandom.com/wiki/Category:Space_Invaders_Characters

// Squid - small invader, 8x8
constexpr std::vector<std::vector<Pixel>> squid_texture = {
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {1, 1, 0, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 1, 1, 0, 1, 0},
        {1, 0, 1, 0, 0, 1, 0, 1}
};

// Carb - medium invader, 11x8
constexpr std::vector<std::vector<Pixel>> crab_texture = {
        {0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
        {0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},
        {0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0},
};

// Octopus - large invader, 12x8
constexpr std::vector<std::vector<Pixel>> octopus_texture = {
        {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0},
        {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
};
