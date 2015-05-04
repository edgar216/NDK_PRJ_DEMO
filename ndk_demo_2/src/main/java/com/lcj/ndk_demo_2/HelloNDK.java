package com.lcj.ndk_demo_2;

/**
 * Created by LCJ on 2015/5/3.
 */
public class HelloNDK {

    /**
     * static{}表示在loading time（载入类的时候）的时候执行下面的代码
     */
    static {

        System.loadLibrary("HelloNDK");
    }


    /**
     * 本地函数接口（java通过它调用C/C++）
     */
    public native String sayHello();
}