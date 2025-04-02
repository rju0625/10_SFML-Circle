#include <SFML/Graphics.hpp> // Include the main SFML graphics library header

// I am over commenting this code and trying to explain EACH process so that I actually understand 
// what is going on so that I learn instead of just frankenstineing what is given to me in the 
// SFML documentation website along with other internet resources

int main()
{
    // sf::RenderWindow makes an object to show graphics on a window
    // sf::VideoMode(200, 200) makes the window size 200x200 pixels
    // Baby Green Circle is the window title
    sf::RenderWindow window(sf::VideoMode({200, 200}), "Baby Green Circle");
    
    // this is the maximum frame rate to 144 frames per second to avoid excessive CPU/GPU usage
    window.setFramerateLimit(144);

    // Create a CircleShape object with a radius of 100 pixels
    sf::CircleShape circle(100.f);
    
    // Set the fill color of the circle to green
    circle.setFillColor(sf::Color::Green);

    // The main loop that keeps the window open and responsive
    while (window.isOpen())
    {
        // Event handling loop to process all incoming events, what ever that means...
        while (const std::optional event = window.pollEvent())
        {
            // Check if the event is of type "Closed", meaning the user wants to close the window
                // like pressing the red button at the top of the window
            if (event->is<sf::Event::Closed>())
            {
                // Close the window and ending the program
                window.close();
            }
        }

        // Clear the window with the default background color which is black
        window.clear();
        
        // Draw the circle onto the window, which places the circle in the drawing queue
        window.draw(circle);
        
        // Display the drawn objects (our circle) on the screen
        window.display();
    }
}
