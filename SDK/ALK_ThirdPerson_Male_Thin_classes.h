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

// BlueprintGeneratedClass ALK_ThirdPerson_Male_Thin.ALK_ThirdPerson_Male_Thin_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UALK_ThirdPerson_Male_Thin_C : public UAnimationDataStoreId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ALK_ThirdPerson_Male_Thin.ALK_ThirdPerson_Male_Thin_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
