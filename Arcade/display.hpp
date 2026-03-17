/*
** EPITECH PROJECT, 2026
** Project - Arcade
** File description:
** Header file for
** everything related
** to displays / graphics
*/

#pragma once

#include <optional>


namespace Arcade {
    enum class Event;

    class IDisplay {
        public:
            virtual ~IDisplay() = default;

            virtual std::optional<Event> pollEvent();
    };
}
