/*
** EPITECH PROJECT, 2023
** IDisplayModule
** File description:
** IDisplayModule
*/

#ifndef IDISPLAYMODULE_HPP
    #define IDISPLAYMODULE_HPP

    #include <string>
    #include "Event.hpp"

namespace arcade {

    class IDisplayModule {

        public:

            virtual ~IDisplayModule() = default;

            /* Create the window */
            virtual void create(std::string const &name) = 0;
            /*******/

            /* Handle Event in Window */
            virtual void pollEvent(Event) = 0; /* Peut être quelle renvoie un booleen (revoir son type de retour)*/
            /*******/

            /* Display window */
            virtual void display() = 0;
            /*******/

            /* Open, close and clear window */
            virtual void open() = 0;
            virtual void close() = 0;
            virtual void clear() = 0;
            /*******/

            /* Draw the elements */
            virtual void draw(/* Reflechir au parametre mais peut etre une structure draw*/) = 0;
            /*******/
    };
};

#endif
