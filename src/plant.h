#include "../rage/rage.hpp"

namespace Outernet {
    class WeedPlant {
        rage::Entity* handle;

    public:
        float getProgress();

        bool isHarvestable();
    };
};