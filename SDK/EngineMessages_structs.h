﻿#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	struct FString                                     Text;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	double                                             TimeSeconds;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	struct FString                                     Command;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UserName;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UserToGrant;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     UserToDeny;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	struct FString                                     CurrentLevel;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                EngineVersion;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasBegunPlay;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y243[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       InstanceId;                                                // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     InstanceType;                                              // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       SessionId;                                                 // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WorldTimeSeconds;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RDWE[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{
	unsigned char                                      UnknownData_VPWA[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
