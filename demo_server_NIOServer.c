#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <signal.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

#include <jni.h>
#include "demo_server_NIOServer.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_demo_server_NIOServer_socketServer(JNIEnv *env,
		jclass clazz) {
	return socket(PF_INET, SOCK_STREAM, 0);
}

JNIEXPORT jint JNICALL Java_demo_server_NIOServer_socketClose(JNIEnv *env,
		jclass clazz, jint socket) {
	closesocket(socket);
}

#ifdef __cplusplus
}
#endif
