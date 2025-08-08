#pragma once
#include <string>
#include <vector>

class PlayerCore {
public:
    void loadVideo(const std::string &url);
    void addDanmu(const std::string &text, int timeMs);

    // 跨平台渲染接口（需各平台实现）
    virtual void renderFrame(uint8_t *data, int width, int height) = 0;
};
