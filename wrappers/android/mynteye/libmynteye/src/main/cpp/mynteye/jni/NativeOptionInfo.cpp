// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#include "NativeOptionInfo.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeOptionInfo::NativeOptionInfo() = default;

NativeOptionInfo::~NativeOptionInfo() = default;

auto NativeOptionInfo::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeOptionInfo>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.min)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.max)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.def)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeOptionInfo::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeOptionInfo>::get();
    return {::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mMin)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mMax)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_mDef))};
}

}  // namespace djinni_generated
