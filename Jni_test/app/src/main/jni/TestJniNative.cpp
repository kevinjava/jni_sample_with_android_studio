#include "TestJniNavtive.h"
#include <android/log.h>

#ifdef __cplusplus
extern "C" {
#endif
        /*
         * Class:     com_example_kevliu_jni_test_TestJniNative
         * Method:    first
         * Signature: ()V
         */
        JNIEXPORT void JNICALL Java_com_example_kevliu_jni_1test_TestJniNative_first
          (JNIEnv * env, jclass obj)
          {
               __android_log_print(ANDROID_LOG_INFO, "JNIMsg", "call Java_com_example_kevliu_jni_1test_TestJniNative_first");
          }

          /*
           * Class:     com_example_kevliu_jni_test_TestJniNative
           * Method:    second
           * Signature: ()I
           */
          JNIEXPORT jint JNICALL Java_com_example_kevliu_jni_1test_TestJniNative_second
            (JNIEnv * env, jclass obj)
            {
                    return 0;
            }



            /*
             * Class:     com_example_kevliu_jni_test_TestJniNative
             * Method:    third
             * Signature: ()Ljava/lang/String;
             */
            JNIEXPORT jstring JNICALL Java_com_example_kevliu_jni_1test_TestJniNative_third
              (JNIEnv * env, jclass object)
              {
                //return (env)->NewStringUTF(TangoData::GetInstance().lib_version_string.c_str());
                return (env)->NewStringUTF("Go test");
              }


#ifdef __cplusplus
}
#endif