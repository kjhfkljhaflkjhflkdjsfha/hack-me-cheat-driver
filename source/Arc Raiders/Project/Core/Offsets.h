#pragma once
#include <cstddef>

namespace Offsets {
	constexpr std::ptrdiff_t UWorld = 0xE07CFD8;
        constexpr std::ptrdiff_t GameInstance = 0x4E0;
        constexpr std::ptrdiff_t PersistentLevel = 0x110;
        constexpr std::ptrdiff_t AActors = 0x108;
        constexpr std::ptrdiff_t LocalPlayers = 0x128;
        constexpr std::ptrdiff_t APlayerController = 0xA0;
        constexpr std::ptrdiff_t APlayerCameraManager = 0xC60;
        constexpr std::ptrdiff_t CameraCachePrivate = 0x10;
        constexpr std::ptrdiff_t ViewTargetTarget = 0xC60;
        constexpr std::ptrdiff_t AcknowledgedPawn = 0x3E8;
        constexpr std::ptrdiff_t PlayerNamePrivate = 0x440;
        constexpr std::ptrdiff_t APlayerState = 0x3B0;
        constexpr std::ptrdiff_t RootComponent = 0x228;
        constexpr std::ptrdiff_t RelativeLocation = 0x248;
        constexpr std::ptrdiff_t USkeletalMeshComponent = 0x430;
        constexpr std::ptrdiff_t BoundsScale = 0x4A8;
        constexpr std::ptrdiff_t LastSubmitTime = 0x4EC;
        constexpr std::ptrdiff_t LastRenderTimeOnScreen = 0x4F0;
        constexpr std::ptrdiff_t ComponentToWorld = 0x360;
        constexpr std::ptrdiff_t ActorID = 0x18;
        constexpr std::ptrdiff_t Super = 0xB0;
        constexpr std::ptrdiff_t HealthInfo = 0x530;
        constexpr std::ptrdiff_t HealthComponent = 0xD78;
        constexpr std::ptrdiff_t Health = 0x640;
        constexpr std::ptrdiff_t MaxHealth = 0x2E0;
        constexpr std::ptrdiff_t Shield = 0x140;
        constexpr std::ptrdiff_t TeamID = 0x822;
        constexpr std::ptrdiff_t InventoryComponent = 0xCB0;
        constexpr std::ptrdiff_t LocalCurrentItemActors = 0x4D0;
        constexpr std::ptrdiff_t WeaponQuality = 0x104;

        constexpr std::ptrdiff_t ComponentVelocity = 0x290;
        constexpr std::ptrdiff_t bIsBreaked = 0x1220;
        constexpr std::ptrdiff_t ControlRotation = 0x420;

}