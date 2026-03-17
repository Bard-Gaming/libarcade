/*
** EPITECH PROJECT, 2026
** Project - Arcade
** File description:
** Header file for
** libarcade's utilities
*/

#pragma once

#include <cstdint>


namespace Arcade {
    /**
     * A key event should be triggered
     * when the specified key is being
     * held down at the time of polling.
     *
     * This means key events are interpreted
     * as key "presses", not key "releases".
     */
    enum class Event {
        // letter keys
        KEY_A, KEY_B, KEY_C, KEY_D, KEY_E, KEY_F,
        KEY_G, KEY_H, KEY_I, KEY_J, KEY_K, KEY_L,
        KEY_M, KEY_N, KEY_O, KEY_P, KEY_Q, KEY_R,
        KEY_S, KEY_T, KEY_U, KEY_V, KEY_W, KEY_X,
        KEY_Y, KEY_Z,

        // digit keys
        KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6,
        KEY_7, KEY_8, KEY_9, KEY_0,

        // control keys
        KEY_BACKSPACE,
        KEY_RETURN,
        KEY_SPACE,
        KEY_SHIFT,
        KEY_CTRL,
        KEY_ALT,
        KEY_TAB,
        KEY_ESC,

        // control evts
        RESIZE,
        CLOSE,

        // misc
        COUNT,  // keep last
    };

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

        constexpr Color(std::uint8_t r, std::uint8_t g, std::uint8_t b, std::uint8_t a = 0xff)
            : red(r)
            , green(g)
            , blue(b)
            , alpha(a)
        {}

        constexpr Color(std::uint32_t color)
            : red   ((color & 0xff000000) >> 24)
            , green ((color & 0x00ff0000) >> 16)
            , blue  ((color & 0x0000ff00) >>  8)
            , alpha ((color & 0x000000ff) >>  0)
        {}

        constexpr Color() : Color{ 0, 0, 0, 0 } {};
    };
}
