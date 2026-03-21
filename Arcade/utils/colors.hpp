/*
** EPITECH PROJECT, 2026
** Project - Arcade
** File description:
** Header file for
** libarcade's color
** struct
*/

#pragma once

#include <cstdint>


namespace Arcade {
    /**
     * Note:
     * The alpha channel (`alpha` field)
     * doesn't need to be supported by
     * the graphics library.
     *
     * It is nonetheless provided, as the
     * structure will contain 4 8-bit fields
     * due to padding anyway, so might as well
     * use it if possible.
     */
    struct Color {
        std::uint8_t red;
        std::uint8_t green;
        std::uint8_t blue;
        std::uint8_t alpha;

        constexpr Color(std::uint8_t r, std::uint8_t g, std::uint8_t b, std::uint8_t a = 0xff) noexcept
            : red(r)
            , green(g)
            , blue(b)
            , alpha(a)
        {}

        constexpr Color(std::uint32_t color) noexcept
            : red   ((color & 0xff000000) >> 24)
            , green ((color & 0x00ff0000) >> 16)
            , blue  ((color & 0x0000ff00) >>  8)
            , alpha ((color & 0x000000ff) >>  0)
        {}

        constexpr Color() noexcept : Color{ 0, 0, 0, 0 } {};

        inline std::uint32_t toRGB() const noexcept { return *reinterpret_cast<const std::uint32_t*>(this); }
    };
}
