/**
 * @file     ParallaxHardware.h
 * @author   Blaze Sanders (@ROBO_BEV)TM
 * @email    blaze@robobev.com
 * @updated  07 APRIL 2018
 *
 * @version 0.1
 * @brief Manage a two way connection between Linux distro and Parallax hardware
 *
 * @section DESCRIPTION
 *
 *
 */

#ifndef PARALLAX_HARDWARE_H
#define PARALLAX_HARDWARE_H

#include "BARISTO.h"
//#include "ping.h"          //Control the PING ultrasonic
//#include "simpletools.h"   //TODO: ???

#include <stdio.h> //Like <iostream> but smaller file size
#include <cassert> //Used in UnitTest for functional testing
#include <chrono>  //Used for high accuracy (microsecond) timing of events


//Parallax Part Number Constants
#define DEFAULT_NUM_OF_PARALLAX_PARTS 4;       //THREE ultrasonic sensors & ONE RFID transciever
#define RFID_TX_RX_PN28140 28140;              //www.parallax.com/product/28140
#define ULTRASONIC_SENSOR_PN28015 28015;       //www.parallax.com/product/28015
#define RFID_TAG_PN28142 28142;                //www.parallax.com/product/28142
#define UNSUPPORTED_PARALLAX_PART_NUMBER -1;


//Global Variables
extern bool DEBUG_STATEMENTS_ON;


typedef struct ParallaxHardware
{
  public:
    unsigned int serialPortNumber;      //Serial port number currently in use
  private:
    unsigned int parallaxPartNumber;    //TO-DO: Two Parallax RFID hardware modules and one Parallax ultrasonic sensor are currently supported
    double operatingSystem;    //Two Linux distributions and one Windows OS are currently supported
} ParallaxHardware_t;


//PUBLIC Function Prototypes

/**
 * @brief Default ParallaxHardware object/struct constructor
 *
 * @parm NONE
 * @section DESCRIPTION
 *
 * Assumes that one ultrasonic sensor P/N 28140 is connected to a PC running
 * Window 10 Pro version 1709 on Serial Port #0
 *
 */
void InitializeParallaxHardware();

/**
 * @brief Three parameter ParallaxHardware object/struct constructor
 *
 * @parm portNum Serial port you would like to use (Falls back to 0 on failure)
 * @parm pModelNum Parallax hardware part you are communicating with
 * @parm opSys High level OS currently running
 *
 * @section DESCRIPTION
 *
 * TO-DO: ???
 */
void InitializeParallaxHardware(int portNum, int pPartNum, double opSys);

/**
 * @brief Creat a two-way serial connection
 * @parm portNum ID number for serial port you want to create
 *
 * @return 1 if no connections errors and ERROR_CODE_? otherwise
 */
int CreateFullDuplexSerialConnection(int portNum);

/**
 * @brief Setup communication between PC and RFID module installed in kiosk
 *
 * @param bootMode Select mode kiosk should boot up in
 * @param verNum High level hardware kiosk version number 
 * @parm parrallaxPartNumber Part number for RFID module installed in kiosk
 *
 * @section DESCRIPTION
 *
 * TO-DO: ???
 */
int IntializeRFID(int bootMode, double verNum, int parrallaxPartNumber);

/**
 * @brief Setup communication between PC and ultrasonic module installed in kiosk
 *
 * @param bootMode Select mode kiosk should boot up in
 * @param verNum High level hardware kiosk version number
 * @parm parrallaxPartNumber Part number for ultrasonic module installed in kiosk
 * @parm numOfSensors Number of ultrasonic modules installed in kiosk
 *
 * @section DESCRIPTION
 *
 * TO-DO: ???
 */
int IntializeUltrasonicSensors(int bootMode, double verNum, int parrallaxPartNumber, int numOfSensors);


/** TODO
 *
 */
int ScanForRFIDTag();

/**
 * @brief Perform check on kioks software version and debug print statement settings
 *
 * @param bootMode Select mode kiosk should boot up in
 * @param verNum High level hardware kiosk version number
 *
 * @section DESCRIPTION
 *
 * TO-DO: ???
 */
int BootUpChecks(int bootMode, double verNum);

//PRIVATE Function Prototypes
//TODO:

int GetDistance();
    int cmDist = ping_cm(15);                 // Get cm distance from Ping)))
    print("cmDist = %d\n", cmDist);           // Display distance
    pause(200); 

#endif //PARALLAX_HARDWARE_H
