/*
 * hitbox.hh
 *
 *  Created on: Nov 24, 2024
 *      Author: Lannee
 */

#pragma once

struct HitBox {
	size_t width;
	size_t height;
	size_t x_offset;
	size_t y_offset;

	HitBox(size_t width, size_t height, size_t x_offset, size_t y_offset)
		: width(width), height(height), x_offset(x_offset), y_offset(y_offset) {}

	HitBox(size_t width, size_t height)
		: HitBox(width, height, 0, 0) {}
};
