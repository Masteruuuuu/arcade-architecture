/*
** EPITECH PROJECT, 2023
** IMenu
** File description:
** IMenu
*/

#ifndef IMENU_HPP
    #define IMENU_HPP

    #include <vector>
    #include <string>
    #include "Color.hpp"
    #include "Event.hpp"

namespace arcade {

    class IMenu {

        public:

            virtual ~IMenu() = default;

            virtual void event(Event) = 0;
            virtual void setSprite(std::vector<float> pos, std::vector<float> size, std::string image) = 0;
            virtual void draw() = 0;

             /* Postion Object */
            virtual void setPosition(std::vector<float> pos) = 0;
            virtual std::vector<float> getPosition() const = 0;
            /*******/

              /* Manage color Object */
            virtual void setColor(Color) = 0;
            virtual Color getColor() const = 0;
            /*******/

             /* Manage size Object */
            virtual void setSize(std::vector<float> size) = 0;
            virtual std::vector<float> getSize() const = 0;
            /*******/
    };
}

#endif
