#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_androidcamera2api_inducesmile_com_androidcamera2api_AndroidCamera2API_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
