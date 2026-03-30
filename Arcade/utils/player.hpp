/*
** EPITECH PROJECT, 2026
** Project - Arcade
** File description:
** Header file for
** Player struct
*/

#pragma once

#include <string_view>
#include <cstdint>
#include <string>


namespace Arcade {
    /**
     * Libraries may extend this
     * struct by inheriting from it,
     * as long as you don't change
     * IGame::update()'s parameter AND
     * don't dynamic_cast<>() to your
     * subclass in the update function.
     */
    struct Player {
        std::string name;
        std::uint64_t score;

        Player(std::string_view name) : name(name), score(0) {}
    };
}
