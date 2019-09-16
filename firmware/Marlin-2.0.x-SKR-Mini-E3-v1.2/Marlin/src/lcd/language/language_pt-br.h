/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Portuguese (Brazil)
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

// Put characters here that should be displayed with M117
//_UxGT("áãàçÉéêíóõ")

#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" pronto.")

#define MSG_BACK                            _UxGT("Voltar")
#define MSG_MEDIA_INSERTED                  _UxGT("Cartão inserido")
#define MSG_MEDIA_REMOVED                   _UxGT("Cartão removido")
#define MSG_LCD_ENDSTOPS                    _UxGT("Fins de curso")
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Soft Fins curso")
#define MSG_MAIN                            _UxGT("Menu principal")
#define MSG_ADVANCED_SETTINGS               _UxGT("Config. Avançada")
#define MSG_CONFIGURATION                   _UxGT("Configuração")
#define MSG_AUTOSTART                       _UxGT("Início automático")
#define MSG_DISABLE_STEPPERS                _UxGT("Desabilit. motores")
#define MSG_DEBUG_MENU                      _UxGT("Menu Debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Testar Barra Progres")
#define MSG_AUTO_HOME                       _UxGT("Ir a origem XYZ")
#define MSG_AUTO_HOME_X                     _UxGT("Ir na origem X")
#define MSG_AUTO_HOME_Y                     _UxGT("Ir na origem Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Ir na origem Z")
#define MSG_AUTO_Z_ALIGN                    _UxGT("Auto alinhar Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Indo para origem")
#define MSG_LEVEL_BED_WAITING               _UxGT("Clique para Iniciar")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Próximo Ponto")
#define MSG_LEVEL_BED_DONE                  _UxGT("Fim nivelação!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Suavizar altura")
#define MSG_SET_HOME_OFFSETS                _UxGT("Compensar origem")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Alteração aplicada")
#define MSG_SET_ORIGIN                      _UxGT("Ajustar Origem")
#define MSG_PREHEAT_1                       _UxGT("Pre-aquecer " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   _UxGT("Pre-aq.Todo " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_END                   _UxGT("Extrusora " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_BEDONLY               _UxGT("Pre-aq.Mesa " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_SETTINGS              _UxGT("Ajustar " PREHEAT_1_LABEL)
#define MSG_PREHEAT_2                       _UxGT("Pre-aquecer " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   _UxGT("Pre-aq.Todo " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_END                   _UxGT("Extrusora " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_BEDONLY               _UxGT("Pre-aq.Mesa " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_SETTINGS              _UxGT("Ajustar " PREHEAT_2_LABEL)
#define MSG_PREHEAT_CUSTOM                  _UxGT("Customizar Pre-aq.")
#define MSG_COOLDOWN                        _UxGT("Esfriar")
#define MSG_SWITCH_PS_ON                    _UxGT("Ligar")
#define MSG_SWITCH_PS_OFF                   _UxGT("Desligar")
#define MSG_EXTRUDE                         _UxGT("Extrusar")
#define MSG_RETRACT                         _UxGT("Retrair")
#define MSG_MOVE_AXIS                       _UxGT("Mover eixo")
#define MSG_BED_LEVELING                    _UxGT("Nivelação Mesa")
#define MSG_LEVEL_BED                       _UxGT("Nivelar Mesa")
#define MSG_LEVEL_CORNERS                   _UxGT("Nivelar Cantos")
#define MSG_NEXT_CORNER                     _UxGT("Próximo Canto")
#define MSG_EDIT_MESH                       _UxGT("Editar Malha")
#define MSG_EDITING_STOPPED                 _UxGT("Fim da Edição")
#define MSG_MESH_X                          _UxGT("Índice X")
#define MSG_MESH_Y                          _UxGT("Índice Y")
#define MSG_MESH_EDIT_Z                     _UxGT("Valor Z")
#define MSG_USER_MENU                       _UxGT("Comando customizado")

#define MSG_IDEX_MENU                       _UxGT("Modo IDEX")
#define MSG_IDEX_MODE_AUTOPARK              _UxGT("Auto-Estacionar")
#define MSG_IDEX_MODE_DUPLICATE             _UxGT("Duplicação")
#define MSG_IDEX_MODE_MIRRORED_COPY         _UxGT("Cópia espelhada")
#define MSG_IDEX_MODE_FULL_CTRL             _UxGT("Controle Total")
#define MSG_X_OFFSET                        _UxGT("2o bico X")
#define MSG_Y_OFFSET                        _UxGT("2o bico Y")
#define MSG_Z_OFFSET                        _UxGT("2o bico Z")

#define MSG_UBL_DOING_G29                   _UxGT("Executando G29")
#define MSG_UBL_UNHOMED                     _UxGT("Fora da Origam")
#define MSG_UBL_TOOLS                       _UxGT("Ferramentas UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("Nivel. Mesa Unif.")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Fazer malha manual")
#define MSG_UBL_BC_INSERT                   _UxGT("Calçar e calibrar")
#define MSG_UBL_BC_INSERT2                  _UxGT("Medir")
#define MSG_UBL_BC_REMOVE                   _UxGT("Remover e calibrar")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Movendo para Próximo")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Ativar UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Desativar UBL")
#define MSG_UBL_SET_TEMP_BED                _UxGT("Temp. Mesa")
#define MSG_UBL_BED_TEMP_CUSTOM             MSG_UBL_SET_TEMP_BED
#define MSG_UBL_SET_TEMP_HOTEND             _UxGT("Temp. Extrusora")
#define MSG_UBL_HOTEND_TEMP_CUSTOM          MSG_UBL_SET_TEMP_HOTEND
#define MSG_UBL_MESH_EDIT                   _UxGT("Editar Malha")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Editar Malha Custom")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Ajuste Fino da Malha")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Fim da Edição")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Montar Malha Custom")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Montar ")
#define MSG_UBL_BUILD_MESH_M1               _UxGT("Montar " PREHEAT_1_LABEL)
#define MSG_UBL_BUILD_MESH_M2               _UxGT("Montar " PREHEAT_2_LABEL)
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Montar Malha fria")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Ajustar Altura")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Quant. de Altura")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Validar Malha")
#define MSG_UBL_VALIDATE_MESH_M1            _UxGT("Checar " PREHEAT_1_LABEL)
#define MSG_UBL_VALIDATE_MESH_M2            _UxGT("Checar " PREHEAT_2_LABEL)
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Validar Malha Custom")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Continuar Malha")
#define MSG_UBL_MESH_LEVELING               _UxGT("Nivelação da Malha")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Nivelação 3 pontos")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Nivelação Grid")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Nivelar Malha")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Cantos")
#define MSG_UBL_MAP_TYPE                    _UxGT("Tipo de Mapa")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Salvar Mapa da Malha")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Enviar Para Host")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Salvar Malha CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Salvar Backup")
#define MSG_UBL_INFO_UBL                    _UxGT("Informação do UBL")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Qtd de Enchimento")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Enchimento Manual")
#define MSG_UBL_SMART_FILLIN                _UxGT("Enchimento Smart")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Preencher malha")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Invalidar tudo")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Invalidar próximo")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Ajuste Fino de Todos")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Ajustar Mais Próximo")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Armazenamento Malha")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Slot de Memória")
#define MSG_UBL_LOAD_MESH                   _UxGT("Ler Malha")
#define MSG_UBL_SAVE_MESH                   _UxGT("Salvar Malha")
#define MSG_MESH_LOADED                     _UxGT("Malha %i carregada")
#define MSG_MESH_SAVED                      _UxGT("Malha %i salva")
#define MSG_UBL_NO_STORAGE                  _UxGT("Sem armazenamento")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Erro ao salvar UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Erro no restauro UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Compensação Z parou")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL passo a passo")
#define MSG_LED_CONTROL                     _UxGT("Controle do LED")
#define MSG_LEDS                            _UxGT("Luz")
#define MSG_LED_PRESETS                     _UxGT("Configuração da Luz")
#define MSG_SET_LEDS_RED                    _UxGT("Luz Vermelha")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Luz Laranja")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Luz Amarela")
#define MSG_SET_LEDS_GREEN                  _UxGT("Luz Verde")
#define MSG_SET_LEDS_BLUE                   _UxGT("Luz Azul")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Luz Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Luz Violeta")
#define MSG_SET_LEDS_WHITE                  _UxGT("Luz Branca")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Luz Padrão")
#define MSG_CUSTOM_LEDS                     _UxGT("Luz Customizada")
#define MSG_INTENSITY_R                     _UxGT("Intensidade Vermelho")
#define MSG_INTENSITY_G                     _UxGT("Intensidade Verde")
#define MSG_INTENSITY_B                     _UxGT("Intensidade Azul")
#define MSG_INTENSITY_W                     _UxGT("Intensidade Branco")
#define MSG_LED_BRIGHTNESS                  _UxGT("Brilho")
#define MSG_MOVING                          _UxGT("Movendo...")
#define MSG_FREE_XY                         _UxGT("Liberar XY")
#define MSG_MOVE_X                          _UxGT("Mover X")
#define MSG_MOVE_Y                          _UxGT("Mover Y")
#define MSG_MOVE_Z                          _UxGT("Mover Z")
#define MSG_MOVE_E                          _UxGT("Mover Extrusor")
#define MSG_HOTEND_TOO_COLD                 _UxGT("Extrus. mto fria")
#define MSG_MOVE_Z_DIST                     _UxGT("Mover %smm")
#define MSG_MOVE_01MM                       _UxGT("Mover 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Mover 1mm")
#define MSG_MOVE_10MM                       _UxGT("Mover 10mm")
#define MSG_SPEED                           _UxGT("Velocidade")
#define MSG_BED_Z                           _UxGT("Base Z")
#define MSG_NOZZLE                          _UxGT("Bocal")
#define MSG_BED                             _UxGT("Mesa")
#define MSG_FAN_SPEED                       _UxGT("Vel. Ventoinha")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("+Vel. Ventoinha")
#define MSG_FLOW                            _UxGT("Vazão")
#define MSG_CONTROL                         _UxGT("Controle")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" Máx")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Fator")
#define MSG_AUTOTEMP                        _UxGT("Temp. Automática")
#define MSG_LCD_ON                          _UxGT("Ligado")
#define MSG_LCD_OFF                         _UxGT("Desligado")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Selecionar")
#define MSG_ACC                             _UxGT("Acel.")
#define MSG_JERK                            _UxGT("Arrancada")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("arrancada VA")
  #define MSG_VB_JERK                       _UxGT("arrancada VB")
  #define MSG_VC_JERK                       _UxGT("arrancada VC")
#else
  #define MSG_VA_JERK                       _UxGT("arrancada VX")
  #define MSG_VB_JERK                       _UxGT("arrancada VY")
  #define MSG_VC_JERK                       _UxGT("arrancada VZ")
#endif
#define MSG_VE_JERK                         _UxGT("arrancada VE")
#define MSG_JUNCTION_DEVIATION              _UxGT("Desv. Junção")
#define MSG_VELOCITY                        _UxGT("Velocidade")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("VDeslocamento min")
#define MSG_ACCELERATION                    _UxGT("Aceleração")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("Retrair A")
#define MSG_A_TRAVEL                        _UxGT("Movimento A")
#define MSG_STEPS_PER_MM                    _UxGT("Passo/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Passo A/mm")
  #define MSG_BSTEPS                        _UxGT("Passo B/mm")
  #define MSG_CSTEPS                        _UxGT("Passo C/mm")
#else
  #define MSG_ASTEPS                        _UxGT("Passo X/mm")
  #define MSG_BSTEPS                        _UxGT("Passo Y/mm")
  #define MSG_CSTEPS                        _UxGT("Passo Z/mm")
#endif
#define MSG_ESTEPS                          _UxGT("E/mm")
#define MSG_E1STEPS                         _UxGT("E1/mm")
#define MSG_E2STEPS                         _UxGT("E2/mm")
#define MSG_E3STEPS                         _UxGT("E3/mm")
#define MSG_E4STEPS                         _UxGT("E4/mm")
#define MSG_E5STEPS                         _UxGT("E5/mm")
#define MSG_E6STEPS                         _UxGT("E6/mm")
#define MSG_TEMPERATURE                     _UxGT("Temperatura")
#define MSG_MOTION                          _UxGT("Movimento")
#define MSG_FILAMENT                        _UxGT("Filamento")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("Extrusão em mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Diâmetro Fil.")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Descarr. mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Carregar mm")
#define MSG_ADVANCE_K                       _UxGT("Avanço K")
#define MSG_CONTRAST                        _UxGT("Contraste")
#define MSG_STORE_EEPROM                    _UxGT("Salvar Configuração")
#define MSG_LOAD_EEPROM                     _UxGT("Ler Configuração")
#define MSG_RESTORE_FAILSAFE                _UxGT("Restauro seguro")
#define MSG_INIT_EEPROM                     _UxGT("Iniciar EEPROM")
#define MSG_MEDIA_UPDATE                    _UxGT("Atualiz. SD")
#define MSG_RESET_PRINTER                   _UxGT("Resetar Impressora")
#define MSG_REFRESH                         _UxGT("Atualização")
#define MSG_WATCH                           _UxGT("Informações")
#define MSG_PREPARE                         _UxGT("Preparar")
#define MSG_TUNE                            _UxGT("Ajustar")
#define MSG_PAUSE_PRINT                     _UxGT("Pausar impressão")
#define MSG_RESUME_PRINT                    _UxGT("Resumir impressão")
#define MSG_STOP_PRINT                      _UxGT("Parar impressão")
#define MSG_OUTAGE_RECOVERY                 _UxGT("Recuperar Impressão")
#define MSG_MEDIA_MENU                      _UxGT("Imprimir do SD")
#define MSG_NO_MEDIA                        _UxGT("Sem cartão SD")
#define MSG_DWELL                           _UxGT("Dormindo...")
#define MSG_USERWAIT                        _UxGT("Clique para retomar")
#define MSG_PRINT_PAUSED                    _UxGT("Impressão Pausada")
#define MSG_PRINTING                        _UxGT("Imprimindo...")
#define MSG_PRINT_ABORTED                   _UxGT("Impressão Abortada")
#define MSG_NO_MOVE                         _UxGT("Sem movimento")
#define MSG_KILLED                          _UxGT("PARADA DE EMERGÊNCIA")
#define MSG_STOPPED                         _UxGT("PAROU. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Retrair mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Retrair Troca mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retrair V")
#define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Saltar mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Des-Retrair mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Des-RetTroca mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("Des-Retrair  V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("Des-RetTroca V")
#define MSG_AUTORETRACT                     _UxGT("Retração Automática")
#define MSG_FILAMENT_SWAP_LENGTH            _UxGT("Distancia Retração")
#define MSG_TOOL_CHANGE                     _UxGT("Mudar Ferramenta")
#define MSG_TOOL_CHANGE_ZLIFT               _UxGT("Levantar Z")
#define MSG_SINGLENOZZLE_PRIME_SPD          _UxGT("Preparar Veloc.")
#define MSG_SINGLENOZZLE_RETRACT_SPD        _UxGT("Veloc. Retração")
#define MSG_FILAMENTCHANGE                  _UxGT("Trocar Filamento")
#define MSG_FILAMENTLOAD                    _UxGT("Carregar Filamento")
#define MSG_FILAMENTUNLOAD                  _UxGT("Descarreg. Filamento")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Descarregar Todos")
#define MSG_INIT_MEDIA                      _UxGT("Iniciar SD")
#define MSG_CHANGE_MEDIA                    _UxGT("Trocar SD")
#define MSG_ZPROBE_OUT                      _UxGT("Sonda fora da mesa")
#define MSG_SKEW_FACTOR                     _UxGT("Fator de Cisalho")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("Testar BLTouch")
#define MSG_BLTOUCH_RESET                   _UxGT("Reiniciar BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Estender BLTouch")
#define MSG_BLTOUCH_STOW                    _UxGT("Recolher BLTouch")
#define MSG_MANUAL_DEPLOY                   _UxGT("Estender Sonda-Z")
#define MSG_MANUAL_STOW                     _UxGT("Recolher Sonda-Z")

#define MSG_HOME                            _UxGT("Home")
#define MSG_FIRST                           _UxGT("Primeiro")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Compensar Sonda em Z")
#define MSG_BABYSTEP_X                      _UxGT("Passinho X")
#define MSG_BABYSTEP_Y                      _UxGT("Passinho Y")
#define MSG_BABYSTEP_Z                      _UxGT("Passinho Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Abortar Fim de Curso")
#define MSG_HEATING_FAILED_LCD              _UxGT("Aquecimento falhou")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Aquecer mesa falhou")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Erro:Temp Redundante")
#define MSG_THERMAL_RUNAWAY                 _UxGT("ESCAPE TÉRMICO")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("ESCAPE TÉRMICO MESA")
#define MSG_ERR_MAXTEMP                     _UxGT("Erro:Temp Máxima")
#define MSG_ERR_MINTEMP                     _UxGT("Erro:Temp Mínima")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Erro:Temp Mesa Máx")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Erro:Temp Mesa Mín")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("IMPRESSORA PAROU")
#define MSG_PLEASE_RESET                    _UxGT("Favor resetar")
#define MSG_SHORT_DAY                       _UxGT("d")
#define MSG_SHORT_HOUR                      _UxGT("h")
#define MSG_SHORT_MINUTE                    _UxGT("m")
#define MSG_HEATING                         _UxGT("Aquecendo...")
#define MSG_COOLING                         _UxGT("Resfriando...")
#define MSG_BED_HEATING                     _UxGT("Aquecendo mesa...")
#define MSG_BED_COOLING                     _UxGT("Esfriando mesa...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Calibrar Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Calibrar X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibrar Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibrar Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibrar Centro")

#define MSG_DELTA_SETTINGS                  _UxGT("Configuração Delta")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto-Calibração")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Calibrar Altura")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Desloc. Sonda Z")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Haste Diagonal")
#define MSG_DELTA_HEIGHT                    _UxGT("Altura")
#define MSG_DELTA_RADIUS                    _UxGT("Raio")
#define MSG_INFO_MENU                       _UxGT("Sobre")
#define MSG_INFO_PRINTER_MENU               _UxGT("Impressora")
#define MSG_3POINT_LEVELING                 _UxGT("Nivelamento 3 pontos")
#define MSG_LINEAR_LEVELING                 _UxGT("Nivelamento Linear")
#define MSG_BILINEAR_LEVELING               _UxGT("Nivelamento Bilinear")
#define MSG_UBL_LEVELING                    _UxGT("Nivelamento UBL")
#define MSG_MESH_LEVELING                   _UxGT("Nivelamento da Malha")
#define MSG_INFO_STATS_MENU                 _UxGT("Estatísticas")
#define MSG_INFO_BOARD_MENU                 _UxGT("Info. da Placa")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistores")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extrusoras")
#define MSG_INFO_BAUDRATE                   _UxGT("Taxa de Transmissão")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocolo")
#define MSG_CASE_LIGHT                      _UxGT("Luz da Impressora")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Intensidade Brilho")

#define MSG_EXPECTED_PRINTER                _UxGT("Impressora Incorreta")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Total de Impressões")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Realizadas")
  #define MSG_INFO_PRINT_TIME               _UxGT("Tempo de Impressão")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Trabalho Mais longo")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Total de Extrusão")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Qtd de Impressões")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Realizadas")
  #define MSG_INFO_PRINT_TIME               _UxGT("Tempo de Impressão")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Maior trabalho")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("T. Extrusão")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Temp Mín")
#define MSG_INFO_MAX_TEMP                   _UxGT("Temp Máx")
#define MSG_INFO_PSU                        _UxGT("PSU")
#define MSG_DRIVE_STRENGTH                  _UxGT("Força do Motor")
#define MSG_DAC_PERCENT                     _UxGT("Driver %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Escrever EEPROM DAC")

#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("IMPRESSÃO PAUSADA")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("CARREGAR FILAMENTO")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("DESCARREG. FILAMENTO")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("Config. de Retomada")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Purgar mais")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Continuar Impressão")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Bocal: ")
#define MSG_RUNOUT_SENSOR                   _UxGT("Sensor filamento")
#define MSG_ERR_HOMING_FAILED               _UxGT("Falha ao ir à origem")
#define MSG_ERR_PROBING_FAILED              _UxGT("Falha ao sondar")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Muito frio")

#if LCD_HEIGHT >= 4
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Aperte o botão para")
  #define MSG_ADVANCED_PAUSE_WAITING_2      _UxGT("continuar impressão")

  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Esperando o")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("inicio da")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("troca de filamento")

  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Coloque filamento")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("pressione o botão")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("para continuar...")

  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Pressione o botão")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("p/ aquecer o bocal")

  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Aquecendo o bocal")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Aguarde...")

  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Esperando")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("remoção de filamento")

  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Esperando")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("filamento")

  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Espere pela")
  #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("purga de filamento")

  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Clique para finaliz.")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_2  _UxGT("purga de filamento")

  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Esperando impressão")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("continuar")
#else // LCD_HEIGHT < 4
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Clique p. continuar")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Aguarde...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Insira e Clique")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Aquecendo...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Ejetando...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Carregando...")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Purgando...")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Clique p. finalizar")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Continuando...")
#endif