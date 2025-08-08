#include <jni.h>
#include "PlayerCore.h"

extern "C" JNIEXPORT void JNICALL
Java_com_opendanplayer_Player_loadVideo(JNIEnv *env, jobject thiz, jstring url) {
    const char *videoUrl = env->GetStringUTFChars(url, nullptr);
    PlayerCore player;
    player.loadVideo(videoUrl);
}
