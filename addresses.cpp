#include "framework.h"
#include "addresses.h"

#include "proc.h"
#include "offsets.h"
#include "mem.h"

void Address::calcAddresses()
{
	localPlayer =		unityPlayer + 0x017AB300;
	walkSpeed =			mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->walkSpeed);
	jumpPower =			mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->jumpPower);
	airAcceleration =	mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->airAcceleration);
	wallJumpPower =		mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->wallJumpPower);
	timeBetweenSteps =	mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->timeBetweenSteps);
	currWallJumps =		mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->currWallJumps);
	hp =				mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->hp);
	walking =			mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->walking);
	boostCharge =		mem->FindDMAAddyEx(proc->hProcess, localPlayer, offset->boostCharge);
}

Address* addr = new Address();