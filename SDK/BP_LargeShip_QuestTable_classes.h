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

// BlueprintGeneratedClass BP_LargeShip_QuestTable.BP_LargeShip_QuestTable_C
// 0x0030 (FullSize[0x0728] - InheritedSize[0x06F8])
class ABP_LargeShip_QuestTable_C : public AVoyageProposalContainer
{
public:
	class UChildActorComponent*                        CancelTale;                                                // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        CancelVoyage;                                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        VoyageSelectionSlot4;                                      // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        VoyageSelectionSlot3;                                      // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        VoyageSelectionSlot2;                                      // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        VoyageSelectionSlot1;                                      // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShip_QuestTable.BP_LargeShip_QuestTable_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
