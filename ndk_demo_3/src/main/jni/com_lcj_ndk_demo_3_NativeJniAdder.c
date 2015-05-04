
#include <stdlib.h>
#include <jni.h>
#include <Adder.h>



static int my_exec(int a,int b){
    return (a + b);
}

static Adder_t *AdderNew(void){
    Adder_t *t = (Adder_t*)malloc(sizeof( Adder_t));
    t->exec = my_exec;
    return (void *)t;
}


JNIEXPORT jlong JNICALL Java_com_lcj_ndk_1demo_13_NativeJniAdder_newObject(JNIEnv *env, jclass c){

     Adder_t *ar = ( Adder_t *)AdderNew();//创建一个c对象
    return (jlong)ar;

}

/*
 * Class:     com_lcj_ndk_demo_3_NativeJniAdder
 * Method:    execute
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_com_lcj_ndk_1demo_13_NativeJniAdder_execute
(JNIEnv *env, jclass c, jlong refer, jint digit_1, jint digit_2){

     Adder_t *pa = ( Adder_t *)refer;
    jlong result = pa->exec(digit_1, digit_2);
    return result;
}

















