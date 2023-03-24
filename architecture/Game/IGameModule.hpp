/*
** EPITECH PROJECT, 2023
** IGameModule
** File description:
** IGameModule
*/

#ifndef IGAMEMODULE_HPP_
    #define IGAMEMODULE_HPP_

    #include "Event.hpp"
    #include <vector>

namespace arcade {

    class IGameModule {

        public:

            virtual ~IGameModule() = default;

            /* Handle Event */
            virtual arcade::Event event(Event) = 0;
            // On return 1 évènement. 
            // Chacun est libre de traiter les évènements dans un vecteur ou non.
            /*******/

            /* Process score */
            virtual void loadHighScore() = 0;
            virtual void updateScore() = 0;
            virtual int getScore() = 0;
            /*******/

            virtual void quit() = 0;
            virtual void resume() = 0;

            /* Process Pause Option */
            virtual void pause() = 0;
            virtual bool isPaused() = 0;
            /*******/

            virtual void run() = 0;
            virtual void restart() = 0;
    };
};

#endif
