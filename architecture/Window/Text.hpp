/*
** EPITECH PROJECT, 2023
** Text
** File description:
** Text
*/

#ifndef TEXT_HPP
    #define TEXT_HPP

    #include <string>
    #include <vector>
    #include "Color.hpp"

namespace arcade {

    class Text {

        public:

            ~Text() = default;

            /* draw our text */
            void draw();
            /*******/

            /* Postion text */
            void setPosition(std::vector<float> pos);
            std::vector<float> getPosition() const;
            /*******/

            /* Manage move text */
            void move(float x, float y);
            /*******/

            /* Manage speed text */
            void setSpeed(float speed);
            float getSpeed() const;
            /*******/

            /* Manage rotation text */
            void rotate(float angle);
            float getAngle() const;
            /*******/

            /* Manage color text */
            void setColor(Color);
            Color getColor() const;
            /*******/

            /* Manage font text */
            void setFont(const std::string &font);
            std::string loadFont() const;
            /*******/

            /* Manage text. It's same for set a Sprite in SFML or other lib */
            void setText(const std::string &text);
            std::string getText() const;
            /*******/

            /* Manage size text */
            void setSize(std::vector<float> size);
            std::vector<float> getSize() const;
            /*******/

        private:

            std::vector<float> size;
            std::vector<float> pos;
            float speed;
            float angle;
    };
};

#endif
