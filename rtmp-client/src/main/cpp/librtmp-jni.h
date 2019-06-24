/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <stddef.h>
#include "flvmuxer/xiecc_rtmp.h"
/* Header for class net_butterflytv_rtmp_client_RtmpClient */

#ifndef _Included_net_butterflytv_rtmp_client_RtmpClient
#define _Included_net_butterflytv_rtmp_client_RtmpClient
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_nativeOpen(JNIEnv* env, jobject thiz,
                                                        jstring url, jboolean isPublishMode,
                                                        jlong rtmpPointer, jint sendTimeoutInMs,
                                                        jint receiveTimeoutInMs);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    read
 * Signature: ([CI)I
 */
JNIEXPORT jint JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_nativeRead(JNIEnv* env, jobject thiz,
                                                        jbyteArray data, jint offset, jint size,
                                                        jlong rtmpPointer);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    write
 * Signature: ([CI)I
 */
JNIEXPORT jint JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_nativeWrite(JNIEnv* env, jobject thiz, jbyteArray data,
                                                         jint offset, jint size, jlong rtmpPointer);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    seek
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_seek(JNIEnv* env, jobject thiz, jint seekTime);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    pause
 * Signature: (I)I
 */
JNIEXPORT jboolean JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_nativePause(JNIEnv* env, jobject thiz, jboolean pause,
                                                         jlong rtmpPointer);

/*
 * Class:     net_butterflytv_rtmp_client_RtmpClient
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT void JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_nativeClose(JNIEnv* env, jobject thiz, jlong rtmpPointer);

JNIEXPORT jboolean JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_nativeIsConnected(JNIEnv* env, jobject thiz, jlong rtmpPointer);

JNIEXPORT void JNICALL
Java_net_butterflytv_rtmp_1client_RTMPMuxer_write_1flv_1header(JNIEnv* env, jobject thiz,
                                                               jboolean is_have_audio, jboolean is_have_video) {
    write_flv_header(is_have_audio, is_have_video);
}

JNIEXPORT void JNICALL
Java_net_butterflytv_rtmp_1client_RTMPMuxer_file_1open(JNIEnv* env, jobject thiz, jstring filename) {
    const char *cfilename = (*env)->GetStringUTFChars(env, filename, NULL);

    flv_file_open(cfilename);

    (*env)->ReleaseStringUTFChars(env, filename, cfilename);
}

JNIEXPORT void JNICALL
Java_net_butterflytv_rtmp_1client_RTMPMuxer_file_1close(JNIEnv* env, jobject thiz) {

    flv_file_close();

}

JNIEXPORT jlong JNICALL
Java_net_butterflytv_rtmp_1client_RtmpClient_nativeAlloc(JNIEnv* env, jobject thiz);

JNIEXPORT jint JNICALL
Java_net_butterflytv_rtmp_1client_RTMPMuxer_read(JNIEnv* env, jobject thiz, jbyteArray data,
                                                 jint offset, jint size);

JNIEXPORT jboolean JNICALL
Java_net_butterflytv_rtmp_1client_RTMPMuxer_isConnected(JNIEnv* env, jobject thiz);

#ifdef __cplusplus
}
#endif
#endif
