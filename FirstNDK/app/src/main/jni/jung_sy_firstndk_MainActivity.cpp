//
// Created by 1100080 on 2017-09-13.
//

#include "jung_sy_firstndk_MainActivity.h"


JNIEXPORT jstring JNICALL Java_jung_sy_firstndk_MainActivity_getStringFromNative
  (JNIEnv * env, jobject)
  {
            string str = "hello NDK";
            return env->NewStringUTF(str.c_str());
  }