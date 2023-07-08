//
// Created by maz on 7/8/2023.
//

#pragma once
#include <Entity.h>
#include <Position.h>
#include <System.h>
#include <vector>
#include <memory>

class ECSManager {
public:
    using SystemPtr = std::unique_ptr<System>; // Define SystemPtr type

    void addSystem(SystemPtr system);

    void addComponent(Entity &entity, PositionComponent &component);

    void updateSystems();

    void renderSystems();

private:
    std::vector<Entity> entitiesWithPositionComponent;
    std::vector<PositionComponent> positionComponents;
    std::vector<SystemPtr> systems;

    PositionComponent & getPositionComponent(Entity &entity);
};
