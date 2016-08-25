/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 HAL (Apm 2), Platform=avr, Package=apm
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define ARDUINO 166
#define ARDUINO_MAIN
#define __AVR__
#define __avr__
#define F_CPU 16000000L
#define __cplusplus 201103L
#define GCC_VERSION 40302
#define ARDUINO_ARCH_AVR
#define ARDUINO_AVR_APM_APM_AVR_APM2_2560HAL
#define CONFIG_HAL_BOARD HAL_BOARD_APM2
#define EXCLUDECORE
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__
#define __AVR__
typedef void *__builtin_va_list;
#define __builtin_va_start
#define __builtin_va_end
//#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int

#define NEW_H
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}
#undef F
#define F(string_literal) ((const PROGMEM char *)(string_literal))
#undef PSTR
#define PSTR(string_literal) ((const PROGMEM char *)(string_literal))
#undef cli
#define cli()
#define pgm_read_byte(address_short)
#define pgm_read_word(address_short)
#define pgm_read_word2(address_short)
#define digitalPinToPort(P)
#define digitalPinToBitMask(P) 
#define digitalPinToTimer(P)
#define analogInPinToBit(P)
#define portOutputRegister(P)
#define portInputRegister(P)
#define portModeRegister(P)
#include <..\ArduPlane\ArduPlane.ino>
#include <..\ArduPlane\APM_Config.h>
#include <..\ArduPlane\Attitude.ino>
#include <..\ArduPlane\GCS_Mavlink.ino>
#include <..\ArduPlane\Log.ino>
#include <..\ArduPlane\Parameters.h>
#include <..\ArduPlane\Parameters.ino>
#include <..\ArduPlane\altitude.ino>
#include <..\ArduPlane\climb_rate.ino>
#include <..\ArduPlane\commands.ino>
#include <..\ArduPlane\commands_logic.ino>
#include <..\ArduPlane\commands_process.ino>
#include <..\ArduPlane\compat.h>
#include <..\ArduPlane\compat.ino>
#include <..\ArduPlane\config.h>
#include <..\ArduPlane\control_modes.ino>
#include <..\ArduPlane\defines.h>
#include <..\ArduPlane\events.ino>
#include <..\ArduPlane\failsafe.ino>
#include <..\ArduPlane\geofence.ino>
#include <..\ArduPlane\landing.ino>
#include <..\ArduPlane\navigation.ino>
#include <..\ArduPlane\px4_mixer.ino>
#include <..\ArduPlane\radio.ino>
#include <..\ArduPlane\sensors.ino>
#include <..\ArduPlane\setup.ino>
#include <..\ArduPlane\system.ino>
#include <..\ArduPlane\takeoff.ino>
#include <..\ArduPlane\test.ino>
#endif
