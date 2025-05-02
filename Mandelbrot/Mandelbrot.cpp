
// abs complex example
#include <iostream>     // std::cout
#include <complex>      // std::complex, std::abs
#include"ComplexPlane.h"
using namespace std;
using namespace sf;
// hdkdkdkg
/*
void testConvergence(complex<double> c)
{
    cout << "c = " << c << endl;
    cout << "Real component of c: " << c.real() << endl;
    cout << "Imaginary component of c: " << c.imag() << endl;
    complex<double> z = c;
    int i = 0;
    while (abs(z) < 2.0 && i < 64)
    {
        z = z * z + c;
        //
          //cout << "z_" << i << "= " << z << endl;
          //cout << "|z| = " << abs(c) << endl;
        i++;
    }
    if (i == 64) cout << c << " converges!" << endl;
    else cout << c << " escapes after " << i << " iterations" << endl;
}
*/

int main()
{

    // Create a video mode object
    //VideoMode vm(1920, 1080);

    int width = VideoMode::getDesktopMode().width;
    int height = VideoMode::getDesktopMode().height;


    VideoMode vm(width/2, height/2);
    // Create and open a window for the game
    RenderWindow window(vm, "Mandelbrot", Style::Default);

    //ComplexPlane cPlane;
    //window.draw(complexPlane);

    Text text;

    Font font;
    font.loadFromFile("EuropeanTypewriter.ttf");

    text.setFont(font);

    text.setString("Click on any three points on the screen to create the vertices for the triangle.");

    text.setCharacterSize(24);

    text.setFillColor(sf::Color::White);

    text.setStyle(Text::Bold | Text::Underlined);

    ComplexPlane cPlane(/*width, height*/);

    
    Event event;
    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                // Quit the game when the window is closed
                window.close();
            }
        }
        
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
    }





    /*
    Event event;
    while (window.pollEvent(event))
    {
        if (event.type == Event::Closed)
        {
            // Quit the game when the window is closed
            window.close();
        }


        if (event.type == Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == Mouse::Left)
            {
                cout << "the left button was pressed" << endl;
                cout << "mouse x: " << event.mouseButton.x << endl;
                cout << "mouse y: " << event.mouseButton.y << endl;

                if (vertices.size() < 3)
                {
                    vertices.push_back(Vector2f(event.mouseButton.x, event.mouseButton.y));

                }
                else if (points.size() == 0)
                {
                    ///fourth click
                    ///push back to points vector
                    points.push_back(Vector2f(event.mouseButton.x, event.mouseButton.y));


                }
            }
        }
    }
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        window.close();
    }
    */





    
    
    
    /*
    double re = -0.77568377;
    double im = 0.13646737;
    complex<double> c(re, im);
    testConvergence(c);
    cout << endl;
    c = { -0.77568377, 0.23646737 };
    testConvergence(c);
    */
    return 0;
}