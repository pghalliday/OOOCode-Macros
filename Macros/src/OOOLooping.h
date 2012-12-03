#ifndef OOOLooping_H
#define OOOLooping_H

#include "OOOEmptyArguments.h"
#include "OOOPastingAndQuoting.h"

#define OOOForEach99_0(MACRO, ARG, ARGS...) MACRO(ARG)
#define OOOForEach99_1(MACRO, ARGS...)

#define OOOForEach98_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach99_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach98_1(MACRO, ARGS...)

#define OOOForEach97_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach98_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach97_1(MACRO, ARGS...)

#define OOOForEach96_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach97_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach96_1(MACRO, ARGS...)

#define OOOForEach95_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach96_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach95_1(MACRO, ARGS...)

#define OOOForEach94_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach95_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach94_1(MACRO, ARGS...)

#define OOOForEach93_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach94_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach93_1(MACRO, ARGS...)

#define OOOForEach92_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach93_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach92_1(MACRO, ARGS...)

#define OOOForEach91_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach92_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach91_1(MACRO, ARGS...)

#define OOOForEach90_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach91_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach90_1(MACRO, ARGS...)

#define OOOForEach89_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach90_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach89_1(MACRO, ARGS...)

#define OOOForEach88_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach89_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach88_1(MACRO, ARGS...)

#define OOOForEach87_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach88_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach87_1(MACRO, ARGS...)

#define OOOForEach86_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach87_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach86_1(MACRO, ARGS...)

#define OOOForEach85_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach86_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach85_1(MACRO, ARGS...)

#define OOOForEach84_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach85_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach84_1(MACRO, ARGS...)

#define OOOForEach83_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach84_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach83_1(MACRO, ARGS...)

#define OOOForEach82_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach83_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach82_1(MACRO, ARGS...)

#define OOOForEach81_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach82_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach81_1(MACRO, ARGS...)

#define OOOForEach80_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach81_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach80_1(MACRO, ARGS...)

#define OOOForEach79_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach80_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach79_1(MACRO, ARGS...)

#define OOOForEach78_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach79_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach78_1(MACRO, ARGS...)

#define OOOForEach77_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach78_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach77_1(MACRO, ARGS...)

#define OOOForEach76_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach77_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach76_1(MACRO, ARGS...)

#define OOOForEach75_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach76_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach75_1(MACRO, ARGS...)

#define OOOForEach74_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach75_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach74_1(MACRO, ARGS...)

#define OOOForEach73_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach74_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach73_1(MACRO, ARGS...)

#define OOOForEach72_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach73_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach72_1(MACRO, ARGS...)

#define OOOForEach71_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach72_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach71_1(MACRO, ARGS...)

#define OOOForEach70_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach71_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach70_1(MACRO, ARGS...)

#define OOOForEach69_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach70_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach69_1(MACRO, ARGS...)

#define OOOForEach68_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach69_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach68_1(MACRO, ARGS...)

#define OOOForEach67_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach68_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach67_1(MACRO, ARGS...)

#define OOOForEach66_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach67_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach66_1(MACRO, ARGS...)

#define OOOForEach65_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach66_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach65_1(MACRO, ARGS...)

#define OOOForEach64_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach65_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach64_1(MACRO, ARGS...)

#define OOOForEach63_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach64_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach63_1(MACRO, ARGS...)

#define OOOForEach62_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach63_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach62_1(MACRO, ARGS...)

#define OOOForEach61_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach62_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach61_1(MACRO, ARGS...)

#define OOOForEach60_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach61_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach60_1(MACRO, ARGS...)

#define OOOForEach59_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach60_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach59_1(MACRO, ARGS...)

#define OOOForEach58_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach59_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach58_1(MACRO, ARGS...)

#define OOOForEach57_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach58_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach57_1(MACRO, ARGS...)

#define OOOForEach56_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach57_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach56_1(MACRO, ARGS...)

#define OOOForEach55_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach56_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach55_1(MACRO, ARGS...)

#define OOOForEach54_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach55_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach54_1(MACRO, ARGS...)

#define OOOForEach53_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach54_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach53_1(MACRO, ARGS...)

#define OOOForEach52_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach53_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach52_1(MACRO, ARGS...)

#define OOOForEach51_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach52_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach51_1(MACRO, ARGS...)

#define OOOForEach50_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach51_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach50_1(MACRO, ARGS...)

#define OOOForEach49_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach50_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach49_1(MACRO, ARGS...)

#define OOOForEach48_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach49_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach48_1(MACRO, ARGS...)

#define OOOForEach47_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach48_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach47_1(MACRO, ARGS...)

#define OOOForEach46_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach47_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach46_1(MACRO, ARGS...)

#define OOOForEach45_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach46_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach45_1(MACRO, ARGS...)

#define OOOForEach44_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach45_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach44_1(MACRO, ARGS...)

#define OOOForEach43_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach44_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach43_1(MACRO, ARGS...)

#define OOOForEach42_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach43_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach42_1(MACRO, ARGS...)

#define OOOForEach41_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach42_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach41_1(MACRO, ARGS...)

#define OOOForEach40_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach41_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach40_1(MACRO, ARGS...)

#define OOOForEach39_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach40_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach39_1(MACRO, ARGS...)

#define OOOForEach38_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach39_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach38_1(MACRO, ARGS...)

#define OOOForEach37_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach38_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach37_1(MACRO, ARGS...)

#define OOOForEach36_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach37_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach36_1(MACRO, ARGS...)

#define OOOForEach35_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach36_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach35_1(MACRO, ARGS...)

#define OOOForEach34_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach35_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach34_1(MACRO, ARGS...)

#define OOOForEach33_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach34_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach33_1(MACRO, ARGS...)

#define OOOForEach32_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach33_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach32_1(MACRO, ARGS...)

#define OOOForEach31_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach32_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach31_1(MACRO, ARGS...)

#define OOOForEach30_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach31_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach30_1(MACRO, ARGS...)

#define OOOForEach29_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach30_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach29_1(MACRO, ARGS...)

#define OOOForEach28_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach29_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach28_1(MACRO, ARGS...)

#define OOOForEach27_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach28_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach27_1(MACRO, ARGS...)

#define OOOForEach26_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach27_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach26_1(MACRO, ARGS...)

#define OOOForEach25_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach26_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach25_1(MACRO, ARGS...)

#define OOOForEach24_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach25_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach24_1(MACRO, ARGS...)

#define OOOForEach23_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach24_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach23_1(MACRO, ARGS...)

#define OOOForEach22_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach23_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach22_1(MACRO, ARGS...)

#define OOOForEach21_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach22_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach21_1(MACRO, ARGS...)

#define OOOForEach20_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach21_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach20_1(MACRO, ARGS...)

#define OOOForEach19_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach20_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach19_1(MACRO, ARGS...)

#define OOOForEach18_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach19_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach18_1(MACRO, ARGS...)

#define OOOForEach17_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach18_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach17_1(MACRO, ARGS...)

#define OOOForEach16_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach17_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach16_1(MACRO, ARGS...)

#define OOOForEach15_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach16_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach15_1(MACRO, ARGS...)

#define OOOForEach14_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach15_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach14_1(MACRO, ARGS...)

#define OOOForEach13_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach14_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach13_1(MACRO, ARGS...)

#define OOOForEach12_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach13_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach12_1(MACRO, ARGS...)

#define OOOForEach11_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach12_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach11_1(MACRO, ARGS...)

#define OOOForEach10_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach11_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach10_1(MACRO, ARGS...)

#define OOOForEach9_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach10_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach9_1(MACRO, ARGS...)

#define OOOForEach8_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach9_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach8_1(MACRO, ARGS...)

#define OOOForEach7_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach8_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach7_1(MACRO, ARGS...)

#define OOOForEach6_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach7_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach6_1(MACRO, ARGS...)

#define OOOForEach5_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach6_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach5_1(MACRO, ARGS...)

#define OOOForEach4_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach5_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach4_1(MACRO, ARGS...)

#define OOOForEach3_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach4_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach3_1(MACRO, ARGS...)

#define OOOForEach2_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach3_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach2_1(MACRO, ARGS...)

#define OOOForEach1_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach2_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach1_1(MACRO, ARGS...)

#define OOOForEach0_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach1_, OOOIsEmpty(ARGS))(MACRO, ARGS)
#define OOOForEach0_1(MACRO, ARGS...)

#define OOOForEach(MACRO, ARGS...) OOOPaste(OOOForEach0_, OOOIsEmpty(ARGS))(MACRO, ARGS)

#endif
