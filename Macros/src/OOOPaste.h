/*
 * NB. Generated File do not edit
 */

#ifndef OOOPaste_H
#define OOOPaste_H

#define _OOOPaste_SimplePaste(ARG1,ARG2) ARG1##ARG2
#define OOOPaste_SimplePaste(ARG1,ARG2) _OOOPaste_SimplePaste(ARG1,ARG2)

#define OOOPaste_IsEmpty_Arg( \
_0, \
_1, \
_2, \
_3, \
_4, \
_5, \
_6, \
_7, \
_8, \
_9, \
_10, \
_11, \
_12, \
_13, \
_14, \
_15, \
_16, \
_17, \
_18, \
_19, \
_20, \
_21, \
_22, \
_23, \
_24, \
_25, \
_26, \
_27, \
_28, \
_29, \
_30, \
_31, \
_32, \
_33, \
_34, \
_35, \
_36, \
_37, \
_38, \
_39, \
_40, \
_41, \
_42, \
_43, \
_44, \
_45, \
_46, \
_47, \
_48, \
_49, \
_50, \
_51, \
_52, \
_53, \
_54, \
_55, \
_56, \
_57, \
_58, \
_59, \
_60, \
_61, \
_62, \
_63, \
_64, \
_65, \
_66, \
_67, \
_68, \
_69, \
_70, \
_71, \
_72, \
_73, \
_74, \
_75, \
_76, \
_77, \
_78, \
_79, \
_80, \
_81, \
_82, \
_83, \
_84, \
_85, \
_86, \
_87, \
_88, \
_89, \
_90, \
_91, \
_92, \
_93, \
_94, \
_95, \
_96, \
_97, \
_98, \
_99, \
ARGS...) _99
#define OOOPaste_IsEmpty_HasComma(ARGS...) OOOPaste_IsEmpty_Arg(ARGS, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
1, \
0, 0)

#define OOOPaste_IsEmpty_IsEmptyCase0001 ,
#define OOOPaste_IsEmpty_Paste5(_0, _1, _2, _3, _4) _0 ## _1 ## _2 ## _3 ## _4
#define _OOOPaste_IsEmpty(_0, _1, _2, _3) OOOPaste_IsEmpty_HasComma(OOOPaste_IsEmpty_Paste5(OOOPaste_IsEmpty_IsEmptyCase, _0, _1, _2, _3))
#define OOOPaste_IsEmpty_TriggerParenthesis(ARGS...) ,
#define OOOPaste_IsEmpty(ARGS...) \
_OOOPaste_IsEmpty( \
   OOOPaste_IsEmpty_HasComma(ARGS), \
   OOOPaste_IsEmpty_HasComma(OOOPaste_IsEmpty_TriggerParenthesis ARGS), \
   OOOPaste_IsEmpty_HasComma(ARGS (/*empty*/)), \
   OOOPaste_IsEmpty_HasComma(OOOPaste_IsEmpty_TriggerParenthesis ARGS (/*empty*/)) \
)

#define OOOPaste_ForEach99_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),99,ARG,)
#define OOOPaste_ForEach99_1(MACRO,ARGS...)

#define OOOPaste_ForEach98_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),98,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach99_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach98_1(MACRO,ARGS...)

#define OOOPaste_ForEach97_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),97,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach98_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach97_1(MACRO,ARGS...)

#define OOOPaste_ForEach96_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),96,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach97_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach96_1(MACRO,ARGS...)

#define OOOPaste_ForEach95_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),95,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach96_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach95_1(MACRO,ARGS...)

#define OOOPaste_ForEach94_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),94,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach95_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach94_1(MACRO,ARGS...)

#define OOOPaste_ForEach93_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),93,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach94_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach93_1(MACRO,ARGS...)

#define OOOPaste_ForEach92_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),92,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach93_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach92_1(MACRO,ARGS...)

#define OOOPaste_ForEach91_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),91,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach92_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach91_1(MACRO,ARGS...)

#define OOOPaste_ForEach90_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),90,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach91_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach90_1(MACRO,ARGS...)

#define OOOPaste_ForEach89_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),89,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach90_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach89_1(MACRO,ARGS...)

#define OOOPaste_ForEach88_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),88,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach89_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach88_1(MACRO,ARGS...)

#define OOOPaste_ForEach87_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),87,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach88_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach87_1(MACRO,ARGS...)

#define OOOPaste_ForEach86_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),86,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach87_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach86_1(MACRO,ARGS...)

#define OOOPaste_ForEach85_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),85,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach86_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach85_1(MACRO,ARGS...)

#define OOOPaste_ForEach84_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),84,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach85_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach84_1(MACRO,ARGS...)

#define OOOPaste_ForEach83_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),83,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach84_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach83_1(MACRO,ARGS...)

#define OOOPaste_ForEach82_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),82,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach83_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach82_1(MACRO,ARGS...)

#define OOOPaste_ForEach81_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),81,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach82_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach81_1(MACRO,ARGS...)

#define OOOPaste_ForEach80_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),80,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach81_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach80_1(MACRO,ARGS...)

#define OOOPaste_ForEach79_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),79,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach80_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach79_1(MACRO,ARGS...)

#define OOOPaste_ForEach78_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),78,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach79_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach78_1(MACRO,ARGS...)

#define OOOPaste_ForEach77_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),77,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach78_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach77_1(MACRO,ARGS...)

#define OOOPaste_ForEach76_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),76,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach77_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach76_1(MACRO,ARGS...)

#define OOOPaste_ForEach75_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),75,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach76_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach75_1(MACRO,ARGS...)

#define OOOPaste_ForEach74_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),74,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach75_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach74_1(MACRO,ARGS...)

#define OOOPaste_ForEach73_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),73,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach74_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach73_1(MACRO,ARGS...)

#define OOOPaste_ForEach72_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),72,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach73_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach72_1(MACRO,ARGS...)

#define OOOPaste_ForEach71_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),71,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach72_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach71_1(MACRO,ARGS...)

#define OOOPaste_ForEach70_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),70,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach71_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach70_1(MACRO,ARGS...)

#define OOOPaste_ForEach69_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),69,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach70_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach69_1(MACRO,ARGS...)

#define OOOPaste_ForEach68_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),68,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach69_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach68_1(MACRO,ARGS...)

#define OOOPaste_ForEach67_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),67,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach68_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach67_1(MACRO,ARGS...)

#define OOOPaste_ForEach66_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),66,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach67_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach66_1(MACRO,ARGS...)

#define OOOPaste_ForEach65_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),65,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach66_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach65_1(MACRO,ARGS...)

#define OOOPaste_ForEach64_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),64,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach65_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach64_1(MACRO,ARGS...)

#define OOOPaste_ForEach63_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),63,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach64_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach63_1(MACRO,ARGS...)

#define OOOPaste_ForEach62_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),62,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach63_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach62_1(MACRO,ARGS...)

#define OOOPaste_ForEach61_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),61,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach62_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach61_1(MACRO,ARGS...)

#define OOOPaste_ForEach60_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),60,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach61_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach60_1(MACRO,ARGS...)

#define OOOPaste_ForEach59_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),59,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach60_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach59_1(MACRO,ARGS...)

#define OOOPaste_ForEach58_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),58,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach59_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach58_1(MACRO,ARGS...)

#define OOOPaste_ForEach57_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),57,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach58_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach57_1(MACRO,ARGS...)

#define OOOPaste_ForEach56_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),56,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach57_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach56_1(MACRO,ARGS...)

#define OOOPaste_ForEach55_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),55,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach56_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach55_1(MACRO,ARGS...)

#define OOOPaste_ForEach54_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),54,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach55_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach54_1(MACRO,ARGS...)

#define OOOPaste_ForEach53_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),53,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach54_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach53_1(MACRO,ARGS...)

#define OOOPaste_ForEach52_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),52,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach53_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach52_1(MACRO,ARGS...)

#define OOOPaste_ForEach51_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),51,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach52_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach51_1(MACRO,ARGS...)

#define OOOPaste_ForEach50_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),50,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach51_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach50_1(MACRO,ARGS...)

#define OOOPaste_ForEach49_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),49,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach50_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach49_1(MACRO,ARGS...)

#define OOOPaste_ForEach48_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),48,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach49_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach48_1(MACRO,ARGS...)

#define OOOPaste_ForEach47_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),47,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach48_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach47_1(MACRO,ARGS...)

#define OOOPaste_ForEach46_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),46,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach47_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach46_1(MACRO,ARGS...)

#define OOOPaste_ForEach45_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),45,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach46_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach45_1(MACRO,ARGS...)

#define OOOPaste_ForEach44_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),44,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach45_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach44_1(MACRO,ARGS...)

#define OOOPaste_ForEach43_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),43,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach44_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach43_1(MACRO,ARGS...)

#define OOOPaste_ForEach42_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),42,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach43_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach42_1(MACRO,ARGS...)

#define OOOPaste_ForEach41_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),41,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach42_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach41_1(MACRO,ARGS...)

#define OOOPaste_ForEach40_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),40,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach41_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach40_1(MACRO,ARGS...)

#define OOOPaste_ForEach39_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),39,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach40_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach39_1(MACRO,ARGS...)

#define OOOPaste_ForEach38_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),38,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach39_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach38_1(MACRO,ARGS...)

#define OOOPaste_ForEach37_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),37,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach38_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach37_1(MACRO,ARGS...)

#define OOOPaste_ForEach36_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),36,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach37_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach36_1(MACRO,ARGS...)

#define OOOPaste_ForEach35_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),35,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach36_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach35_1(MACRO,ARGS...)

#define OOOPaste_ForEach34_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),34,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach35_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach34_1(MACRO,ARGS...)

#define OOOPaste_ForEach33_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),33,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach34_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach33_1(MACRO,ARGS...)

#define OOOPaste_ForEach32_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),32,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach33_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach32_1(MACRO,ARGS...)

#define OOOPaste_ForEach31_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),31,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach32_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach31_1(MACRO,ARGS...)

#define OOOPaste_ForEach30_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),30,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach31_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach30_1(MACRO,ARGS...)

#define OOOPaste_ForEach29_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),29,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach30_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach29_1(MACRO,ARGS...)

#define OOOPaste_ForEach28_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),28,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach29_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach28_1(MACRO,ARGS...)

#define OOOPaste_ForEach27_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),27,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach28_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach27_1(MACRO,ARGS...)

#define OOOPaste_ForEach26_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),26,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach27_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach26_1(MACRO,ARGS...)

#define OOOPaste_ForEach25_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),25,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach26_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach25_1(MACRO,ARGS...)

#define OOOPaste_ForEach24_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),24,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach25_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach24_1(MACRO,ARGS...)

#define OOOPaste_ForEach23_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),23,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach24_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach23_1(MACRO,ARGS...)

#define OOOPaste_ForEach22_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),22,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach23_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach22_1(MACRO,ARGS...)

#define OOOPaste_ForEach21_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),21,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach22_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach21_1(MACRO,ARGS...)

#define OOOPaste_ForEach20_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),20,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach21_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach20_1(MACRO,ARGS...)

#define OOOPaste_ForEach19_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),19,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach20_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach19_1(MACRO,ARGS...)

#define OOOPaste_ForEach18_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),18,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach19_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach18_1(MACRO,ARGS...)

#define OOOPaste_ForEach17_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),17,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach18_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach17_1(MACRO,ARGS...)

#define OOOPaste_ForEach16_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),16,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach17_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach16_1(MACRO,ARGS...)

#define OOOPaste_ForEach15_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),15,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach16_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach15_1(MACRO,ARGS...)

#define OOOPaste_ForEach14_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),14,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach15_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach14_1(MACRO,ARGS...)

#define OOOPaste_ForEach13_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),13,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach14_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach13_1(MACRO,ARGS...)

#define OOOPaste_ForEach12_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),12,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach13_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach12_1(MACRO,ARGS...)

#define OOOPaste_ForEach11_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),11,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach12_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach11_1(MACRO,ARGS...)

#define OOOPaste_ForEach10_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),10,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach11_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach10_1(MACRO,ARGS...)

#define OOOPaste_ForEach9_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),9,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach10_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach9_1(MACRO,ARGS...)

#define OOOPaste_ForEach8_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),8,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach9_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach8_1(MACRO,ARGS...)

#define OOOPaste_ForEach7_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),7,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach8_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach7_1(MACRO,ARGS...)

#define OOOPaste_ForEach6_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),6,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach7_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach6_1(MACRO,ARGS...)

#define OOOPaste_ForEach5_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),5,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach6_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach5_1(MACRO,ARGS...)

#define OOOPaste_ForEach4_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),4,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach5_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach4_1(MACRO,ARGS...)

#define OOOPaste_ForEach3_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),3,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach4_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach3_1(MACRO,ARGS...)

#define OOOPaste_ForEach2_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),2,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach3_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach2_1(MACRO,ARGS...)

#define OOOPaste_ForEach1_0(MACRO,ARG,ARGS...) MACRO(0,OOOPaste_IsEmpty(ARGS),1,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach2_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach1_1(MACRO,ARGS...)

#define OOOPaste_ForEach0_0(MACRO,ARG,ARGS...) MACRO(1,OOOPaste_IsEmpty(ARGS),0,ARG,OOOPaste_SimplePaste(OOOPaste_ForEach1_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOPaste_ForEach0_1(MACRO,ARGS...)

#define OOOPaste_ForEach(MACRO,ARGS...) OOOPaste_SimplePaste(OOOPaste_ForEach0_,OOOPaste_IsEmpty(ARGS))(MACRO,ARGS)

#define _OOOPaste(FIRST,LAST,ITERATION,ARG,REMAINDER) OOOPaste_SimplePaste(ARG,REMAINDER)
#define OOOPaste(ARGS...) OOOPaste_ForEach(_OOOPaste, ARGS)

#endif

