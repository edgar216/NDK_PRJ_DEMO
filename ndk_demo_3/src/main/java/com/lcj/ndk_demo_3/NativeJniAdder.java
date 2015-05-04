package com.lcj.ndk_demo_3;

import android.util.Log;

/**
 * Created by LCJ on 2015/5/3.
 */
public class NativeJniAdder {
    static {

        try {
            Log.i("JNI","尝试载入libNativeJniAdder.so");
            System.loadLibrary("NativeJniAdder");

        }catch (UnsatisfiedLinkError unsatisfiedLinkError)
        {
            Log.e("JNI","载入libNativeJniAdder.so失败");
        }
    }

    public static native long newObject();

    public static native long execute(long refer, int digit_1, int digit_2);
}

