#include <iostream>
#include <LibSL/Math/Vertex.h>

int main() {

    // Create a 2D double vector using the v2d type
    LibSL::Math::v2d myVertex = LibSL::Math::V2D(1.0, 2.0);

    // Access the components of the vector
    double x = myVertex[0];
    double y = myVertex[1];

    // Print the components of the vector
    std::cout << "x: " << x << ", y: " << y << std::endl;

    // Create a 3D float vector using the v3f type
    LibSL::Math::v3f myVertex2 = LibSL::Math::V3F(1.0f, 2.0f, 3.0f);

    // Access the components of the vector
    float x2 = myVertex2[0];
    float y2 = myVertex2[1];
    float z2 = myVertex2[2];

    // Print the components of the vector
    std::cout << "x: " << x2 << ", y: " << y2 << ", z: " << z2 << std::endl;

    return 0;
}
