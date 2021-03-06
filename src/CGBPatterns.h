#pragma once

#include <bitset>

#define NOISE_FINE_LEN 32768
#define NOISE_ROUGH_LEN 128

namespace agbplay
{
    class CGBPatterns
    {
        public:
            // sample patterns
            static const float pat_sq12[];
            static const float pat_sq25[];
            static const float pat_sq50[];
            static const float pat_sq75[];

            //static const float pat_noise_fine[];
            //static const float pat_noise_rough[];
            static const std::bitset<NOISE_FINE_LEN> pat_noise_fine;
            static const std::bitset<NOISE_ROUGH_LEN> pat_noise_rough;
    };
}
