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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmissaryStoleLoot_GH_PromptAccessKey.EmissaryStoleLoot_GH_PromptAccessKey_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UEmissaryStoleLoot_GH_PromptAccessKey_C : public UPromptCounterAccessKey
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EmissaryStoleLoot_GH_PromptAccessKey.EmissaryStoleLoot_GH_PromptAccessKey_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
