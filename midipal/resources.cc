// Copyright 2011 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#include "midipal/resources.h"

#include <avr/pgmspace.h>

namespace midipal {

    static PGM_P str_res_syncltch[] = { "syncltch" };
    static PGM_P str_res_polyseq[] = { "polyseq" };
    static PGM_P str_res_arpeggio[] = { "arpeggio" };
    static PGM_P str_res_bpm_cntr[] = { "bpm cntr" };
    static PGM_P str_res_cc_knob[] = { "cc knob" };
    static PGM_P str_res_chordmem[] = { "chordmem" };
    static PGM_P str_res_clock[] = { "clock" };
    static PGM_P str_res_divider[] = { "divider" };
    static PGM_P str_res_chnfiltr[] = { "chnfiltr" };
    static PGM_P str_res_chnmergr[] = { "chnmergr" };
    static PGM_P str_res_user_prg[] = { "user prg" };
    static PGM_P str_res_dispatch[] = { "dispatch" };
    static PGM_P str_res_drums[] = { "drums" };
    static PGM_P str_res_monitor[] = { "monitor" };
    static PGM_P str_res_randomiz[] = { "randomiz" };
    static PGM_P str_res_contrllr[] = { "contrllr" };
    static PGM_P str_res_splitter[] = { "splitter" };
    static PGM_P str_res_delay[] = { "delay" };
    static PGM_P str_res_scale[] = { "scale" };
    static PGM_P str_res_sequencr[] = { "sequencr" };
    static PGM_P str_res_cc_lfo[] = { "cc lfo" };
    static PGM_P str_res_tanpura[] = { "tanpura" };
    static PGM_P str_res_settings[] = { "settings" };
    static PGM_P str_res_notenuke[] = { "notenuke" };
    static PGM_P str_res_sysxdump[] = { "sysxdump" };
    static PGM_P str_res__reset_[] = { "!reset!" };
    static PGM_P str_res___v1_4__[] = { "� v1.4 �" };
    static PGM_P str_res_sndoff[] = { "sndOff" };
    static PGM_P str_res_rstctr[] = { "rstCtr" };
    static PGM_P str_res_lclctr[] = { "lclCtr" };
    static PGM_P str_res_notoff[] = { "notOff" };
    static PGM_P str_res_omnoff[] = { "omnOff" };
    static PGM_P str_res_omnion[] = { "omniOn" };
    static PGM_P str_res_monoon[] = { "monoOn" };
    static PGM_P str_res_polyon[] = { "polyOn" };
    static PGM_P str_res_sysx__[] = { "sysx.." };
    static PGM_P str_res__sysx_[] = { ".sysx." };
    static PGM_P str_res___sysx[] = { "..sysx" };
    static PGM_P str_res_start[] = { "start" };
    static PGM_P str_res_stop[] = { "stop" };
    static PGM_P str_res_cont_[] = { "cont." };
    static PGM_P str_res_reset[] = { "reset" };
    static PGM_P str_res_chn[] = { "chn" };
    static PGM_P str_res_ccc[] = { "ccc" };
    static PGM_P str_res_clc[] = { "clc" };
    static PGM_P str_res_cln[] = { "cln" };
    static PGM_P str_res_all[] = { "all" };
    static PGM_P str_res_rest[] = { "rest" };
    static PGM_P str_res_tie[] = { "tie" };
    static PGM_P str_res_exit[] = { "exit" };
    static PGM_P str_res_off[] = { "off" };
    static PGM_P str_res_on[] = { "on" };
    static PGM_P str_res_no[] = { "no" };
    static PGM_P str_res_yes[] = { "yes" };
    static PGM_P str_res_xfe[] = { "xFE" };
    static PGM_P str_res_let[] = { "let" };
    static PGM_P str_res_flt[] = { "flt" };
    static PGM_P str_res_rec[] = { "rec" };
    static PGM_P str_res_dub[] = { "dub" };
    static PGM_P str_res_run[] = { "run" };
    static PGM_P str_res_bpm[] = { "bpm" };
    static PGM_P str_res_grv[] = { "grv" };
    static PGM_P str_res_amt[] = { "amt" };
    static PGM_P str_res_tap[] = { "tap" };
    static PGM_P str_res_swg[] = { "swg" };
    static PGM_P str_res_shf[] = { "shf" };
    static PGM_P str_res_psh[] = { "psh" };
    static PGM_P str_res_lag[] = { "lag" };
    static PGM_P str_res_hum[] = { "hum" };
    static PGM_P str_res_mnk[] = { "mnk" };
    static PGM_P str_res_val[] = { "val" };
    static PGM_P str_res_num[] = { "num" };
    static PGM_P str_res_typ[] = { "typ" };
    static PGM_P str_res_cc_[] = { "cc#" };
    static PGM_P str_res_nrp[] = { "nrp" };
    static PGM_P str_res_min[] = { "min" };
    static PGM_P str_res_max[] = { "max" };
    static PGM_P str_res_mod[] = { "mod" };
    static PGM_P str_res_ptn[] = { "ptn" };
    static PGM_P str_res_len[] = { "len" };
    static PGM_P str_res_euc[] = { "euc" };
    static PGM_P str_res_int[] = { "int" };
    static PGM_P str_res_ext[] = { "ext" };
    static PGM_P str_res_not[] = { "not" };
    static PGM_P str_res_clk[] = { "clk" };
    static PGM_P str_res_pt1[] = { "pt1" };
    static PGM_P str_res_pt2[] = { "pt2" };
    static PGM_P str_res_pt3[] = { "pt3" };
    static PGM_P str_res_pt4[] = { "pt4" };
    static PGM_P str_res_cc1[] = { "cc1" };
    static PGM_P str_res_cc2[] = { "cc2" };
    static PGM_P str_res_cc3[] = { "cc3" };
    static PGM_P str_res_cc4[] = { "cc4" };
    static PGM_P str_res_cc5[] = { "cc5" };
    static PGM_P str_res_cc6[] = { "cc6" };
    static PGM_P str_res_cc7[] = { "cc7" };
    static PGM_P str_res_cc8[] = { "cc8" };
    static PGM_P str_res_inp[] = { "inp" };
    static PGM_P str_res_out[] = { "out" };
    static PGM_P str_res_spl[] = { "spl" };
    static PGM_P str_res_low[] = { "low" };
    static PGM_P str_res_upp[] = { "upp" };
    static PGM_P str_res_vel[] = { "vel" };
    static PGM_P str_res__c1[] = { "#c1" };
    static PGM_P str_res__c2[] = { "#c2" };
    static PGM_P str_res_cyc[] = { "cyc" };
    static PGM_P str_res_pol[] = { "pol" };
    static PGM_P str_res_rnd[] = { "rnd" };
    static PGM_P str_res_stk[] = { "stk" };
    static PGM_P str_res_dir[] = { "dir" };
    static PGM_P str_res_up[] = { "up" };
    static PGM_P str_res_dwn[] = { "dwn" };
    static PGM_P str_res_u_d[] = { "u&d" };
    static PGM_P str_res_pla[] = { "pla" };
    static PGM_P str_res_chd[] = { "chd" };
    static PGM_P str_res_oct[] = { "oct" };
    static PGM_P str_res_dur[] = { "dur" };
    static PGM_P str_res_lat[] = { "lat" };
    static PGM_P str_res_div[] = { "div" };
    static PGM_P str_res_den[] = { "den" };
    static PGM_P str_res_4_1[] = { "4/1" };
    static PGM_P str_res_3_1[] = { "3/1" };
    static PGM_P str_res_2_1[] = { "2/1" };
    static PGM_P str_res_3_2[] = { "3/2" };
    static PGM_P str_res_1_1[] = { "1/1" };
    static PGM_P str_res_3_4[] = { "3/4" };
    static PGM_P str_res_2_3[] = { "2/3" };
    static PGM_P str_res_1_2[] = { "1/2" };
    static PGM_P str_res_3_8[] = { "3/8" };
    static PGM_P str_res_1_3[] = { "1/3" };
    static PGM_P str_res_1_4[] = { "1/4" };
    static PGM_P str_res_1_6[] = { "1/6" };
    static PGM_P str_res_1_8[] = { "1/8" };
    static PGM_P str_res__12[] = { "/12" };
    static PGM_P str_res__16[] = { "/16" };
    static PGM_P str_res__24[] = { "/24" };
    static PGM_P str_res__32[] = { "/32" };
    static PGM_P str_res__48[] = { "/48" };
    static PGM_P str_res__96[] = { "/96" };
    static PGM_P str_res_rep[] = { "rep" };
    static PGM_P str_res_trs[] = { "trs" };
    static PGM_P str_res_dpl[] = { "dpl" };
    static PGM_P str_res_off_[] = { "off_" };
    static PGM_P str_res_mir[] = { "mir" };
    static PGM_P str_res_alt[] = { "alt" };
    static PGM_P str_res_trk[] = { "trk" };
    static PGM_P str_res_roo[] = { "roo" };
    static PGM_P str_res_scl[] = { "scl" };
    static PGM_P str_res_voi[] = { "voi" };
    static PGM_P str_res_hrm[] = { "hrm" };
    static PGM_P str_res_chr[] = { "chr" };
    static PGM_P str_res_ion[] = { "ion" };
    static PGM_P str_res_dor[] = { "dor" };
    static PGM_P str_res_phr[] = { "phr" };
    static PGM_P str_res_lyd[] = { "lyd" };
    static PGM_P str_res_mix[] = { "mix" };
    static PGM_P str_res_aeo[] = { "aeo" };
    static PGM_P str_res_loc[] = { "loc" };
    static PGM_P str_res_bmj[] = { "bmj" };
    static PGM_P str_res_bmn[] = { "bmn" };
    static PGM_P str_res_pmj[] = { "pmj" };
    static PGM_P str_res_pmn[] = { "pmn" };
    static PGM_P str_res_bhr[] = { "bhr" };
    static PGM_P str_res_shr[] = { "shr" };
    static PGM_P str_res_rup[] = { "rup" };
    static PGM_P str_res_tod[] = { "tod" };
    static PGM_P str_res_rag[] = { "rag" };
    static PGM_P str_res_kaa[] = { "kaa" };
    static PGM_P str_res_meg[] = { "meg" };
    static PGM_P str_res_mlk[] = { "mlk" };
    static PGM_P str_res_dpk[] = { "dpk" };
    static PGM_P str_res_flk[] = { "flk" };
    static PGM_P str_res_jap[] = { "jap" };
    static PGM_P str_res_gam[] = { "gam" };
    static PGM_P str_res_whl[] = { "whl" };
    static PGM_P str_res_key[] = { "key" };
    static PGM_P str_res__[] = { "" };
    static PGM_P str_res_stp[] = { "stp" };
    static PGM_P str_res_1[] = { "" };
    static PGM_P str_res_2[] = { "" };
    static PGM_P str_res_3[] = { "" };
    static PGM_P str_res_4[] = { "" };
    static PGM_P str_res_am1[] = { "am1" };
    static PGM_P str_res_am2[] = { "am2" };
    static PGM_P str_res_am3[] = { "am3" };
    static PGM_P str_res_am4[] = { "am4" };
    static PGM_P str_res_ce1[] = { "ce1" };
    static PGM_P str_res_ce2[] = { "ce2" };
    static PGM_P str_res_ce3[] = { "ce3" };
    static PGM_P str_res_ce4[] = { "ce4" };
    static PGM_P str_res_wf1[] = { "wf1" };
    static PGM_P str_res_wf2[] = { "wf2" };
    static PGM_P str_res_wf3[] = { "wf3" };
    static PGM_P str_res_wf4[] = { "wf4" };
    static PGM_P str_res_rt1[] = { "rt1" };
    static PGM_P str_res_rt2[] = { "rt2" };
    static PGM_P str_res_rt3[] = { "rt3" };
    static PGM_P str_res_rt4[] = { "rt4" };
    static PGM_P str_res_sy1[] = { "sy1" };
    static PGM_P str_res_sy2[] = { "sy2" };
    static PGM_P str_res_sy3[] = { "sy3" };
    static PGM_P str_res_sy4[] = { "sy4" };
    static PGM_P str_res_tri[] = { "tri" };
    static PGM_P str_res_sqr[] = { "sqr" };
    static PGM_P str_res_rmp[] = { "rmp" };
    static PGM_P str_res_sin[] = { "sin" };
    static PGM_P str_res_si2[] = { "si2" };
    static PGM_P str_res_si3[] = { "si3" };
    static PGM_P str_res_si5[] = { "si5" };
    static PGM_P str_res_gg1[] = { "gg1" };
    static PGM_P str_res_gg2[] = { "gg2" };
    static PGM_P str_res_bt1[] = { "bt1" };
    static PGM_P str_res_bt2[] = { "bt2" };
    static PGM_P str_res_sp1[] = { "sp1" };
    static PGM_P str_res_sp2[] = { "sp2" };
    static PGM_P str_res_lp1[] = { "lp1" };
    static PGM_P str_res_lp2[] = { "lp2" };
    static PGM_P str_res_rs1[] = { "rs1" };
    static PGM_P str_res_rs2[] = { "rs2" };
    static PGM_P str_res_s_h[] = { "s&h" };
    static PGM_P str_res_pa[] = { "pa" };
    static PGM_P str_res_ma[] = { "ma" };
    static PGM_P str_res_ni[] = { "ni" };
    static PGM_P str_res_sa[] = { "sa" };
    static PGM_P str_res_res[] = { "res" };
    static PGM_P str_res_fre[] = { "fre" };
    static PGM_P str_res_prg[] = { "prg" };


    PGM_P* string_table[] = {
      str_res_syncltch,
      str_res_polyseq,
      str_res_arpeggio,
      str_res_bpm_cntr,
      str_res_cc_knob,
      str_res_chordmem,
      str_res_clock,
      str_res_divider,
      str_res_chnfiltr,
      str_res_chnmergr,
      str_res_user_prg,
      str_res_dispatch,
      str_res_drums,
      str_res_monitor,
      str_res_randomiz,
      str_res_contrllr,
      str_res_splitter,
      str_res_delay,
      str_res_scale,
      str_res_sequencr,
      str_res_cc_lfo,
      str_res_tanpura,
      str_res_settings,
      str_res_notenuke,
      str_res_sysxdump,
      str_res__reset_,
      str_res___v1_4__,
      str_res_sndoff,
      str_res_rstctr,
      str_res_lclctr,
      str_res_notoff,
      str_res_omnoff,
      str_res_omnion,
      str_res_monoon,
      str_res_polyon,
      str_res_sysx__,
      str_res__sysx_,
      str_res___sysx,
      str_res_start,
      str_res_stop,
      str_res_cont_,
      str_res_reset,
      str_res_chn,
      str_res_ccc,
      str_res_clc,
      str_res_cln,
      str_res_all,
      str_res_rest,
      str_res_tie,
      str_res_exit,
      str_res_off,
      str_res_on,
      str_res_no,
      str_res_yes,
      str_res_xfe,
      str_res_let,
      str_res_flt,
      str_res_rec,
      str_res_dub,
      str_res_tie,
      str_res_run,
      str_res_bpm,
      str_res_grv,
      str_res_amt,
      str_res_tap,
      str_res_swg,
      str_res_shf,
      str_res_psh,
      str_res_lag,
      str_res_hum,
      str_res_mnk,
      str_res_val,
      str_res_num,
      str_res_typ,
      str_res_cc_,
      str_res_nrp,
      str_res_min,
      str_res_max,
      str_res_mod,
      str_res_ptn,
      str_res_len,
      str_res_euc,
      str_res_int,
      str_res_ext,
      str_res_not,
      str_res_clk,
      str_res_pt1,
      str_res_pt2,
      str_res_pt3,
      str_res_pt4,
      str_res_cc1,
      str_res_cc2,
      str_res_cc3,
      str_res_cc4,
      str_res_cc5,
      str_res_cc6,
      str_res_cc7,
      str_res_cc8,
      str_res_inp,
      str_res_out,
      str_res_spl,
      str_res_low,
      str_res_upp,
      str_res_amt,
      str_res_not,
      str_res_vel,
      str_res__c1,
      str_res__c2,
      str_res_cyc,
      str_res_pol,
      str_res_rnd,
      str_res_stk,
      str_res_vel,
      str_res_dir,
      str_res_up,
      str_res_dwn,
      str_res_u_d,
      str_res_rnd,
      str_res_pla,
      str_res_chd,
      str_res_oct,
      str_res_dur,
      str_res_lat,
      str_res_div,
      str_res_den,
      str_res_4_1,
      str_res_3_1,
      str_res_2_1,
      str_res_3_2,
      str_res_1_1,
      str_res_3_4,
      str_res_2_3,
      str_res_1_2,
      str_res_3_8,
      str_res_1_3,
      str_res_1_4,
      str_res_1_6,
      str_res_1_8,
      str_res__12,
      str_res__16,
      str_res__24,
      str_res__32,
      str_res__48,
      str_res__96,
      str_res_rep,
      str_res_trs,
      str_res_dpl,
      str_res_off_,
      str_res_mir,
      str_res_alt,
      str_res_trk,
      str_res_rnd,
      str_res_roo,
      str_res_scl,
      str_res_voi,
      str_res_hrm,
      str_res_chr,
      str_res_ion,
      str_res_dor,
      str_res_phr,
      str_res_lyd,
      str_res_mix,
      str_res_aeo,
      str_res_loc,
      str_res_bmj,
      str_res_bmn,
      str_res_pmj,
      str_res_pmn,
      str_res_bhr,
      str_res_shr,
      str_res_rup,
      str_res_tod,
      str_res_rag,
      str_res_kaa,
      str_res_meg,
      str_res_mlk,
      str_res_dpk,
      str_res_flk,
      str_res_jap,
      str_res_gam,
      str_res_whl,
      str_res_key,
      str_res__,
      str_res_stp,
      str_res_1,
      str_res_2,
      str_res_3,
      str_res_4,
      str_res_am1,
      str_res_am2,
      str_res_am3,
      str_res_am4,
      str_res_ce1,
      str_res_ce2,
      str_res_ce3,
      str_res_ce4,
      str_res_wf1,
      str_res_wf2,
      str_res_wf3,
      str_res_wf4,
      str_res_rt1,
      str_res_rt2,
      str_res_rt3,
      str_res_rt4,
      str_res_sy1,
      str_res_sy2,
      str_res_sy3,
      str_res_sy4,
      str_res_tri,
      str_res_sqr,
      str_res_rmp,
      str_res_sin,
      str_res_si2,
      str_res_si3,
      str_res_si5,
      str_res_gg1,
      str_res_gg2,
      str_res_bt1,
      str_res_bt2,
      str_res_sp1,
      str_res_sp2,
      str_res_lp1,
      str_res_lp2,
      str_res_rs1,
      str_res_rs2,
      str_res_s_h,
      str_res_pa,
      str_res_ma,
      str_res_ni,
      str_res_sa,
      str_res_res,
      str_res_fre,
      str_res_not,
      str_res_chd,
      str_res_prg,
    };

    const uint16_t lut_res_arpeggiator_patterns[] PROGMEM = {
       21845,  62965,  46517,  54741,  43861,  22869,  38293,   2313,
       37449,  21065,  18761,  54553,  27499,  23387,  30583,  28087,
       22359,  28527,  30431,  43281,  28609,  53505,
    };
    const uint16_t lut_res_drum_patterns[] PROGMEM = {
           0,  18705,   4369,  18761,   1281,    257,  21065,    261,
       10561,   1089,  42049,  16705,      0,  16530,   4112,   4624,
        4176,  37008,   4752,   4624,  18700,  16400,  18448,  36880,
           0,  18761,   4369,  23644,  21845,  17476,  24351,  17733,
       54741,  30583,  25666,  65535,      0,  18504,  21761,  18688,
       61456,  42116,   4168,  16657,   5193,  21845,  22616,  25253,
    };
    const uint16_t lut_res_groove_swing[] PROGMEM = {
         127,    127,   -127,   -127,    127,    127,   -127,   -127,
         127,    127,   -127,   -127,    127,    127,   -127,   -127,
    };
    const uint16_t lut_res_groove_shuffle[] PROGMEM = {
         127,   -127,    127,   -127,    127,   -127,    127,   -127,
         127,   -127,    127,   -127,    127,   -127,    127,   -127,
    };
    const uint16_t lut_res_groove_push[] PROGMEM = {
         -63,    -63,    127,      0,   -127,      0,      0,     88,
           0,      0,     88,    -50,    -88,      0,     88,      0,
    };
    const uint16_t lut_res_groove_lag[] PROGMEM = {
          19,     44,     93,     -4,     32,    -53,    -90,   -127,
         117,     32,   -102,    -53,    105,    -53,     93,    -53,
    };
    const uint16_t lut_res_groove_human[] PROGMEM = {
          88,   -101,    107,    -95,     88,    -88,     50,    -38,
          65,    -88,    101,    -95,    101,   -127,     63,    -31,
    };
    const uint16_t lut_res_groove_monkey[] PROGMEM = {
          70,    -84,     84,   -112,     84,    -98,    112,    -98,
          54,    -70,    127,    -84,    127,   -112,     84,    -84,
    };
    const uint16_t lut_res_euclidian_patterns[] PROGMEM = {
           0,      1,      3,      7,     15,     63,    127,    255,
        1023,   4095,  16383,  65535,      0,      1,      3,      7,
          15,     63,    127,    255,   1023,   4095,  16383,  65535,
           0,      1,      3,      7,     15,     63,    127,    255,
        1023,   4095,  16383,  65535,      0,      1,      5,      7,
          15,     63,    127,    255,   1023,   4095,  16383,  65535,
           0,      1,      5,     13,     15,     63,    127,    255,
        1023,   4095,  16383,  65535,      0,      1,      9,     21,
          45,     63,    127,    255,   1023,   4095,  16383,  65535,
           0,      1,     17,     41,     45,    125,    127,    255,
        1023,   4095,  16383,  65535,      0,      1,     17,     41,
          85,    221,    253,    255,   1023,   4095,  16383,  65535,
           0,      1,     33,    145,    297,    429,    733,    957,
        1023,   4095,  16383,  65535,      0,      1,     65,    273,
         585,   1365,   1709,   2925,   3965,   4095,  16383,  65535,
           0,      1,    129,    545,   2193,   5289,   5461,   5805,
       11997,  16125,  16383,  65535,      0,      1,    257,   2113,
        4369,  10537,  21161,  21845,  44461,  56797,  65021,  65535,
    };
    const uint16_t lut_res_scale_0[] PROGMEM = {
           0,      1,      2,      3,      4,      5,      6,      7,
           8,      9,     10,     11,
    };
    const uint16_t lut_res_scale_1[] PROGMEM = {
           0,      0,      2,      2,      4,      5,      5,      7,
           7,      9,      9,     11,
    };
    const uint16_t lut_res_scale_2[] PROGMEM = {
           0,      0,      2,      3,      3,      5,      5,      7,
           7,      9,     10,     10,
    };
    const uint16_t lut_res_scale_3[] PROGMEM = {
           0,      1,      1,      3,      3,      5,      5,      7,
           8,      8,     10,     10,
    };
    const uint16_t lut_res_scale_4[] PROGMEM = {
           0,      0,      2,      2,      4,      4,      6,      7,
           7,      9,      9,     11,
    };
    const uint16_t lut_res_scale_5[] PROGMEM = {
           0,      0,      2,      2,      4,      5,      5,      7,
           7,      9,     10,     10,
    };
    const uint16_t lut_res_scale_6[] PROGMEM = {
           0,      0,      2,      3,      3,      5,      5,      7,
           8,      8,     10,     10,
    };
    const uint16_t lut_res_scale_7[] PROGMEM = {
           0,      1,      1,      3,      3,      5,      6,      6,
           8,      8,     10,     10,
    };
    const uint16_t lut_res_scale_8[] PROGMEM = {
           0,      0,      3,      3,      4,      4,      7,      7,
           7,      9,     10,     10,
    };
    const uint16_t lut_res_scale_9[] PROGMEM = {
           0,      0,      3,      3,      3,      5,      6,      7,
           7,     10,     10,     10,
    };
    const uint16_t lut_res_scale_10[] PROGMEM = {
           0,      0,      2,      2,      4,      4,      7,      7,
           7,      9,      9,      9,
    };
    const uint16_t lut_res_scale_11[] PROGMEM = {
           0,      0,      3,      3,      3,      5,      5,      7,
           7,     10,     10,     10,
    };
    const uint16_t lut_res_scale_12[] PROGMEM = {
           0,      1,      1,      4,      4,      5,      5,      7,
           8,      8,     11,     11,
    };
    const uint16_t lut_res_scale_13[] PROGMEM = {
           0,      1,      1,      4,      4,      4,      6,      7,
           8,      8,     11,     11,
    };
    const uint16_t lut_res_scale_14[] PROGMEM = {
           0,      1,      1,      3,      3,      5,      5,      7,
           7,     10,     10,     11,
    };
    const uint16_t lut_res_scale_15[] PROGMEM = {
           0,      1,      1,      3,      3,      6,      6,      7,
           8,      8,     11,     11,
    };
    const uint16_t lut_res_scale_16[] PROGMEM = {
           0,      0,      2,      2,      4,      5,      5,      5,
           9,      9,     10,     11,
    };
    const uint16_t lut_res_scale_18[] PROGMEM = {
           0,      0,      2,      2,      5,      5,      5,      7,
           7,      9,      9,      9,
    };
    const uint16_t lut_res_scale_19[] PROGMEM = {
           0,      0,      3,      3,      3,      5,      5,      8,
           8,      8,     10,     10,
    };
    const uint16_t lut_res_scale_20[] PROGMEM = {
           0,      0,      3,      3,      4,      4,      6,      6,
           8,      8,     10,     10,
    };
    const uint16_t lut_res_scale_21[] PROGMEM = {
           0,      1,      1,      3,      4,      5,      5,      7,
           8,      8,     10,     10,
    };
    const uint16_t lut_res_scale_22[] PROGMEM = {
           0,      1,      1,      1,      5,      5,      5,      7,
           8,      8,      8,      8,
    };
    const uint16_t lut_res_scale_23[] PROGMEM = {
           0,      1,      1,      3,      3,      3,      7,      7,
           8,      8,      8,      8,
    };
    const uint16_t lut_res_scale_24[] PROGMEM = {
           0,      0,      2,      2,      4,      4,      6,      6,
           8,      8,     10,     10,
    };
    const uint16_t lut_res_increments[] PROGMEM = {
         170,    227,    341,    455,    682,    910,   1024,   1365,
        1820,   2048,   2730,   4096,   5461,   8192,  10922,  16384,
       21845,  32768,  65535,
    };


    const uint16_t* lookup_table_table[] = {
      lut_res_arpeggiator_patterns,
      lut_res_drum_patterns,
      lut_res_groove_swing,
      lut_res_groove_shuffle,
      lut_res_groove_push,
      lut_res_groove_lag,
      lut_res_groove_human,
      lut_res_groove_monkey,
      lut_res_euclidian_patterns,
      lut_res_scale_0,
      lut_res_scale_1,
      lut_res_scale_2,
      lut_res_scale_3,
      lut_res_scale_4,
      lut_res_scale_5,
      lut_res_scale_6,
      lut_res_scale_7,
      lut_res_scale_8,
      lut_res_scale_9,
      lut_res_scale_10,
      lut_res_scale_11,
      lut_res_scale_12,
      lut_res_scale_13,
      lut_res_scale_14,
      lut_res_scale_15,
      lut_res_scale_16,
      lut_res_scale_2,
      lut_res_scale_18,
      lut_res_scale_19,
      lut_res_scale_20,
      lut_res_scale_21,
      lut_res_scale_22,
      lut_res_scale_23,
      lut_res_scale_24,
      lut_res_increments,
    };

    const uint8_t chr_res_digits_10[] PROGMEM = {
          16,     16,     16,     22,      9,      9,      9,      6,
          16,     16,     16,     22,      2,      2,      2,      7,
          16,     16,     16,     22,      9,      2,      4,     15,
          16,     16,     16,     22,      1,      2,      1,      6,
          16,     16,     16,     18,      4,     10,     15,      2,
          16,     16,     16,     23,      4,      6,      1,      6,
          16,     16,     16,     19,      4,      7,      5,      7,
    };
    const uint8_t chr_res_sequencer_icons[] PROGMEM = {
           2,      3,      3,      2,      2,     14,     30,     12,
           0,      0,      0,     28,     20,     20,     23,      0,
           0,      1,      3,      7,     15,     31,     31,      0,
           0,      0,     14,     21,     17,     17,     14,      0,
    };


    const uint8_t* character_table[] = {
      chr_res_digits_10,
      chr_res_sequencer_icons,
    };

    const uint8_t wav_res_lfo_waveforms[] PROGMEM = {
           1,      5,      9,     13,     17,     21,     25,     29,
          33,     37,     41,     44,     48,     52,     56,     60,
          64,     68,     72,     76,     80,     84,     88,     92,
          96,    100,    104,    108,    112,    116,    120,    124,
         128,    131,    135,    139,    143,    147,    151,    155,
         159,    163,    167,    171,    175,    179,    183,    187,
         191,    195,    199,    203,    207,    211,    214,    218,
         222,    226,    230,    234,    238,    242,    246,    250,
         254,    250,    246,    242,    238,    234,    230,    226,
         222,    218,    214,    211,    207,    203,    199,    195,
         191,    187,    183,    179,    175,    171,    167,    163,
         159,    155,    151,    147,    143,    139,    135,    131,
         128,    124,    120,    116,    112,    108,    104,    100,
          96,     92,     88,     84,     80,     76,     72,     68,
          64,     60,     56,     52,     48,     44,     41,     37,
          33,     29,     25,     21,     17,     13,      9,      5,
           1,    254,    254,    254,    254,    254,    254,    254,
         254,    254,    254,    254,    254,    254,    254,    254,
         254,    254,    254,    254,    254,    254,    254,    254,
         254,    254,    254,    254,    254,    254,    254,    254,
         254,    254,    254,    254,    254,    254,    254,    254,
         254,    254,    254,    254,    254,    254,    254,    254,
         254,    254,    254,    254,    254,    254,    254,    254,
         254,    254,    254,    254,    254,    254,    254,    254,
         254,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,    254,      1,      3,      5,      7,      9,     11,
          13,     15,     17,     19,     21,     23,     25,     27,
          29,     31,     33,     35,     37,     39,     41,     43,
          45,     47,     49,     51,     53,     55,     57,     59,
          61,     63,     65,     67,     69,     71,     73,     75,
          77,     79,     81,     83,     85,     87,     89,     91,
          93,     95,     97,     99,    101,    103,    105,    107,
         109,    111,    113,    115,    117,    119,    121,    123,
         125,    127,    128,    130,    132,    134,    136,    138,
         140,    142,    144,    146,    148,    150,    152,    154,
         156,    158,    160,    162,    164,    166,    168,    170,
         172,    174,    176,    178,    180,    182,    184,    186,
         188,    190,    192,    194,    196,    198,    200,    202,
         204,    206,    208,    210,    212,    214,    216,    218,
         220,    222,    224,    226,    228,    230,    232,    234,
         236,    238,    240,    242,    244,    246,    248,    250,
         252,    254,      1,    128,    134,    140,    146,    152,
         158,    164,    170,    176,    182,    187,    193,    198,
         203,    208,    212,    217,    221,    225,    229,    233,
         236,    239,    242,    244,    247,    249,    250,    252,
         253,    253,    254,    254,    254,    253,    253,    252,
         250,    249,    247,    244,    242,    239,    236,    233,
         229,    225,    221,    217,    212,    208,    203,    198,
         193,    187,    182,    176,    170,    164,    158,    152,
         146,    140,    134,    128,    121,    115,    109,    103,
          97,     91,     85,     79,     73,     68,     62,     57,
          52,     47,     43,     38,     34,     30,     26,     22,
          19,     16,     13,     11,      8,      6,      5,      3,
           2,      2,      1,      1,      1,      2,      2,      3,
           5,      6,      8,     11,     13,     16,     19,     22,
          26,     30,     34,     38,     43,     47,     52,     57,
          62,     68,     73,     79,     85,     91,     97,    103,
         109,    115,    121,    128,    128,    138,    148,    157,
         167,    177,    186,    194,    203,    210,    218,    224,
         230,    236,    241,    245,    248,    251,    252,    254,
         254,    254,    253,    251,    249,    246,    243,    239,
         234,    230,    224,    219,    213,    207,    201,    195,
         189,    182,    176,    170,    164,    159,    153,    148,
         143,    139,    135,    131,    128,    125,    123,    121,
         120,    119,    118,    118,    118,    118,    119,    120,
         121,    123,    124,    126,    128,    129,    131,    132,
         134,    135,    136,    137,    137,    137,    137,    136,
         135,    134,    132,    130,    127,    124,    120,    116,
         112,    107,    102,     96,     91,     85,     79,     73,
          66,     60,     54,     48,     42,     36,     31,     25,
          21,     16,     12,      9,      6,      4,      2,      1,
           1,      1,      3,      4,      7,     10,     14,     19,
          25,     31,     37,     45,     52,     61,     69,     78,
          88,     98,    107,    117,    128,    128,    143,    158,
         172,    186,    199,    211,    222,    231,    239,    245,
         250,    253,    254,    254,    252,    249,    244,    239,
         232,    225,    217,    209,    201,    194,    186,    179,
         173,    168,    163,    160,    158,    158,    158,    160,
         163,    168,    173,    179,    186,    194,    201,    209,
         217,    225,    232,    239,    244,    249,    252,    254,
         254,    253,    250,    245,    239,    231,    222,    211,
         199,    186,    172,    158,    143,    128,    112,     97,
          83,     69,     56,     44,     33,     24,     16,     10,
           5,      2,      1,      1,      3,      6,     11,     16,
          23,     30,     38,     46,     54,     61,     69,     76,
          82,     87,     92,     95,     97,     97,     97,     95,
          92,     87,     82,     76,     69,     61,     54,     46,
          38,     30,     23,     16,     11,      6,      3,      1,
           1,      2,      5,     10,     16,     24,     33,     44,
          56,     69,     83,     97,    112,    128,    128,    144,
         159,    173,    185,    195,    201,    204,    204,    201,
         196,    188,    179,    169,    160,    151,    143,    138,
         135,    135,    138,    144,    153,    164,    176,    190,
         204,    217,    229,    240,    247,    252,    254,    252,
         247,    240,    229,    217,    204,    190,    176,    164,
         153,    144,    138,    135,    135,    138,    143,    151,
         160,    169,    179,    188,    196,    201,    204,    204,
         201,    195,    185,    173,    159,    144,    128,    111,
          96,     82,     70,     60,     54,     51,     51,     54,
          59,     67,     76,     86,     95,    104,    112,    117,
         120,    120,    117,    111,    102,     91,     79,     65,
          51,     38,     26,     15,      8,      3,      1,      3,
           8,     15,     26,     38,     51,     65,     79,     91,
         102,    111,    117,    120,    120,    117,    112,    104,
          95,     86,     76,     67,     59,     54,     51,     51,
          54,     60,     70,     82,     96,    111,    128,      1,
           1,      1,      3,      5,      8,     13,     19,     27,
          37,     49,     62,     77,     93,    110,    128,    145,
         163,    180,    196,    211,    224,    235,    243,    250,
         253,    254,    252,    248,    241,    231,    220,    206,
         191,    176,    159,    142,    125,    108,     92,     76,
          62,     49,     37,     27,     19,     12,      6,      2,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      2,      2,      3,      3,      4,
           5,      6,      7,      7,      6,      5,      3,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      2,      5,      9,     17,     27,     41,
          58,     77,     99,    122,    146,    169,    191,    211,
         228,    241,    250,    254,    254,    249,    240,    227,
         212,    196,    178,    161,    146,    133,    123,    116,
         114,    116,    123,    133,    146,    161,    178,    196,
         212,    227,    240,    249,    254,    254,    250,    241,
         228,    211,    191,    169,    146,    122,     99,     77,
          58,     41,     27,     17,      9,      5,      2,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,      1,      1,      1,      1,      1,      1,      1,
           1,     63,     57,     51,     45,     39,     33,     27,
          21,     15,      9,      3,      1,      7,     13,     19,
          25,     31,     37,     43,     49,     55,     61,     67,
          73,     79,     85,     91,     97,    103,    109,    115,
         121,    128,    134,    140,    146,    152,    158,    164,
         170,    176,    182,    188,    194,    200,    206,    212,
         218,    224,    230,    236,    242,    248,    254,    252,
         246,    240,    234,    228,    222,    216,    210,    204,
         198,    192,    198,    204,    210,    216,    222,    228,
         234,    240,    246,    252,    254,    248,    242,    236,
         230,    224,    218,    212,    206,    200,    194,    188,
         182,    176,    170,    164,    158,    152,    146,    140,
         134,    128,    121,    115,    109,    103,     97,     91,
          85,     79,     73,     67,     61,     55,     49,     43,
          37,     31,     25,     19,     13,      7,      1,      3,
           9,     15,     21,     27,     33,     39,     45,     51,
          57,     63,    128,    120,    112,    104,     96,     88,
          80,     72,     64,     56,     48,     41,     33,     25,
          17,      9,      1,      9,     17,     25,     33,     41,
          48,     56,     64,     72,     80,     88,     96,    104,
         112,    120,    128,    135,    143,    151,    159,    167,
         175,    183,    191,    199,    207,    214,    222,    230,
         238,    246,    254,    246,    238,    230,    222,    214,
         207,    199,    191,    183,    175,    167,    159,    151,
         143,    135,    128,    135,    143,    151,    159,    167,
         175,    183,    191,    199,    207,    214,    222,    230,
         238,    246,    254,    246,    238,    230,    222,    214,
         207,    199,    191,    183,    175,    167,    159,    151,
         143,    135,    128,    120,    112,    104,     96,     88,
          80,     72,     64,     56,     48,     41,     33,     25,
          17,      9,      1,      9,     17,     25,     33,     41,
          48,     56,     64,     72,     80,     88,     96,    104,
         112,    120,    128,      1,      2,      3,      3,      4,
           5,      6,      7,      8,      9,     10,     11,     12,
          14,     15,     16,     18,     19,     21,     23,     24,
          26,     28,     30,     32,     34,     36,     38,     41,
          43,     46,     49,     52,     55,     58,     61,     64,
          68,     72,     76,     80,     84,     88,     93,     98,
         103,    108,    113,    119,    125,    131,    138,    145,
         152,    159,    167,    175,    183,    192,    201,    211,
         221,    232,    243,    254,    243,    232,    221,    211,
         201,    192,    183,    175,    167,    159,    152,    145,
         138,    131,    125,    119,    113,    108,    103,     98,
          93,     88,     84,     80,     76,     72,     68,     64,
          61,     58,     55,     52,     49,     46,     43,     41,
          38,     36,     34,     32,     30,     28,     26,     24,
          23,     21,     19,     18,     16,     15,     14,     12,
          11,     10,      9,      8,      7,      6,      5,      4,
           3,      3,      2,      1,      1,     12,     22,     32,
          41,     48,     56,     62,     68,     74,     79,     84,
          88,     92,     96,     99,    102,    105,    108,    110,
         112,    114,    116,    118,    119,    120,    122,    123,
         124,    125,    126,    127,    128,    128,    129,    130,
         131,    132,    133,    135,    136,    137,    139,    141,
         143,    145,    147,    150,    153,    156,    159,    163,
         167,    171,    176,    181,    187,    193,    199,    207,
         214,    223,    233,    243,    254,    243,    233,    223,
         214,    207,    199,    193,    187,    181,    176,    171,
         167,    163,    159,    156,    153,    150,    147,    145,
         143,    141,    139,    137,    136,    135,    133,    132,
         131,    130,    129,    128,    128,    127,    126,    125,
         124,    123,    122,    120,    119,    118,    116,    114,
         112,    110,    108,    105,    102,     99,     96,     92,
          88,     84,     79,     74,     68,     62,     56,     48,
          41,     32,     22,     12,      1,    229,    205,    184,
         164,    147,    130,    116,    102,     90,     79,     69,
          60,     51,     44,     38,     32,     26,     22,     18,
          14,     11,      9,      7,      5,      4,      2,      2,
           1,      1,      1,      1,      2,      2,      3,      4,
           5,      6,      8,      9,     11,     13,     14,     16,
          18,     20,     22,     25,     27,     29,     31,     34,
          36,     39,     41,     44,     46,     49,     51,     54,
          57,     59,     62,     65,     68,     70,     73,     76,
          79,     82,     84,     87,     90,     93,     96,     99,
         102,    104,    107,    110,    113,    116,    119,    122,
         125,    128,    130,    133,    136,    139,    142,    145,
         148,    151,    154,    157,    160,    163,    166,    169,
         171,    174,    177,    180,    183,    186,    189,    192,
         195,    198,    201,    204,    207,    210,    213,    216,
         219,    222,    225,    227,    230,    233,    236,    239,
         242,    245,    248,    251,    254,    229,     20,     38,
          54,     69,     83,     96,    108,    119,    130,    139,
         148,    156,    163,    170,    177,    183,    188,    193,
         198,    202,    206,    210,    213,    217,    220,    222,
         225,    227,    229,    231,    233,    235,    236,    238,
         239,    240,    242,    243,    244,    245,    245,    246,
         247,    248,    248,    249,    249,    250,    250,    251,
         251,    251,    252,    252,    252,    253,    253,    253,
         253,    253,    254,    254,    254,    254,    235,    217,
         201,    186,    172,    159,    147,    136,    125,    116,
         107,     99,     92,     85,     78,     72,     67,     62,
          57,     53,     49,     45,     42,     38,     35,     33,
          30,     28,     26,     24,     22,     20,     19,     17,
          16,     15,     13,     12,     11,     10,     10,      9,
           8,      7,      7,      6,      6,      5,      5,      4,
           4,      4,      3,      3,      3,      2,      2,      2,
           2,      2,      1,      1,      1,      1,     20,    254,
         230,    189,    139,     88,     45,     15,      1,      2,
          17,     41,     70,     99,    124,    142,    152,    153,
         148,    137,    123,    110,     98,     91,     88,     89,
          94,    102,    111,    121,    129,    135,    139,    140,
         139,    137,    134,    131,    129,    128,    128,    129,
         131,    135,    138,    142,    145,    148,    150,    151,
         152,    152,    152,    153,    153,    153,    154,    156,
         157,    159,    161,    163,    165,    167,    168,    170,
         171,    172,    173,    174,    175,    176,    177,    179,
         180,    182,    183,    185,    186,    188,    189,    190,
         192,    193,    194,    195,    197,    198,    199,    200,
         202,    203,    205,    206,    207,    209,    210,    211,
         213,    214,    215,    217,    218,    219,    221,    222,
         223,    225,    226,    227,    229,    230,    231,    233,
         234,    235,    237,    238,    239,    241,    242,    243,
         245,    246,    247,    249,    250,    251,    253,    254,
          67,     85,    115,    152,    189,    221,    243,    254,
         254,    244,    228,    208,    189,    172,    160,    154,
         154,    159,    168,    178,    189,    198,    204,    207,
         207,    205,    200,    194,    189,    184,    181,    179,
         179,    180,    183,    186,    189,    191,    193,    194,
         194,    193,    192,    190,    189,    187,    186,    186,
         186,    186,    187,    188,    189,    190,    190,    190,
         190,    190,    190,    189,    189,    188,    188,    188,
         188,    170,    140,    103,     66,     34,     12,      1,
           1,     11,     27,     47,     66,     83,     95,    101,
         101,     96,     87,     77,     66,     57,     51,     48,
          48,     50,     55,     61,     66,     71,     74,     76,
          76,     75,     72,     69,     66,     64,     62,     61,
          61,     62,     63,     65,     66,     68,     69,     69,
          69,     69,     68,     67,     66,     65,     65,     65,
          65,     65,     65,     66,     66,     67,     67,     67,
          67,
    };


    const uint8_t* waveform_table[] = {
      wav_res_lfo_waveforms,
    };


}  // namespace midipal
