#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

bool firstTime = true;

class $modify(MenuLayer) {

    bool init() {
        if (!MenuLayer::init()) 
            return false;
        
        if (firstTime) {
            auto rew = RewardsPage::create();

            rew->m_scene = this;
            rew->show();

            firstTime = false;
        }

        return true;
    }
};
