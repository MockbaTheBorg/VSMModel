/********************************************************************/
/********************************************************************/
/*****                                                          *****/
/*****        L A B C E N T E R    E L E C T R O N I C S        *****/
/*****                                                          *****/
/*****       LABCENTER INTEGRATED SIMULATION ARCHITECTURE       *****/
/*****                                                          *****/
/*****           Virtual Debug Monitor - PIC Specific           *****/
/*****                                                          *****/
/********************************************************************/
/********************************************************************/

#ifndef VDMPIC_HPP
#define VDMPIC_HPP

#include <vdm.hpp>

#pragma pack(push,4)

/*********************************************************************
**** PIC12 ****
**************/

// Address space codes for PIC12
#define VDMPIC12_PROGRAM 0
#define VDMPIC12_INTRAM  1
#define VDMPIC12_EEPROM  2
#define VDMPIC12_STACK   3

struct VDMPIC12_REGS
 { BYTE w;
   BYTE sp;
   WORD pc;
   FL64 time;
 };

/*********************************************************************
**** PIC16 ****
**************/

// Define class number for this VDM interface:

// Address space codes for PIC16
#define VDMPIC16_PROGRAM 0
#define VDMPIC16_INTRAM  1
#define VDMPIC16_EEPROM  2
#define VDMPIC16_STACK   3

struct VDMPIC16_REGS
 { BYTE w;
   BYTE sp;
   WORD pc;
   FL64 time;
 };


/*********************************************************************
**** PIC18 ****
**************/

// Address space codes for PIC18
#define VDMPIC18_PROGRAM 0
#define VDMPIC18_CONFIG  1
#define VDMPIC18_INTRAM  2
#define VDMPIC18_ACCESS  3
#define VDMPIC18_EEPROM  4
#define VDMPIC18_STACK   5

struct VDMPIC18_INFO
 { WORD loc_w;
   WORD loc_bsr;
   WORD loc_stkptr;
   WORD loc_status;
   WORD access_border;
 };

struct VDMPIC18_REGS
 { BYTE reg_w[2];
   BYTE reg_bsr[2];
   BYTE reg_psw[2];
   BYTE reg_stkptr;
   UL64 cycle_counter;
 };


#pragma pack(pop)

#endif