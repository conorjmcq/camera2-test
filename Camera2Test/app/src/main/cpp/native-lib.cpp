#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_conorjmcq_github_com_camera2test_AndroidCamera2API_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
