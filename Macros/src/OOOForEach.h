/*
 * NB. Generated File do not edit
 */

#ifndef OOOForEach_H
#define OOOForEach_H

#define _OOOForEach_SimplePaste(ARG1,ARG2) ARG1##ARG2
#define OOOForEach_SimplePaste(ARG1,ARG2) _OOOForEach_SimplePaste(ARG1,ARG2)

#define OOOForEach_IsEmpty_Arg( \
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
#define OOOForEach_IsEmpty_HasComma(ARGS...) OOOForEach_IsEmpty_Arg(ARGS, \
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

#define OOOForEach_IsEmpty_IsEmptyCase0001 ,
#define OOOForEach_IsEmpty_Paste5(_0, _1, _2, _3, _4) _0 ## _1 ## _2 ## _3 ## _4
#define _OOOForEach_IsEmpty(_0, _1, _2, _3) OOOForEach_IsEmpty_HasComma(OOOForEach_IsEmpty_Paste5(OOOForEach_IsEmpty_IsEmptyCase, _0, _1, _2, _3))
#define OOOForEach_IsEmpty_TriggerParenthesis(ARGS...) ,
#define OOOForEach_IsEmpty(ARGS...) \
_OOOForEach_IsEmpty( \
   OOOForEach_IsEmpty_HasComma(ARGS), \
   OOOForEach_IsEmpty_HasComma(OOOForEach_IsEmpty_TriggerParenthesis ARGS), \
   OOOForEach_IsEmpty_HasComma(ARGS (/*empty*/)), \
   OOOForEach_IsEmpty_HasComma(OOOForEach_IsEmpty_TriggerParenthesis ARGS (/*empty*/)) \
)

#define OOOForEach99_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),99,ARG,)
#define OOOForEach99_1(MACRO,ARGS...)

#define OOOForEach98_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),98,ARG,OOOForEach_SimplePaste(OOOForEach99_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach98_1(MACRO,ARGS...)

#define OOOForEach97_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),97,ARG,OOOForEach_SimplePaste(OOOForEach98_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach97_1(MACRO,ARGS...)

#define OOOForEach96_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),96,ARG,OOOForEach_SimplePaste(OOOForEach97_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach96_1(MACRO,ARGS...)

#define OOOForEach95_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),95,ARG,OOOForEach_SimplePaste(OOOForEach96_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach95_1(MACRO,ARGS...)

#define OOOForEach94_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),94,ARG,OOOForEach_SimplePaste(OOOForEach95_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach94_1(MACRO,ARGS...)

#define OOOForEach93_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),93,ARG,OOOForEach_SimplePaste(OOOForEach94_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach93_1(MACRO,ARGS...)

#define OOOForEach92_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),92,ARG,OOOForEach_SimplePaste(OOOForEach93_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach92_1(MACRO,ARGS...)

#define OOOForEach91_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),91,ARG,OOOForEach_SimplePaste(OOOForEach92_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach91_1(MACRO,ARGS...)

#define OOOForEach90_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),90,ARG,OOOForEach_SimplePaste(OOOForEach91_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach90_1(MACRO,ARGS...)

#define OOOForEach89_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),89,ARG,OOOForEach_SimplePaste(OOOForEach90_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach89_1(MACRO,ARGS...)

#define OOOForEach88_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),88,ARG,OOOForEach_SimplePaste(OOOForEach89_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach88_1(MACRO,ARGS...)

#define OOOForEach87_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),87,ARG,OOOForEach_SimplePaste(OOOForEach88_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach87_1(MACRO,ARGS...)

#define OOOForEach86_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),86,ARG,OOOForEach_SimplePaste(OOOForEach87_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach86_1(MACRO,ARGS...)

#define OOOForEach85_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),85,ARG,OOOForEach_SimplePaste(OOOForEach86_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach85_1(MACRO,ARGS...)

#define OOOForEach84_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),84,ARG,OOOForEach_SimplePaste(OOOForEach85_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach84_1(MACRO,ARGS...)

#define OOOForEach83_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),83,ARG,OOOForEach_SimplePaste(OOOForEach84_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach83_1(MACRO,ARGS...)

#define OOOForEach82_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),82,ARG,OOOForEach_SimplePaste(OOOForEach83_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach82_1(MACRO,ARGS...)

#define OOOForEach81_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),81,ARG,OOOForEach_SimplePaste(OOOForEach82_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach81_1(MACRO,ARGS...)

#define OOOForEach80_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),80,ARG,OOOForEach_SimplePaste(OOOForEach81_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach80_1(MACRO,ARGS...)

#define OOOForEach79_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),79,ARG,OOOForEach_SimplePaste(OOOForEach80_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach79_1(MACRO,ARGS...)

#define OOOForEach78_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),78,ARG,OOOForEach_SimplePaste(OOOForEach79_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach78_1(MACRO,ARGS...)

#define OOOForEach77_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),77,ARG,OOOForEach_SimplePaste(OOOForEach78_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach77_1(MACRO,ARGS...)

#define OOOForEach76_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),76,ARG,OOOForEach_SimplePaste(OOOForEach77_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach76_1(MACRO,ARGS...)

#define OOOForEach75_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),75,ARG,OOOForEach_SimplePaste(OOOForEach76_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach75_1(MACRO,ARGS...)

#define OOOForEach74_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),74,ARG,OOOForEach_SimplePaste(OOOForEach75_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach74_1(MACRO,ARGS...)

#define OOOForEach73_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),73,ARG,OOOForEach_SimplePaste(OOOForEach74_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach73_1(MACRO,ARGS...)

#define OOOForEach72_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),72,ARG,OOOForEach_SimplePaste(OOOForEach73_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach72_1(MACRO,ARGS...)

#define OOOForEach71_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),71,ARG,OOOForEach_SimplePaste(OOOForEach72_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach71_1(MACRO,ARGS...)

#define OOOForEach70_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),70,ARG,OOOForEach_SimplePaste(OOOForEach71_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach70_1(MACRO,ARGS...)

#define OOOForEach69_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),69,ARG,OOOForEach_SimplePaste(OOOForEach70_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach69_1(MACRO,ARGS...)

#define OOOForEach68_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),68,ARG,OOOForEach_SimplePaste(OOOForEach69_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach68_1(MACRO,ARGS...)

#define OOOForEach67_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),67,ARG,OOOForEach_SimplePaste(OOOForEach68_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach67_1(MACRO,ARGS...)

#define OOOForEach66_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),66,ARG,OOOForEach_SimplePaste(OOOForEach67_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach66_1(MACRO,ARGS...)

#define OOOForEach65_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),65,ARG,OOOForEach_SimplePaste(OOOForEach66_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach65_1(MACRO,ARGS...)

#define OOOForEach64_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),64,ARG,OOOForEach_SimplePaste(OOOForEach65_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach64_1(MACRO,ARGS...)

#define OOOForEach63_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),63,ARG,OOOForEach_SimplePaste(OOOForEach64_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach63_1(MACRO,ARGS...)

#define OOOForEach62_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),62,ARG,OOOForEach_SimplePaste(OOOForEach63_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach62_1(MACRO,ARGS...)

#define OOOForEach61_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),61,ARG,OOOForEach_SimplePaste(OOOForEach62_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach61_1(MACRO,ARGS...)

#define OOOForEach60_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),60,ARG,OOOForEach_SimplePaste(OOOForEach61_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach60_1(MACRO,ARGS...)

#define OOOForEach59_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),59,ARG,OOOForEach_SimplePaste(OOOForEach60_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach59_1(MACRO,ARGS...)

#define OOOForEach58_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),58,ARG,OOOForEach_SimplePaste(OOOForEach59_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach58_1(MACRO,ARGS...)

#define OOOForEach57_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),57,ARG,OOOForEach_SimplePaste(OOOForEach58_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach57_1(MACRO,ARGS...)

#define OOOForEach56_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),56,ARG,OOOForEach_SimplePaste(OOOForEach57_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach56_1(MACRO,ARGS...)

#define OOOForEach55_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),55,ARG,OOOForEach_SimplePaste(OOOForEach56_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach55_1(MACRO,ARGS...)

#define OOOForEach54_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),54,ARG,OOOForEach_SimplePaste(OOOForEach55_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach54_1(MACRO,ARGS...)

#define OOOForEach53_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),53,ARG,OOOForEach_SimplePaste(OOOForEach54_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach53_1(MACRO,ARGS...)

#define OOOForEach52_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),52,ARG,OOOForEach_SimplePaste(OOOForEach53_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach52_1(MACRO,ARGS...)

#define OOOForEach51_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),51,ARG,OOOForEach_SimplePaste(OOOForEach52_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach51_1(MACRO,ARGS...)

#define OOOForEach50_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),50,ARG,OOOForEach_SimplePaste(OOOForEach51_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach50_1(MACRO,ARGS...)

#define OOOForEach49_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),49,ARG,OOOForEach_SimplePaste(OOOForEach50_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach49_1(MACRO,ARGS...)

#define OOOForEach48_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),48,ARG,OOOForEach_SimplePaste(OOOForEach49_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach48_1(MACRO,ARGS...)

#define OOOForEach47_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),47,ARG,OOOForEach_SimplePaste(OOOForEach48_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach47_1(MACRO,ARGS...)

#define OOOForEach46_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),46,ARG,OOOForEach_SimplePaste(OOOForEach47_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach46_1(MACRO,ARGS...)

#define OOOForEach45_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),45,ARG,OOOForEach_SimplePaste(OOOForEach46_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach45_1(MACRO,ARGS...)

#define OOOForEach44_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),44,ARG,OOOForEach_SimplePaste(OOOForEach45_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach44_1(MACRO,ARGS...)

#define OOOForEach43_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),43,ARG,OOOForEach_SimplePaste(OOOForEach44_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach43_1(MACRO,ARGS...)

#define OOOForEach42_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),42,ARG,OOOForEach_SimplePaste(OOOForEach43_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach42_1(MACRO,ARGS...)

#define OOOForEach41_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),41,ARG,OOOForEach_SimplePaste(OOOForEach42_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach41_1(MACRO,ARGS...)

#define OOOForEach40_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),40,ARG,OOOForEach_SimplePaste(OOOForEach41_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach40_1(MACRO,ARGS...)

#define OOOForEach39_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),39,ARG,OOOForEach_SimplePaste(OOOForEach40_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach39_1(MACRO,ARGS...)

#define OOOForEach38_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),38,ARG,OOOForEach_SimplePaste(OOOForEach39_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach38_1(MACRO,ARGS...)

#define OOOForEach37_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),37,ARG,OOOForEach_SimplePaste(OOOForEach38_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach37_1(MACRO,ARGS...)

#define OOOForEach36_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),36,ARG,OOOForEach_SimplePaste(OOOForEach37_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach36_1(MACRO,ARGS...)

#define OOOForEach35_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),35,ARG,OOOForEach_SimplePaste(OOOForEach36_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach35_1(MACRO,ARGS...)

#define OOOForEach34_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),34,ARG,OOOForEach_SimplePaste(OOOForEach35_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach34_1(MACRO,ARGS...)

#define OOOForEach33_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),33,ARG,OOOForEach_SimplePaste(OOOForEach34_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach33_1(MACRO,ARGS...)

#define OOOForEach32_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),32,ARG,OOOForEach_SimplePaste(OOOForEach33_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach32_1(MACRO,ARGS...)

#define OOOForEach31_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),31,ARG,OOOForEach_SimplePaste(OOOForEach32_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach31_1(MACRO,ARGS...)

#define OOOForEach30_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),30,ARG,OOOForEach_SimplePaste(OOOForEach31_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach30_1(MACRO,ARGS...)

#define OOOForEach29_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),29,ARG,OOOForEach_SimplePaste(OOOForEach30_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach29_1(MACRO,ARGS...)

#define OOOForEach28_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),28,ARG,OOOForEach_SimplePaste(OOOForEach29_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach28_1(MACRO,ARGS...)

#define OOOForEach27_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),27,ARG,OOOForEach_SimplePaste(OOOForEach28_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach27_1(MACRO,ARGS...)

#define OOOForEach26_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),26,ARG,OOOForEach_SimplePaste(OOOForEach27_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach26_1(MACRO,ARGS...)

#define OOOForEach25_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),25,ARG,OOOForEach_SimplePaste(OOOForEach26_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach25_1(MACRO,ARGS...)

#define OOOForEach24_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),24,ARG,OOOForEach_SimplePaste(OOOForEach25_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach24_1(MACRO,ARGS...)

#define OOOForEach23_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),23,ARG,OOOForEach_SimplePaste(OOOForEach24_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach23_1(MACRO,ARGS...)

#define OOOForEach22_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),22,ARG,OOOForEach_SimplePaste(OOOForEach23_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach22_1(MACRO,ARGS...)

#define OOOForEach21_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),21,ARG,OOOForEach_SimplePaste(OOOForEach22_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach21_1(MACRO,ARGS...)

#define OOOForEach20_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),20,ARG,OOOForEach_SimplePaste(OOOForEach21_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach20_1(MACRO,ARGS...)

#define OOOForEach19_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),19,ARG,OOOForEach_SimplePaste(OOOForEach20_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach19_1(MACRO,ARGS...)

#define OOOForEach18_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),18,ARG,OOOForEach_SimplePaste(OOOForEach19_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach18_1(MACRO,ARGS...)

#define OOOForEach17_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),17,ARG,OOOForEach_SimplePaste(OOOForEach18_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach17_1(MACRO,ARGS...)

#define OOOForEach16_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),16,ARG,OOOForEach_SimplePaste(OOOForEach17_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach16_1(MACRO,ARGS...)

#define OOOForEach15_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),15,ARG,OOOForEach_SimplePaste(OOOForEach16_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach15_1(MACRO,ARGS...)

#define OOOForEach14_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),14,ARG,OOOForEach_SimplePaste(OOOForEach15_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach14_1(MACRO,ARGS...)

#define OOOForEach13_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),13,ARG,OOOForEach_SimplePaste(OOOForEach14_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach13_1(MACRO,ARGS...)

#define OOOForEach12_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),12,ARG,OOOForEach_SimplePaste(OOOForEach13_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach12_1(MACRO,ARGS...)

#define OOOForEach11_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),11,ARG,OOOForEach_SimplePaste(OOOForEach12_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach11_1(MACRO,ARGS...)

#define OOOForEach10_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),10,ARG,OOOForEach_SimplePaste(OOOForEach11_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach10_1(MACRO,ARGS...)

#define OOOForEach9_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),9,ARG,OOOForEach_SimplePaste(OOOForEach10_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach9_1(MACRO,ARGS...)

#define OOOForEach8_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),8,ARG,OOOForEach_SimplePaste(OOOForEach9_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach8_1(MACRO,ARGS...)

#define OOOForEach7_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),7,ARG,OOOForEach_SimplePaste(OOOForEach8_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach7_1(MACRO,ARGS...)

#define OOOForEach6_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),6,ARG,OOOForEach_SimplePaste(OOOForEach7_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach6_1(MACRO,ARGS...)

#define OOOForEach5_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),5,ARG,OOOForEach_SimplePaste(OOOForEach6_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach5_1(MACRO,ARGS...)

#define OOOForEach4_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),4,ARG,OOOForEach_SimplePaste(OOOForEach5_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach4_1(MACRO,ARGS...)

#define OOOForEach3_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),3,ARG,OOOForEach_SimplePaste(OOOForEach4_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach3_1(MACRO,ARGS...)

#define OOOForEach2_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),2,ARG,OOOForEach_SimplePaste(OOOForEach3_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach2_1(MACRO,ARGS...)

#define OOOForEach1_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),1,ARG,OOOForEach_SimplePaste(OOOForEach2_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach1_1(MACRO,ARGS...)

#define OOOForEach0_0(MACRO,ARG,ARGS...) MACRO(1,OOOForEach_IsEmpty(ARGS),0,ARG,OOOForEach_SimplePaste(OOOForEach1_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach0_1(MACRO,ARGS...)

#define OOOForEach(MACRO,ARGS...) OOOForEach_SimplePaste(OOOForEach0_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS)

#endif

