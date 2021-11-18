#pragma once

const uint8_t itho_AutoTempsetting1[] { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,255};
const uint8_t itho_AutoTempsetting2_4[] { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,75,71,72,73,74,255};
const uint8_t itho_AutoTempsetting5_6[] { 0,76,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,54,55,56,58,60,77,78,79,80,81,63,65,67,69,75,71,72,73,74,82,83,84,85,86,87,255};
const uint8_t itho_AutoTempsetting7[] { 0,76,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,54,55,56,58,60,77,78,79,80,81,63,65,67,69,75,71,72,73,74,82,83,84,88,89,85,86,87,255};
const uint8_t itho_AutoTempsetting8[] { 0,76,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,54,55,56,58,60,77,78,79,80,81,63,65,67,69,75,71,72,73,74,82,83,84,88,89,85,86,87,90,255};
const uint8_t itho_AutoTempsetting9[] { 0,76,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,54,55,56,58,60,77,78,79,80,81,63,65,67,75,71,72,73,74,82,83,84,88,89,85,86,90,91,92,255};
const uint8_t itho_AutoTempsetting10[] { 0,76,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,54,55,56,58,60,77,78,79,80,81,63,65,75,71,72,73,74,82,83,84,88,89,85,86,90,91,92,93,94,95,96,255};


const __FlashStringHelper *ithoAutoTempSettingsLabels[] =  {
    F("Number of steps of valve (step)"),
    F("P factor of floor heating"),
    F("P factor of radiators"),
    F("P factor convector"),
    F("I factor floor hot"),
    F("I factor radiator hot"),
    F("I factor convector hot"),
    F("I factor floor cold"),
    F("I factor radiator cold"),
    F("I factor convector cold"),
    F("Power living desire floor heating (%)"),
    F("Power living desire radiator (%)"),
    F("Power living desire convector (%)"),
    F("Power group 1 distributor 1 (W)"),
    F("Power group 1 distributor 2 (W)"),
    F("Power group 1 distributor 3 (W)"),
    F("Power group 1 distributor 4 (W)"),
    F("Power group 1 distributor 5 (W)"),
    F("Power group 1 distributor 6 (W)"),
    F("Power group 1 distributor 7 (W)"),
    F("Power group 1 distributor 8 (W)"),
    F("Power group 1 distributor 9 (W)"),
    F("Power group 1 distributor 10 (W)"),
    F("Power group 1 distributor 11 (W)"),
    F("Power group 1 distributor 12 (W)"),
    F("Power group 2 distributor 1 (W)"),
    F("Power group 2 distributor 2 (W)"),
    F("Power group 2 distributor 3 (W)"),
    F("Power group 2 distributor 4 (W)"),
    F("Power group 2 distributor 5 (W)"),
    F("Power group 2 distributor 6 (W)"),
    F("Power group 2 distributor 7 (W)"),
    F("Power group 2 distributor 8 (W)"),
    F("Power group 2 distributor 9 (W)"),
    F("Power group 2 distributor 10 (W)"),
    F("Power group 2 distributor 11 (W)"),
    F("Power group 2 distributor 12 (W)"),
    F("Power group 3 distributor 1 (W)"),
    F("Power group 3 distributor 2 (W)"),
    F("Power group 3 distributor 3 (W)"),
    F("Power group 3 distributor 4 (W)"),
    F("Power group 3 distributor 5 (W)"),
    F("Power group 3 distributor 6 (W)"),
    F("Power group 3 distributor 7 (W)"),
    F("Power group 3 distributor 8 (W)"),
    F("Power group 3 distributor 9 (W)"),
    F("Power group 3 distributor 10 (W)"),
    F("Power group 3 distributor 11 (W)"),
    F("Power group 3 distributor 12 (W)"),
    F("Power side groups (W)"),
    F("Distributor 1 heating type"),
    F("Distributor 2 heating type"),
    F("Distributor 3 heating type"),
    F("Minimum pressure drop"),
    F("Correction factor distributor 1"),
    F("Correction factor distributor 2"),
    F("Correction factor distributor 3"),
    F("Min setpoint cooling (°C)"),
    F("Min setpoint heating (°C)"),
    F("Max setpoint cooling (°C)"),
    F("Max setpoint heating (°C)"),
    F("Cooling setpoint bandwidth (K)"),
    F("Heating setpoint bandwidth (K)"),
    F("Diff valve control during cooling (K)"),
    F("Ventilation diff space too cold (K)"),
    F("Valve cycle (min)"),
    F("0: no interruption (min)"),
    F("Period time (day)"),
    F("Valve control waiting time (sec)"),
    F("Binding time (min)"),
    F("Type of heat source"),
    F("Manual control"),
    F("Manual control manifold 1"),
    F("Manual control manifold 2"),
    F("Manual control manifold 3"),
    F("Available power (KW)"),
    F("Power living requested floor heating (%)"),
    F("Offset cooling (K)"),
    F("Diff cooling (K)"),
    F("Cooling setpoint during Off (°C)"),
    F("Max. setpoint difference cooling (K)"),
    F("Max. setpoint difference heating (K)"),
    F("Minimum outdoor temp. enable cooling"),
    F("Outside temperature frost monitoring"),
    F("Offset disable frost monitoring"),
    F("Heating/cooling"),
    F("Upper limit end of heat demand"),
    F("Time for venting valve"),
    F("Max external clearance heating (°C)"),
    F("Room temp stop verw as AT determined (°C)"),
    F("Clone function"),
    F("Increased min room setpoint low outdoor temp"),
    F("Minimum room temperature frost protection (°C)"),
    F("Additional close steps valve (step)"),
    F("Relief steps valve (step)"),
    F("Additional close steps after startup (step)"),
    F("Number of open steps valve (step)")
};
const uint8_t itho_AutoTempstatus1[]  { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,255};
const uint8_t itho_AutoTempstatus2_4[]  { 0,1,2,94,3,95,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,255};
const uint8_t itho_AutoTempstatus5[]  { 0,1,2,94,3,95,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,96,97,98,99,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,255};
const uint8_t itho_AutoTempstatus6_10[]  { 0,1,2,94,3,95,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,125,126,127,128,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,91,92,93,129,130,131,132,133,134,135,110,136,137,113,114,115,116,117,118,119,120,121,122,123,124,255};



const __FlashStringHelper *ithoAutoTempStatusLabels[] =  {
    F("Mode"),
    F("Condition"),
    F("Status"),
    F("Error code"),
    F("Room 1 temp (°C)"),
    F("Room 1 setp (°C)"),
    F("Room 1 power (%)"),
    F("Room 1 power (kW)"),
    F("Room 2 temp (°C)"),
    F("Room 2 setp (°C)"),
    F("Room 2 power % (%)"),
    F("Room 2 power kW (kW)"),
    F("Room 3 temp (°C)"),
    F("Room 3 setp (°C)"),
    F("Room 3 power % (%)"),
    F("Room 3 power kW (kW)"),
    F("Room 4 temp (°C)"),
    F("Room 4 setp (°C)"),
    F("Room 4 power % (%)"),
    F("Room 4 power kW (kW)"),
    F("Room 5 temp (°C)"),
    F("Room 5 setp (°C)"),
    F("Room 5 power % (%)"),
    F("Room 5 power kW (kW)"),
    F("Room 6 temp (°C)"),
    F("Room 6 setp (°C)"),
    F("Room 6 power % (%)"),
    F("Room 6 power kW (kW)"),
    F("Room 7 temp (°C)"),
    F("Room 7 setp (°C)"),
    F("Room 7 power % (%)"),
    F("Room 7 power kW (kW)"),
    F("Room 8 temp (°C)"),
    F("Room 8 setp (°C)"),
    F("Room 8 power % (%)"),
    F("Room 8 power kW (kW)"),
    F("Room 9 temp (°C)"),
    F("Room 9 setp (°C)"),
    F("Room 9 power % (%)"),
    F("Room 9 power kW (kW)"),
    F("Room 10 temp (°C)"),
    F("Room 10 setp (°C)"),
    F("Room 10 power % (%)"),
    F("Room 10 power kW (kW)"),
    F("Room 11 temp (°C)"),
    F("Room 11 setp (°C)"),
    F("Room 11 power % (%)"),
    F("Room 11 power kW (kW)"),
    F("Room 12 temp (°C)"),
    F("Room 12 setp (°C)"),
    F("Room 12 power % (%)"),
    F("Room 12 power kW (kW)"),
    F("Distributor 1 valve 1"),
    F("Distributor 1 valve 2"),
    F("Distributor 1 valve 3"),
    F("Distributor 1 valve 4"),
    F("Distributor 1 valve 5"),
    F("Distributor 1 valve 6"),
    F("Distributor 1 valve 7"),
    F("Distributor 1 valve 8"),
    F("Distributor 1 valve 9"),
    F("Distributor 1 valve 10"),
    F("Distributor 1 valve 11"),
    F("Distributor 1 valve 12"),
    F("Distributor 2 valve 1"),
    F("Distributor 2 valve 2"),
    F("Distributor 2 valve 3"),
    F("Distributor 2 valve 4"),
    F("Distributor 2 valve 5"),
    F("Distributor 2 valve 6"),
    F("Distributor 2 valve 7"),
    F("Distributor 2 valve 8"),
    F("Distributor 2 valve 9"),
    F("Distributor 2 valve 10"),
    F("Distributor 2 valve 11"),
    F("Distributor 2 valve 12"),
    F("Distributor 3 valve 1"),
    F("Distributor 3 valve 2"),
    F("Distributor 3 valve 3"),
    F("Distributor 3 valve 4"),
    F("Distributor 3 valve 5"),
    F("Distributor 3 valve 6"),
    F("Distributor 3 valve 7"),
    F("Distributor 3 valve 8"),
    F("Distributor 3 valve 9"),
    F("Distributor 3 valve 10"),
    F("Distributor 3 valve 11"),
    F("Distributor 3 valve 12"),
    F("Valve failure distributor 1"),
    F("Valve failure distributor 2"),
    F("Valve failure distributor 3"),
    F("Valve pressure failure distributor 1"),
    F("Valve pressure failure distributor 2"),
    F("Valve pressure failure distributor 3"),
    F("Heat source"),
    F("Desired power (%)"),
    F("Condition off"),
    F("Cool state"),
    F("Heating mode"),
    F("Manual status"),
    F("Valve fault detection dil 1"),
    F("Valve fault detection dil 2"),
    F("Malfunction valve detection dil 3"),
    F("LED_On"),
    F("LED_Slow"),
    F("LED_Fast"),
    F("Empty battery ( 0=OK )"),
    F("V1_valve"),
    F("V2_valve"),
    F("V3_valve"),
    F("Outside temp (°C)"),
    F("Rest cycle time (sec)"),
    F("Rest venting time (sec)"),
    F("Comm room A (sec)"),
    F("Comm space B (sec)"),
    F("Comm space C (sec)"),
    F("Comm space D (sec)"),
    F("Comm space E (sec)"),
    F("Comm space F (sec)"),
    F("Comm space G (sec)"),
    F("Comm space H (sec)"),
    F("Comm space I (sec)"),
    F("Comm space J (sec)"),
    F("Comm space K (sec)"),
    F("Comm space L (sec)"),
    F("Condition off"),
    F("Condition cool"),
    F("State heating"),
    F("State hand"),
    F("LED_On"),
    F("LED_Slow"),
    F("LED_Fast"),
    F("Empty battery ( 0=OK )"),
    F("V1_valve"),
    F("V2_valve"),
    F("V3_valve"),
    F("Rest cycle time (sec)"),
    F("Rest venting time (sec)")
};


const uint8_t *ithoAutoTempSettingsMap[] =  { nullptr, itho_AutoTempsetting1, itho_AutoTempsetting2_4, itho_AutoTempsetting2_4, itho_AutoTempsetting2_4, itho_AutoTempsetting5_6, itho_AutoTempsetting5_6, itho_AutoTempsetting7, itho_AutoTempsetting8, itho_AutoTempsetting9, itho_AutoTempsetting10};
const uint8_t *ithoAutoTempStatusMap[] =  { nullptr, itho_AutoTempstatus1, itho_AutoTempstatus2_4, itho_AutoTempstatus2_4, itho_AutoTempstatus2_4, itho_AutoTempstatus5, itho_AutoTempstatus6_10, itho_AutoTempstatus6_10, itho_AutoTempstatus6_10, itho_AutoTempstatus6_10, itho_AutoTempstatus6_10};
