#pragma once

class options
{
public:
	bool isGameRunning = true;

	// ExOverlay
	bool bMenu = true;

	// Cheats
	bool bGodMode = false, bSpeedHack = false, bBunnyJump = false, bInfiniteWallJumps = false, bInfiniteDash = false;
};

class values
{
public:
	int hp = 100;
	float walkSpeed = 750.f, jumpPower = 90.f, wallJumpPower = 150.f, boostCharge = 300;
};

extern options* option;
extern values* value;

