/*
** EPITECH PROJECT, 2026
** Project - Arcade
** File description:
** Header file for
** everything related
** to displays / graphics
*/

#pragma once

#include "utils/shapes.hpp"
#include "utils/events.hpp"
#include <string_view>
#include <optional>


namespace Arcade {
    class IDisplay {
        public:
            virtual ~IDisplay() = default;


            ////////////////////////////////////////////////////
            //                                                //
            //                Startup / Cleanup               //
            //                                                //
            ////////////////////////////////////////////////////

            /**
             * Opens a new window to allow
             * using this display's render
             * functions.
             *
             * A call to open() *must* imperatively
             * be done before calling any rendering
             * method from the IDisplay.
             */
            virtual void open() = 0;

            /**
             * Closes the display's window
             * (if opened). This should also
             * deallocate any heavy resources
             * the display has allocated.
             */
            virtual void close() noexcept = 0;


            ////////////////////////////////////////////////////
            //                                                //
            //                    Rendering                   //
            //                                                //
            ////////////////////////////////////////////////////

            /**
             * Clears the display's
             * window, rendering it
             * completely black.
             */
            virtual void clear() = 0;

            /**
             * Updates the display's
             * window to show what's
             * been drawn since the
             * last call to clear().
             */
            virtual void display() = 0;

            /**
             * Draws a 1x1 point onto
             * the display's internal
             * window.
             */
            virtual void draw(Shapes::Point point) = 0;

            /**
             * Draws the rectangle onto
             * the display's internal
             * window.
             */
            virtual void draw(Shapes::Rectangle rect) = 0;


            ////////////////////////////////////////////////////
            //                                                //
            //                Event Management                //
            //                                                //
            ////////////////////////////////////////////////////

            /**
             * Polls for a single event.
             *
             * If no event is currently queued or
             * actioned, none is returned.
             */
            virtual std::optional<Event> pollEvent() = 0;


            ////////////////////////////////////////////////////
            //                                                //
            //                  Display Info                  //
            //                                                //
            ////////////////////////////////////////////////////

            /**
             * Retrieves the name of the graphics
             * library the IDisplay implementation
             * uses. The name should be user-friendly
             * to allow it to be used when implementing
             * a selection menu.
             *
             * Note:
             * Returning a std::string will inevitably
             * return in errors and undefined behaviour.
             *
             * This function is intended to return a literal
             * string, such as:
             *
             * ```
             * std::string_view libraryName() const noexcept override { return "libcaca"; }
             * ```
             */
            virtual std::string_view libraryName() const noexcept = 0;
    };
}
