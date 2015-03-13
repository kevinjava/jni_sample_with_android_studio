package com.example.kevliu.jni_test;

/**
 * Created by kevliu on 3/13/15.
 */
public class TestJniNative {

    static {
        System.loadLibrary("testNative");
    }

    public static native void first();

    public static native int second();

    public static native String third();
}
