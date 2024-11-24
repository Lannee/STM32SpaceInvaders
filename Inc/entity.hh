/*
 * entity.hh
 *
 *  Created on: Nov 24, 2024
 *      Author: Lannee
 */

#pragma once

#include <optional>

#include "hitbox.hh"

class Entity {
	Entity(std::unique_ptr<HitBox> hit_box)
		: model(std::nullopt), hit_box(std::move(hit_box)) {}

	Entity(Model &model)
		: Entity(model, std::make_unique<HitBox>(model.height(), model.width())) {}

	Entity(Model &model, std::unique_ptr<HitBox> hit_box)
		: Entity(model, hit_box, 0, 0) {}

	Entity(Model &model, std::unique_ptr<HitBox> hit_box, size_t x_pos, size_t y_pos)
		: model(std::make_optional(model)), hit_box(std::move(hit_box)), x_pos(x_pos), y_pos(y_pos) {}

private:
	const std::optional<Model &> model;
	const std::unique_ptr<HitBox> hit_box;

	size_t x_pos;
	size_t y_pos;

public:
	void pos(size_t x, size_t y) { x_pos = x; y_pos = y; }

	const std::optional<Model &> model() { return model; }
};
