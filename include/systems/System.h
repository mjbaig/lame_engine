class System
{
public:
    virtual void update(Entity &entity, PositionComponent &position) = 0;
    virtual void render(Entity &entity, PositionComponent &position) = 0;
};

class MovementSystem : public System
{
public:
    void update(Entity &entity, PositionComponent &position) override
    {
        // Update the position of the entity based on its velocity or input
        // ...
    }

    void render(Entity &entity, PositionComponent &position) override
    {
        // Movement system doesn't perform rendering
        // ...
    }
};

class RenderingSystem : public System
{
public:
    void update(Entity &entity, PositionComponent &position) override
    {
        // Update the position of the entity based on its velocity or input
        // ...
    }

    void render(Entity &entity, PositionComponent &position) override
    {
        // Movement system doesn't perform rendering
        // ...
    }
};