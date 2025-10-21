#include "PYLON-CAN.h"
#include "../communication/can/comm_can.h"
#include "../datalayer/datalayer.h"
#include "../inverter/INVERTERS.h"

void swap_bytes(uint8_t* a, uint8_t* b) {
  uint8_t temp = *a;
  *a = *b;
  *b = temp;
}

<<<<<<< HEAD
/* Do not change code below unless you are sure what you are doing */
//Actual content messages
CAN_frame PYLON_7310 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x7310,
                        .data = {0x01, 0x00, 0x02, 0x01, 0x01, 0x02, 0x00, 0x00}};
CAN_frame PYLON_7311 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x7311,
                        .data = {0x01, 0x00, 0x02, 0x01, 0x01, 0x02, 0x00, 0x00}};
CAN_frame PYLON_7320 = {
    .FD = false,
    .ext_ID = true,
    .DLC = 8,
    .ID = 0x7320,
    .data = {TOTAL_CELL_AMOUNT, (uint8_t)(TOTAL_CELL_AMOUNT >> 8), MODULES_IN_SERIES, CELLS_PER_MODULE, (uint8_t)VOLTAGE_LEVEL,
             (uint8_t)(VOLTAGE_LEVEL >> 8), AH_CAPACITY, (uint8_t)(AH_CAPACITY >> 8)}};
CAN_frame PYLON_7321 = {
    .FD = false,
    .ext_ID = true,
    .DLC = 8,
    .ID = 0x7321,
    .data = {TOTAL_CELL_AMOUNT, (uint8_t)(TOTAL_CELL_AMOUNT >> 8), MODULES_IN_SERIES, CELLS_PER_MODULE, (uint8_t)VOLTAGE_LEVEL,
             (uint8_t)(VOLTAGE_LEVEL >> 8), AH_CAPACITY, (uint8_t)(AH_CAPACITY >> 8)}};
CAN_frame PYLON_4210 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4210,
                        .data = {0xA5, 0x09, 0x30, 0x75, 0x9D, 0x04, 0x2E, 0x64}};
CAN_frame PYLON_4220 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4220,
                        .data = {0x8C, 0x0A, 0xE9, 0x07, 0x4A, 0x79, 0x4A, 0x79}};
CAN_frame PYLON_4230 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4230,
                        .data = {0xDF, 0x0C, 0xDA, 0x0C, 0x03, 0x00, 0x06, 0x00}};
CAN_frame PYLON_4240 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4240,
                        .data = {0x7E, 0x04, 0x62, 0x04, 0x11, 0x00, 0x03, 0x00}};
CAN_frame PYLON_4250 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4250,
                        .data = {0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
CAN_frame PYLON_4260 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4260,
                        .data = {0xAC, 0xC7, 0x74, 0x27, 0x03, 0x00, 0x02, 0x00}};
CAN_frame PYLON_4270 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4270,
                        .data = {0x7E, 0x04, 0x62, 0x04, 0x05, 0x00, 0x01, 0x00}};
CAN_frame PYLON_4280 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4280,
                        .data = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
CAN_frame PYLON_4290 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4290,
                        .data = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
CAN_frame PYLON_4211 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4211,
                        .data = {0xA5, 0x09, 0x30, 0x75, 0x9D, 0x04, 0x2E, 0x64}};
CAN_frame PYLON_4221 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4221,
                        .data = {0x8C, 0x0A, 0xE9, 0x07, 0x4A, 0x79, 0x4A, 0x79}};
CAN_frame PYLON_4231 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4231,
                        .data = {0xDF, 0x0C, 0xDA, 0x0C, 0x03, 0x00, 0x06, 0x00}};
CAN_frame PYLON_4241 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4241,
                        .data = {0x7E, 0x04, 0x62, 0x04, 0x11, 0x00, 0x03, 0x00}};
CAN_frame PYLON_4251 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4251,
                        .data = {0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
CAN_frame PYLON_4261 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4261,
                        .data = {0xAC, 0xC7, 0x74, 0x27, 0x03, 0x00, 0x02, 0x00}};
CAN_frame PYLON_4271 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4271,
                        .data = {0x7E, 0x04, 0x62, 0x04, 0x05, 0x00, 0x01, 0x00}};
CAN_frame PYLON_4281 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4281,
                        .data = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
CAN_frame PYLON_4291 = {.FD = false,
                        .ext_ID = true,
                        .DLC = 8,
                        .ID = 0x4291,
                        .data = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
=======
void apply_30koffset(uint8_t* msb, uint8_t* lsb) {
  uint16_t original_value = (*msb << 8) | *lsb;
  uint16_t offset_value = original_value + 30000;
>>>>>>> d1f427d01c0176cffbe11df8dad44b2c01cad7c5

  *msb = (offset_value >> 8) & 0xFF;
  *lsb = offset_value & 0xFF;
}

void PylonInverter::
    update_values() {  //This function maps all the values fetched from battery CAN to the correct CAN messages

  //Check what discharge and charge cutoff voltages to send
  if (datalayer.battery.settings.user_set_voltage_limits_active) {  //If user is requesting a specific voltage
    discharge_cutoff_voltage_dV = datalayer.battery.settings.max_user_set_discharge_voltage_dV;
    charge_cutoff_voltage_dV = datalayer.battery.settings.max_user_set_charge_voltage_dV;
  } else {
    discharge_cutoff_voltage_dV = (datalayer.battery.info.min_design_voltage_dV + VOLTAGE_OFFSET_DV);
    charge_cutoff_voltage_dV = (datalayer.battery.info.max_design_voltage_dV - VOLTAGE_OFFSET_DV);
  }

  //There are more mappings that could be added, but this should be enough to use as a starting point

  //Charge / Discharge allowed flags
  if (datalayer.battery.status.max_charge_current_dA == 0) {
    PYLON_428X.data.u8[0] = 0xAA;  //Charge forbidden
  } else {
    PYLON_428X.data.u8[0] = 0;  //Charge allowed
  }

  if (datalayer.battery.status.max_discharge_current_dA == 0) {
    PYLON_428X.data.u8[1] = 0xAA;  //Discharge forbidden
  } else {
    PYLON_428X.data.u8[1] = 0;  //Discharge allowed
  }

  //In case run into a FAULT state, let inverter know to stop any charge/discharge
  if (datalayer.battery.status.bms_status == FAULT) {
    PYLON_428X.data.u8[0] = 0xAA;  //Charge forbidden
    PYLON_428X.data.u8[1] = 0xAA;  //Discharge forbidden
  }

  //Voltage (370.0)
  PYLON_421X.data.u8[0] = (datalayer.battery.status.voltage_dV >> 8);
  PYLON_421X.data.u8[1] = (datalayer.battery.status.voltage_dV & 0x00FF);
  //Current (15.0)
  PYLON_421X.data.u8[2] = (datalayer.battery.status.current_dA >> 8);
  PYLON_421X.data.u8[3] = (datalayer.battery.status.current_dA & 0x00FF);
  // BMS Temperature (We dont have BMS temp, send max cell voltage instead)
  PYLON_421X.data.u8[4] = ((datalayer.battery.status.temperature_max_dC + 1000) >> 8);
  PYLON_421X.data.u8[5] = ((datalayer.battery.status.temperature_max_dC + 1000) & 0x00FF);
  //SOC (100.00%)
  PYLON_421X.data.u8[6] = (datalayer.battery.status.reported_soc / 100);  //Remove decimals
  //StateOfHealth (100.00%)
  PYLON_421X.data.u8[7] = (datalayer.battery.status.soh_pptt / 100);

  //Maxvoltage (eg 400.0V = 4000 , 16bits long) Charge Cutoff Voltage
  PYLON_422X.data.u8[0] = (charge_cutoff_voltage_dV >> 8);
  PYLON_422X.data.u8[1] = (charge_cutoff_voltage_dV & 0x00FF);
  //Minvoltage (eg 300.0V = 3000 , 16bits long) Discharge Cutoff Voltage
  PYLON_422X.data.u8[2] = (discharge_cutoff_voltage_dV >> 8);
  PYLON_422X.data.u8[3] = (discharge_cutoff_voltage_dV & 0x00FF);
  //Max ChargeCurrent
  PYLON_422X.data.u8[4] = (datalayer.battery.status.max_charge_current_dA >> 8);
  PYLON_422X.data.u8[5] = (datalayer.battery.status.max_charge_current_dA & 0x00FF);
  //Max DishargeCurrent
  PYLON_422X.data.u8[6] = (datalayer.battery.status.max_discharge_current_dA >> 8);
  PYLON_422X.data.u8[7] = (datalayer.battery.status.max_discharge_current_dA & 0x00FF);

  //Max cell voltage
  PYLON_423X.data.u8[0] = (datalayer.battery.status.cell_max_voltage_mV >> 8);
  PYLON_423X.data.u8[1] = (datalayer.battery.status.cell_max_voltage_mV & 0x00FF);
  //Min cell voltage
  PYLON_423X.data.u8[2] = (datalayer.battery.status.cell_min_voltage_mV >> 8);
  PYLON_423X.data.u8[3] = (datalayer.battery.status.cell_min_voltage_mV & 0x00FF);

  //Max temperature per cell
  PYLON_424X.data.u8[0] = (datalayer.battery.status.temperature_max_dC >> 8);
  PYLON_424X.data.u8[1] = (datalayer.battery.status.temperature_max_dC & 0x00FF);
  //Min temperature per cell
  PYLON_424X.data.u8[2] = (datalayer.battery.status.temperature_min_dC >> 8);
  PYLON_424X.data.u8[3] = (datalayer.battery.status.temperature_min_dC & 0x00FF);

  //Max temperature per module
  PYLON_427X.data.u8[0] = (datalayer.battery.status.temperature_max_dC >> 8);
  PYLON_427X.data.u8[1] = (datalayer.battery.status.temperature_max_dC & 0x00FF);
  //Min temperature per module
  PYLON_427X.data.u8[2] = (datalayer.battery.status.temperature_min_dC >> 8);
  PYLON_427X.data.u8[3] = (datalayer.battery.status.temperature_min_dC & 0x00FF);

  if (user_selected_pylon_30koffset) {
    apply_30koffset(&PYLON_421X.data.u8[2], &PYLON_421X.data.u8[3]);  // Current (15.0)
    apply_30koffset(&PYLON_422X.data.u8[4], &PYLON_422X.data.u8[5]);  // Max ChargeCurrent
    apply_30koffset(&PYLON_422X.data.u8[6], &PYLON_422X.data.u8[7]);  // Max DishargeCurrent
  }

  if (user_selected_pylon_invert_byteorder) {
    swap_bytes(&PYLON_421X.data.u8[0], &PYLON_421X.data.u8[1]);  // Voltage (370.0)
    swap_bytes(&PYLON_421X.data.u8[2], &PYLON_421X.data.u8[3]);  // Current (15.0)
    swap_bytes(&PYLON_421X.data.u8[4], &PYLON_421X.data.u8[5]);  // BMS Temperature
    swap_bytes(&PYLON_422X.data.u8[0], &PYLON_422X.data.u8[1]);  // Maxvoltage
    swap_bytes(&PYLON_422X.data.u8[2], &PYLON_422X.data.u8[3]);  // Minvoltage
    swap_bytes(&PYLON_422X.data.u8[4], &PYLON_422X.data.u8[5]);  // Max ChargeCurrent
    swap_bytes(&PYLON_422X.data.u8[6], &PYLON_422X.data.u8[7]);  // Max DishargeCurrent
    swap_bytes(&PYLON_423X.data.u8[0], &PYLON_423X.data.u8[1]);  // Max cell voltage
    swap_bytes(&PYLON_423X.data.u8[2], &PYLON_423X.data.u8[3]);  // Min cell voltage
    swap_bytes(&PYLON_424X.data.u8[0], &PYLON_424X.data.u8[1]);  // Max temperature per cell
    swap_bytes(&PYLON_424X.data.u8[2], &PYLON_424X.data.u8[3]);  // Min temperature per cell
    swap_bytes(&PYLON_427X.data.u8[0], &PYLON_427X.data.u8[1]);  // Max temperature per module
    swap_bytes(&PYLON_427X.data.u8[2], &PYLON_427X.data.u8[3]);  // Min temperature per module
  }

  // Status=Bit 0,1,2= 0:Sleep, 1:Charge, 2:Discharge 3:Idle. Bit3 ForceChargeReq. Bit4 Balance charge Request
  if (datalayer.battery.status.bms_status == FAULT) {
    PYLON_425X.data.u8[0] = (0x00);  // Sleep
  } else if (datalayer.battery.status.current_dA < 0) {
    PYLON_425X.data.u8[0] = (0x01);  // Charge
  } else if (datalayer.battery.status.current_dA > 0) {
    PYLON_425X.data.u8[0] = (0x02);  // Discharge
  } else if (datalayer.battery.status.current_dA == 0) {
    PYLON_425X.data.u8[0] = (0x03);  // Idle
  }
}

void PylonInverter::map_can_frame_to_variable(CAN_frame rx_frame) {
  switch (rx_frame.ID) {
    case 0x4200:  //Message originating from inverter. Depending on which data is required, act accordingly
      datalayer.system.status.CAN_inverter_still_alive = CAN_STILL_ALIVE;
      if (rx_frame.data.u8[0] == 0x02) {
        send_setup_info();
      }
      if (rx_frame.data.u8[0] == 0x00) {
        send_system_data();
      }
      break;
    default:
      break;
  }
}

void PylonInverter::transmit_can(unsigned long currentMillis) {
  // No periodic sending, we only react on received can messages
}

void PylonInverter::send_setup_info() {  //Ensemble information
  transmit_can_frame(&PYLON_731X);
  transmit_can_frame(&PYLON_732X);
}

void PylonInverter::send_system_data() {  //System equipment information
  transmit_can_frame(&PYLON_421X);
  transmit_can_frame(&PYLON_422X);
  transmit_can_frame(&PYLON_423X);
  transmit_can_frame(&PYLON_424X);
  transmit_can_frame(&PYLON_425X);
  transmit_can_frame(&PYLON_426X);
  transmit_can_frame(&PYLON_427X);
  transmit_can_frame(&PYLON_428X);
  transmit_can_frame(&PYLON_429X);
}

bool PylonInverter::setup() {
  if (user_selected_pylon_send == 0) {
    PYLON_731X.ID = 0x7310;
    PYLON_732X.ID = 0x7320;
    PYLON_421X.ID = 0x4210;
    PYLON_422X.ID = 0x4220;
    PYLON_423X.ID = 0x4230;
    PYLON_424X.ID = 0x4240;
    PYLON_425X.ID = 0x4250;
    PYLON_426X.ID = 0x4260;
    PYLON_427X.ID = 0x4270;
    PYLON_428X.ID = 0x4280;
    PYLON_429X.ID = 0x4290;
  }
  if (user_selected_pylon_send == 1) {
    PYLON_731X.ID = 0x7311;
    PYLON_732X.ID = 0x7321;
    PYLON_421X.ID = 0x4211;
    PYLON_422X.ID = 0x4221;
    PYLON_423X.ID = 0x4231;
    PYLON_424X.ID = 0x4241;
    PYLON_425X.ID = 0x4251;
    PYLON_426X.ID = 0x4261;
    PYLON_427X.ID = 0x4271;
    PYLON_428X.ID = 0x4281;
    PYLON_429X.ID = 0x4291;
  }
  if (user_selected_inverter_cells > 0) {
    PYLON_732X.data.u8[0] = user_selected_inverter_cells & 0xFF;
    PYLON_732X.data.u8[1] = (uint8_t)(user_selected_inverter_cells >> 8);
  }
  if (user_selected_inverter_modules > 0) {
    PYLON_732X.data.u8[2] = user_selected_inverter_modules;
  }
  if (user_selected_inverter_cells_per_module > 0) {
    PYLON_732X.data.u8[3] = user_selected_inverter_cells_per_module;
  }
  if (user_selected_inverter_voltage_level > 0) {
    PYLON_732X.data.u8[4] = user_selected_inverter_voltage_level & 0xFF;
    PYLON_732X.data.u8[5] = (uint8_t)(user_selected_inverter_voltage_level >> 8);
  }
  if (user_selected_inverter_ah_capacity > 0) {
    PYLON_732X.data.u8[6] = user_selected_inverter_ah_capacity & 0xff;
    PYLON_732X.data.u8[7] = (uint8_t)(user_selected_inverter_ah_capacity >> 8);
  }
  return true;
}
