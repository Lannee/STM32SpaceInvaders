/*
 * entity.hh
 *
 *  Created on: Nov 24, 2024
 *      Author: Lannee
 */

#pragma once

class Entity {
	Entity(Model &model, HitBox hot_box) : model(model), hit_box(hit_box) {}

private:
	const Model &model;
	const HitBox hit_box;

	size_t x_pos;
	size_t y_pos;
};
