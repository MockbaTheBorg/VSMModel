/********************************************************************/
/********************************************************************/
/*****                                                          *****/
/*****        L A B C E N T E R    E L E C T R O N I C S        *****/
/*****                                                          *****/
/*****       LABCENTER INTEGRATED SIMULATION ARCHITECTURE       *****/
/*****                                                          *****/
/*****           Virtual Debug Monitor - 8051 Specific          *****/
/*****                                                          *****/
/********************************************************************/
/********************************************************************/

#ifndef VDM51_HPP
#define VDM51_HPP

#include <vdm.hpp>

#pragma pack(push,4)

// These codes determine how we interpet 32 bit addresses
#define VDM51_CSEG  0
#define VDM51_DSEG  1
#define VDM51_ISEG  2
#define VDM51_XSEG  3
#define VDM51_SFR   4

struct VDM51_REGS
 { BYTE r[8];     // R0 ... R7
   BYTE sp;       // SP
   BYTE psw;      // PSW-sfr
   BYTE b;        // B-sfr
   BYTE acc;      // ACC-sfr
   BYTE dpl;      // DPL-sfr
   BYTE dph;      // DPH-sfr
   WORD pc;       // Prog ctr
   UL64 cycles;   // Machine cycles
   FL64 time;     // Machine time
 };


#pragma pack(pop)

#endif