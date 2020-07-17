// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#include "NativeStreamData.hpp"  // my header
#include "Marshal.hpp"
#include "NativeFrame.hpp"
#include "NativeImgData.hpp"

namespace djinni_generated {

NativeStreamData::NativeStreamData() : ::djinni::JniInterface<::mynteye_jni::StreamData, NativeStreamData>("com/slightech/mynteye/StreamData$CppProxy") {}

NativeStreamData::~NativeStreamData() = default;


CJNIEXPORT void JNICALL Java_com_slightech_mynteye_StreamData_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::mynteye_jni::StreamData>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_slightech_mynteye_StreamData_00024CppProxy_native_1img(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::StreamData>(nativeRef);
        auto r = ref->Img();
        return ::djinni::release(::djinni_generated::NativeImgData::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_slightech_mynteye_StreamData_00024CppProxy_native_1frame(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::StreamData>(nativeRef);
        auto r = ref->Frame();
        return ::djinni::release(::djinni_generated::NativeFrame::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jlong JNICALL Java_com_slightech_mynteye_StreamData_00024CppProxy_native_1frameId(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::mynteye_jni::StreamData>(nativeRef);
        auto r = ref->FrameId();
        return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
