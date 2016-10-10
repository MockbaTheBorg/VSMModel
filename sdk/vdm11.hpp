/********************************************************************/
/********************************************************************/
/*****                                                          *****/
/*****        L A B C E N T E R    E L E C T R O N I C S        *****/
/*****                                                          *****/
/*****       LABCENTER INTEGRATED SIMULATION ARCHITECTURE       *****/
/*****                                                          *****/
/*****           Virtual Debug Monitor - HC11 Specific          *****/
/*****                                                          *****/
/********************************************************************/
/********************************************************************/

#ifndef VDM11_HPP
#define VDM11_HPP

#include <vdm.hpp>

#pragma pack(push,4)

// Address space codes for HC11
#define VDM11_DEFAULT 0
#define VDM11_IOREGS  1
#define VDM11_INTRAM  2
#define VDM11_PROGROM 3
#define VDM11_BOOTROM 4
#define VDM11_EEPROM  5

struct VDM11_REGS
 { BYTE acca;
   BYTE accb;
   WORD ix;
   WORD iy;
   WORD sp;
   WORD pc;
   UL64 cycles;   // Machine cycles
   FL64 time;     // Machine time
 };


#pragma pack(pop)

#endif