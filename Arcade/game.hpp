/*
** EPITECH PROJECT, 2026
** Project - Arcade
** File description:
** Header file for
** everything related
** to game libraries
*/

#pragma once

#include <chrono>


namespace Arcade {
    class IDisplay;

    class IGame {
        public:
            virtual ~IGame() = default;


            ////////////////////////////////////////////////////
            //                                                //
            //                Startup / Cleanup               //
            //                                                //
            ////////////////////////////////////////////////////

            /**
             * Initializes the game.
             *
             * This is held separate from the class'
             * constructor in order to give precise
             * control over *when* the game gets
             * initialized.
             *
             * Heavy operations (I/O such as reading
             * a file), as well as expensive allocations
             * (like a big vector of values) should
             * be allocated here.
             *
             * Trivial values (such as basic types) can
             * be initialized in the class' constructor
             * instead.
             */
            virtual void init() = 0;

            /**
             * Ends the game.
             *
             * This is help separate from the class'
             * destructor in order to give precise
             * control over *when* the game frees
             * up its resources.
             *
             * Note:
             * A call to destroy should leave the
             * game in a valid state.
             * This means that init() can be called
             * after having called destroy().
             */
            virtual void destroy() = 0;


            ////////////////////////////////////////////////////
            //                                                //
            //                  Game Runtime                  //
            //                                                //
            ////////////////////////////////////////////////////

            /**
             * Updates the game's state by a single tick.
             *
             * Parameters:
             * - `dt`: time elapsed between the current call
             * to update and the previous one (delta time).
             *
             * To get the time elapsed between the calls to
             * update, it is highly recommended you use
             * std::chrono::steady_clock::now(), as it's made
             * precisly for this purpose.
             */
            virtual void update(std::chrono::milliseconds dt) = 0;

            /**
             * Renders the game's current frame on the
             * specified display.
             *
             * Parameters:
             * - `display`: the display to render the
             * game on.
             */
            virtual void render(IDisplay& display) = 0;
    };
}
