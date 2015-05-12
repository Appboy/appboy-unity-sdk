﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSA
struct RSA_t1388;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
 void RSA__ctor_m6454 (RSA_t1388 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
 RSA_t1388 * RSA_Create_m6442 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
 RSA_t1388 * RSA_Create_m10743 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSA::EncryptValue(System.Byte[])
// System.Byte[] System.Security.Cryptography.RSA::DecryptValue(System.Byte[])
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean)
// System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters)
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
 void RSA_ZeroizePrivateKey_m10744 (RSA_t1388 * __this, RSAParameters_t1399  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
 void RSA_FromXmlString_m6458 (RSA_t1388 * __this, String_t* ___xmlString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
 String_t* RSA_ToXmlString_m10745 (RSA_t1388 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;