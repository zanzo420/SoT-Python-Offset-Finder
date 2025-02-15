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

// Class TaleMaps.AddMarkToTornMapStep
// 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
class UAddMarkToTornMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_FEUQ[0x20];                                    // 0x0088(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MapMark;                                                   // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.AddMarkToTornMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.AddMarkToTornMapStepDescBase
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UAddMarkToTornMapStepDescBase : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuid                          MapId;                                                     // 0x0030(0x0010) (Edit)
	struct FTaleQuestVariableMapMarkType               MapMark;                                                   // 0x0040(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.AddMarkToTornMapStepDescBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.AddMarkToTornMapAtLocationStepDesc
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UAddMarkToTornMapAtLocationStepDesc : public UAddMarkToTornMapStepDescBase
{
public:
	struct FQuestVariableVector                        MarkLocation;                                              // 0x0050(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.AddMarkToTornMapAtLocationStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.AddMarkToTornMapAtActorLocationStepDesc
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UAddMarkToTornMapAtActorLocationStepDesc : public UAddMarkToTornMapStepDescBase
{
public:
	struct FQuestVariableActor                         MarkLocation;                                              // 0x0050(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.AddMarkToTornMapAtActorLocationStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep
// 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
class UGetNumberOfCollectedTornMapPiecesStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_SO4G[0x20];                                    // 0x0088(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.GetNumberOfCollectedTornMapPiecesStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.GetNumberOfCollectedTornMapPiecesStepDesc
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGetNumberOfCollectedTornMapPiecesStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuid                          MapId;                                                     // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           NumPieces;                                                 // 0x0040(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.GetNumberOfCollectedTornMapPiecesStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.RegionIslandSelectionStrategyBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URegionIslandSelectionStrategyBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.RegionIslandSelectionStrategyBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.RegionIslandFilteredSelectionStrategy
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class URegionIslandFilteredSelectionStrategy : public URegionIslandSelectionStrategyBase
{
public:
	TArray<TEnumAsByte<Athena_EIslandType>>            IslandTypes;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)
	bool                                               UseMaxDistance;                                            // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5NKO[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDistanceFromStartingIsland;                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.RegionIslandFilteredSelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.RegionIslandRandomSelectionStrategy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URegionIslandRandomSelectionStrategy : public URegionIslandSelectionStrategyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.RegionIslandRandomSelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.SelectIslandsFromRegionStep
// 0x0040 (FullSize[0x00C8] - InheritedSize[0x0088])
class USelectIslandsFromRegionStep : public UTaleQuestStep
{
public:
	class URegionMapDataAsset*                         RegionData;                                                // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URegionIslandSelectionStrategyBase*          SelectionStrategy;                                         // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N9KN[0x30];                                    // 0x0098(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.SelectIslandsFromRegionStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.SelectIslandsFromRegionStepDesc
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class USelectIslandsFromRegionStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableDataAsset                     Region;                                                    // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           NumIslands;                                                // 0x0040(0x0010) (Edit)
	struct FQuestVariableInt                           MaxDifferentIslands;                                       // 0x0050(0x0010) (Edit)
	struct FQuestVariableNameArray                     SelectedIslands;                                           // 0x0060(0x0010) (Edit)
	class URegionIslandSelectionStrategyBase*          SelectionStrategy;                                         // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                DefaultNumIslands;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultMaxDifferentIslands;                                // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.SelectIslandsFromRegionStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestAddLocationMapStep
// 0x0048 (FullSize[0x00D0] - InheritedSize[0x0088])
class UTaleQuestAddLocationMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_XFWN[0x48];                                    // 0x0088(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddLocationMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestAddTornMapStep
// 0x0040 (FullSize[0x00C8] - InheritedSize[0x0088])
class UTaleQuestAddTornMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_43BG[0x40];                                    // 0x0088(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddTornMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestAddTradeRouteMapStep
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UTaleQuestAddTradeRouteMapStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_4NO7[0x30];                                    // 0x0088(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClueSiteTypeToMapMarkIdDataAsset*           ClueSiteToMarkMap;                                         // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddTradeRouteMapStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestLocationMapChestFoundStep
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UTaleQuestLocationMapChestFoundStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_0VG6[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestLocationMapChestFoundStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestMapStepDescBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTaleQuestMapStepDescBase : public UTaleQuestStepDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestMapStepDescBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestAddLocationMapStepDesc
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UTaleQuestAddLocationMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestVariableInt                           NumberOfChests;                                            // 0x0038(0x0010) (Edit)
	struct FQuestVariableDataAsset                     RegionMapData;                                             // 0x0048(0x0010) (Edit)
	struct FQuestVariableDataAsset                     VaultData;                                                 // 0x0058(0x0010) (Edit)
	struct FQuestVariableDataAsset                     MapParams;                                                 // 0x0068(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddLocationMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestAddTornMapStepDesc
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UTaleQuestAddTornMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FQuestVariableName                          IslandName;                                                // 0x0030(0x0010) (Edit)
	struct FQuestVariableInt                           NumberOfPieces;                                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableDataAsset                     MapParams;                                                 // 0x0050(0x0010) (Edit)
	struct FQuestVariableGuid                          MapId;                                                     // 0x0060(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddTornMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestAddTradeRouteMapStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UTaleQuestAddTradeRouteMapStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FQuestVariableDataAsset                     TradeRouteData;                                            // 0x0030(0x0010) (Edit)
	struct FQuestVariableText                          VesselName;                                                // 0x0040(0x0010) (Edit)
	struct FQuestVariableGuid                          MapId;                                                     // 0x0050(0x0010) (Edit)
	class UClueSiteTypeToMapMarkIdDataAsset*           ClueSiteToMapMarkIdMap;                                    // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestAddTradeRouteMapStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTaleQuestLocationMapChestFoundStepDesc : public UTaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TaleMaps.TaleQuestLocationMapChestFoundStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
