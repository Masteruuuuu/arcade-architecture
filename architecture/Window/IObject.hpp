/*
** EPITECH PROJECT, 2023
** arcade-architecture
** File description:
** IObject
*/

#ifndef IOBJECT_HPP_
    #define IOBJECT_HPP_

    #include <string>
    #include <vector>
    #include "Color.hpp"

namespace arcade {
    /* 
        When doing graphical libs dont forget to respect the IObject interface 
        and dont add any other function that you would use in your game.
    */
    class IObject {
        public:
            virtual ~IObject() = default;
            /* draw our Object */
            void draw();
            /*******/

            /* Postion Object */
            virtual void setPosition(std::vector<float> pos) = 0;
            virtual std::vector<float> getPosition() const = 0;
            /*******/

            /* Manage move text */
            virtual void move(float x, float y) = 0;
            /*******/

            /* Manage speed text */
            /* We need to make a global speed scale example:
                1 charachter in ncurses = 10 pixel in other lib
                so when we change lib between every group it doesn't break

                Take ncurse as referential for all the speed.
                expemple we do setSpeed(1) in all lib:
                    in SFML we multiply 1 by 10 when we setSpeed;
                    so when we move(1, 0) by one character up in ncurse.
                    we move by 10 pixel up in SFML.
            */
            virtual void setSpeed(float speed) = 0;
            virtual float getSpeed() const = 0;
            /*******/

            /* Manage Sprite / Text creation */
            // In Sfml or other image is a path to the image
            // In ncurse image is a string containing the character to display
            virtual void setSprite(std::vector<float> pos, std::vector<float> size, std::string image) = 0;
            /*******/

            /* Manage rotation text */
            virtual void rotate(float angle) = 0;
            virtual float getAngle() const = 0;
            /*******/

            /* Manage color text */
            virtual void setColor(Color) = 0;
            virtual Color getColor() const = 0;
            /*******/

            /* Manage object Collision */
            virtual bool isCollide(IObject &) = 0;
            /*******/

            /* Manage size text */
            void setSize(std::vector<float> size);
            std::vector<float> getSize() const;
            /*******/
    };
}
#endif /* !IOBJECT_HPP_ */
