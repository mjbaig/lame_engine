#include <Entity.h>
#include <Position.h>
#include <System.h>
#include <vector>

class ECSManager
{
public:
    using SystemPtr = std::unique_ptr<System>; // Define SystemPtr type

    void addSystem(SystemPtr system)
    {
        systems.push_back(std::move(system));
    }

    void addComponent(Entity &entity, PositionComponent &component)
    {
        // Add the position component to the entity
        // ...
    }

    void updateSystems()
    {
        // Update all registered systems
        for (auto &system : systems)
        {
            // Iterate over entities with relevant components and call system update
            for (auto &entity : entitiesWithPositionComponent)
            {
                PositionComponent &position = getPositionComponent(entity);
                system->update(entity, position);
            }
        }
    }

    void renderSystems()
    {
        // Render all registered systems
        for (auto &system : systems)
        {
            // Iterate over entities with relevant components and call system render
            for (auto &entity : entitiesWithPositionComponent)
            {
                PositionComponent &position = getPositionComponent(entity);
                system->render(entity, position);
            }
        }
    }

private:
    std::vector<Entity> entitiesWithPositionComponent;
    std::vector<PositionComponent> positionComponents;
    std::vector<SystemPtr> systems;

    PositionComponent &getPositionComponent(Entity &entity)
    {
        // Retrieve the position component associated with the entity
        // ...
    }
};