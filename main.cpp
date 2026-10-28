#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(NoclipPlayLayer, PlayLayer) {
    void destroyPlayer(PlayerObject* player, GameObject* object) {
        if (Mod::get()->getSettingValue<bool>("noclip")) {
            return;
        }

        PlayLayer::destroyPlayer(player, object);
    }
};
