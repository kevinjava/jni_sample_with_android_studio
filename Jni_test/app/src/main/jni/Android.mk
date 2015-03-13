LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := testNative
LOCAL_CFLAGS    := -std=c++11
LOCAL_SRC_FILES := TestJniNative.cpp
LOCAL_LDLIBS    := -llog -lz  -L$(SYSROOT)/usr/lib
include $(BUILD_SHARED_LIBRARY)