#pragma once

class Address
{
public:
	uintptr_t moduleBase;
	uintptr_t unityPlayer;
	uintptr_t localPlayer;

	// NewMovement
	uintptr_t walkSpeed;
	uintptr_t jumpPower;
	uintptr_t airAcceleration;
	uintptr_t wallJumpPower;
	uintptr_t timeBetweenSteps;
	uintptr_t hp;
	uintptr_t walking;
	uintptr_t boostCharge;


	void calcAddresses();
};

extern Address* addr;
