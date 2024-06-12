#pragma once
#include "WorldTransform.h"
#include "Model.h"
#include"cassert"
class Player {
public:
	void Initialize(Model* model, uint32_t textureHandle,ViewProjection* viewProjection);

	void Update();

	void Draw();

private:
	WorldTransform worldTransform_;
	Model* model_ = nullptr;
	uint32_t textureHandle_ = 0u;
	Player* player_ = nullptr;
	ViewProjection* viewProjection_=nullptr;
};
