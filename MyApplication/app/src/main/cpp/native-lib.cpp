#include <jni.h>
#include <string>
#include "testInterfacemode.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_s2icode_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_s2icode_myapplication_MainActivity_testAdd(JNIEnv *env, jobject instance, jint a, jint b) {

    // TODO
    int c = 0;
    c = testAdd(a, b);
    return c;

}