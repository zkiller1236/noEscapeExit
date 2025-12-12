#include <Geode/Geode.hpp>
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include <cocos2d.h>
using namespace geode::prelude;

class $modify(PauseLayer) {
    void keyDown(cocos2d::enumKeyCodes key) {
        if (key == cocos2d::KEY_Escape) {
            // resume instead of exiting
            this->onResume(nullptr);
            return;
        }
        // call other keys
        CCLayer::keyDown(key);
    }
};

$execute {
    log::info("noEscapeExit mod loaded");
}