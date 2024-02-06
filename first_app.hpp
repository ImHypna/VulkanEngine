#pragma once

#include "lve_window.hpp"

namespace lve {
    class FirstApp{
        public:
            static constexpr int WIDTH = 1024;
            static constexpr int HEIGHT = 720;

        void run();
        private:
            LveWindow lveWindow{WIDTH,HEIGHT,"Hello MY GAME ENGINE"};


    };
}//namespace lve