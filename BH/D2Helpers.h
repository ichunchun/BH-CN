#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <Windows.h>
#include "D2Structs.h"

#define INVALID_PARTY_ID 0xFFFF

bool IsValidMonster(UnitAny *pUnit);
int GetRelation(UnitAny* unit);
RosterUnit* FindPlayerRoster(DWORD unitId);
void Print(char* format, ...);
void PartyPrint(char* format, ...);

CellFile *LoadBmpCellFile(BYTE *buf1, int width, int height);
CellFile *LoadBmpCellFile(char *filename);
CellFile *InitCellFile(CellFile *cf);
void DeleteCellFile(CellFile *cf);

DWORD GetDistanceSquared(DWORD x1, DWORD y1, DWORD x2, DWORD y2);
bool SetSkill(WORD wSkillId, bool Left);
bool GetSkill(WORD wSkillId);
bool CastOnMap(WORD x, WORD y, bool Left);
bool RunTo(WORD x, WORD y);
bool Interact(DWORD UnitId, DWORD UnitType);
bool SendSyncMsg();

std::string GetItemCode(int dwTxtFileNo);
std::string GetItemName(UnitAny* item);
bool IsTown(DWORD levelId);

bool IsGameReady();
DWORD GetPlayerArea();
int ItemColorFromQuality(unsigned int quality);

void d2_assert(bool pCondition, char* pMessage, char* pLocation, int pLineNbr);
void LogMsg(const char* pFormat, ...);