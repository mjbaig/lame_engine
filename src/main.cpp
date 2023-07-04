#include <iostream>
#include <glm/glm.hpp>

int main()
{
    // Create a 3D vector
    glm::vec3 vec(1.0f, 2.0f, 3.0f);

    // Print the vector
    std::cout << "Vector: (" << vec.x << ", " << vec.y << ", " << vec.z << ")" << std::endl;

    return 0;
}