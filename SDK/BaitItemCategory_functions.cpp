﻿// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void UBaitItemCategory_C::AfterRead()
{
	UConsumableItemCategory::AfterRead();

}

void UBaitItemCategory_C::BeforeDelete()
{
	UConsumableItemCategory::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
