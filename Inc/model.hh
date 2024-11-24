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

public:
	size_t height() { return height; }
	size_t width () { return width;  }
};
