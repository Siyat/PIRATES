//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : CClientCharacter.h
//  @ Date : 20/10/2014
//  @ Author : 
//
//


#if !defined(_CCLIENTCHARACTER_H)
#define _CCLIENTCHARACTER_H

#include "CItem.h"

class CClientCharacter {
private:
	int m_iMaxItems;
	string m_strCharacterName;
	int m_iSpeed;
	Array<CTreasure> m_aTreasures;
	Array<CItem*> m_aItems;
	CItem m_pEquipedWeapon;
	string m_strTeamName;
};

#endif  //_CCLIENTCHARACTER_H
