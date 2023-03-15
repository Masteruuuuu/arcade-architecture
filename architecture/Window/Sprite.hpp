/*
** EPITECH PROJECT, 2023
** Sprite
** File description:
** Sprite.hpp
*/

#ifndef SPRITE_HPP
    #define SPRITE_HPP

    #include <vector>
    #include <string>

namespace arcade {

    class Sprite {

        public:

            ~Sprite() = default;

            /* Position Sprite */
            void setPosition(std::vector<float> pos);
            std::vector<float> getPosition() const;
            /*******/

            /* Draw Sprite */
            void draw();
            /*******/

            /* Size Sprite. First element in the vector is HEIGHT and the Second element is WIDTH */
            void setSize(std::vector<float> size);
            std::vector<float> getSize() const;
            /*******/

            /* Set Sprite */
            void setSprite(std::vector<float> pos, std::vector<float> size, std::string image);
            /*******/

            /* Move Sprite */
            void move(float x, float y);
            /*******/

            /* Speed Sprite */
            void setSpeed(float speed);
            float getSpeed() const;
            /*******/

            /* Rotate Sprite */
            void rotate(float angle);
            float getAngle() const;
            /*******/

        private:

            std::vector<float> size;
            std::vector<float> pos;
            float speed;
            float angle;
    };
};

#endif
