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

    template <typename T>
    class IDisplayModule {

        public:

            virtual ~IDisplayModule() = default;

            /* Create the window */
            virtual void createWindow(std::string const &name) = 0;
            virtual void destroyWindow() = 0;
            /*******/

            /* Display window */
            virtual void display() = 0;
            /*******/

            /* Open, close and clear window */
            virtual void isOpen() = 0;
            virtual void close() = 0;
            virtual void clear() = 0;
            /*******/

            /* Draw the elements */
            virtual void draw(/* Reflechir au parametre mais peut etre une structure draw*/) = 0;
            /*******/

            virtual T *getWindow() = 0;
    };
}

#endif
