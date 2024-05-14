// Copyright Epic Games, Inc. All Rights Reserved.

#include "GB_OrbitCam.h"

#define LOCTEXT_NAMESPACE "FGB_OrbitCamModule"

void FGB_OrbitCamModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FGB_OrbitCamModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGB_OrbitCamModule, GB_OrbitCam)