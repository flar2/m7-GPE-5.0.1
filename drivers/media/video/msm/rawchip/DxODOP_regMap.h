/********************************************************************************
################################################################################
#                             (C) DxO Labs 1999-2012
#
# This program is free software; you can redistribute it and/or modify it under
# the terms of the GNU General Public License version 2 and only version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
# details.
#
# You should have received a copy of the GNU General Public License along with
# this program; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
#
################################################################################
********************************************************************************/

/* ============================================================================
*  DxO Labs proprietary and confidential information
*  Copyright (C) DxO Labs 1999-2011 - (All rights reserved)
*  ============================================================================
*
*  The definitions listed below are available in DxODOP integration guide.
*
*  DxO Labs recommends the customer referring to these definitions before use.
*
*  These values mentioned here are related to a specific customer DxODOP configuration
*  (RTL parameters and FW capabilities) and delivery.
*
*  It must not be used for any other configuration or delivery.
*
*  ============================================================================ */

#ifndef __DxODOP_regMap_h__
#define __DxODOP_regMap_h__

/* ********************************************************************************** */
/* Command registers addresses: */
/* ********************************************************************************** */
#define DxODOP_boot                                                             0x6810
#define DxODOP_execCmd                                                          0x6808
#define DxODOP_newFrameCmd                                                      0x680c

/* ********************************************************************************** */
/* User parameters registers addresses: */
/* ********************************************************************************** */
#define DxODOP_ucode_id_7_0                                                     0x0200
#define DxODOP_ucode_id_15_8                                                    0x0201
#define DxODOP_hw_id_7_0                                                        0x0202
#define DxODOP_hw_id_15_8                                                       0x0203
#define DxODOP_calib_id_0_7_0                                                   0x0204
#define DxODOP_calib_id_1_7_0                                                   0x0205
#define DxODOP_calib_id_2_7_0                                                   0x0206
#define DxODOP_calib_id_3_7_0                                                   0x0207
#define DxODOP_error_code_7_0                                                   0x0208
#define DxODOP_visible_line_size_7_0                                            0x0209
#define DxODOP_visible_line_size_15_8                                           0x020a
#define DxODOP_mode_7_0                                                         0x020b
#define DxODOP_image_orientation_7_0                                            0x020c
#define DxODOP_x_addr_start_7_0                                                 0x020d
#define DxODOP_x_addr_start_15_8                                                0x020e
#define DxODOP_y_addr_start_7_0                                                 0x020f
#define DxODOP_y_addr_start_15_8                                                0x0210
#define DxODOP_x_addr_end_7_0                                                   0x0211
#define DxODOP_x_addr_end_15_8                                                  0x0212
#define DxODOP_y_addr_end_7_0                                                   0x0213
#define DxODOP_y_addr_end_15_8                                                  0x0214
#define DxODOP_x_odd_inc_7_0                                                    0x0217
#define DxODOP_x_odd_inc_15_8                                                   0x0218
#define DxODOP_y_odd_inc_7_0                                                    0x021b
#define DxODOP_y_odd_inc_15_8                                                   0x021c
#define DxODOP_binning_7_0                                                      0x021d
#define DxODOP_analogue_gain_code_greenr_7_0                                    0x021e
#define DxODOP_analogue_gain_code_greenr_15_8                                   0x021f
#define DxODOP_analogue_gain_code_red_7_0                                       0x0220
#define DxODOP_analogue_gain_code_red_15_8                                      0x0221
#define DxODOP_analogue_gain_code_blue_7_0                                      0x0222
#define DxODOP_analogue_gain_code_blue_15_8                                     0x0223
#define DxODOP_pre_digital_gain_greenr_7_0                                      0x0224
#define DxODOP_pre_digital_gain_greenr_15_8                                     0x0225
#define DxODOP_pre_digital_gain_red_7_0                                         0x0226
#define DxODOP_pre_digital_gain_red_15_8                                        0x0227
#define DxODOP_pre_digital_gain_blue_7_0                                        0x0228
#define DxODOP_pre_digital_gain_blue_15_8                                       0x0229
#define DxODOP_red_green_ratio_7_0                                              0x022e
#define DxODOP_blue_green_ratio_7_0                                             0x022f
#define DxODOP_estimation_mode_7_0                                              0x0234
#define DxODOP_ROI_active_number_7_0                                            0x0235
#define DxODOP_ROI_0_x_start_7_0                                                0x0236
#define DxODOP_ROI_0_y_start_7_0                                                0x0237
#define DxODOP_ROI_0_x_end_7_0                                                  0x0238
#define DxODOP_ROI_0_y_end_7_0                                                  0x0239
#define DxODOP_ROI_1_x_start_7_0                                                0x023a
#define DxODOP_ROI_1_y_start_7_0                                                0x023b
#define DxODOP_ROI_1_x_end_7_0                                                  0x023c
#define DxODOP_ROI_1_y_end_7_0                                                  0x023d
#define DxODOP_ROI_2_x_start_7_0                                                0x023e
#define DxODOP_ROI_2_y_start_7_0                                                0x023f
#define DxODOP_ROI_2_x_end_7_0                                                  0x0240
#define DxODOP_ROI_2_y_end_7_0                                                  0x0241
#define DxODOP_ROI_3_x_start_7_0                                                0x0242
#define DxODOP_ROI_3_y_start_7_0                                                0x0243
#define DxODOP_ROI_3_x_end_7_0                                                  0x0244
#define DxODOP_ROI_3_y_end_7_0                                                  0x0245
#define DxODOP_ROI_4_x_start_7_0                                                0x0246
#define DxODOP_ROI_4_y_start_7_0                                                0x0247
#define DxODOP_ROI_4_x_end_7_0                                                  0x0248
#define DxODOP_ROI_4_y_end_7_0                                                  0x0249
#define DxODOP_sharpness_7_0                                                    0x024a
#define DxODOP_denoising_lowGain_7_0                                            0x024b
#define DxODOP_denoising_mediumGain_7_0                                         0x024c
#define DxODOP_denoising_strongGain_7_0                                         0x024d
#define DxODOP_noise_versus_details_lowGain_7_0                                 0x024e
#define DxODOP_noise_versus_details_mediumGain_7_0                              0x024f
#define DxODOP_noise_versus_details_strongGain_7_0                              0x0250
#define DxODOP_temporal_smoothing_7_0                                           0x0251
#define DxODOP_ROI_0_stats_G_7_0                                                0x0252
#define DxODOP_ROI_0_stats_G_15_8                                               0x0253
#define DxODOP_ROI_0_stats_G_23_16                                              0x0254
#define DxODOP_ROI_0_stats_G_31_24                                              0x0255
#define DxODOP_ROI_0_stats_R_7_0                                                0x0256
#define DxODOP_ROI_0_stats_R_15_8                                               0x0257
#define DxODOP_ROI_0_stats_R_23_16                                              0x0258
#define DxODOP_ROI_0_stats_R_31_24                                              0x0259
#define DxODOP_ROI_0_stats_B_7_0                                                0x025a
#define DxODOP_ROI_0_stats_B_15_8                                               0x025b
#define DxODOP_ROI_0_stats_B_23_16                                              0x025c
#define DxODOP_ROI_0_stats_B_31_24                                              0x025d
#define DxODOP_ROI_0_stats_confidence_7_0                                       0x025e
#define DxODOP_ROI_0_stats_confidence_15_8                                      0x025f
#define DxODOP_ROI_0_stats_confidence_23_16                                     0x0260
#define DxODOP_ROI_0_stats_confidence_31_24                                     0x0261
#define DxODOP_ROI_1_stats_G_7_0                                                0x0262
#define DxODOP_ROI_1_stats_G_15_8                                               0x0263
#define DxODOP_ROI_1_stats_G_23_16                                              0x0264
#define DxODOP_ROI_1_stats_G_31_24                                              0x0265
#define DxODOP_ROI_1_stats_R_7_0                                                0x0266
#define DxODOP_ROI_1_stats_R_15_8                                               0x0267
#define DxODOP_ROI_1_stats_R_23_16                                              0x0268
#define DxODOP_ROI_1_stats_R_31_24                                              0x0269
#define DxODOP_ROI_1_stats_B_7_0                                                0x026a
#define DxODOP_ROI_1_stats_B_15_8                                               0x026b
#define DxODOP_ROI_1_stats_B_23_16                                              0x026c
#define DxODOP_ROI_1_stats_B_31_24                                              0x026d
#define DxODOP_ROI_1_stats_confidence_7_0                                       0x026e
#define DxODOP_ROI_1_stats_confidence_15_8                                      0x026f
#define DxODOP_ROI_1_stats_confidence_23_16                                     0x0270
#define DxODOP_ROI_1_stats_confidence_31_24                                     0x0271
#define DxODOP_ROI_2_stats_G_7_0                                                0x0272
#define DxODOP_ROI_2_stats_G_15_8                                               0x0273
#define DxODOP_ROI_2_stats_G_23_16                                              0x0274
#define DxODOP_ROI_2_stats_G_31_24                                              0x0275
#define DxODOP_ROI_2_stats_R_7_0                                                0x0276
#define DxODOP_ROI_2_stats_R_15_8                                               0x0277
#define DxODOP_ROI_2_stats_R_23_16                                              0x0278
#define DxODOP_ROI_2_stats_R_31_24                                              0x0279
#define DxODOP_ROI_2_stats_B_7_0                                                0x027a
#define DxODOP_ROI_2_stats_B_15_8                                               0x027b
#define DxODOP_ROI_2_stats_B_23_16                                              0x027c
#define DxODOP_ROI_2_stats_B_31_24                                              0x027d
#define DxODOP_ROI_2_stats_confidence_7_0                                       0x027e
#define DxODOP_ROI_2_stats_confidence_15_8                                      0x027f
#define DxODOP_ROI_2_stats_confidence_23_16                                     0x0280
#define DxODOP_ROI_2_stats_confidence_31_24                                     0x0281
#define DxODOP_ROI_3_stats_G_7_0                                                0x0282
#define DxODOP_ROI_3_stats_G_15_8                                               0x0283
#define DxODOP_ROI_3_stats_G_23_16                                              0x0284
#define DxODOP_ROI_3_stats_G_31_24                                              0x0285
#define DxODOP_ROI_3_stats_R_7_0                                                0x0286
#define DxODOP_ROI_3_stats_R_15_8                                               0x0287
#define DxODOP_ROI_3_stats_R_23_16                                              0x0288
#define DxODOP_ROI_3_stats_R_31_24                                              0x0289
#define DxODOP_ROI_3_stats_B_7_0                                                0x028a
#define DxODOP_ROI_3_stats_B_15_8                                               0x028b
#define DxODOP_ROI_3_stats_B_23_16                                              0x028c
#define DxODOP_ROI_3_stats_B_31_24                                              0x028d
#define DxODOP_ROI_3_stats_confidence_7_0                                       0x028e
#define DxODOP_ROI_3_stats_confidence_15_8                                      0x028f
#define DxODOP_ROI_3_stats_confidence_23_16                                     0x0290
#define DxODOP_ROI_3_stats_confidence_31_24                                     0x0291
#define DxODOP_ROI_4_stats_G_7_0                                                0x0292
#define DxODOP_ROI_4_stats_G_15_8                                               0x0293
#define DxODOP_ROI_4_stats_G_23_16                                              0x0294
#define DxODOP_ROI_4_stats_G_31_24                                              0x0295
#define DxODOP_ROI_4_stats_R_7_0                                                0x0296
#define DxODOP_ROI_4_stats_R_15_8                                               0x0297
#define DxODOP_ROI_4_stats_R_23_16                                              0x0298
#define DxODOP_ROI_4_stats_R_31_24                                              0x0299
#define DxODOP_ROI_4_stats_B_7_0                                                0x029a
#define DxODOP_ROI_4_stats_B_15_8                                               0x029b
#define DxODOP_ROI_4_stats_B_23_16                                              0x029c
#define DxODOP_ROI_4_stats_B_31_24                                              0x029d
#define DxODOP_ROI_4_stats_confidence_7_0                                       0x029e
#define DxODOP_ROI_4_stats_confidence_15_8                                      0x029f
#define DxODOP_ROI_4_stats_confidence_23_16                                     0x02a0
#define DxODOP_ROI_4_stats_confidence_31_24                                     0x02a1
#define DxODOP_frame_number_7_0                                                 0x02a2
#define DxODOP_frame_number_15_8                                                0x02a3

#define DxODOP_af_strategy_7_0                              0x02a4
/* ********************************************************************************** */
/* User constant definition: */
/* ********************************************************************************** */
#define DxODOP_mode_idle                                                        0x00
// default to use lib v1.1
#if 1 //#ifdef CONFIG_USEDXOAF //lib v1.1
#define DxODOP_mode_still_preview                           0x01
#define DxODOP_mode_video                                   0x02
#define DxODOP_mode_edof_disabled                           0x04
#define DxODOP_mode_blue_fringing_disabled                  0x08
#define DxODOP_mode_denoising_disabled                      0x10
#else
#define DxODOP_mode_stillPreview                                                0x01
#define DxODOP_mode_video                                                       0x02
#endif
#define DxODOP_execCmd_SettingCmd                                               0x01
#define DxODOP_focus_strategy_CW                                                0x01
#define DxODOP_focus_strategy_SL                                                0x02
#define DxODOP_focus_strategy_SN                                                0x04
#define DxODOP_focus_strategy_UF                                                0x08

/* ********************************************************************************** */
/* User parameters default values: */
/* ********************************************************************************** */
// default to use lib v1.1
#if 1 //#ifdef CONFIG_USEDXOAF //lib v1.1
#define DxODOP_dfltVal_ucode_id_7_0                         0x00
#define DxODOP_dfltVal_ucode_id_15_8                        0x02
#define DxODOP_dfltVal_hw_id_7_0                            0xed
#define DxODOP_dfltVal_hw_id_15_8                           0xb4
#define DxODOP_dfltVal_calib_id_0_7_0                       0x00
#define DxODOP_dfltVal_calib_id_1_7_0                       0x00
#define DxODOP_dfltVal_calib_id_2_7_0                       0x00
#define DxODOP_dfltVal_calib_id_3_7_0                       0x01
#else
#define DxODOP_dfltVal_ucode_id_7_0                                             0x04
#define DxODOP_dfltVal_ucode_id_15_8                                            0x01
#define DxODOP_dfltVal_hw_id_7_0                                                0xed
#define DxODOP_dfltVal_hw_id_15_8                                               0xb4
#define DxODOP_dfltVal_calib_id_0_7_0                                           0x00
#define DxODOP_dfltVal_calib_id_1_7_0                                           0x00
#define DxODOP_dfltVal_calib_id_2_7_0                                           0x00
#define DxODOP_dfltVal_calib_id_3_7_0                                           0x00
#endif
#define DxODOP_dfltVal_error_code_7_0                                           0x00
#define DxODOP_dfltVal_visible_line_size_7_0                                    0x00
#define DxODOP_dfltVal_visible_line_size_15_8                                   0x00
#define DxODOP_dfltVal_mode_7_0                                                 0x00
#define DxODOP_dfltVal_image_orientation_7_0                                    0x00
#define DxODOP_dfltVal_x_addr_start_7_0                                         0x00
#define DxODOP_dfltVal_x_addr_start_15_8                                        0x00
#define DxODOP_dfltVal_y_addr_start_7_0                                         0x00
#define DxODOP_dfltVal_y_addr_start_15_8                                        0x00
#define DxODOP_dfltVal_x_addr_end_7_0                                           0x00
#define DxODOP_dfltVal_x_addr_end_15_8                                          0x00
#define DxODOP_dfltVal_y_addr_end_7_0                                           0x00
#define DxODOP_dfltVal_y_addr_end_15_8                                          0x00
#define DxODOP_dfltVal_x_odd_inc_7_0                                            0x00
#define DxODOP_dfltVal_x_odd_inc_15_8                                           0x00
#define DxODOP_dfltVal_y_odd_inc_7_0                                            0x00
#define DxODOP_dfltVal_y_odd_inc_15_8                                           0x00
#define DxODOP_dfltVal_binning_7_0                                              0x00
#define DxODOP_dfltVal_analogue_gain_code_greenr_7_0                            0x00
#define DxODOP_dfltVal_analogue_gain_code_greenr_15_8                           0x00
#define DxODOP_dfltVal_analogue_gain_code_red_7_0                               0x00
#define DxODOP_dfltVal_analogue_gain_code_red_15_8                              0x00
#define DxODOP_dfltVal_analogue_gain_code_blue_7_0                              0x00
#define DxODOP_dfltVal_analogue_gain_code_blue_15_8                             0x00
#define DxODOP_dfltVal_pre_digital_gain_greenr_7_0                              0x00
#define DxODOP_dfltVal_pre_digital_gain_greenr_15_8                             0x00
#define DxODOP_dfltVal_pre_digital_gain_red_7_0                                 0x00
#define DxODOP_dfltVal_pre_digital_gain_red_15_8                                0x00
#define DxODOP_dfltVal_pre_digital_gain_blue_7_0                                0x00
#define DxODOP_dfltVal_pre_digital_gain_blue_15_8                               0x00
#define DxODOP_dfltVal_red_green_ratio_7_0                                      0x00
#define DxODOP_dfltVal_blue_green_ratio_7_0                                     0x00
#define DxODOP_dfltVal_estimation_mode_7_0                                      0x00
#define DxODOP_dfltVal_ROI_active_number_7_0                                    0x00
#define DxODOP_dfltVal_ROI_0_x_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_0_y_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_0_x_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_0_y_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_1_x_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_1_y_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_1_x_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_1_y_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_2_x_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_2_y_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_2_x_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_2_y_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_3_x_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_3_y_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_3_x_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_3_y_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_4_x_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_4_y_start_7_0                                        0x00
#define DxODOP_dfltVal_ROI_4_x_end_7_0                                          0x00
#define DxODOP_dfltVal_ROI_4_y_end_7_0                                          0x00
#define DxODOP_dfltVal_sharpness_7_0                                            0x80
#define DxODOP_dfltVal_denoising_lowGain_7_0                                    0x80
#define DxODOP_dfltVal_denoising_mediumGain_7_0                                 0x80
#define DxODOP_dfltVal_denoising_strongGain_7_0                                 0x80
#define DxODOP_dfltVal_noise_versus_details_lowGain_7_0                         0x80
#define DxODOP_dfltVal_noise_versus_details_mediumGain_7_0                      0x80
#define DxODOP_dfltVal_noise_versus_details_strongGain_7_0                      0x80
#define DxODOP_dfltVal_temporal_smoothing_7_0                                   0x00
#define DxODOP_dfltVal_ROI_0_stats_G_7_0                                        0x00
#define DxODOP_dfltVal_ROI_0_stats_G_15_8                                       0x00
#define DxODOP_dfltVal_ROI_0_stats_G_23_16                                      0x00
#define DxODOP_dfltVal_ROI_0_stats_G_31_24                                      0x00
#define DxODOP_dfltVal_ROI_0_stats_R_7_0                                        0x00
#define DxODOP_dfltVal_ROI_0_stats_R_15_8                                       0x00
#define DxODOP_dfltVal_ROI_0_stats_R_23_16                                      0x00
#define DxODOP_dfltVal_ROI_0_stats_R_31_24                                      0x00
#define DxODOP_dfltVal_ROI_0_stats_B_7_0                                        0x00
#define DxODOP_dfltVal_ROI_0_stats_B_15_8                                       0x00
#define DxODOP_dfltVal_ROI_0_stats_B_23_16                                      0x00
#define DxODOP_dfltVal_ROI_0_stats_B_31_24                                      0x00
#define DxODOP_dfltVal_ROI_0_stats_confidence_7_0                               0x00
#define DxODOP_dfltVal_ROI_0_stats_confidence_15_8                              0x00
#define DxODOP_dfltVal_ROI_0_stats_confidence_23_16                             0x00
#define DxODOP_dfltVal_ROI_0_stats_confidence_31_24                             0x00
#define DxODOP_dfltVal_ROI_1_stats_G_7_0                                        0x00
#define DxODOP_dfltVal_ROI_1_stats_G_15_8                                       0x00
#define DxODOP_dfltVal_ROI_1_stats_G_23_16                                      0x00
#define DxODOP_dfltVal_ROI_1_stats_G_31_24                                      0x00
#define DxODOP_dfltVal_ROI_1_stats_R_7_0                                        0x00
#define DxODOP_dfltVal_ROI_1_stats_R_15_8                                       0x00
#define DxODOP_dfltVal_ROI_1_stats_R_23_16                                      0x00
#define DxODOP_dfltVal_ROI_1_stats_R_31_24                                      0x00
#define DxODOP_dfltVal_ROI_1_stats_B_7_0                                        0x00
#define DxODOP_dfltVal_ROI_1_stats_B_15_8                                       0x00
#define DxODOP_dfltVal_ROI_1_stats_B_23_16                                      0x00
#define DxODOP_dfltVal_ROI_1_stats_B_31_24                                      0x00
#define DxODOP_dfltVal_ROI_1_stats_confidence_7_0                               0x00
#define DxODOP_dfltVal_ROI_1_stats_confidence_15_8                              0x00
#define DxODOP_dfltVal_ROI_1_stats_confidence_23_16                             0x00
#define DxODOP_dfltVal_ROI_1_stats_confidence_31_24                             0x00
#define DxODOP_dfltVal_ROI_2_stats_G_7_0                                        0x00
#define DxODOP_dfltVal_ROI_2_stats_G_15_8                                       0x00
#define DxODOP_dfltVal_ROI_2_stats_G_23_16                                      0x00
#define DxODOP_dfltVal_ROI_2_stats_G_31_24                                      0x00
#define DxODOP_dfltVal_ROI_2_stats_R_7_0                                        0x00
#define DxODOP_dfltVal_ROI_2_stats_R_15_8                                       0x00
#define DxODOP_dfltVal_ROI_2_stats_R_23_16                                      0x00
#define DxODOP_dfltVal_ROI_2_stats_R_31_24                                      0x00
#define DxODOP_dfltVal_ROI_2_stats_B_7_0                                        0x00
#define DxODOP_dfltVal_ROI_2_stats_B_15_8                                       0x00
#define DxODOP_dfltVal_ROI_2_stats_B_23_16                                      0x00
#define DxODOP_dfltVal_ROI_2_stats_B_31_24                                      0x00
#define DxODOP_dfltVal_ROI_2_stats_confidence_7_0                               0x00
#define DxODOP_dfltVal_ROI_2_stats_confidence_15_8                              0x00
#define DxODOP_dfltVal_ROI_2_stats_confidence_23_16                             0x00
#define DxODOP_dfltVal_ROI_2_stats_confidence_31_24                             0x00
#define DxODOP_dfltVal_ROI_3_stats_G_7_0                                        0x00
#define DxODOP_dfltVal_ROI_3_stats_G_15_8                                       0x00
#define DxODOP_dfltVal_ROI_3_stats_G_23_16                                      0x00
#define DxODOP_dfltVal_ROI_3_stats_G_31_24                                      0x00
#define DxODOP_dfltVal_ROI_3_stats_R_7_0                                        0x00
#define DxODOP_dfltVal_ROI_3_stats_R_15_8                                       0x00
#define DxODOP_dfltVal_ROI_3_stats_R_23_16                                      0x00
#define DxODOP_dfltVal_ROI_3_stats_R_31_24                                      0x00
#define DxODOP_dfltVal_ROI_3_stats_B_7_0                                        0x00
#define DxODOP_dfltVal_ROI_3_stats_B_15_8                                       0x00
#define DxODOP_dfltVal_ROI_3_stats_B_23_16                                      0x00
#define DxODOP_dfltVal_ROI_3_stats_B_31_24                                      0x00
#define DxODOP_dfltVal_ROI_3_stats_confidence_7_0                               0x00
#define DxODOP_dfltVal_ROI_3_stats_confidence_15_8                              0x00
#define DxODOP_dfltVal_ROI_3_stats_confidence_23_16                             0x00
#define DxODOP_dfltVal_ROI_3_stats_confidence_31_24                             0x00
#define DxODOP_dfltVal_ROI_4_stats_G_7_0                                        0x00
#define DxODOP_dfltVal_ROI_4_stats_G_15_8                                       0x00
#define DxODOP_dfltVal_ROI_4_stats_G_23_16                                      0x00
#define DxODOP_dfltVal_ROI_4_stats_G_31_24                                      0x00
#define DxODOP_dfltVal_ROI_4_stats_R_7_0                                        0x00
#define DxODOP_dfltVal_ROI_4_stats_R_15_8                                       0x00
#define DxODOP_dfltVal_ROI_4_stats_R_23_16                                      0x00
#define DxODOP_dfltVal_ROI_4_stats_R_31_24                                      0x00
#define DxODOP_dfltVal_ROI_4_stats_B_7_0                                        0x00
#define DxODOP_dfltVal_ROI_4_stats_B_15_8                                       0x00
#define DxODOP_dfltVal_ROI_4_stats_B_23_16                                      0x00
#define DxODOP_dfltVal_ROI_4_stats_B_31_24                                      0x00
#define DxODOP_dfltVal_ROI_4_stats_confidence_7_0                               0x00
#define DxODOP_dfltVal_ROI_4_stats_confidence_15_8                              0x00
#define DxODOP_dfltVal_ROI_4_stats_confidence_23_16                             0x00
#define DxODOP_dfltVal_ROI_4_stats_confidence_31_24                             0x00
#define DxODOP_dfltVal_frame_number_7_0                                         0xff
#define DxODOP_dfltVal_frame_number_15_8                                        0xff
// default to use lib v1.1
#if 1 //#ifdef CONFIG_USEDXOAF //lib v1.1
#define DxODOP_dfltVal_af_strategy_7_0                      0x11
#endif

/* ********************************************************************************** */
/* Error constant definition: */
/* ********************************************************************************** */
#define DxODOP_error_code_ok                                                    0x00
#define DxODOP_error_code_bad_hw_id                                             0x01
#define DxODOP_error_code_bad_calib_data                                        0x02
#define DxODOP_error_code_setting_not_ready                                     0x03
#define DxODOP_error_code_no_matching_setting                                   0x04
#define DxODOP_error_code_invalid_cmd                                           0x05
#define DxODOP_error_code_invalid_mode                                          0x06
#define DxODOP_error_code_y_addr_start_too_large                                0x08
#define DxODOP_error_code_y_addr_end_too_large                                  0x0a
#define DxODOP_error_code_y_addr_end_even                                       0x0e
#define DxODOP_error_code_y_boundaries_order                                    0x10
#define DxODOP_error_code_y_odd_inc_too_large                                   0x12
#define DxODOP_error_code_y_odd_inc_even                                        0x14
#define DxODOP_error_code_invalid_binning                                       0x1c
#define DxODOP_error_code_invalid_orientation                                   0x1d
#define DxODOP_error_code_invalid_analogue_gain_code                            0x1e
#define DxODOP_error_code_invalid_analogue_gain_code_greenR                     0x1f
#define DxODOP_error_code_invalid_analogue_gain_code_red                        0x20
#define DxODOP_error_code_invalid_analogue_gain_code_blue                       0x21
#define DxODOP_error_code_invalid_digital_gain_greenR                           0x22
#define DxODOP_error_code_invalid_digital_gain_red                              0x23
#define DxODOP_error_code_invalid_digital_gain_blue                             0x24
#define DxODOP_error_code_invalid_estimation_mode                               0x25
#define DxODOP_error_code_red_green_ratio_too_low                               0x26
#define DxODOP_error_code_blue_green_ratio_too_low                              0x27
#define DxODOP_error_code_ROI_number_too_large                                  0x29
#define DxODOP_error_code_ROI_x_start_too_large                                 0x2a
#define DxODOP_error_code_ROI_y_start_too_large                                 0x2b
#define DxODOP_error_code_ROI_x_end_too_large                                   0x2c
#define DxODOP_error_code_ROI_y_end_too_large                                   0x2d
#define DxODOP_error_code_ROI_x_order                                           0x2e
#define DxODOP_error_code_ROI_y_order                                           0x2f

#endif /* __DxODOP_regMap_h__ */
