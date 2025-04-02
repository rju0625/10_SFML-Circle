#include <SFML/Graphics.hpp> // Include the main SFML graphics library header

int main()
{
    // Create a RenderWindow object to render graphics on a window.
    // sf::VideoMode({800u, 600u}) defines the window size (800x600 pixels).
    // The second argument is the window title.
    auto window = sf::RenderWindow(sf::VideoMode({800u, 600u}), "CMake SFML Project");
    
    // Set the maximum frame rate to 144 frames per second to avoid excessive CPU/GPU usage.
    window.setFramerateLimit(144);

    // Create a CircleShape object with a radius of 100 pixels.
    sf::CircleShape circle(100.f);
    
    // Set the fill color of the circle to green.
    circle.setFillColor(sf::Color::Green);

    // The main loop that keeps the window open and responsive.
    while (window.isOpen())
    {
        // Event handling loop to process all incoming events.
        while (const std::optional event = window.pollEvent())
        {
            // Check if the event is of type "Closed", meaning the user wants to close the window.
            if (event->is<sf::Event::Closed>())
            {
                // Close the window, effectively ending the program.
                window.close();
            }
        }

        // Clear the window with the default background color (black).
        window.clear();
        
        // Draw the circle onto the window. This only places the circle in the drawing queue.
        window.draw(circle);
        
        // Display the drawn objects on the screen. This updates the frame buffer.
        window.display();
    }
}
