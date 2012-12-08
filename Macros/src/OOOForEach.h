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
_100, \
_101, \
_102, \
_103, \
_104, \
_105, \
_106, \
_107, \
_108, \
_109, \
_110, \
_111, \
_112, \
_113, \
_114, \
_115, \
_116, \
_117, \
_118, \
_119, \
_120, \
_121, \
_122, \
_123, \
_124, \
_125, \
_126, \
_127, \
_128, \
_129, \
_130, \
_131, \
_132, \
_133, \
_134, \
_135, \
_136, \
_137, \
_138, \
_139, \
_140, \
_141, \
_142, \
_143, \
_144, \
_145, \
_146, \
_147, \
_148, \
_149, \
_150, \
_151, \
_152, \
_153, \
_154, \
_155, \
_156, \
_157, \
_158, \
_159, \
_160, \
_161, \
_162, \
_163, \
_164, \
_165, \
_166, \
_167, \
_168, \
_169, \
_170, \
_171, \
_172, \
_173, \
_174, \
_175, \
_176, \
_177, \
_178, \
_179, \
_180, \
_181, \
_182, \
_183, \
_184, \
_185, \
_186, \
_187, \
_188, \
_189, \
_190, \
_191, \
_192, \
_193, \
_194, \
_195, \
_196, \
_197, \
_198, \
_199, \
_200, \
_201, \
_202, \
_203, \
_204, \
_205, \
_206, \
_207, \
_208, \
_209, \
_210, \
_211, \
_212, \
_213, \
_214, \
_215, \
_216, \
_217, \
_218, \
_219, \
_220, \
_221, \
_222, \
_223, \
_224, \
_225, \
_226, \
_227, \
_228, \
_229, \
_230, \
_231, \
_232, \
_233, \
_234, \
_235, \
_236, \
_237, \
_238, \
_239, \
_240, \
_241, \
_242, \
_243, \
_244, \
_245, \
_246, \
_247, \
_248, \
_249, \
_250, \
_251, \
_252, \
_253, \
_254, \
_255, \
_256, \
_257, \
_258, \
_259, \
_260, \
_261, \
_262, \
_263, \
_264, \
_265, \
_266, \
_267, \
_268, \
_269, \
_270, \
_271, \
_272, \
_273, \
_274, \
_275, \
_276, \
_277, \
_278, \
_279, \
_280, \
_281, \
_282, \
_283, \
_284, \
_285, \
_286, \
_287, \
_288, \
_289, \
_290, \
_291, \
_292, \
_293, \
_294, \
_295, \
_296, \
_297, \
_298, \
_299, \
_300, \
_301, \
_302, \
_303, \
_304, \
_305, \
_306, \
_307, \
_308, \
_309, \
_310, \
_311, \
_312, \
_313, \
_314, \
_315, \
_316, \
_317, \
_318, \
_319, \
_320, \
_321, \
_322, \
_323, \
_324, \
_325, \
_326, \
_327, \
_328, \
_329, \
_330, \
_331, \
_332, \
_333, \
_334, \
_335, \
_336, \
_337, \
_338, \
_339, \
_340, \
_341, \
_342, \
_343, \
_344, \
_345, \
_346, \
_347, \
_348, \
_349, \
_350, \
_351, \
_352, \
_353, \
_354, \
_355, \
_356, \
_357, \
_358, \
_359, \
_360, \
_361, \
_362, \
_363, \
_364, \
_365, \
_366, \
_367, \
_368, \
_369, \
_370, \
_371, \
_372, \
_373, \
_374, \
_375, \
_376, \
_377, \
_378, \
_379, \
_380, \
_381, \
_382, \
_383, \
_384, \
_385, \
_386, \
_387, \
_388, \
_389, \
_390, \
_391, \
_392, \
_393, \
_394, \
_395, \
_396, \
_397, \
_398, \
_399, \
_400, \
_401, \
_402, \
_403, \
_404, \
_405, \
_406, \
_407, \
_408, \
_409, \
_410, \
_411, \
_412, \
_413, \
_414, \
_415, \
_416, \
_417, \
_418, \
_419, \
_420, \
_421, \
_422, \
_423, \
_424, \
_425, \
_426, \
_427, \
_428, \
_429, \
_430, \
_431, \
_432, \
_433, \
_434, \
_435, \
_436, \
_437, \
_438, \
_439, \
_440, \
_441, \
_442, \
_443, \
_444, \
_445, \
_446, \
_447, \
_448, \
_449, \
_450, \
_451, \
_452, \
_453, \
_454, \
_455, \
_456, \
_457, \
_458, \
_459, \
_460, \
_461, \
_462, \
_463, \
_464, \
_465, \
_466, \
_467, \
_468, \
_469, \
_470, \
_471, \
_472, \
_473, \
_474, \
_475, \
_476, \
_477, \
_478, \
_479, \
_480, \
_481, \
_482, \
_483, \
_484, \
_485, \
_486, \
_487, \
_488, \
_489, \
_490, \
_491, \
_492, \
_493, \
_494, \
_495, \
_496, \
_497, \
_498, \
_499, \
_500, \
_501, \
_502, \
_503, \
_504, \
_505, \
_506, \
_507, \
_508, \
_509, \
_510, \
_511, \
_512, \
_513, \
_514, \
_515, \
_516, \
_517, \
_518, \
_519, \
_520, \
_521, \
_522, \
_523, \
_524, \
_525, \
_526, \
_527, \
_528, \
_529, \
_530, \
_531, \
_532, \
_533, \
_534, \
_535, \
_536, \
_537, \
_538, \
_539, \
_540, \
_541, \
_542, \
_543, \
_544, \
_545, \
_546, \
_547, \
_548, \
_549, \
_550, \
_551, \
_552, \
_553, \
_554, \
_555, \
_556, \
_557, \
_558, \
_559, \
_560, \
_561, \
_562, \
_563, \
_564, \
_565, \
_566, \
_567, \
_568, \
_569, \
_570, \
_571, \
_572, \
_573, \
_574, \
_575, \
_576, \
_577, \
_578, \
_579, \
_580, \
_581, \
_582, \
_583, \
_584, \
_585, \
_586, \
_587, \
_588, \
_589, \
_590, \
_591, \
_592, \
_593, \
_594, \
_595, \
_596, \
_597, \
_598, \
_599, \
_600, \
_601, \
_602, \
_603, \
_604, \
_605, \
_606, \
_607, \
_608, \
_609, \
_610, \
_611, \
_612, \
_613, \
_614, \
_615, \
_616, \
_617, \
_618, \
_619, \
_620, \
_621, \
_622, \
_623, \
_624, \
_625, \
_626, \
_627, \
_628, \
_629, \
_630, \
_631, \
_632, \
_633, \
_634, \
_635, \
_636, \
_637, \
_638, \
_639, \
_640, \
_641, \
_642, \
_643, \
_644, \
_645, \
_646, \
_647, \
_648, \
_649, \
_650, \
_651, \
_652, \
_653, \
_654, \
_655, \
_656, \
_657, \
_658, \
_659, \
_660, \
_661, \
_662, \
_663, \
_664, \
_665, \
_666, \
_667, \
_668, \
_669, \
_670, \
_671, \
_672, \
_673, \
_674, \
_675, \
_676, \
_677, \
_678, \
_679, \
_680, \
_681, \
_682, \
_683, \
_684, \
_685, \
_686, \
_687, \
_688, \
_689, \
_690, \
_691, \
_692, \
_693, \
_694, \
_695, \
_696, \
_697, \
_698, \
_699, \
_700, \
_701, \
_702, \
_703, \
_704, \
_705, \
_706, \
_707, \
_708, \
_709, \
_710, \
_711, \
_712, \
_713, \
_714, \
_715, \
_716, \
_717, \
_718, \
_719, \
_720, \
_721, \
_722, \
_723, \
_724, \
_725, \
_726, \
_727, \
_728, \
_729, \
_730, \
_731, \
_732, \
_733, \
_734, \
_735, \
_736, \
_737, \
_738, \
_739, \
_740, \
_741, \
_742, \
_743, \
_744, \
_745, \
_746, \
_747, \
_748, \
_749, \
_750, \
_751, \
_752, \
_753, \
_754, \
_755, \
_756, \
_757, \
_758, \
_759, \
_760, \
_761, \
_762, \
_763, \
_764, \
_765, \
_766, \
_767, \
_768, \
_769, \
_770, \
_771, \
_772, \
_773, \
_774, \
_775, \
_776, \
_777, \
_778, \
_779, \
_780, \
_781, \
_782, \
_783, \
_784, \
_785, \
_786, \
_787, \
_788, \
_789, \
_790, \
_791, \
_792, \
_793, \
_794, \
_795, \
_796, \
_797, \
_798, \
_799, \
_800, \
_801, \
_802, \
_803, \
_804, \
_805, \
_806, \
_807, \
_808, \
_809, \
_810, \
_811, \
_812, \
_813, \
_814, \
_815, \
_816, \
_817, \
_818, \
_819, \
_820, \
_821, \
_822, \
_823, \
_824, \
_825, \
_826, \
_827, \
_828, \
_829, \
_830, \
_831, \
_832, \
_833, \
_834, \
_835, \
_836, \
_837, \
_838, \
_839, \
_840, \
_841, \
_842, \
_843, \
_844, \
_845, \
_846, \
_847, \
_848, \
_849, \
_850, \
_851, \
_852, \
_853, \
_854, \
_855, \
_856, \
_857, \
_858, \
_859, \
_860, \
_861, \
_862, \
_863, \
_864, \
_865, \
_866, \
_867, \
_868, \
_869, \
_870, \
_871, \
_872, \
_873, \
_874, \
_875, \
_876, \
_877, \
_878, \
_879, \
_880, \
_881, \
_882, \
_883, \
_884, \
_885, \
_886, \
_887, \
_888, \
_889, \
_890, \
_891, \
_892, \
_893, \
_894, \
_895, \
_896, \
_897, \
_898, \
_899, \
_900, \
_901, \
_902, \
_903, \
_904, \
_905, \
_906, \
_907, \
_908, \
_909, \
_910, \
_911, \
_912, \
_913, \
_914, \
_915, \
_916, \
_917, \
_918, \
_919, \
_920, \
_921, \
_922, \
_923, \
_924, \
_925, \
_926, \
_927, \
_928, \
_929, \
_930, \
_931, \
_932, \
_933, \
_934, \
_935, \
_936, \
_937, \
_938, \
_939, \
_940, \
_941, \
_942, \
_943, \
_944, \
_945, \
_946, \
_947, \
_948, \
_949, \
_950, \
_951, \
_952, \
_953, \
_954, \
_955, \
_956, \
_957, \
_958, \
_959, \
_960, \
_961, \
_962, \
_963, \
_964, \
_965, \
_966, \
_967, \
_968, \
_969, \
_970, \
_971, \
_972, \
_973, \
_974, \
_975, \
_976, \
_977, \
_978, \
_979, \
_980, \
_981, \
_982, \
_983, \
_984, \
_985, \
_986, \
_987, \
_988, \
_989, \
_990, \
_991, \
_992, \
_993, \
_994, \
_995, \
_996, \
_997, \
_998, \
_999, \
ARGS...) _999
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

#define OOOForEach999_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),999,ARG,)
#define OOOForEach999_1(MACRO,ARGS...)

#define OOOForEach998_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),998,ARG,OOOForEach_SimplePaste(OOOForEach999_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach998_1(MACRO,ARGS...)

#define OOOForEach997_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),997,ARG,OOOForEach_SimplePaste(OOOForEach998_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach997_1(MACRO,ARGS...)

#define OOOForEach996_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),996,ARG,OOOForEach_SimplePaste(OOOForEach997_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach996_1(MACRO,ARGS...)

#define OOOForEach995_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),995,ARG,OOOForEach_SimplePaste(OOOForEach996_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach995_1(MACRO,ARGS...)

#define OOOForEach994_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),994,ARG,OOOForEach_SimplePaste(OOOForEach995_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach994_1(MACRO,ARGS...)

#define OOOForEach993_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),993,ARG,OOOForEach_SimplePaste(OOOForEach994_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach993_1(MACRO,ARGS...)

#define OOOForEach992_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),992,ARG,OOOForEach_SimplePaste(OOOForEach993_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach992_1(MACRO,ARGS...)

#define OOOForEach991_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),991,ARG,OOOForEach_SimplePaste(OOOForEach992_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach991_1(MACRO,ARGS...)

#define OOOForEach990_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),990,ARG,OOOForEach_SimplePaste(OOOForEach991_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach990_1(MACRO,ARGS...)

#define OOOForEach989_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),989,ARG,OOOForEach_SimplePaste(OOOForEach990_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach989_1(MACRO,ARGS...)

#define OOOForEach988_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),988,ARG,OOOForEach_SimplePaste(OOOForEach989_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach988_1(MACRO,ARGS...)

#define OOOForEach987_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),987,ARG,OOOForEach_SimplePaste(OOOForEach988_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach987_1(MACRO,ARGS...)

#define OOOForEach986_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),986,ARG,OOOForEach_SimplePaste(OOOForEach987_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach986_1(MACRO,ARGS...)

#define OOOForEach985_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),985,ARG,OOOForEach_SimplePaste(OOOForEach986_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach985_1(MACRO,ARGS...)

#define OOOForEach984_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),984,ARG,OOOForEach_SimplePaste(OOOForEach985_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach984_1(MACRO,ARGS...)

#define OOOForEach983_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),983,ARG,OOOForEach_SimplePaste(OOOForEach984_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach983_1(MACRO,ARGS...)

#define OOOForEach982_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),982,ARG,OOOForEach_SimplePaste(OOOForEach983_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach982_1(MACRO,ARGS...)

#define OOOForEach981_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),981,ARG,OOOForEach_SimplePaste(OOOForEach982_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach981_1(MACRO,ARGS...)

#define OOOForEach980_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),980,ARG,OOOForEach_SimplePaste(OOOForEach981_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach980_1(MACRO,ARGS...)

#define OOOForEach979_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),979,ARG,OOOForEach_SimplePaste(OOOForEach980_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach979_1(MACRO,ARGS...)

#define OOOForEach978_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),978,ARG,OOOForEach_SimplePaste(OOOForEach979_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach978_1(MACRO,ARGS...)

#define OOOForEach977_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),977,ARG,OOOForEach_SimplePaste(OOOForEach978_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach977_1(MACRO,ARGS...)

#define OOOForEach976_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),976,ARG,OOOForEach_SimplePaste(OOOForEach977_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach976_1(MACRO,ARGS...)

#define OOOForEach975_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),975,ARG,OOOForEach_SimplePaste(OOOForEach976_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach975_1(MACRO,ARGS...)

#define OOOForEach974_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),974,ARG,OOOForEach_SimplePaste(OOOForEach975_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach974_1(MACRO,ARGS...)

#define OOOForEach973_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),973,ARG,OOOForEach_SimplePaste(OOOForEach974_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach973_1(MACRO,ARGS...)

#define OOOForEach972_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),972,ARG,OOOForEach_SimplePaste(OOOForEach973_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach972_1(MACRO,ARGS...)

#define OOOForEach971_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),971,ARG,OOOForEach_SimplePaste(OOOForEach972_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach971_1(MACRO,ARGS...)

#define OOOForEach970_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),970,ARG,OOOForEach_SimplePaste(OOOForEach971_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach970_1(MACRO,ARGS...)

#define OOOForEach969_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),969,ARG,OOOForEach_SimplePaste(OOOForEach970_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach969_1(MACRO,ARGS...)

#define OOOForEach968_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),968,ARG,OOOForEach_SimplePaste(OOOForEach969_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach968_1(MACRO,ARGS...)

#define OOOForEach967_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),967,ARG,OOOForEach_SimplePaste(OOOForEach968_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach967_1(MACRO,ARGS...)

#define OOOForEach966_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),966,ARG,OOOForEach_SimplePaste(OOOForEach967_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach966_1(MACRO,ARGS...)

#define OOOForEach965_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),965,ARG,OOOForEach_SimplePaste(OOOForEach966_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach965_1(MACRO,ARGS...)

#define OOOForEach964_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),964,ARG,OOOForEach_SimplePaste(OOOForEach965_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach964_1(MACRO,ARGS...)

#define OOOForEach963_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),963,ARG,OOOForEach_SimplePaste(OOOForEach964_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach963_1(MACRO,ARGS...)

#define OOOForEach962_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),962,ARG,OOOForEach_SimplePaste(OOOForEach963_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach962_1(MACRO,ARGS...)

#define OOOForEach961_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),961,ARG,OOOForEach_SimplePaste(OOOForEach962_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach961_1(MACRO,ARGS...)

#define OOOForEach960_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),960,ARG,OOOForEach_SimplePaste(OOOForEach961_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach960_1(MACRO,ARGS...)

#define OOOForEach959_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),959,ARG,OOOForEach_SimplePaste(OOOForEach960_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach959_1(MACRO,ARGS...)

#define OOOForEach958_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),958,ARG,OOOForEach_SimplePaste(OOOForEach959_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach958_1(MACRO,ARGS...)

#define OOOForEach957_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),957,ARG,OOOForEach_SimplePaste(OOOForEach958_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach957_1(MACRO,ARGS...)

#define OOOForEach956_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),956,ARG,OOOForEach_SimplePaste(OOOForEach957_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach956_1(MACRO,ARGS...)

#define OOOForEach955_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),955,ARG,OOOForEach_SimplePaste(OOOForEach956_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach955_1(MACRO,ARGS...)

#define OOOForEach954_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),954,ARG,OOOForEach_SimplePaste(OOOForEach955_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach954_1(MACRO,ARGS...)

#define OOOForEach953_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),953,ARG,OOOForEach_SimplePaste(OOOForEach954_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach953_1(MACRO,ARGS...)

#define OOOForEach952_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),952,ARG,OOOForEach_SimplePaste(OOOForEach953_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach952_1(MACRO,ARGS...)

#define OOOForEach951_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),951,ARG,OOOForEach_SimplePaste(OOOForEach952_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach951_1(MACRO,ARGS...)

#define OOOForEach950_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),950,ARG,OOOForEach_SimplePaste(OOOForEach951_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach950_1(MACRO,ARGS...)

#define OOOForEach949_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),949,ARG,OOOForEach_SimplePaste(OOOForEach950_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach949_1(MACRO,ARGS...)

#define OOOForEach948_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),948,ARG,OOOForEach_SimplePaste(OOOForEach949_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach948_1(MACRO,ARGS...)

#define OOOForEach947_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),947,ARG,OOOForEach_SimplePaste(OOOForEach948_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach947_1(MACRO,ARGS...)

#define OOOForEach946_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),946,ARG,OOOForEach_SimplePaste(OOOForEach947_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach946_1(MACRO,ARGS...)

#define OOOForEach945_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),945,ARG,OOOForEach_SimplePaste(OOOForEach946_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach945_1(MACRO,ARGS...)

#define OOOForEach944_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),944,ARG,OOOForEach_SimplePaste(OOOForEach945_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach944_1(MACRO,ARGS...)

#define OOOForEach943_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),943,ARG,OOOForEach_SimplePaste(OOOForEach944_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach943_1(MACRO,ARGS...)

#define OOOForEach942_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),942,ARG,OOOForEach_SimplePaste(OOOForEach943_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach942_1(MACRO,ARGS...)

#define OOOForEach941_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),941,ARG,OOOForEach_SimplePaste(OOOForEach942_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach941_1(MACRO,ARGS...)

#define OOOForEach940_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),940,ARG,OOOForEach_SimplePaste(OOOForEach941_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach940_1(MACRO,ARGS...)

#define OOOForEach939_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),939,ARG,OOOForEach_SimplePaste(OOOForEach940_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach939_1(MACRO,ARGS...)

#define OOOForEach938_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),938,ARG,OOOForEach_SimplePaste(OOOForEach939_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach938_1(MACRO,ARGS...)

#define OOOForEach937_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),937,ARG,OOOForEach_SimplePaste(OOOForEach938_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach937_1(MACRO,ARGS...)

#define OOOForEach936_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),936,ARG,OOOForEach_SimplePaste(OOOForEach937_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach936_1(MACRO,ARGS...)

#define OOOForEach935_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),935,ARG,OOOForEach_SimplePaste(OOOForEach936_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach935_1(MACRO,ARGS...)

#define OOOForEach934_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),934,ARG,OOOForEach_SimplePaste(OOOForEach935_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach934_1(MACRO,ARGS...)

#define OOOForEach933_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),933,ARG,OOOForEach_SimplePaste(OOOForEach934_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach933_1(MACRO,ARGS...)

#define OOOForEach932_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),932,ARG,OOOForEach_SimplePaste(OOOForEach933_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach932_1(MACRO,ARGS...)

#define OOOForEach931_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),931,ARG,OOOForEach_SimplePaste(OOOForEach932_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach931_1(MACRO,ARGS...)

#define OOOForEach930_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),930,ARG,OOOForEach_SimplePaste(OOOForEach931_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach930_1(MACRO,ARGS...)

#define OOOForEach929_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),929,ARG,OOOForEach_SimplePaste(OOOForEach930_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach929_1(MACRO,ARGS...)

#define OOOForEach928_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),928,ARG,OOOForEach_SimplePaste(OOOForEach929_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach928_1(MACRO,ARGS...)

#define OOOForEach927_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),927,ARG,OOOForEach_SimplePaste(OOOForEach928_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach927_1(MACRO,ARGS...)

#define OOOForEach926_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),926,ARG,OOOForEach_SimplePaste(OOOForEach927_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach926_1(MACRO,ARGS...)

#define OOOForEach925_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),925,ARG,OOOForEach_SimplePaste(OOOForEach926_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach925_1(MACRO,ARGS...)

#define OOOForEach924_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),924,ARG,OOOForEach_SimplePaste(OOOForEach925_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach924_1(MACRO,ARGS...)

#define OOOForEach923_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),923,ARG,OOOForEach_SimplePaste(OOOForEach924_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach923_1(MACRO,ARGS...)

#define OOOForEach922_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),922,ARG,OOOForEach_SimplePaste(OOOForEach923_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach922_1(MACRO,ARGS...)

#define OOOForEach921_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),921,ARG,OOOForEach_SimplePaste(OOOForEach922_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach921_1(MACRO,ARGS...)

#define OOOForEach920_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),920,ARG,OOOForEach_SimplePaste(OOOForEach921_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach920_1(MACRO,ARGS...)

#define OOOForEach919_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),919,ARG,OOOForEach_SimplePaste(OOOForEach920_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach919_1(MACRO,ARGS...)

#define OOOForEach918_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),918,ARG,OOOForEach_SimplePaste(OOOForEach919_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach918_1(MACRO,ARGS...)

#define OOOForEach917_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),917,ARG,OOOForEach_SimplePaste(OOOForEach918_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach917_1(MACRO,ARGS...)

#define OOOForEach916_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),916,ARG,OOOForEach_SimplePaste(OOOForEach917_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach916_1(MACRO,ARGS...)

#define OOOForEach915_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),915,ARG,OOOForEach_SimplePaste(OOOForEach916_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach915_1(MACRO,ARGS...)

#define OOOForEach914_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),914,ARG,OOOForEach_SimplePaste(OOOForEach915_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach914_1(MACRO,ARGS...)

#define OOOForEach913_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),913,ARG,OOOForEach_SimplePaste(OOOForEach914_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach913_1(MACRO,ARGS...)

#define OOOForEach912_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),912,ARG,OOOForEach_SimplePaste(OOOForEach913_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach912_1(MACRO,ARGS...)

#define OOOForEach911_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),911,ARG,OOOForEach_SimplePaste(OOOForEach912_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach911_1(MACRO,ARGS...)

#define OOOForEach910_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),910,ARG,OOOForEach_SimplePaste(OOOForEach911_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach910_1(MACRO,ARGS...)

#define OOOForEach909_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),909,ARG,OOOForEach_SimplePaste(OOOForEach910_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach909_1(MACRO,ARGS...)

#define OOOForEach908_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),908,ARG,OOOForEach_SimplePaste(OOOForEach909_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach908_1(MACRO,ARGS...)

#define OOOForEach907_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),907,ARG,OOOForEach_SimplePaste(OOOForEach908_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach907_1(MACRO,ARGS...)

#define OOOForEach906_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),906,ARG,OOOForEach_SimplePaste(OOOForEach907_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach906_1(MACRO,ARGS...)

#define OOOForEach905_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),905,ARG,OOOForEach_SimplePaste(OOOForEach906_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach905_1(MACRO,ARGS...)

#define OOOForEach904_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),904,ARG,OOOForEach_SimplePaste(OOOForEach905_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach904_1(MACRO,ARGS...)

#define OOOForEach903_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),903,ARG,OOOForEach_SimplePaste(OOOForEach904_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach903_1(MACRO,ARGS...)

#define OOOForEach902_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),902,ARG,OOOForEach_SimplePaste(OOOForEach903_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach902_1(MACRO,ARGS...)

#define OOOForEach901_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),901,ARG,OOOForEach_SimplePaste(OOOForEach902_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach901_1(MACRO,ARGS...)

#define OOOForEach900_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),900,ARG,OOOForEach_SimplePaste(OOOForEach901_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach900_1(MACRO,ARGS...)

#define OOOForEach899_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),899,ARG,OOOForEach_SimplePaste(OOOForEach900_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach899_1(MACRO,ARGS...)

#define OOOForEach898_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),898,ARG,OOOForEach_SimplePaste(OOOForEach899_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach898_1(MACRO,ARGS...)

#define OOOForEach897_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),897,ARG,OOOForEach_SimplePaste(OOOForEach898_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach897_1(MACRO,ARGS...)

#define OOOForEach896_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),896,ARG,OOOForEach_SimplePaste(OOOForEach897_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach896_1(MACRO,ARGS...)

#define OOOForEach895_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),895,ARG,OOOForEach_SimplePaste(OOOForEach896_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach895_1(MACRO,ARGS...)

#define OOOForEach894_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),894,ARG,OOOForEach_SimplePaste(OOOForEach895_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach894_1(MACRO,ARGS...)

#define OOOForEach893_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),893,ARG,OOOForEach_SimplePaste(OOOForEach894_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach893_1(MACRO,ARGS...)

#define OOOForEach892_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),892,ARG,OOOForEach_SimplePaste(OOOForEach893_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach892_1(MACRO,ARGS...)

#define OOOForEach891_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),891,ARG,OOOForEach_SimplePaste(OOOForEach892_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach891_1(MACRO,ARGS...)

#define OOOForEach890_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),890,ARG,OOOForEach_SimplePaste(OOOForEach891_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach890_1(MACRO,ARGS...)

#define OOOForEach889_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),889,ARG,OOOForEach_SimplePaste(OOOForEach890_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach889_1(MACRO,ARGS...)

#define OOOForEach888_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),888,ARG,OOOForEach_SimplePaste(OOOForEach889_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach888_1(MACRO,ARGS...)

#define OOOForEach887_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),887,ARG,OOOForEach_SimplePaste(OOOForEach888_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach887_1(MACRO,ARGS...)

#define OOOForEach886_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),886,ARG,OOOForEach_SimplePaste(OOOForEach887_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach886_1(MACRO,ARGS...)

#define OOOForEach885_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),885,ARG,OOOForEach_SimplePaste(OOOForEach886_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach885_1(MACRO,ARGS...)

#define OOOForEach884_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),884,ARG,OOOForEach_SimplePaste(OOOForEach885_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach884_1(MACRO,ARGS...)

#define OOOForEach883_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),883,ARG,OOOForEach_SimplePaste(OOOForEach884_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach883_1(MACRO,ARGS...)

#define OOOForEach882_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),882,ARG,OOOForEach_SimplePaste(OOOForEach883_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach882_1(MACRO,ARGS...)

#define OOOForEach881_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),881,ARG,OOOForEach_SimplePaste(OOOForEach882_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach881_1(MACRO,ARGS...)

#define OOOForEach880_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),880,ARG,OOOForEach_SimplePaste(OOOForEach881_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach880_1(MACRO,ARGS...)

#define OOOForEach879_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),879,ARG,OOOForEach_SimplePaste(OOOForEach880_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach879_1(MACRO,ARGS...)

#define OOOForEach878_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),878,ARG,OOOForEach_SimplePaste(OOOForEach879_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach878_1(MACRO,ARGS...)

#define OOOForEach877_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),877,ARG,OOOForEach_SimplePaste(OOOForEach878_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach877_1(MACRO,ARGS...)

#define OOOForEach876_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),876,ARG,OOOForEach_SimplePaste(OOOForEach877_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach876_1(MACRO,ARGS...)

#define OOOForEach875_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),875,ARG,OOOForEach_SimplePaste(OOOForEach876_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach875_1(MACRO,ARGS...)

#define OOOForEach874_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),874,ARG,OOOForEach_SimplePaste(OOOForEach875_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach874_1(MACRO,ARGS...)

#define OOOForEach873_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),873,ARG,OOOForEach_SimplePaste(OOOForEach874_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach873_1(MACRO,ARGS...)

#define OOOForEach872_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),872,ARG,OOOForEach_SimplePaste(OOOForEach873_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach872_1(MACRO,ARGS...)

#define OOOForEach871_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),871,ARG,OOOForEach_SimplePaste(OOOForEach872_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach871_1(MACRO,ARGS...)

#define OOOForEach870_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),870,ARG,OOOForEach_SimplePaste(OOOForEach871_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach870_1(MACRO,ARGS...)

#define OOOForEach869_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),869,ARG,OOOForEach_SimplePaste(OOOForEach870_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach869_1(MACRO,ARGS...)

#define OOOForEach868_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),868,ARG,OOOForEach_SimplePaste(OOOForEach869_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach868_1(MACRO,ARGS...)

#define OOOForEach867_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),867,ARG,OOOForEach_SimplePaste(OOOForEach868_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach867_1(MACRO,ARGS...)

#define OOOForEach866_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),866,ARG,OOOForEach_SimplePaste(OOOForEach867_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach866_1(MACRO,ARGS...)

#define OOOForEach865_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),865,ARG,OOOForEach_SimplePaste(OOOForEach866_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach865_1(MACRO,ARGS...)

#define OOOForEach864_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),864,ARG,OOOForEach_SimplePaste(OOOForEach865_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach864_1(MACRO,ARGS...)

#define OOOForEach863_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),863,ARG,OOOForEach_SimplePaste(OOOForEach864_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach863_1(MACRO,ARGS...)

#define OOOForEach862_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),862,ARG,OOOForEach_SimplePaste(OOOForEach863_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach862_1(MACRO,ARGS...)

#define OOOForEach861_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),861,ARG,OOOForEach_SimplePaste(OOOForEach862_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach861_1(MACRO,ARGS...)

#define OOOForEach860_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),860,ARG,OOOForEach_SimplePaste(OOOForEach861_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach860_1(MACRO,ARGS...)

#define OOOForEach859_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),859,ARG,OOOForEach_SimplePaste(OOOForEach860_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach859_1(MACRO,ARGS...)

#define OOOForEach858_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),858,ARG,OOOForEach_SimplePaste(OOOForEach859_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach858_1(MACRO,ARGS...)

#define OOOForEach857_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),857,ARG,OOOForEach_SimplePaste(OOOForEach858_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach857_1(MACRO,ARGS...)

#define OOOForEach856_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),856,ARG,OOOForEach_SimplePaste(OOOForEach857_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach856_1(MACRO,ARGS...)

#define OOOForEach855_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),855,ARG,OOOForEach_SimplePaste(OOOForEach856_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach855_1(MACRO,ARGS...)

#define OOOForEach854_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),854,ARG,OOOForEach_SimplePaste(OOOForEach855_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach854_1(MACRO,ARGS...)

#define OOOForEach853_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),853,ARG,OOOForEach_SimplePaste(OOOForEach854_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach853_1(MACRO,ARGS...)

#define OOOForEach852_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),852,ARG,OOOForEach_SimplePaste(OOOForEach853_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach852_1(MACRO,ARGS...)

#define OOOForEach851_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),851,ARG,OOOForEach_SimplePaste(OOOForEach852_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach851_1(MACRO,ARGS...)

#define OOOForEach850_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),850,ARG,OOOForEach_SimplePaste(OOOForEach851_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach850_1(MACRO,ARGS...)

#define OOOForEach849_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),849,ARG,OOOForEach_SimplePaste(OOOForEach850_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach849_1(MACRO,ARGS...)

#define OOOForEach848_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),848,ARG,OOOForEach_SimplePaste(OOOForEach849_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach848_1(MACRO,ARGS...)

#define OOOForEach847_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),847,ARG,OOOForEach_SimplePaste(OOOForEach848_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach847_1(MACRO,ARGS...)

#define OOOForEach846_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),846,ARG,OOOForEach_SimplePaste(OOOForEach847_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach846_1(MACRO,ARGS...)

#define OOOForEach845_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),845,ARG,OOOForEach_SimplePaste(OOOForEach846_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach845_1(MACRO,ARGS...)

#define OOOForEach844_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),844,ARG,OOOForEach_SimplePaste(OOOForEach845_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach844_1(MACRO,ARGS...)

#define OOOForEach843_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),843,ARG,OOOForEach_SimplePaste(OOOForEach844_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach843_1(MACRO,ARGS...)

#define OOOForEach842_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),842,ARG,OOOForEach_SimplePaste(OOOForEach843_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach842_1(MACRO,ARGS...)

#define OOOForEach841_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),841,ARG,OOOForEach_SimplePaste(OOOForEach842_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach841_1(MACRO,ARGS...)

#define OOOForEach840_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),840,ARG,OOOForEach_SimplePaste(OOOForEach841_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach840_1(MACRO,ARGS...)

#define OOOForEach839_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),839,ARG,OOOForEach_SimplePaste(OOOForEach840_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach839_1(MACRO,ARGS...)

#define OOOForEach838_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),838,ARG,OOOForEach_SimplePaste(OOOForEach839_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach838_1(MACRO,ARGS...)

#define OOOForEach837_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),837,ARG,OOOForEach_SimplePaste(OOOForEach838_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach837_1(MACRO,ARGS...)

#define OOOForEach836_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),836,ARG,OOOForEach_SimplePaste(OOOForEach837_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach836_1(MACRO,ARGS...)

#define OOOForEach835_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),835,ARG,OOOForEach_SimplePaste(OOOForEach836_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach835_1(MACRO,ARGS...)

#define OOOForEach834_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),834,ARG,OOOForEach_SimplePaste(OOOForEach835_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach834_1(MACRO,ARGS...)

#define OOOForEach833_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),833,ARG,OOOForEach_SimplePaste(OOOForEach834_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach833_1(MACRO,ARGS...)

#define OOOForEach832_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),832,ARG,OOOForEach_SimplePaste(OOOForEach833_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach832_1(MACRO,ARGS...)

#define OOOForEach831_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),831,ARG,OOOForEach_SimplePaste(OOOForEach832_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach831_1(MACRO,ARGS...)

#define OOOForEach830_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),830,ARG,OOOForEach_SimplePaste(OOOForEach831_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach830_1(MACRO,ARGS...)

#define OOOForEach829_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),829,ARG,OOOForEach_SimplePaste(OOOForEach830_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach829_1(MACRO,ARGS...)

#define OOOForEach828_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),828,ARG,OOOForEach_SimplePaste(OOOForEach829_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach828_1(MACRO,ARGS...)

#define OOOForEach827_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),827,ARG,OOOForEach_SimplePaste(OOOForEach828_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach827_1(MACRO,ARGS...)

#define OOOForEach826_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),826,ARG,OOOForEach_SimplePaste(OOOForEach827_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach826_1(MACRO,ARGS...)

#define OOOForEach825_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),825,ARG,OOOForEach_SimplePaste(OOOForEach826_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach825_1(MACRO,ARGS...)

#define OOOForEach824_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),824,ARG,OOOForEach_SimplePaste(OOOForEach825_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach824_1(MACRO,ARGS...)

#define OOOForEach823_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),823,ARG,OOOForEach_SimplePaste(OOOForEach824_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach823_1(MACRO,ARGS...)

#define OOOForEach822_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),822,ARG,OOOForEach_SimplePaste(OOOForEach823_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach822_1(MACRO,ARGS...)

#define OOOForEach821_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),821,ARG,OOOForEach_SimplePaste(OOOForEach822_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach821_1(MACRO,ARGS...)

#define OOOForEach820_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),820,ARG,OOOForEach_SimplePaste(OOOForEach821_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach820_1(MACRO,ARGS...)

#define OOOForEach819_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),819,ARG,OOOForEach_SimplePaste(OOOForEach820_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach819_1(MACRO,ARGS...)

#define OOOForEach818_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),818,ARG,OOOForEach_SimplePaste(OOOForEach819_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach818_1(MACRO,ARGS...)

#define OOOForEach817_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),817,ARG,OOOForEach_SimplePaste(OOOForEach818_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach817_1(MACRO,ARGS...)

#define OOOForEach816_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),816,ARG,OOOForEach_SimplePaste(OOOForEach817_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach816_1(MACRO,ARGS...)

#define OOOForEach815_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),815,ARG,OOOForEach_SimplePaste(OOOForEach816_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach815_1(MACRO,ARGS...)

#define OOOForEach814_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),814,ARG,OOOForEach_SimplePaste(OOOForEach815_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach814_1(MACRO,ARGS...)

#define OOOForEach813_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),813,ARG,OOOForEach_SimplePaste(OOOForEach814_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach813_1(MACRO,ARGS...)

#define OOOForEach812_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),812,ARG,OOOForEach_SimplePaste(OOOForEach813_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach812_1(MACRO,ARGS...)

#define OOOForEach811_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),811,ARG,OOOForEach_SimplePaste(OOOForEach812_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach811_1(MACRO,ARGS...)

#define OOOForEach810_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),810,ARG,OOOForEach_SimplePaste(OOOForEach811_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach810_1(MACRO,ARGS...)

#define OOOForEach809_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),809,ARG,OOOForEach_SimplePaste(OOOForEach810_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach809_1(MACRO,ARGS...)

#define OOOForEach808_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),808,ARG,OOOForEach_SimplePaste(OOOForEach809_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach808_1(MACRO,ARGS...)

#define OOOForEach807_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),807,ARG,OOOForEach_SimplePaste(OOOForEach808_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach807_1(MACRO,ARGS...)

#define OOOForEach806_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),806,ARG,OOOForEach_SimplePaste(OOOForEach807_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach806_1(MACRO,ARGS...)

#define OOOForEach805_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),805,ARG,OOOForEach_SimplePaste(OOOForEach806_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach805_1(MACRO,ARGS...)

#define OOOForEach804_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),804,ARG,OOOForEach_SimplePaste(OOOForEach805_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach804_1(MACRO,ARGS...)

#define OOOForEach803_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),803,ARG,OOOForEach_SimplePaste(OOOForEach804_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach803_1(MACRO,ARGS...)

#define OOOForEach802_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),802,ARG,OOOForEach_SimplePaste(OOOForEach803_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach802_1(MACRO,ARGS...)

#define OOOForEach801_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),801,ARG,OOOForEach_SimplePaste(OOOForEach802_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach801_1(MACRO,ARGS...)

#define OOOForEach800_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),800,ARG,OOOForEach_SimplePaste(OOOForEach801_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach800_1(MACRO,ARGS...)

#define OOOForEach799_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),799,ARG,OOOForEach_SimplePaste(OOOForEach800_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach799_1(MACRO,ARGS...)

#define OOOForEach798_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),798,ARG,OOOForEach_SimplePaste(OOOForEach799_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach798_1(MACRO,ARGS...)

#define OOOForEach797_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),797,ARG,OOOForEach_SimplePaste(OOOForEach798_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach797_1(MACRO,ARGS...)

#define OOOForEach796_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),796,ARG,OOOForEach_SimplePaste(OOOForEach797_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach796_1(MACRO,ARGS...)

#define OOOForEach795_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),795,ARG,OOOForEach_SimplePaste(OOOForEach796_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach795_1(MACRO,ARGS...)

#define OOOForEach794_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),794,ARG,OOOForEach_SimplePaste(OOOForEach795_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach794_1(MACRO,ARGS...)

#define OOOForEach793_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),793,ARG,OOOForEach_SimplePaste(OOOForEach794_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach793_1(MACRO,ARGS...)

#define OOOForEach792_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),792,ARG,OOOForEach_SimplePaste(OOOForEach793_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach792_1(MACRO,ARGS...)

#define OOOForEach791_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),791,ARG,OOOForEach_SimplePaste(OOOForEach792_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach791_1(MACRO,ARGS...)

#define OOOForEach790_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),790,ARG,OOOForEach_SimplePaste(OOOForEach791_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach790_1(MACRO,ARGS...)

#define OOOForEach789_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),789,ARG,OOOForEach_SimplePaste(OOOForEach790_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach789_1(MACRO,ARGS...)

#define OOOForEach788_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),788,ARG,OOOForEach_SimplePaste(OOOForEach789_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach788_1(MACRO,ARGS...)

#define OOOForEach787_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),787,ARG,OOOForEach_SimplePaste(OOOForEach788_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach787_1(MACRO,ARGS...)

#define OOOForEach786_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),786,ARG,OOOForEach_SimplePaste(OOOForEach787_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach786_1(MACRO,ARGS...)

#define OOOForEach785_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),785,ARG,OOOForEach_SimplePaste(OOOForEach786_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach785_1(MACRO,ARGS...)

#define OOOForEach784_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),784,ARG,OOOForEach_SimplePaste(OOOForEach785_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach784_1(MACRO,ARGS...)

#define OOOForEach783_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),783,ARG,OOOForEach_SimplePaste(OOOForEach784_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach783_1(MACRO,ARGS...)

#define OOOForEach782_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),782,ARG,OOOForEach_SimplePaste(OOOForEach783_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach782_1(MACRO,ARGS...)

#define OOOForEach781_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),781,ARG,OOOForEach_SimplePaste(OOOForEach782_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach781_1(MACRO,ARGS...)

#define OOOForEach780_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),780,ARG,OOOForEach_SimplePaste(OOOForEach781_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach780_1(MACRO,ARGS...)

#define OOOForEach779_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),779,ARG,OOOForEach_SimplePaste(OOOForEach780_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach779_1(MACRO,ARGS...)

#define OOOForEach778_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),778,ARG,OOOForEach_SimplePaste(OOOForEach779_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach778_1(MACRO,ARGS...)

#define OOOForEach777_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),777,ARG,OOOForEach_SimplePaste(OOOForEach778_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach777_1(MACRO,ARGS...)

#define OOOForEach776_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),776,ARG,OOOForEach_SimplePaste(OOOForEach777_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach776_1(MACRO,ARGS...)

#define OOOForEach775_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),775,ARG,OOOForEach_SimplePaste(OOOForEach776_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach775_1(MACRO,ARGS...)

#define OOOForEach774_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),774,ARG,OOOForEach_SimplePaste(OOOForEach775_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach774_1(MACRO,ARGS...)

#define OOOForEach773_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),773,ARG,OOOForEach_SimplePaste(OOOForEach774_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach773_1(MACRO,ARGS...)

#define OOOForEach772_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),772,ARG,OOOForEach_SimplePaste(OOOForEach773_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach772_1(MACRO,ARGS...)

#define OOOForEach771_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),771,ARG,OOOForEach_SimplePaste(OOOForEach772_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach771_1(MACRO,ARGS...)

#define OOOForEach770_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),770,ARG,OOOForEach_SimplePaste(OOOForEach771_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach770_1(MACRO,ARGS...)

#define OOOForEach769_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),769,ARG,OOOForEach_SimplePaste(OOOForEach770_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach769_1(MACRO,ARGS...)

#define OOOForEach768_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),768,ARG,OOOForEach_SimplePaste(OOOForEach769_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach768_1(MACRO,ARGS...)

#define OOOForEach767_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),767,ARG,OOOForEach_SimplePaste(OOOForEach768_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach767_1(MACRO,ARGS...)

#define OOOForEach766_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),766,ARG,OOOForEach_SimplePaste(OOOForEach767_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach766_1(MACRO,ARGS...)

#define OOOForEach765_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),765,ARG,OOOForEach_SimplePaste(OOOForEach766_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach765_1(MACRO,ARGS...)

#define OOOForEach764_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),764,ARG,OOOForEach_SimplePaste(OOOForEach765_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach764_1(MACRO,ARGS...)

#define OOOForEach763_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),763,ARG,OOOForEach_SimplePaste(OOOForEach764_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach763_1(MACRO,ARGS...)

#define OOOForEach762_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),762,ARG,OOOForEach_SimplePaste(OOOForEach763_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach762_1(MACRO,ARGS...)

#define OOOForEach761_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),761,ARG,OOOForEach_SimplePaste(OOOForEach762_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach761_1(MACRO,ARGS...)

#define OOOForEach760_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),760,ARG,OOOForEach_SimplePaste(OOOForEach761_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach760_1(MACRO,ARGS...)

#define OOOForEach759_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),759,ARG,OOOForEach_SimplePaste(OOOForEach760_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach759_1(MACRO,ARGS...)

#define OOOForEach758_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),758,ARG,OOOForEach_SimplePaste(OOOForEach759_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach758_1(MACRO,ARGS...)

#define OOOForEach757_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),757,ARG,OOOForEach_SimplePaste(OOOForEach758_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach757_1(MACRO,ARGS...)

#define OOOForEach756_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),756,ARG,OOOForEach_SimplePaste(OOOForEach757_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach756_1(MACRO,ARGS...)

#define OOOForEach755_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),755,ARG,OOOForEach_SimplePaste(OOOForEach756_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach755_1(MACRO,ARGS...)

#define OOOForEach754_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),754,ARG,OOOForEach_SimplePaste(OOOForEach755_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach754_1(MACRO,ARGS...)

#define OOOForEach753_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),753,ARG,OOOForEach_SimplePaste(OOOForEach754_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach753_1(MACRO,ARGS...)

#define OOOForEach752_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),752,ARG,OOOForEach_SimplePaste(OOOForEach753_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach752_1(MACRO,ARGS...)

#define OOOForEach751_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),751,ARG,OOOForEach_SimplePaste(OOOForEach752_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach751_1(MACRO,ARGS...)

#define OOOForEach750_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),750,ARG,OOOForEach_SimplePaste(OOOForEach751_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach750_1(MACRO,ARGS...)

#define OOOForEach749_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),749,ARG,OOOForEach_SimplePaste(OOOForEach750_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach749_1(MACRO,ARGS...)

#define OOOForEach748_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),748,ARG,OOOForEach_SimplePaste(OOOForEach749_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach748_1(MACRO,ARGS...)

#define OOOForEach747_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),747,ARG,OOOForEach_SimplePaste(OOOForEach748_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach747_1(MACRO,ARGS...)

#define OOOForEach746_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),746,ARG,OOOForEach_SimplePaste(OOOForEach747_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach746_1(MACRO,ARGS...)

#define OOOForEach745_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),745,ARG,OOOForEach_SimplePaste(OOOForEach746_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach745_1(MACRO,ARGS...)

#define OOOForEach744_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),744,ARG,OOOForEach_SimplePaste(OOOForEach745_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach744_1(MACRO,ARGS...)

#define OOOForEach743_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),743,ARG,OOOForEach_SimplePaste(OOOForEach744_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach743_1(MACRO,ARGS...)

#define OOOForEach742_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),742,ARG,OOOForEach_SimplePaste(OOOForEach743_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach742_1(MACRO,ARGS...)

#define OOOForEach741_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),741,ARG,OOOForEach_SimplePaste(OOOForEach742_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach741_1(MACRO,ARGS...)

#define OOOForEach740_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),740,ARG,OOOForEach_SimplePaste(OOOForEach741_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach740_1(MACRO,ARGS...)

#define OOOForEach739_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),739,ARG,OOOForEach_SimplePaste(OOOForEach740_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach739_1(MACRO,ARGS...)

#define OOOForEach738_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),738,ARG,OOOForEach_SimplePaste(OOOForEach739_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach738_1(MACRO,ARGS...)

#define OOOForEach737_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),737,ARG,OOOForEach_SimplePaste(OOOForEach738_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach737_1(MACRO,ARGS...)

#define OOOForEach736_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),736,ARG,OOOForEach_SimplePaste(OOOForEach737_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach736_1(MACRO,ARGS...)

#define OOOForEach735_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),735,ARG,OOOForEach_SimplePaste(OOOForEach736_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach735_1(MACRO,ARGS...)

#define OOOForEach734_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),734,ARG,OOOForEach_SimplePaste(OOOForEach735_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach734_1(MACRO,ARGS...)

#define OOOForEach733_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),733,ARG,OOOForEach_SimplePaste(OOOForEach734_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach733_1(MACRO,ARGS...)

#define OOOForEach732_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),732,ARG,OOOForEach_SimplePaste(OOOForEach733_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach732_1(MACRO,ARGS...)

#define OOOForEach731_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),731,ARG,OOOForEach_SimplePaste(OOOForEach732_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach731_1(MACRO,ARGS...)

#define OOOForEach730_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),730,ARG,OOOForEach_SimplePaste(OOOForEach731_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach730_1(MACRO,ARGS...)

#define OOOForEach729_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),729,ARG,OOOForEach_SimplePaste(OOOForEach730_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach729_1(MACRO,ARGS...)

#define OOOForEach728_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),728,ARG,OOOForEach_SimplePaste(OOOForEach729_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach728_1(MACRO,ARGS...)

#define OOOForEach727_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),727,ARG,OOOForEach_SimplePaste(OOOForEach728_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach727_1(MACRO,ARGS...)

#define OOOForEach726_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),726,ARG,OOOForEach_SimplePaste(OOOForEach727_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach726_1(MACRO,ARGS...)

#define OOOForEach725_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),725,ARG,OOOForEach_SimplePaste(OOOForEach726_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach725_1(MACRO,ARGS...)

#define OOOForEach724_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),724,ARG,OOOForEach_SimplePaste(OOOForEach725_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach724_1(MACRO,ARGS...)

#define OOOForEach723_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),723,ARG,OOOForEach_SimplePaste(OOOForEach724_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach723_1(MACRO,ARGS...)

#define OOOForEach722_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),722,ARG,OOOForEach_SimplePaste(OOOForEach723_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach722_1(MACRO,ARGS...)

#define OOOForEach721_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),721,ARG,OOOForEach_SimplePaste(OOOForEach722_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach721_1(MACRO,ARGS...)

#define OOOForEach720_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),720,ARG,OOOForEach_SimplePaste(OOOForEach721_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach720_1(MACRO,ARGS...)

#define OOOForEach719_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),719,ARG,OOOForEach_SimplePaste(OOOForEach720_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach719_1(MACRO,ARGS...)

#define OOOForEach718_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),718,ARG,OOOForEach_SimplePaste(OOOForEach719_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach718_1(MACRO,ARGS...)

#define OOOForEach717_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),717,ARG,OOOForEach_SimplePaste(OOOForEach718_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach717_1(MACRO,ARGS...)

#define OOOForEach716_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),716,ARG,OOOForEach_SimplePaste(OOOForEach717_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach716_1(MACRO,ARGS...)

#define OOOForEach715_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),715,ARG,OOOForEach_SimplePaste(OOOForEach716_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach715_1(MACRO,ARGS...)

#define OOOForEach714_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),714,ARG,OOOForEach_SimplePaste(OOOForEach715_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach714_1(MACRO,ARGS...)

#define OOOForEach713_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),713,ARG,OOOForEach_SimplePaste(OOOForEach714_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach713_1(MACRO,ARGS...)

#define OOOForEach712_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),712,ARG,OOOForEach_SimplePaste(OOOForEach713_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach712_1(MACRO,ARGS...)

#define OOOForEach711_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),711,ARG,OOOForEach_SimplePaste(OOOForEach712_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach711_1(MACRO,ARGS...)

#define OOOForEach710_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),710,ARG,OOOForEach_SimplePaste(OOOForEach711_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach710_1(MACRO,ARGS...)

#define OOOForEach709_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),709,ARG,OOOForEach_SimplePaste(OOOForEach710_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach709_1(MACRO,ARGS...)

#define OOOForEach708_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),708,ARG,OOOForEach_SimplePaste(OOOForEach709_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach708_1(MACRO,ARGS...)

#define OOOForEach707_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),707,ARG,OOOForEach_SimplePaste(OOOForEach708_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach707_1(MACRO,ARGS...)

#define OOOForEach706_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),706,ARG,OOOForEach_SimplePaste(OOOForEach707_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach706_1(MACRO,ARGS...)

#define OOOForEach705_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),705,ARG,OOOForEach_SimplePaste(OOOForEach706_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach705_1(MACRO,ARGS...)

#define OOOForEach704_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),704,ARG,OOOForEach_SimplePaste(OOOForEach705_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach704_1(MACRO,ARGS...)

#define OOOForEach703_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),703,ARG,OOOForEach_SimplePaste(OOOForEach704_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach703_1(MACRO,ARGS...)

#define OOOForEach702_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),702,ARG,OOOForEach_SimplePaste(OOOForEach703_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach702_1(MACRO,ARGS...)

#define OOOForEach701_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),701,ARG,OOOForEach_SimplePaste(OOOForEach702_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach701_1(MACRO,ARGS...)

#define OOOForEach700_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),700,ARG,OOOForEach_SimplePaste(OOOForEach701_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach700_1(MACRO,ARGS...)

#define OOOForEach699_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),699,ARG,OOOForEach_SimplePaste(OOOForEach700_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach699_1(MACRO,ARGS...)

#define OOOForEach698_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),698,ARG,OOOForEach_SimplePaste(OOOForEach699_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach698_1(MACRO,ARGS...)

#define OOOForEach697_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),697,ARG,OOOForEach_SimplePaste(OOOForEach698_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach697_1(MACRO,ARGS...)

#define OOOForEach696_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),696,ARG,OOOForEach_SimplePaste(OOOForEach697_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach696_1(MACRO,ARGS...)

#define OOOForEach695_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),695,ARG,OOOForEach_SimplePaste(OOOForEach696_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach695_1(MACRO,ARGS...)

#define OOOForEach694_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),694,ARG,OOOForEach_SimplePaste(OOOForEach695_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach694_1(MACRO,ARGS...)

#define OOOForEach693_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),693,ARG,OOOForEach_SimplePaste(OOOForEach694_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach693_1(MACRO,ARGS...)

#define OOOForEach692_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),692,ARG,OOOForEach_SimplePaste(OOOForEach693_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach692_1(MACRO,ARGS...)

#define OOOForEach691_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),691,ARG,OOOForEach_SimplePaste(OOOForEach692_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach691_1(MACRO,ARGS...)

#define OOOForEach690_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),690,ARG,OOOForEach_SimplePaste(OOOForEach691_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach690_1(MACRO,ARGS...)

#define OOOForEach689_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),689,ARG,OOOForEach_SimplePaste(OOOForEach690_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach689_1(MACRO,ARGS...)

#define OOOForEach688_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),688,ARG,OOOForEach_SimplePaste(OOOForEach689_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach688_1(MACRO,ARGS...)

#define OOOForEach687_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),687,ARG,OOOForEach_SimplePaste(OOOForEach688_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach687_1(MACRO,ARGS...)

#define OOOForEach686_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),686,ARG,OOOForEach_SimplePaste(OOOForEach687_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach686_1(MACRO,ARGS...)

#define OOOForEach685_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),685,ARG,OOOForEach_SimplePaste(OOOForEach686_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach685_1(MACRO,ARGS...)

#define OOOForEach684_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),684,ARG,OOOForEach_SimplePaste(OOOForEach685_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach684_1(MACRO,ARGS...)

#define OOOForEach683_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),683,ARG,OOOForEach_SimplePaste(OOOForEach684_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach683_1(MACRO,ARGS...)

#define OOOForEach682_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),682,ARG,OOOForEach_SimplePaste(OOOForEach683_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach682_1(MACRO,ARGS...)

#define OOOForEach681_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),681,ARG,OOOForEach_SimplePaste(OOOForEach682_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach681_1(MACRO,ARGS...)

#define OOOForEach680_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),680,ARG,OOOForEach_SimplePaste(OOOForEach681_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach680_1(MACRO,ARGS...)

#define OOOForEach679_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),679,ARG,OOOForEach_SimplePaste(OOOForEach680_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach679_1(MACRO,ARGS...)

#define OOOForEach678_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),678,ARG,OOOForEach_SimplePaste(OOOForEach679_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach678_1(MACRO,ARGS...)

#define OOOForEach677_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),677,ARG,OOOForEach_SimplePaste(OOOForEach678_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach677_1(MACRO,ARGS...)

#define OOOForEach676_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),676,ARG,OOOForEach_SimplePaste(OOOForEach677_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach676_1(MACRO,ARGS...)

#define OOOForEach675_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),675,ARG,OOOForEach_SimplePaste(OOOForEach676_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach675_1(MACRO,ARGS...)

#define OOOForEach674_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),674,ARG,OOOForEach_SimplePaste(OOOForEach675_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach674_1(MACRO,ARGS...)

#define OOOForEach673_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),673,ARG,OOOForEach_SimplePaste(OOOForEach674_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach673_1(MACRO,ARGS...)

#define OOOForEach672_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),672,ARG,OOOForEach_SimplePaste(OOOForEach673_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach672_1(MACRO,ARGS...)

#define OOOForEach671_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),671,ARG,OOOForEach_SimplePaste(OOOForEach672_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach671_1(MACRO,ARGS...)

#define OOOForEach670_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),670,ARG,OOOForEach_SimplePaste(OOOForEach671_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach670_1(MACRO,ARGS...)

#define OOOForEach669_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),669,ARG,OOOForEach_SimplePaste(OOOForEach670_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach669_1(MACRO,ARGS...)

#define OOOForEach668_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),668,ARG,OOOForEach_SimplePaste(OOOForEach669_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach668_1(MACRO,ARGS...)

#define OOOForEach667_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),667,ARG,OOOForEach_SimplePaste(OOOForEach668_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach667_1(MACRO,ARGS...)

#define OOOForEach666_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),666,ARG,OOOForEach_SimplePaste(OOOForEach667_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach666_1(MACRO,ARGS...)

#define OOOForEach665_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),665,ARG,OOOForEach_SimplePaste(OOOForEach666_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach665_1(MACRO,ARGS...)

#define OOOForEach664_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),664,ARG,OOOForEach_SimplePaste(OOOForEach665_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach664_1(MACRO,ARGS...)

#define OOOForEach663_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),663,ARG,OOOForEach_SimplePaste(OOOForEach664_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach663_1(MACRO,ARGS...)

#define OOOForEach662_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),662,ARG,OOOForEach_SimplePaste(OOOForEach663_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach662_1(MACRO,ARGS...)

#define OOOForEach661_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),661,ARG,OOOForEach_SimplePaste(OOOForEach662_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach661_1(MACRO,ARGS...)

#define OOOForEach660_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),660,ARG,OOOForEach_SimplePaste(OOOForEach661_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach660_1(MACRO,ARGS...)

#define OOOForEach659_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),659,ARG,OOOForEach_SimplePaste(OOOForEach660_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach659_1(MACRO,ARGS...)

#define OOOForEach658_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),658,ARG,OOOForEach_SimplePaste(OOOForEach659_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach658_1(MACRO,ARGS...)

#define OOOForEach657_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),657,ARG,OOOForEach_SimplePaste(OOOForEach658_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach657_1(MACRO,ARGS...)

#define OOOForEach656_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),656,ARG,OOOForEach_SimplePaste(OOOForEach657_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach656_1(MACRO,ARGS...)

#define OOOForEach655_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),655,ARG,OOOForEach_SimplePaste(OOOForEach656_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach655_1(MACRO,ARGS...)

#define OOOForEach654_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),654,ARG,OOOForEach_SimplePaste(OOOForEach655_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach654_1(MACRO,ARGS...)

#define OOOForEach653_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),653,ARG,OOOForEach_SimplePaste(OOOForEach654_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach653_1(MACRO,ARGS...)

#define OOOForEach652_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),652,ARG,OOOForEach_SimplePaste(OOOForEach653_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach652_1(MACRO,ARGS...)

#define OOOForEach651_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),651,ARG,OOOForEach_SimplePaste(OOOForEach652_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach651_1(MACRO,ARGS...)

#define OOOForEach650_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),650,ARG,OOOForEach_SimplePaste(OOOForEach651_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach650_1(MACRO,ARGS...)

#define OOOForEach649_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),649,ARG,OOOForEach_SimplePaste(OOOForEach650_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach649_1(MACRO,ARGS...)

#define OOOForEach648_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),648,ARG,OOOForEach_SimplePaste(OOOForEach649_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach648_1(MACRO,ARGS...)

#define OOOForEach647_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),647,ARG,OOOForEach_SimplePaste(OOOForEach648_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach647_1(MACRO,ARGS...)

#define OOOForEach646_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),646,ARG,OOOForEach_SimplePaste(OOOForEach647_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach646_1(MACRO,ARGS...)

#define OOOForEach645_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),645,ARG,OOOForEach_SimplePaste(OOOForEach646_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach645_1(MACRO,ARGS...)

#define OOOForEach644_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),644,ARG,OOOForEach_SimplePaste(OOOForEach645_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach644_1(MACRO,ARGS...)

#define OOOForEach643_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),643,ARG,OOOForEach_SimplePaste(OOOForEach644_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach643_1(MACRO,ARGS...)

#define OOOForEach642_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),642,ARG,OOOForEach_SimplePaste(OOOForEach643_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach642_1(MACRO,ARGS...)

#define OOOForEach641_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),641,ARG,OOOForEach_SimplePaste(OOOForEach642_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach641_1(MACRO,ARGS...)

#define OOOForEach640_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),640,ARG,OOOForEach_SimplePaste(OOOForEach641_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach640_1(MACRO,ARGS...)

#define OOOForEach639_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),639,ARG,OOOForEach_SimplePaste(OOOForEach640_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach639_1(MACRO,ARGS...)

#define OOOForEach638_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),638,ARG,OOOForEach_SimplePaste(OOOForEach639_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach638_1(MACRO,ARGS...)

#define OOOForEach637_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),637,ARG,OOOForEach_SimplePaste(OOOForEach638_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach637_1(MACRO,ARGS...)

#define OOOForEach636_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),636,ARG,OOOForEach_SimplePaste(OOOForEach637_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach636_1(MACRO,ARGS...)

#define OOOForEach635_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),635,ARG,OOOForEach_SimplePaste(OOOForEach636_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach635_1(MACRO,ARGS...)

#define OOOForEach634_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),634,ARG,OOOForEach_SimplePaste(OOOForEach635_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach634_1(MACRO,ARGS...)

#define OOOForEach633_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),633,ARG,OOOForEach_SimplePaste(OOOForEach634_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach633_1(MACRO,ARGS...)

#define OOOForEach632_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),632,ARG,OOOForEach_SimplePaste(OOOForEach633_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach632_1(MACRO,ARGS...)

#define OOOForEach631_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),631,ARG,OOOForEach_SimplePaste(OOOForEach632_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach631_1(MACRO,ARGS...)

#define OOOForEach630_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),630,ARG,OOOForEach_SimplePaste(OOOForEach631_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach630_1(MACRO,ARGS...)

#define OOOForEach629_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),629,ARG,OOOForEach_SimplePaste(OOOForEach630_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach629_1(MACRO,ARGS...)

#define OOOForEach628_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),628,ARG,OOOForEach_SimplePaste(OOOForEach629_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach628_1(MACRO,ARGS...)

#define OOOForEach627_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),627,ARG,OOOForEach_SimplePaste(OOOForEach628_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach627_1(MACRO,ARGS...)

#define OOOForEach626_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),626,ARG,OOOForEach_SimplePaste(OOOForEach627_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach626_1(MACRO,ARGS...)

#define OOOForEach625_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),625,ARG,OOOForEach_SimplePaste(OOOForEach626_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach625_1(MACRO,ARGS...)

#define OOOForEach624_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),624,ARG,OOOForEach_SimplePaste(OOOForEach625_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach624_1(MACRO,ARGS...)

#define OOOForEach623_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),623,ARG,OOOForEach_SimplePaste(OOOForEach624_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach623_1(MACRO,ARGS...)

#define OOOForEach622_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),622,ARG,OOOForEach_SimplePaste(OOOForEach623_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach622_1(MACRO,ARGS...)

#define OOOForEach621_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),621,ARG,OOOForEach_SimplePaste(OOOForEach622_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach621_1(MACRO,ARGS...)

#define OOOForEach620_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),620,ARG,OOOForEach_SimplePaste(OOOForEach621_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach620_1(MACRO,ARGS...)

#define OOOForEach619_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),619,ARG,OOOForEach_SimplePaste(OOOForEach620_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach619_1(MACRO,ARGS...)

#define OOOForEach618_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),618,ARG,OOOForEach_SimplePaste(OOOForEach619_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach618_1(MACRO,ARGS...)

#define OOOForEach617_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),617,ARG,OOOForEach_SimplePaste(OOOForEach618_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach617_1(MACRO,ARGS...)

#define OOOForEach616_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),616,ARG,OOOForEach_SimplePaste(OOOForEach617_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach616_1(MACRO,ARGS...)

#define OOOForEach615_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),615,ARG,OOOForEach_SimplePaste(OOOForEach616_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach615_1(MACRO,ARGS...)

#define OOOForEach614_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),614,ARG,OOOForEach_SimplePaste(OOOForEach615_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach614_1(MACRO,ARGS...)

#define OOOForEach613_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),613,ARG,OOOForEach_SimplePaste(OOOForEach614_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach613_1(MACRO,ARGS...)

#define OOOForEach612_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),612,ARG,OOOForEach_SimplePaste(OOOForEach613_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach612_1(MACRO,ARGS...)

#define OOOForEach611_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),611,ARG,OOOForEach_SimplePaste(OOOForEach612_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach611_1(MACRO,ARGS...)

#define OOOForEach610_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),610,ARG,OOOForEach_SimplePaste(OOOForEach611_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach610_1(MACRO,ARGS...)

#define OOOForEach609_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),609,ARG,OOOForEach_SimplePaste(OOOForEach610_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach609_1(MACRO,ARGS...)

#define OOOForEach608_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),608,ARG,OOOForEach_SimplePaste(OOOForEach609_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach608_1(MACRO,ARGS...)

#define OOOForEach607_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),607,ARG,OOOForEach_SimplePaste(OOOForEach608_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach607_1(MACRO,ARGS...)

#define OOOForEach606_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),606,ARG,OOOForEach_SimplePaste(OOOForEach607_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach606_1(MACRO,ARGS...)

#define OOOForEach605_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),605,ARG,OOOForEach_SimplePaste(OOOForEach606_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach605_1(MACRO,ARGS...)

#define OOOForEach604_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),604,ARG,OOOForEach_SimplePaste(OOOForEach605_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach604_1(MACRO,ARGS...)

#define OOOForEach603_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),603,ARG,OOOForEach_SimplePaste(OOOForEach604_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach603_1(MACRO,ARGS...)

#define OOOForEach602_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),602,ARG,OOOForEach_SimplePaste(OOOForEach603_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach602_1(MACRO,ARGS...)

#define OOOForEach601_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),601,ARG,OOOForEach_SimplePaste(OOOForEach602_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach601_1(MACRO,ARGS...)

#define OOOForEach600_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),600,ARG,OOOForEach_SimplePaste(OOOForEach601_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach600_1(MACRO,ARGS...)

#define OOOForEach599_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),599,ARG,OOOForEach_SimplePaste(OOOForEach600_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach599_1(MACRO,ARGS...)

#define OOOForEach598_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),598,ARG,OOOForEach_SimplePaste(OOOForEach599_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach598_1(MACRO,ARGS...)

#define OOOForEach597_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),597,ARG,OOOForEach_SimplePaste(OOOForEach598_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach597_1(MACRO,ARGS...)

#define OOOForEach596_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),596,ARG,OOOForEach_SimplePaste(OOOForEach597_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach596_1(MACRO,ARGS...)

#define OOOForEach595_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),595,ARG,OOOForEach_SimplePaste(OOOForEach596_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach595_1(MACRO,ARGS...)

#define OOOForEach594_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),594,ARG,OOOForEach_SimplePaste(OOOForEach595_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach594_1(MACRO,ARGS...)

#define OOOForEach593_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),593,ARG,OOOForEach_SimplePaste(OOOForEach594_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach593_1(MACRO,ARGS...)

#define OOOForEach592_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),592,ARG,OOOForEach_SimplePaste(OOOForEach593_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach592_1(MACRO,ARGS...)

#define OOOForEach591_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),591,ARG,OOOForEach_SimplePaste(OOOForEach592_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach591_1(MACRO,ARGS...)

#define OOOForEach590_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),590,ARG,OOOForEach_SimplePaste(OOOForEach591_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach590_1(MACRO,ARGS...)

#define OOOForEach589_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),589,ARG,OOOForEach_SimplePaste(OOOForEach590_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach589_1(MACRO,ARGS...)

#define OOOForEach588_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),588,ARG,OOOForEach_SimplePaste(OOOForEach589_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach588_1(MACRO,ARGS...)

#define OOOForEach587_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),587,ARG,OOOForEach_SimplePaste(OOOForEach588_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach587_1(MACRO,ARGS...)

#define OOOForEach586_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),586,ARG,OOOForEach_SimplePaste(OOOForEach587_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach586_1(MACRO,ARGS...)

#define OOOForEach585_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),585,ARG,OOOForEach_SimplePaste(OOOForEach586_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach585_1(MACRO,ARGS...)

#define OOOForEach584_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),584,ARG,OOOForEach_SimplePaste(OOOForEach585_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach584_1(MACRO,ARGS...)

#define OOOForEach583_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),583,ARG,OOOForEach_SimplePaste(OOOForEach584_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach583_1(MACRO,ARGS...)

#define OOOForEach582_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),582,ARG,OOOForEach_SimplePaste(OOOForEach583_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach582_1(MACRO,ARGS...)

#define OOOForEach581_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),581,ARG,OOOForEach_SimplePaste(OOOForEach582_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach581_1(MACRO,ARGS...)

#define OOOForEach580_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),580,ARG,OOOForEach_SimplePaste(OOOForEach581_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach580_1(MACRO,ARGS...)

#define OOOForEach579_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),579,ARG,OOOForEach_SimplePaste(OOOForEach580_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach579_1(MACRO,ARGS...)

#define OOOForEach578_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),578,ARG,OOOForEach_SimplePaste(OOOForEach579_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach578_1(MACRO,ARGS...)

#define OOOForEach577_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),577,ARG,OOOForEach_SimplePaste(OOOForEach578_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach577_1(MACRO,ARGS...)

#define OOOForEach576_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),576,ARG,OOOForEach_SimplePaste(OOOForEach577_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach576_1(MACRO,ARGS...)

#define OOOForEach575_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),575,ARG,OOOForEach_SimplePaste(OOOForEach576_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach575_1(MACRO,ARGS...)

#define OOOForEach574_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),574,ARG,OOOForEach_SimplePaste(OOOForEach575_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach574_1(MACRO,ARGS...)

#define OOOForEach573_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),573,ARG,OOOForEach_SimplePaste(OOOForEach574_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach573_1(MACRO,ARGS...)

#define OOOForEach572_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),572,ARG,OOOForEach_SimplePaste(OOOForEach573_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach572_1(MACRO,ARGS...)

#define OOOForEach571_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),571,ARG,OOOForEach_SimplePaste(OOOForEach572_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach571_1(MACRO,ARGS...)

#define OOOForEach570_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),570,ARG,OOOForEach_SimplePaste(OOOForEach571_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach570_1(MACRO,ARGS...)

#define OOOForEach569_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),569,ARG,OOOForEach_SimplePaste(OOOForEach570_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach569_1(MACRO,ARGS...)

#define OOOForEach568_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),568,ARG,OOOForEach_SimplePaste(OOOForEach569_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach568_1(MACRO,ARGS...)

#define OOOForEach567_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),567,ARG,OOOForEach_SimplePaste(OOOForEach568_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach567_1(MACRO,ARGS...)

#define OOOForEach566_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),566,ARG,OOOForEach_SimplePaste(OOOForEach567_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach566_1(MACRO,ARGS...)

#define OOOForEach565_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),565,ARG,OOOForEach_SimplePaste(OOOForEach566_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach565_1(MACRO,ARGS...)

#define OOOForEach564_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),564,ARG,OOOForEach_SimplePaste(OOOForEach565_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach564_1(MACRO,ARGS...)

#define OOOForEach563_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),563,ARG,OOOForEach_SimplePaste(OOOForEach564_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach563_1(MACRO,ARGS...)

#define OOOForEach562_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),562,ARG,OOOForEach_SimplePaste(OOOForEach563_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach562_1(MACRO,ARGS...)

#define OOOForEach561_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),561,ARG,OOOForEach_SimplePaste(OOOForEach562_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach561_1(MACRO,ARGS...)

#define OOOForEach560_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),560,ARG,OOOForEach_SimplePaste(OOOForEach561_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach560_1(MACRO,ARGS...)

#define OOOForEach559_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),559,ARG,OOOForEach_SimplePaste(OOOForEach560_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach559_1(MACRO,ARGS...)

#define OOOForEach558_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),558,ARG,OOOForEach_SimplePaste(OOOForEach559_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach558_1(MACRO,ARGS...)

#define OOOForEach557_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),557,ARG,OOOForEach_SimplePaste(OOOForEach558_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach557_1(MACRO,ARGS...)

#define OOOForEach556_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),556,ARG,OOOForEach_SimplePaste(OOOForEach557_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach556_1(MACRO,ARGS...)

#define OOOForEach555_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),555,ARG,OOOForEach_SimplePaste(OOOForEach556_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach555_1(MACRO,ARGS...)

#define OOOForEach554_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),554,ARG,OOOForEach_SimplePaste(OOOForEach555_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach554_1(MACRO,ARGS...)

#define OOOForEach553_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),553,ARG,OOOForEach_SimplePaste(OOOForEach554_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach553_1(MACRO,ARGS...)

#define OOOForEach552_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),552,ARG,OOOForEach_SimplePaste(OOOForEach553_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach552_1(MACRO,ARGS...)

#define OOOForEach551_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),551,ARG,OOOForEach_SimplePaste(OOOForEach552_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach551_1(MACRO,ARGS...)

#define OOOForEach550_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),550,ARG,OOOForEach_SimplePaste(OOOForEach551_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach550_1(MACRO,ARGS...)

#define OOOForEach549_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),549,ARG,OOOForEach_SimplePaste(OOOForEach550_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach549_1(MACRO,ARGS...)

#define OOOForEach548_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),548,ARG,OOOForEach_SimplePaste(OOOForEach549_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach548_1(MACRO,ARGS...)

#define OOOForEach547_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),547,ARG,OOOForEach_SimplePaste(OOOForEach548_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach547_1(MACRO,ARGS...)

#define OOOForEach546_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),546,ARG,OOOForEach_SimplePaste(OOOForEach547_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach546_1(MACRO,ARGS...)

#define OOOForEach545_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),545,ARG,OOOForEach_SimplePaste(OOOForEach546_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach545_1(MACRO,ARGS...)

#define OOOForEach544_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),544,ARG,OOOForEach_SimplePaste(OOOForEach545_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach544_1(MACRO,ARGS...)

#define OOOForEach543_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),543,ARG,OOOForEach_SimplePaste(OOOForEach544_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach543_1(MACRO,ARGS...)

#define OOOForEach542_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),542,ARG,OOOForEach_SimplePaste(OOOForEach543_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach542_1(MACRO,ARGS...)

#define OOOForEach541_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),541,ARG,OOOForEach_SimplePaste(OOOForEach542_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach541_1(MACRO,ARGS...)

#define OOOForEach540_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),540,ARG,OOOForEach_SimplePaste(OOOForEach541_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach540_1(MACRO,ARGS...)

#define OOOForEach539_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),539,ARG,OOOForEach_SimplePaste(OOOForEach540_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach539_1(MACRO,ARGS...)

#define OOOForEach538_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),538,ARG,OOOForEach_SimplePaste(OOOForEach539_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach538_1(MACRO,ARGS...)

#define OOOForEach537_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),537,ARG,OOOForEach_SimplePaste(OOOForEach538_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach537_1(MACRO,ARGS...)

#define OOOForEach536_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),536,ARG,OOOForEach_SimplePaste(OOOForEach537_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach536_1(MACRO,ARGS...)

#define OOOForEach535_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),535,ARG,OOOForEach_SimplePaste(OOOForEach536_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach535_1(MACRO,ARGS...)

#define OOOForEach534_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),534,ARG,OOOForEach_SimplePaste(OOOForEach535_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach534_1(MACRO,ARGS...)

#define OOOForEach533_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),533,ARG,OOOForEach_SimplePaste(OOOForEach534_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach533_1(MACRO,ARGS...)

#define OOOForEach532_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),532,ARG,OOOForEach_SimplePaste(OOOForEach533_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach532_1(MACRO,ARGS...)

#define OOOForEach531_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),531,ARG,OOOForEach_SimplePaste(OOOForEach532_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach531_1(MACRO,ARGS...)

#define OOOForEach530_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),530,ARG,OOOForEach_SimplePaste(OOOForEach531_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach530_1(MACRO,ARGS...)

#define OOOForEach529_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),529,ARG,OOOForEach_SimplePaste(OOOForEach530_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach529_1(MACRO,ARGS...)

#define OOOForEach528_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),528,ARG,OOOForEach_SimplePaste(OOOForEach529_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach528_1(MACRO,ARGS...)

#define OOOForEach527_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),527,ARG,OOOForEach_SimplePaste(OOOForEach528_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach527_1(MACRO,ARGS...)

#define OOOForEach526_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),526,ARG,OOOForEach_SimplePaste(OOOForEach527_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach526_1(MACRO,ARGS...)

#define OOOForEach525_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),525,ARG,OOOForEach_SimplePaste(OOOForEach526_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach525_1(MACRO,ARGS...)

#define OOOForEach524_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),524,ARG,OOOForEach_SimplePaste(OOOForEach525_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach524_1(MACRO,ARGS...)

#define OOOForEach523_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),523,ARG,OOOForEach_SimplePaste(OOOForEach524_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach523_1(MACRO,ARGS...)

#define OOOForEach522_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),522,ARG,OOOForEach_SimplePaste(OOOForEach523_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach522_1(MACRO,ARGS...)

#define OOOForEach521_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),521,ARG,OOOForEach_SimplePaste(OOOForEach522_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach521_1(MACRO,ARGS...)

#define OOOForEach520_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),520,ARG,OOOForEach_SimplePaste(OOOForEach521_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach520_1(MACRO,ARGS...)

#define OOOForEach519_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),519,ARG,OOOForEach_SimplePaste(OOOForEach520_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach519_1(MACRO,ARGS...)

#define OOOForEach518_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),518,ARG,OOOForEach_SimplePaste(OOOForEach519_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach518_1(MACRO,ARGS...)

#define OOOForEach517_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),517,ARG,OOOForEach_SimplePaste(OOOForEach518_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach517_1(MACRO,ARGS...)

#define OOOForEach516_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),516,ARG,OOOForEach_SimplePaste(OOOForEach517_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach516_1(MACRO,ARGS...)

#define OOOForEach515_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),515,ARG,OOOForEach_SimplePaste(OOOForEach516_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach515_1(MACRO,ARGS...)

#define OOOForEach514_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),514,ARG,OOOForEach_SimplePaste(OOOForEach515_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach514_1(MACRO,ARGS...)

#define OOOForEach513_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),513,ARG,OOOForEach_SimplePaste(OOOForEach514_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach513_1(MACRO,ARGS...)

#define OOOForEach512_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),512,ARG,OOOForEach_SimplePaste(OOOForEach513_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach512_1(MACRO,ARGS...)

#define OOOForEach511_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),511,ARG,OOOForEach_SimplePaste(OOOForEach512_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach511_1(MACRO,ARGS...)

#define OOOForEach510_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),510,ARG,OOOForEach_SimplePaste(OOOForEach511_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach510_1(MACRO,ARGS...)

#define OOOForEach509_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),509,ARG,OOOForEach_SimplePaste(OOOForEach510_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach509_1(MACRO,ARGS...)

#define OOOForEach508_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),508,ARG,OOOForEach_SimplePaste(OOOForEach509_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach508_1(MACRO,ARGS...)

#define OOOForEach507_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),507,ARG,OOOForEach_SimplePaste(OOOForEach508_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach507_1(MACRO,ARGS...)

#define OOOForEach506_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),506,ARG,OOOForEach_SimplePaste(OOOForEach507_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach506_1(MACRO,ARGS...)

#define OOOForEach505_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),505,ARG,OOOForEach_SimplePaste(OOOForEach506_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach505_1(MACRO,ARGS...)

#define OOOForEach504_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),504,ARG,OOOForEach_SimplePaste(OOOForEach505_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach504_1(MACRO,ARGS...)

#define OOOForEach503_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),503,ARG,OOOForEach_SimplePaste(OOOForEach504_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach503_1(MACRO,ARGS...)

#define OOOForEach502_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),502,ARG,OOOForEach_SimplePaste(OOOForEach503_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach502_1(MACRO,ARGS...)

#define OOOForEach501_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),501,ARG,OOOForEach_SimplePaste(OOOForEach502_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach501_1(MACRO,ARGS...)

#define OOOForEach500_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),500,ARG,OOOForEach_SimplePaste(OOOForEach501_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach500_1(MACRO,ARGS...)

#define OOOForEach499_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),499,ARG,OOOForEach_SimplePaste(OOOForEach500_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach499_1(MACRO,ARGS...)

#define OOOForEach498_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),498,ARG,OOOForEach_SimplePaste(OOOForEach499_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach498_1(MACRO,ARGS...)

#define OOOForEach497_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),497,ARG,OOOForEach_SimplePaste(OOOForEach498_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach497_1(MACRO,ARGS...)

#define OOOForEach496_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),496,ARG,OOOForEach_SimplePaste(OOOForEach497_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach496_1(MACRO,ARGS...)

#define OOOForEach495_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),495,ARG,OOOForEach_SimplePaste(OOOForEach496_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach495_1(MACRO,ARGS...)

#define OOOForEach494_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),494,ARG,OOOForEach_SimplePaste(OOOForEach495_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach494_1(MACRO,ARGS...)

#define OOOForEach493_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),493,ARG,OOOForEach_SimplePaste(OOOForEach494_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach493_1(MACRO,ARGS...)

#define OOOForEach492_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),492,ARG,OOOForEach_SimplePaste(OOOForEach493_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach492_1(MACRO,ARGS...)

#define OOOForEach491_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),491,ARG,OOOForEach_SimplePaste(OOOForEach492_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach491_1(MACRO,ARGS...)

#define OOOForEach490_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),490,ARG,OOOForEach_SimplePaste(OOOForEach491_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach490_1(MACRO,ARGS...)

#define OOOForEach489_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),489,ARG,OOOForEach_SimplePaste(OOOForEach490_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach489_1(MACRO,ARGS...)

#define OOOForEach488_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),488,ARG,OOOForEach_SimplePaste(OOOForEach489_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach488_1(MACRO,ARGS...)

#define OOOForEach487_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),487,ARG,OOOForEach_SimplePaste(OOOForEach488_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach487_1(MACRO,ARGS...)

#define OOOForEach486_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),486,ARG,OOOForEach_SimplePaste(OOOForEach487_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach486_1(MACRO,ARGS...)

#define OOOForEach485_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),485,ARG,OOOForEach_SimplePaste(OOOForEach486_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach485_1(MACRO,ARGS...)

#define OOOForEach484_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),484,ARG,OOOForEach_SimplePaste(OOOForEach485_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach484_1(MACRO,ARGS...)

#define OOOForEach483_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),483,ARG,OOOForEach_SimplePaste(OOOForEach484_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach483_1(MACRO,ARGS...)

#define OOOForEach482_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),482,ARG,OOOForEach_SimplePaste(OOOForEach483_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach482_1(MACRO,ARGS...)

#define OOOForEach481_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),481,ARG,OOOForEach_SimplePaste(OOOForEach482_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach481_1(MACRO,ARGS...)

#define OOOForEach480_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),480,ARG,OOOForEach_SimplePaste(OOOForEach481_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach480_1(MACRO,ARGS...)

#define OOOForEach479_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),479,ARG,OOOForEach_SimplePaste(OOOForEach480_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach479_1(MACRO,ARGS...)

#define OOOForEach478_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),478,ARG,OOOForEach_SimplePaste(OOOForEach479_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach478_1(MACRO,ARGS...)

#define OOOForEach477_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),477,ARG,OOOForEach_SimplePaste(OOOForEach478_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach477_1(MACRO,ARGS...)

#define OOOForEach476_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),476,ARG,OOOForEach_SimplePaste(OOOForEach477_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach476_1(MACRO,ARGS...)

#define OOOForEach475_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),475,ARG,OOOForEach_SimplePaste(OOOForEach476_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach475_1(MACRO,ARGS...)

#define OOOForEach474_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),474,ARG,OOOForEach_SimplePaste(OOOForEach475_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach474_1(MACRO,ARGS...)

#define OOOForEach473_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),473,ARG,OOOForEach_SimplePaste(OOOForEach474_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach473_1(MACRO,ARGS...)

#define OOOForEach472_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),472,ARG,OOOForEach_SimplePaste(OOOForEach473_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach472_1(MACRO,ARGS...)

#define OOOForEach471_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),471,ARG,OOOForEach_SimplePaste(OOOForEach472_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach471_1(MACRO,ARGS...)

#define OOOForEach470_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),470,ARG,OOOForEach_SimplePaste(OOOForEach471_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach470_1(MACRO,ARGS...)

#define OOOForEach469_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),469,ARG,OOOForEach_SimplePaste(OOOForEach470_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach469_1(MACRO,ARGS...)

#define OOOForEach468_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),468,ARG,OOOForEach_SimplePaste(OOOForEach469_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach468_1(MACRO,ARGS...)

#define OOOForEach467_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),467,ARG,OOOForEach_SimplePaste(OOOForEach468_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach467_1(MACRO,ARGS...)

#define OOOForEach466_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),466,ARG,OOOForEach_SimplePaste(OOOForEach467_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach466_1(MACRO,ARGS...)

#define OOOForEach465_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),465,ARG,OOOForEach_SimplePaste(OOOForEach466_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach465_1(MACRO,ARGS...)

#define OOOForEach464_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),464,ARG,OOOForEach_SimplePaste(OOOForEach465_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach464_1(MACRO,ARGS...)

#define OOOForEach463_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),463,ARG,OOOForEach_SimplePaste(OOOForEach464_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach463_1(MACRO,ARGS...)

#define OOOForEach462_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),462,ARG,OOOForEach_SimplePaste(OOOForEach463_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach462_1(MACRO,ARGS...)

#define OOOForEach461_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),461,ARG,OOOForEach_SimplePaste(OOOForEach462_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach461_1(MACRO,ARGS...)

#define OOOForEach460_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),460,ARG,OOOForEach_SimplePaste(OOOForEach461_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach460_1(MACRO,ARGS...)

#define OOOForEach459_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),459,ARG,OOOForEach_SimplePaste(OOOForEach460_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach459_1(MACRO,ARGS...)

#define OOOForEach458_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),458,ARG,OOOForEach_SimplePaste(OOOForEach459_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach458_1(MACRO,ARGS...)

#define OOOForEach457_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),457,ARG,OOOForEach_SimplePaste(OOOForEach458_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach457_1(MACRO,ARGS...)

#define OOOForEach456_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),456,ARG,OOOForEach_SimplePaste(OOOForEach457_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach456_1(MACRO,ARGS...)

#define OOOForEach455_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),455,ARG,OOOForEach_SimplePaste(OOOForEach456_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach455_1(MACRO,ARGS...)

#define OOOForEach454_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),454,ARG,OOOForEach_SimplePaste(OOOForEach455_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach454_1(MACRO,ARGS...)

#define OOOForEach453_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),453,ARG,OOOForEach_SimplePaste(OOOForEach454_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach453_1(MACRO,ARGS...)

#define OOOForEach452_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),452,ARG,OOOForEach_SimplePaste(OOOForEach453_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach452_1(MACRO,ARGS...)

#define OOOForEach451_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),451,ARG,OOOForEach_SimplePaste(OOOForEach452_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach451_1(MACRO,ARGS...)

#define OOOForEach450_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),450,ARG,OOOForEach_SimplePaste(OOOForEach451_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach450_1(MACRO,ARGS...)

#define OOOForEach449_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),449,ARG,OOOForEach_SimplePaste(OOOForEach450_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach449_1(MACRO,ARGS...)

#define OOOForEach448_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),448,ARG,OOOForEach_SimplePaste(OOOForEach449_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach448_1(MACRO,ARGS...)

#define OOOForEach447_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),447,ARG,OOOForEach_SimplePaste(OOOForEach448_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach447_1(MACRO,ARGS...)

#define OOOForEach446_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),446,ARG,OOOForEach_SimplePaste(OOOForEach447_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach446_1(MACRO,ARGS...)

#define OOOForEach445_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),445,ARG,OOOForEach_SimplePaste(OOOForEach446_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach445_1(MACRO,ARGS...)

#define OOOForEach444_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),444,ARG,OOOForEach_SimplePaste(OOOForEach445_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach444_1(MACRO,ARGS...)

#define OOOForEach443_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),443,ARG,OOOForEach_SimplePaste(OOOForEach444_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach443_1(MACRO,ARGS...)

#define OOOForEach442_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),442,ARG,OOOForEach_SimplePaste(OOOForEach443_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach442_1(MACRO,ARGS...)

#define OOOForEach441_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),441,ARG,OOOForEach_SimplePaste(OOOForEach442_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach441_1(MACRO,ARGS...)

#define OOOForEach440_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),440,ARG,OOOForEach_SimplePaste(OOOForEach441_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach440_1(MACRO,ARGS...)

#define OOOForEach439_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),439,ARG,OOOForEach_SimplePaste(OOOForEach440_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach439_1(MACRO,ARGS...)

#define OOOForEach438_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),438,ARG,OOOForEach_SimplePaste(OOOForEach439_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach438_1(MACRO,ARGS...)

#define OOOForEach437_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),437,ARG,OOOForEach_SimplePaste(OOOForEach438_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach437_1(MACRO,ARGS...)

#define OOOForEach436_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),436,ARG,OOOForEach_SimplePaste(OOOForEach437_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach436_1(MACRO,ARGS...)

#define OOOForEach435_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),435,ARG,OOOForEach_SimplePaste(OOOForEach436_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach435_1(MACRO,ARGS...)

#define OOOForEach434_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),434,ARG,OOOForEach_SimplePaste(OOOForEach435_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach434_1(MACRO,ARGS...)

#define OOOForEach433_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),433,ARG,OOOForEach_SimplePaste(OOOForEach434_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach433_1(MACRO,ARGS...)

#define OOOForEach432_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),432,ARG,OOOForEach_SimplePaste(OOOForEach433_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach432_1(MACRO,ARGS...)

#define OOOForEach431_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),431,ARG,OOOForEach_SimplePaste(OOOForEach432_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach431_1(MACRO,ARGS...)

#define OOOForEach430_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),430,ARG,OOOForEach_SimplePaste(OOOForEach431_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach430_1(MACRO,ARGS...)

#define OOOForEach429_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),429,ARG,OOOForEach_SimplePaste(OOOForEach430_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach429_1(MACRO,ARGS...)

#define OOOForEach428_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),428,ARG,OOOForEach_SimplePaste(OOOForEach429_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach428_1(MACRO,ARGS...)

#define OOOForEach427_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),427,ARG,OOOForEach_SimplePaste(OOOForEach428_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach427_1(MACRO,ARGS...)

#define OOOForEach426_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),426,ARG,OOOForEach_SimplePaste(OOOForEach427_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach426_1(MACRO,ARGS...)

#define OOOForEach425_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),425,ARG,OOOForEach_SimplePaste(OOOForEach426_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach425_1(MACRO,ARGS...)

#define OOOForEach424_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),424,ARG,OOOForEach_SimplePaste(OOOForEach425_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach424_1(MACRO,ARGS...)

#define OOOForEach423_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),423,ARG,OOOForEach_SimplePaste(OOOForEach424_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach423_1(MACRO,ARGS...)

#define OOOForEach422_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),422,ARG,OOOForEach_SimplePaste(OOOForEach423_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach422_1(MACRO,ARGS...)

#define OOOForEach421_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),421,ARG,OOOForEach_SimplePaste(OOOForEach422_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach421_1(MACRO,ARGS...)

#define OOOForEach420_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),420,ARG,OOOForEach_SimplePaste(OOOForEach421_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach420_1(MACRO,ARGS...)

#define OOOForEach419_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),419,ARG,OOOForEach_SimplePaste(OOOForEach420_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach419_1(MACRO,ARGS...)

#define OOOForEach418_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),418,ARG,OOOForEach_SimplePaste(OOOForEach419_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach418_1(MACRO,ARGS...)

#define OOOForEach417_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),417,ARG,OOOForEach_SimplePaste(OOOForEach418_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach417_1(MACRO,ARGS...)

#define OOOForEach416_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),416,ARG,OOOForEach_SimplePaste(OOOForEach417_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach416_1(MACRO,ARGS...)

#define OOOForEach415_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),415,ARG,OOOForEach_SimplePaste(OOOForEach416_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach415_1(MACRO,ARGS...)

#define OOOForEach414_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),414,ARG,OOOForEach_SimplePaste(OOOForEach415_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach414_1(MACRO,ARGS...)

#define OOOForEach413_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),413,ARG,OOOForEach_SimplePaste(OOOForEach414_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach413_1(MACRO,ARGS...)

#define OOOForEach412_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),412,ARG,OOOForEach_SimplePaste(OOOForEach413_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach412_1(MACRO,ARGS...)

#define OOOForEach411_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),411,ARG,OOOForEach_SimplePaste(OOOForEach412_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach411_1(MACRO,ARGS...)

#define OOOForEach410_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),410,ARG,OOOForEach_SimplePaste(OOOForEach411_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach410_1(MACRO,ARGS...)

#define OOOForEach409_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),409,ARG,OOOForEach_SimplePaste(OOOForEach410_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach409_1(MACRO,ARGS...)

#define OOOForEach408_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),408,ARG,OOOForEach_SimplePaste(OOOForEach409_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach408_1(MACRO,ARGS...)

#define OOOForEach407_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),407,ARG,OOOForEach_SimplePaste(OOOForEach408_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach407_1(MACRO,ARGS...)

#define OOOForEach406_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),406,ARG,OOOForEach_SimplePaste(OOOForEach407_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach406_1(MACRO,ARGS...)

#define OOOForEach405_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),405,ARG,OOOForEach_SimplePaste(OOOForEach406_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach405_1(MACRO,ARGS...)

#define OOOForEach404_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),404,ARG,OOOForEach_SimplePaste(OOOForEach405_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach404_1(MACRO,ARGS...)

#define OOOForEach403_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),403,ARG,OOOForEach_SimplePaste(OOOForEach404_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach403_1(MACRO,ARGS...)

#define OOOForEach402_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),402,ARG,OOOForEach_SimplePaste(OOOForEach403_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach402_1(MACRO,ARGS...)

#define OOOForEach401_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),401,ARG,OOOForEach_SimplePaste(OOOForEach402_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach401_1(MACRO,ARGS...)

#define OOOForEach400_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),400,ARG,OOOForEach_SimplePaste(OOOForEach401_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach400_1(MACRO,ARGS...)

#define OOOForEach399_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),399,ARG,OOOForEach_SimplePaste(OOOForEach400_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach399_1(MACRO,ARGS...)

#define OOOForEach398_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),398,ARG,OOOForEach_SimplePaste(OOOForEach399_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach398_1(MACRO,ARGS...)

#define OOOForEach397_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),397,ARG,OOOForEach_SimplePaste(OOOForEach398_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach397_1(MACRO,ARGS...)

#define OOOForEach396_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),396,ARG,OOOForEach_SimplePaste(OOOForEach397_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach396_1(MACRO,ARGS...)

#define OOOForEach395_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),395,ARG,OOOForEach_SimplePaste(OOOForEach396_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach395_1(MACRO,ARGS...)

#define OOOForEach394_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),394,ARG,OOOForEach_SimplePaste(OOOForEach395_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach394_1(MACRO,ARGS...)

#define OOOForEach393_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),393,ARG,OOOForEach_SimplePaste(OOOForEach394_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach393_1(MACRO,ARGS...)

#define OOOForEach392_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),392,ARG,OOOForEach_SimplePaste(OOOForEach393_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach392_1(MACRO,ARGS...)

#define OOOForEach391_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),391,ARG,OOOForEach_SimplePaste(OOOForEach392_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach391_1(MACRO,ARGS...)

#define OOOForEach390_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),390,ARG,OOOForEach_SimplePaste(OOOForEach391_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach390_1(MACRO,ARGS...)

#define OOOForEach389_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),389,ARG,OOOForEach_SimplePaste(OOOForEach390_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach389_1(MACRO,ARGS...)

#define OOOForEach388_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),388,ARG,OOOForEach_SimplePaste(OOOForEach389_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach388_1(MACRO,ARGS...)

#define OOOForEach387_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),387,ARG,OOOForEach_SimplePaste(OOOForEach388_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach387_1(MACRO,ARGS...)

#define OOOForEach386_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),386,ARG,OOOForEach_SimplePaste(OOOForEach387_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach386_1(MACRO,ARGS...)

#define OOOForEach385_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),385,ARG,OOOForEach_SimplePaste(OOOForEach386_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach385_1(MACRO,ARGS...)

#define OOOForEach384_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),384,ARG,OOOForEach_SimplePaste(OOOForEach385_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach384_1(MACRO,ARGS...)

#define OOOForEach383_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),383,ARG,OOOForEach_SimplePaste(OOOForEach384_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach383_1(MACRO,ARGS...)

#define OOOForEach382_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),382,ARG,OOOForEach_SimplePaste(OOOForEach383_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach382_1(MACRO,ARGS...)

#define OOOForEach381_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),381,ARG,OOOForEach_SimplePaste(OOOForEach382_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach381_1(MACRO,ARGS...)

#define OOOForEach380_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),380,ARG,OOOForEach_SimplePaste(OOOForEach381_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach380_1(MACRO,ARGS...)

#define OOOForEach379_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),379,ARG,OOOForEach_SimplePaste(OOOForEach380_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach379_1(MACRO,ARGS...)

#define OOOForEach378_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),378,ARG,OOOForEach_SimplePaste(OOOForEach379_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach378_1(MACRO,ARGS...)

#define OOOForEach377_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),377,ARG,OOOForEach_SimplePaste(OOOForEach378_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach377_1(MACRO,ARGS...)

#define OOOForEach376_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),376,ARG,OOOForEach_SimplePaste(OOOForEach377_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach376_1(MACRO,ARGS...)

#define OOOForEach375_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),375,ARG,OOOForEach_SimplePaste(OOOForEach376_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach375_1(MACRO,ARGS...)

#define OOOForEach374_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),374,ARG,OOOForEach_SimplePaste(OOOForEach375_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach374_1(MACRO,ARGS...)

#define OOOForEach373_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),373,ARG,OOOForEach_SimplePaste(OOOForEach374_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach373_1(MACRO,ARGS...)

#define OOOForEach372_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),372,ARG,OOOForEach_SimplePaste(OOOForEach373_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach372_1(MACRO,ARGS...)

#define OOOForEach371_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),371,ARG,OOOForEach_SimplePaste(OOOForEach372_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach371_1(MACRO,ARGS...)

#define OOOForEach370_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),370,ARG,OOOForEach_SimplePaste(OOOForEach371_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach370_1(MACRO,ARGS...)

#define OOOForEach369_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),369,ARG,OOOForEach_SimplePaste(OOOForEach370_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach369_1(MACRO,ARGS...)

#define OOOForEach368_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),368,ARG,OOOForEach_SimplePaste(OOOForEach369_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach368_1(MACRO,ARGS...)

#define OOOForEach367_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),367,ARG,OOOForEach_SimplePaste(OOOForEach368_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach367_1(MACRO,ARGS...)

#define OOOForEach366_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),366,ARG,OOOForEach_SimplePaste(OOOForEach367_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach366_1(MACRO,ARGS...)

#define OOOForEach365_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),365,ARG,OOOForEach_SimplePaste(OOOForEach366_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach365_1(MACRO,ARGS...)

#define OOOForEach364_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),364,ARG,OOOForEach_SimplePaste(OOOForEach365_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach364_1(MACRO,ARGS...)

#define OOOForEach363_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),363,ARG,OOOForEach_SimplePaste(OOOForEach364_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach363_1(MACRO,ARGS...)

#define OOOForEach362_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),362,ARG,OOOForEach_SimplePaste(OOOForEach363_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach362_1(MACRO,ARGS...)

#define OOOForEach361_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),361,ARG,OOOForEach_SimplePaste(OOOForEach362_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach361_1(MACRO,ARGS...)

#define OOOForEach360_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),360,ARG,OOOForEach_SimplePaste(OOOForEach361_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach360_1(MACRO,ARGS...)

#define OOOForEach359_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),359,ARG,OOOForEach_SimplePaste(OOOForEach360_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach359_1(MACRO,ARGS...)

#define OOOForEach358_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),358,ARG,OOOForEach_SimplePaste(OOOForEach359_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach358_1(MACRO,ARGS...)

#define OOOForEach357_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),357,ARG,OOOForEach_SimplePaste(OOOForEach358_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach357_1(MACRO,ARGS...)

#define OOOForEach356_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),356,ARG,OOOForEach_SimplePaste(OOOForEach357_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach356_1(MACRO,ARGS...)

#define OOOForEach355_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),355,ARG,OOOForEach_SimplePaste(OOOForEach356_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach355_1(MACRO,ARGS...)

#define OOOForEach354_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),354,ARG,OOOForEach_SimplePaste(OOOForEach355_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach354_1(MACRO,ARGS...)

#define OOOForEach353_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),353,ARG,OOOForEach_SimplePaste(OOOForEach354_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach353_1(MACRO,ARGS...)

#define OOOForEach352_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),352,ARG,OOOForEach_SimplePaste(OOOForEach353_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach352_1(MACRO,ARGS...)

#define OOOForEach351_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),351,ARG,OOOForEach_SimplePaste(OOOForEach352_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach351_1(MACRO,ARGS...)

#define OOOForEach350_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),350,ARG,OOOForEach_SimplePaste(OOOForEach351_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach350_1(MACRO,ARGS...)

#define OOOForEach349_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),349,ARG,OOOForEach_SimplePaste(OOOForEach350_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach349_1(MACRO,ARGS...)

#define OOOForEach348_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),348,ARG,OOOForEach_SimplePaste(OOOForEach349_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach348_1(MACRO,ARGS...)

#define OOOForEach347_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),347,ARG,OOOForEach_SimplePaste(OOOForEach348_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach347_1(MACRO,ARGS...)

#define OOOForEach346_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),346,ARG,OOOForEach_SimplePaste(OOOForEach347_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach346_1(MACRO,ARGS...)

#define OOOForEach345_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),345,ARG,OOOForEach_SimplePaste(OOOForEach346_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach345_1(MACRO,ARGS...)

#define OOOForEach344_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),344,ARG,OOOForEach_SimplePaste(OOOForEach345_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach344_1(MACRO,ARGS...)

#define OOOForEach343_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),343,ARG,OOOForEach_SimplePaste(OOOForEach344_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach343_1(MACRO,ARGS...)

#define OOOForEach342_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),342,ARG,OOOForEach_SimplePaste(OOOForEach343_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach342_1(MACRO,ARGS...)

#define OOOForEach341_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),341,ARG,OOOForEach_SimplePaste(OOOForEach342_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach341_1(MACRO,ARGS...)

#define OOOForEach340_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),340,ARG,OOOForEach_SimplePaste(OOOForEach341_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach340_1(MACRO,ARGS...)

#define OOOForEach339_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),339,ARG,OOOForEach_SimplePaste(OOOForEach340_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach339_1(MACRO,ARGS...)

#define OOOForEach338_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),338,ARG,OOOForEach_SimplePaste(OOOForEach339_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach338_1(MACRO,ARGS...)

#define OOOForEach337_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),337,ARG,OOOForEach_SimplePaste(OOOForEach338_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach337_1(MACRO,ARGS...)

#define OOOForEach336_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),336,ARG,OOOForEach_SimplePaste(OOOForEach337_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach336_1(MACRO,ARGS...)

#define OOOForEach335_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),335,ARG,OOOForEach_SimplePaste(OOOForEach336_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach335_1(MACRO,ARGS...)

#define OOOForEach334_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),334,ARG,OOOForEach_SimplePaste(OOOForEach335_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach334_1(MACRO,ARGS...)

#define OOOForEach333_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),333,ARG,OOOForEach_SimplePaste(OOOForEach334_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach333_1(MACRO,ARGS...)

#define OOOForEach332_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),332,ARG,OOOForEach_SimplePaste(OOOForEach333_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach332_1(MACRO,ARGS...)

#define OOOForEach331_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),331,ARG,OOOForEach_SimplePaste(OOOForEach332_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach331_1(MACRO,ARGS...)

#define OOOForEach330_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),330,ARG,OOOForEach_SimplePaste(OOOForEach331_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach330_1(MACRO,ARGS...)

#define OOOForEach329_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),329,ARG,OOOForEach_SimplePaste(OOOForEach330_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach329_1(MACRO,ARGS...)

#define OOOForEach328_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),328,ARG,OOOForEach_SimplePaste(OOOForEach329_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach328_1(MACRO,ARGS...)

#define OOOForEach327_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),327,ARG,OOOForEach_SimplePaste(OOOForEach328_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach327_1(MACRO,ARGS...)

#define OOOForEach326_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),326,ARG,OOOForEach_SimplePaste(OOOForEach327_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach326_1(MACRO,ARGS...)

#define OOOForEach325_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),325,ARG,OOOForEach_SimplePaste(OOOForEach326_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach325_1(MACRO,ARGS...)

#define OOOForEach324_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),324,ARG,OOOForEach_SimplePaste(OOOForEach325_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach324_1(MACRO,ARGS...)

#define OOOForEach323_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),323,ARG,OOOForEach_SimplePaste(OOOForEach324_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach323_1(MACRO,ARGS...)

#define OOOForEach322_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),322,ARG,OOOForEach_SimplePaste(OOOForEach323_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach322_1(MACRO,ARGS...)

#define OOOForEach321_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),321,ARG,OOOForEach_SimplePaste(OOOForEach322_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach321_1(MACRO,ARGS...)

#define OOOForEach320_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),320,ARG,OOOForEach_SimplePaste(OOOForEach321_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach320_1(MACRO,ARGS...)

#define OOOForEach319_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),319,ARG,OOOForEach_SimplePaste(OOOForEach320_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach319_1(MACRO,ARGS...)

#define OOOForEach318_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),318,ARG,OOOForEach_SimplePaste(OOOForEach319_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach318_1(MACRO,ARGS...)

#define OOOForEach317_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),317,ARG,OOOForEach_SimplePaste(OOOForEach318_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach317_1(MACRO,ARGS...)

#define OOOForEach316_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),316,ARG,OOOForEach_SimplePaste(OOOForEach317_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach316_1(MACRO,ARGS...)

#define OOOForEach315_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),315,ARG,OOOForEach_SimplePaste(OOOForEach316_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach315_1(MACRO,ARGS...)

#define OOOForEach314_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),314,ARG,OOOForEach_SimplePaste(OOOForEach315_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach314_1(MACRO,ARGS...)

#define OOOForEach313_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),313,ARG,OOOForEach_SimplePaste(OOOForEach314_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach313_1(MACRO,ARGS...)

#define OOOForEach312_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),312,ARG,OOOForEach_SimplePaste(OOOForEach313_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach312_1(MACRO,ARGS...)

#define OOOForEach311_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),311,ARG,OOOForEach_SimplePaste(OOOForEach312_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach311_1(MACRO,ARGS...)

#define OOOForEach310_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),310,ARG,OOOForEach_SimplePaste(OOOForEach311_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach310_1(MACRO,ARGS...)

#define OOOForEach309_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),309,ARG,OOOForEach_SimplePaste(OOOForEach310_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach309_1(MACRO,ARGS...)

#define OOOForEach308_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),308,ARG,OOOForEach_SimplePaste(OOOForEach309_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach308_1(MACRO,ARGS...)

#define OOOForEach307_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),307,ARG,OOOForEach_SimplePaste(OOOForEach308_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach307_1(MACRO,ARGS...)

#define OOOForEach306_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),306,ARG,OOOForEach_SimplePaste(OOOForEach307_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach306_1(MACRO,ARGS...)

#define OOOForEach305_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),305,ARG,OOOForEach_SimplePaste(OOOForEach306_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach305_1(MACRO,ARGS...)

#define OOOForEach304_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),304,ARG,OOOForEach_SimplePaste(OOOForEach305_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach304_1(MACRO,ARGS...)

#define OOOForEach303_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),303,ARG,OOOForEach_SimplePaste(OOOForEach304_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach303_1(MACRO,ARGS...)

#define OOOForEach302_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),302,ARG,OOOForEach_SimplePaste(OOOForEach303_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach302_1(MACRO,ARGS...)

#define OOOForEach301_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),301,ARG,OOOForEach_SimplePaste(OOOForEach302_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach301_1(MACRO,ARGS...)

#define OOOForEach300_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),300,ARG,OOOForEach_SimplePaste(OOOForEach301_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach300_1(MACRO,ARGS...)

#define OOOForEach299_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),299,ARG,OOOForEach_SimplePaste(OOOForEach300_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach299_1(MACRO,ARGS...)

#define OOOForEach298_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),298,ARG,OOOForEach_SimplePaste(OOOForEach299_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach298_1(MACRO,ARGS...)

#define OOOForEach297_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),297,ARG,OOOForEach_SimplePaste(OOOForEach298_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach297_1(MACRO,ARGS...)

#define OOOForEach296_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),296,ARG,OOOForEach_SimplePaste(OOOForEach297_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach296_1(MACRO,ARGS...)

#define OOOForEach295_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),295,ARG,OOOForEach_SimplePaste(OOOForEach296_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach295_1(MACRO,ARGS...)

#define OOOForEach294_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),294,ARG,OOOForEach_SimplePaste(OOOForEach295_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach294_1(MACRO,ARGS...)

#define OOOForEach293_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),293,ARG,OOOForEach_SimplePaste(OOOForEach294_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach293_1(MACRO,ARGS...)

#define OOOForEach292_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),292,ARG,OOOForEach_SimplePaste(OOOForEach293_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach292_1(MACRO,ARGS...)

#define OOOForEach291_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),291,ARG,OOOForEach_SimplePaste(OOOForEach292_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach291_1(MACRO,ARGS...)

#define OOOForEach290_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),290,ARG,OOOForEach_SimplePaste(OOOForEach291_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach290_1(MACRO,ARGS...)

#define OOOForEach289_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),289,ARG,OOOForEach_SimplePaste(OOOForEach290_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach289_1(MACRO,ARGS...)

#define OOOForEach288_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),288,ARG,OOOForEach_SimplePaste(OOOForEach289_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach288_1(MACRO,ARGS...)

#define OOOForEach287_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),287,ARG,OOOForEach_SimplePaste(OOOForEach288_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach287_1(MACRO,ARGS...)

#define OOOForEach286_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),286,ARG,OOOForEach_SimplePaste(OOOForEach287_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach286_1(MACRO,ARGS...)

#define OOOForEach285_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),285,ARG,OOOForEach_SimplePaste(OOOForEach286_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach285_1(MACRO,ARGS...)

#define OOOForEach284_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),284,ARG,OOOForEach_SimplePaste(OOOForEach285_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach284_1(MACRO,ARGS...)

#define OOOForEach283_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),283,ARG,OOOForEach_SimplePaste(OOOForEach284_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach283_1(MACRO,ARGS...)

#define OOOForEach282_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),282,ARG,OOOForEach_SimplePaste(OOOForEach283_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach282_1(MACRO,ARGS...)

#define OOOForEach281_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),281,ARG,OOOForEach_SimplePaste(OOOForEach282_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach281_1(MACRO,ARGS...)

#define OOOForEach280_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),280,ARG,OOOForEach_SimplePaste(OOOForEach281_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach280_1(MACRO,ARGS...)

#define OOOForEach279_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),279,ARG,OOOForEach_SimplePaste(OOOForEach280_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach279_1(MACRO,ARGS...)

#define OOOForEach278_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),278,ARG,OOOForEach_SimplePaste(OOOForEach279_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach278_1(MACRO,ARGS...)

#define OOOForEach277_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),277,ARG,OOOForEach_SimplePaste(OOOForEach278_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach277_1(MACRO,ARGS...)

#define OOOForEach276_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),276,ARG,OOOForEach_SimplePaste(OOOForEach277_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach276_1(MACRO,ARGS...)

#define OOOForEach275_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),275,ARG,OOOForEach_SimplePaste(OOOForEach276_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach275_1(MACRO,ARGS...)

#define OOOForEach274_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),274,ARG,OOOForEach_SimplePaste(OOOForEach275_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach274_1(MACRO,ARGS...)

#define OOOForEach273_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),273,ARG,OOOForEach_SimplePaste(OOOForEach274_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach273_1(MACRO,ARGS...)

#define OOOForEach272_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),272,ARG,OOOForEach_SimplePaste(OOOForEach273_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach272_1(MACRO,ARGS...)

#define OOOForEach271_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),271,ARG,OOOForEach_SimplePaste(OOOForEach272_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach271_1(MACRO,ARGS...)

#define OOOForEach270_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),270,ARG,OOOForEach_SimplePaste(OOOForEach271_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach270_1(MACRO,ARGS...)

#define OOOForEach269_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),269,ARG,OOOForEach_SimplePaste(OOOForEach270_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach269_1(MACRO,ARGS...)

#define OOOForEach268_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),268,ARG,OOOForEach_SimplePaste(OOOForEach269_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach268_1(MACRO,ARGS...)

#define OOOForEach267_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),267,ARG,OOOForEach_SimplePaste(OOOForEach268_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach267_1(MACRO,ARGS...)

#define OOOForEach266_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),266,ARG,OOOForEach_SimplePaste(OOOForEach267_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach266_1(MACRO,ARGS...)

#define OOOForEach265_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),265,ARG,OOOForEach_SimplePaste(OOOForEach266_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach265_1(MACRO,ARGS...)

#define OOOForEach264_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),264,ARG,OOOForEach_SimplePaste(OOOForEach265_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach264_1(MACRO,ARGS...)

#define OOOForEach263_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),263,ARG,OOOForEach_SimplePaste(OOOForEach264_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach263_1(MACRO,ARGS...)

#define OOOForEach262_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),262,ARG,OOOForEach_SimplePaste(OOOForEach263_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach262_1(MACRO,ARGS...)

#define OOOForEach261_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),261,ARG,OOOForEach_SimplePaste(OOOForEach262_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach261_1(MACRO,ARGS...)

#define OOOForEach260_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),260,ARG,OOOForEach_SimplePaste(OOOForEach261_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach260_1(MACRO,ARGS...)

#define OOOForEach259_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),259,ARG,OOOForEach_SimplePaste(OOOForEach260_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach259_1(MACRO,ARGS...)

#define OOOForEach258_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),258,ARG,OOOForEach_SimplePaste(OOOForEach259_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach258_1(MACRO,ARGS...)

#define OOOForEach257_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),257,ARG,OOOForEach_SimplePaste(OOOForEach258_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach257_1(MACRO,ARGS...)

#define OOOForEach256_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),256,ARG,OOOForEach_SimplePaste(OOOForEach257_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach256_1(MACRO,ARGS...)

#define OOOForEach255_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),255,ARG,OOOForEach_SimplePaste(OOOForEach256_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach255_1(MACRO,ARGS...)

#define OOOForEach254_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),254,ARG,OOOForEach_SimplePaste(OOOForEach255_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach254_1(MACRO,ARGS...)

#define OOOForEach253_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),253,ARG,OOOForEach_SimplePaste(OOOForEach254_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach253_1(MACRO,ARGS...)

#define OOOForEach252_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),252,ARG,OOOForEach_SimplePaste(OOOForEach253_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach252_1(MACRO,ARGS...)

#define OOOForEach251_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),251,ARG,OOOForEach_SimplePaste(OOOForEach252_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach251_1(MACRO,ARGS...)

#define OOOForEach250_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),250,ARG,OOOForEach_SimplePaste(OOOForEach251_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach250_1(MACRO,ARGS...)

#define OOOForEach249_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),249,ARG,OOOForEach_SimplePaste(OOOForEach250_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach249_1(MACRO,ARGS...)

#define OOOForEach248_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),248,ARG,OOOForEach_SimplePaste(OOOForEach249_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach248_1(MACRO,ARGS...)

#define OOOForEach247_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),247,ARG,OOOForEach_SimplePaste(OOOForEach248_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach247_1(MACRO,ARGS...)

#define OOOForEach246_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),246,ARG,OOOForEach_SimplePaste(OOOForEach247_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach246_1(MACRO,ARGS...)

#define OOOForEach245_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),245,ARG,OOOForEach_SimplePaste(OOOForEach246_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach245_1(MACRO,ARGS...)

#define OOOForEach244_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),244,ARG,OOOForEach_SimplePaste(OOOForEach245_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach244_1(MACRO,ARGS...)

#define OOOForEach243_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),243,ARG,OOOForEach_SimplePaste(OOOForEach244_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach243_1(MACRO,ARGS...)

#define OOOForEach242_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),242,ARG,OOOForEach_SimplePaste(OOOForEach243_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach242_1(MACRO,ARGS...)

#define OOOForEach241_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),241,ARG,OOOForEach_SimplePaste(OOOForEach242_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach241_1(MACRO,ARGS...)

#define OOOForEach240_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),240,ARG,OOOForEach_SimplePaste(OOOForEach241_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach240_1(MACRO,ARGS...)

#define OOOForEach239_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),239,ARG,OOOForEach_SimplePaste(OOOForEach240_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach239_1(MACRO,ARGS...)

#define OOOForEach238_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),238,ARG,OOOForEach_SimplePaste(OOOForEach239_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach238_1(MACRO,ARGS...)

#define OOOForEach237_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),237,ARG,OOOForEach_SimplePaste(OOOForEach238_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach237_1(MACRO,ARGS...)

#define OOOForEach236_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),236,ARG,OOOForEach_SimplePaste(OOOForEach237_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach236_1(MACRO,ARGS...)

#define OOOForEach235_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),235,ARG,OOOForEach_SimplePaste(OOOForEach236_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach235_1(MACRO,ARGS...)

#define OOOForEach234_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),234,ARG,OOOForEach_SimplePaste(OOOForEach235_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach234_1(MACRO,ARGS...)

#define OOOForEach233_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),233,ARG,OOOForEach_SimplePaste(OOOForEach234_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach233_1(MACRO,ARGS...)

#define OOOForEach232_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),232,ARG,OOOForEach_SimplePaste(OOOForEach233_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach232_1(MACRO,ARGS...)

#define OOOForEach231_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),231,ARG,OOOForEach_SimplePaste(OOOForEach232_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach231_1(MACRO,ARGS...)

#define OOOForEach230_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),230,ARG,OOOForEach_SimplePaste(OOOForEach231_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach230_1(MACRO,ARGS...)

#define OOOForEach229_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),229,ARG,OOOForEach_SimplePaste(OOOForEach230_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach229_1(MACRO,ARGS...)

#define OOOForEach228_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),228,ARG,OOOForEach_SimplePaste(OOOForEach229_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach228_1(MACRO,ARGS...)

#define OOOForEach227_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),227,ARG,OOOForEach_SimplePaste(OOOForEach228_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach227_1(MACRO,ARGS...)

#define OOOForEach226_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),226,ARG,OOOForEach_SimplePaste(OOOForEach227_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach226_1(MACRO,ARGS...)

#define OOOForEach225_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),225,ARG,OOOForEach_SimplePaste(OOOForEach226_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach225_1(MACRO,ARGS...)

#define OOOForEach224_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),224,ARG,OOOForEach_SimplePaste(OOOForEach225_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach224_1(MACRO,ARGS...)

#define OOOForEach223_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),223,ARG,OOOForEach_SimplePaste(OOOForEach224_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach223_1(MACRO,ARGS...)

#define OOOForEach222_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),222,ARG,OOOForEach_SimplePaste(OOOForEach223_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach222_1(MACRO,ARGS...)

#define OOOForEach221_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),221,ARG,OOOForEach_SimplePaste(OOOForEach222_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach221_1(MACRO,ARGS...)

#define OOOForEach220_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),220,ARG,OOOForEach_SimplePaste(OOOForEach221_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach220_1(MACRO,ARGS...)

#define OOOForEach219_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),219,ARG,OOOForEach_SimplePaste(OOOForEach220_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach219_1(MACRO,ARGS...)

#define OOOForEach218_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),218,ARG,OOOForEach_SimplePaste(OOOForEach219_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach218_1(MACRO,ARGS...)

#define OOOForEach217_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),217,ARG,OOOForEach_SimplePaste(OOOForEach218_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach217_1(MACRO,ARGS...)

#define OOOForEach216_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),216,ARG,OOOForEach_SimplePaste(OOOForEach217_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach216_1(MACRO,ARGS...)

#define OOOForEach215_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),215,ARG,OOOForEach_SimplePaste(OOOForEach216_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach215_1(MACRO,ARGS...)

#define OOOForEach214_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),214,ARG,OOOForEach_SimplePaste(OOOForEach215_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach214_1(MACRO,ARGS...)

#define OOOForEach213_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),213,ARG,OOOForEach_SimplePaste(OOOForEach214_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach213_1(MACRO,ARGS...)

#define OOOForEach212_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),212,ARG,OOOForEach_SimplePaste(OOOForEach213_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach212_1(MACRO,ARGS...)

#define OOOForEach211_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),211,ARG,OOOForEach_SimplePaste(OOOForEach212_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach211_1(MACRO,ARGS...)

#define OOOForEach210_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),210,ARG,OOOForEach_SimplePaste(OOOForEach211_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach210_1(MACRO,ARGS...)

#define OOOForEach209_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),209,ARG,OOOForEach_SimplePaste(OOOForEach210_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach209_1(MACRO,ARGS...)

#define OOOForEach208_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),208,ARG,OOOForEach_SimplePaste(OOOForEach209_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach208_1(MACRO,ARGS...)

#define OOOForEach207_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),207,ARG,OOOForEach_SimplePaste(OOOForEach208_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach207_1(MACRO,ARGS...)

#define OOOForEach206_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),206,ARG,OOOForEach_SimplePaste(OOOForEach207_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach206_1(MACRO,ARGS...)

#define OOOForEach205_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),205,ARG,OOOForEach_SimplePaste(OOOForEach206_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach205_1(MACRO,ARGS...)

#define OOOForEach204_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),204,ARG,OOOForEach_SimplePaste(OOOForEach205_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach204_1(MACRO,ARGS...)

#define OOOForEach203_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),203,ARG,OOOForEach_SimplePaste(OOOForEach204_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach203_1(MACRO,ARGS...)

#define OOOForEach202_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),202,ARG,OOOForEach_SimplePaste(OOOForEach203_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach202_1(MACRO,ARGS...)

#define OOOForEach201_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),201,ARG,OOOForEach_SimplePaste(OOOForEach202_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach201_1(MACRO,ARGS...)

#define OOOForEach200_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),200,ARG,OOOForEach_SimplePaste(OOOForEach201_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach200_1(MACRO,ARGS...)

#define OOOForEach199_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),199,ARG,OOOForEach_SimplePaste(OOOForEach200_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach199_1(MACRO,ARGS...)

#define OOOForEach198_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),198,ARG,OOOForEach_SimplePaste(OOOForEach199_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach198_1(MACRO,ARGS...)

#define OOOForEach197_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),197,ARG,OOOForEach_SimplePaste(OOOForEach198_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach197_1(MACRO,ARGS...)

#define OOOForEach196_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),196,ARG,OOOForEach_SimplePaste(OOOForEach197_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach196_1(MACRO,ARGS...)

#define OOOForEach195_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),195,ARG,OOOForEach_SimplePaste(OOOForEach196_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach195_1(MACRO,ARGS...)

#define OOOForEach194_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),194,ARG,OOOForEach_SimplePaste(OOOForEach195_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach194_1(MACRO,ARGS...)

#define OOOForEach193_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),193,ARG,OOOForEach_SimplePaste(OOOForEach194_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach193_1(MACRO,ARGS...)

#define OOOForEach192_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),192,ARG,OOOForEach_SimplePaste(OOOForEach193_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach192_1(MACRO,ARGS...)

#define OOOForEach191_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),191,ARG,OOOForEach_SimplePaste(OOOForEach192_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach191_1(MACRO,ARGS...)

#define OOOForEach190_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),190,ARG,OOOForEach_SimplePaste(OOOForEach191_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach190_1(MACRO,ARGS...)

#define OOOForEach189_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),189,ARG,OOOForEach_SimplePaste(OOOForEach190_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach189_1(MACRO,ARGS...)

#define OOOForEach188_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),188,ARG,OOOForEach_SimplePaste(OOOForEach189_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach188_1(MACRO,ARGS...)

#define OOOForEach187_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),187,ARG,OOOForEach_SimplePaste(OOOForEach188_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach187_1(MACRO,ARGS...)

#define OOOForEach186_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),186,ARG,OOOForEach_SimplePaste(OOOForEach187_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach186_1(MACRO,ARGS...)

#define OOOForEach185_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),185,ARG,OOOForEach_SimplePaste(OOOForEach186_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach185_1(MACRO,ARGS...)

#define OOOForEach184_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),184,ARG,OOOForEach_SimplePaste(OOOForEach185_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach184_1(MACRO,ARGS...)

#define OOOForEach183_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),183,ARG,OOOForEach_SimplePaste(OOOForEach184_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach183_1(MACRO,ARGS...)

#define OOOForEach182_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),182,ARG,OOOForEach_SimplePaste(OOOForEach183_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach182_1(MACRO,ARGS...)

#define OOOForEach181_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),181,ARG,OOOForEach_SimplePaste(OOOForEach182_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach181_1(MACRO,ARGS...)

#define OOOForEach180_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),180,ARG,OOOForEach_SimplePaste(OOOForEach181_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach180_1(MACRO,ARGS...)

#define OOOForEach179_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),179,ARG,OOOForEach_SimplePaste(OOOForEach180_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach179_1(MACRO,ARGS...)

#define OOOForEach178_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),178,ARG,OOOForEach_SimplePaste(OOOForEach179_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach178_1(MACRO,ARGS...)

#define OOOForEach177_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),177,ARG,OOOForEach_SimplePaste(OOOForEach178_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach177_1(MACRO,ARGS...)

#define OOOForEach176_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),176,ARG,OOOForEach_SimplePaste(OOOForEach177_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach176_1(MACRO,ARGS...)

#define OOOForEach175_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),175,ARG,OOOForEach_SimplePaste(OOOForEach176_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach175_1(MACRO,ARGS...)

#define OOOForEach174_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),174,ARG,OOOForEach_SimplePaste(OOOForEach175_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach174_1(MACRO,ARGS...)

#define OOOForEach173_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),173,ARG,OOOForEach_SimplePaste(OOOForEach174_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach173_1(MACRO,ARGS...)

#define OOOForEach172_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),172,ARG,OOOForEach_SimplePaste(OOOForEach173_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach172_1(MACRO,ARGS...)

#define OOOForEach171_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),171,ARG,OOOForEach_SimplePaste(OOOForEach172_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach171_1(MACRO,ARGS...)

#define OOOForEach170_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),170,ARG,OOOForEach_SimplePaste(OOOForEach171_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach170_1(MACRO,ARGS...)

#define OOOForEach169_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),169,ARG,OOOForEach_SimplePaste(OOOForEach170_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach169_1(MACRO,ARGS...)

#define OOOForEach168_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),168,ARG,OOOForEach_SimplePaste(OOOForEach169_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach168_1(MACRO,ARGS...)

#define OOOForEach167_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),167,ARG,OOOForEach_SimplePaste(OOOForEach168_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach167_1(MACRO,ARGS...)

#define OOOForEach166_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),166,ARG,OOOForEach_SimplePaste(OOOForEach167_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach166_1(MACRO,ARGS...)

#define OOOForEach165_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),165,ARG,OOOForEach_SimplePaste(OOOForEach166_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach165_1(MACRO,ARGS...)

#define OOOForEach164_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),164,ARG,OOOForEach_SimplePaste(OOOForEach165_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach164_1(MACRO,ARGS...)

#define OOOForEach163_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),163,ARG,OOOForEach_SimplePaste(OOOForEach164_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach163_1(MACRO,ARGS...)

#define OOOForEach162_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),162,ARG,OOOForEach_SimplePaste(OOOForEach163_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach162_1(MACRO,ARGS...)

#define OOOForEach161_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),161,ARG,OOOForEach_SimplePaste(OOOForEach162_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach161_1(MACRO,ARGS...)

#define OOOForEach160_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),160,ARG,OOOForEach_SimplePaste(OOOForEach161_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach160_1(MACRO,ARGS...)

#define OOOForEach159_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),159,ARG,OOOForEach_SimplePaste(OOOForEach160_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach159_1(MACRO,ARGS...)

#define OOOForEach158_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),158,ARG,OOOForEach_SimplePaste(OOOForEach159_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach158_1(MACRO,ARGS...)

#define OOOForEach157_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),157,ARG,OOOForEach_SimplePaste(OOOForEach158_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach157_1(MACRO,ARGS...)

#define OOOForEach156_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),156,ARG,OOOForEach_SimplePaste(OOOForEach157_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach156_1(MACRO,ARGS...)

#define OOOForEach155_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),155,ARG,OOOForEach_SimplePaste(OOOForEach156_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach155_1(MACRO,ARGS...)

#define OOOForEach154_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),154,ARG,OOOForEach_SimplePaste(OOOForEach155_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach154_1(MACRO,ARGS...)

#define OOOForEach153_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),153,ARG,OOOForEach_SimplePaste(OOOForEach154_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach153_1(MACRO,ARGS...)

#define OOOForEach152_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),152,ARG,OOOForEach_SimplePaste(OOOForEach153_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach152_1(MACRO,ARGS...)

#define OOOForEach151_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),151,ARG,OOOForEach_SimplePaste(OOOForEach152_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach151_1(MACRO,ARGS...)

#define OOOForEach150_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),150,ARG,OOOForEach_SimplePaste(OOOForEach151_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach150_1(MACRO,ARGS...)

#define OOOForEach149_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),149,ARG,OOOForEach_SimplePaste(OOOForEach150_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach149_1(MACRO,ARGS...)

#define OOOForEach148_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),148,ARG,OOOForEach_SimplePaste(OOOForEach149_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach148_1(MACRO,ARGS...)

#define OOOForEach147_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),147,ARG,OOOForEach_SimplePaste(OOOForEach148_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach147_1(MACRO,ARGS...)

#define OOOForEach146_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),146,ARG,OOOForEach_SimplePaste(OOOForEach147_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach146_1(MACRO,ARGS...)

#define OOOForEach145_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),145,ARG,OOOForEach_SimplePaste(OOOForEach146_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach145_1(MACRO,ARGS...)

#define OOOForEach144_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),144,ARG,OOOForEach_SimplePaste(OOOForEach145_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach144_1(MACRO,ARGS...)

#define OOOForEach143_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),143,ARG,OOOForEach_SimplePaste(OOOForEach144_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach143_1(MACRO,ARGS...)

#define OOOForEach142_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),142,ARG,OOOForEach_SimplePaste(OOOForEach143_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach142_1(MACRO,ARGS...)

#define OOOForEach141_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),141,ARG,OOOForEach_SimplePaste(OOOForEach142_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach141_1(MACRO,ARGS...)

#define OOOForEach140_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),140,ARG,OOOForEach_SimplePaste(OOOForEach141_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach140_1(MACRO,ARGS...)

#define OOOForEach139_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),139,ARG,OOOForEach_SimplePaste(OOOForEach140_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach139_1(MACRO,ARGS...)

#define OOOForEach138_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),138,ARG,OOOForEach_SimplePaste(OOOForEach139_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach138_1(MACRO,ARGS...)

#define OOOForEach137_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),137,ARG,OOOForEach_SimplePaste(OOOForEach138_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach137_1(MACRO,ARGS...)

#define OOOForEach136_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),136,ARG,OOOForEach_SimplePaste(OOOForEach137_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach136_1(MACRO,ARGS...)

#define OOOForEach135_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),135,ARG,OOOForEach_SimplePaste(OOOForEach136_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach135_1(MACRO,ARGS...)

#define OOOForEach134_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),134,ARG,OOOForEach_SimplePaste(OOOForEach135_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach134_1(MACRO,ARGS...)

#define OOOForEach133_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),133,ARG,OOOForEach_SimplePaste(OOOForEach134_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach133_1(MACRO,ARGS...)

#define OOOForEach132_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),132,ARG,OOOForEach_SimplePaste(OOOForEach133_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach132_1(MACRO,ARGS...)

#define OOOForEach131_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),131,ARG,OOOForEach_SimplePaste(OOOForEach132_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach131_1(MACRO,ARGS...)

#define OOOForEach130_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),130,ARG,OOOForEach_SimplePaste(OOOForEach131_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach130_1(MACRO,ARGS...)

#define OOOForEach129_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),129,ARG,OOOForEach_SimplePaste(OOOForEach130_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach129_1(MACRO,ARGS...)

#define OOOForEach128_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),128,ARG,OOOForEach_SimplePaste(OOOForEach129_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach128_1(MACRO,ARGS...)

#define OOOForEach127_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),127,ARG,OOOForEach_SimplePaste(OOOForEach128_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach127_1(MACRO,ARGS...)

#define OOOForEach126_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),126,ARG,OOOForEach_SimplePaste(OOOForEach127_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach126_1(MACRO,ARGS...)

#define OOOForEach125_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),125,ARG,OOOForEach_SimplePaste(OOOForEach126_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach125_1(MACRO,ARGS...)

#define OOOForEach124_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),124,ARG,OOOForEach_SimplePaste(OOOForEach125_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach124_1(MACRO,ARGS...)

#define OOOForEach123_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),123,ARG,OOOForEach_SimplePaste(OOOForEach124_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach123_1(MACRO,ARGS...)

#define OOOForEach122_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),122,ARG,OOOForEach_SimplePaste(OOOForEach123_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach122_1(MACRO,ARGS...)

#define OOOForEach121_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),121,ARG,OOOForEach_SimplePaste(OOOForEach122_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach121_1(MACRO,ARGS...)

#define OOOForEach120_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),120,ARG,OOOForEach_SimplePaste(OOOForEach121_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach120_1(MACRO,ARGS...)

#define OOOForEach119_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),119,ARG,OOOForEach_SimplePaste(OOOForEach120_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach119_1(MACRO,ARGS...)

#define OOOForEach118_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),118,ARG,OOOForEach_SimplePaste(OOOForEach119_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach118_1(MACRO,ARGS...)

#define OOOForEach117_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),117,ARG,OOOForEach_SimplePaste(OOOForEach118_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach117_1(MACRO,ARGS...)

#define OOOForEach116_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),116,ARG,OOOForEach_SimplePaste(OOOForEach117_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach116_1(MACRO,ARGS...)

#define OOOForEach115_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),115,ARG,OOOForEach_SimplePaste(OOOForEach116_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach115_1(MACRO,ARGS...)

#define OOOForEach114_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),114,ARG,OOOForEach_SimplePaste(OOOForEach115_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach114_1(MACRO,ARGS...)

#define OOOForEach113_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),113,ARG,OOOForEach_SimplePaste(OOOForEach114_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach113_1(MACRO,ARGS...)

#define OOOForEach112_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),112,ARG,OOOForEach_SimplePaste(OOOForEach113_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach112_1(MACRO,ARGS...)

#define OOOForEach111_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),111,ARG,OOOForEach_SimplePaste(OOOForEach112_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach111_1(MACRO,ARGS...)

#define OOOForEach110_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),110,ARG,OOOForEach_SimplePaste(OOOForEach111_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach110_1(MACRO,ARGS...)

#define OOOForEach109_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),109,ARG,OOOForEach_SimplePaste(OOOForEach110_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach109_1(MACRO,ARGS...)

#define OOOForEach108_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),108,ARG,OOOForEach_SimplePaste(OOOForEach109_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach108_1(MACRO,ARGS...)

#define OOOForEach107_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),107,ARG,OOOForEach_SimplePaste(OOOForEach108_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach107_1(MACRO,ARGS...)

#define OOOForEach106_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),106,ARG,OOOForEach_SimplePaste(OOOForEach107_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach106_1(MACRO,ARGS...)

#define OOOForEach105_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),105,ARG,OOOForEach_SimplePaste(OOOForEach106_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach105_1(MACRO,ARGS...)

#define OOOForEach104_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),104,ARG,OOOForEach_SimplePaste(OOOForEach105_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach104_1(MACRO,ARGS...)

#define OOOForEach103_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),103,ARG,OOOForEach_SimplePaste(OOOForEach104_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach103_1(MACRO,ARGS...)

#define OOOForEach102_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),102,ARG,OOOForEach_SimplePaste(OOOForEach103_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach102_1(MACRO,ARGS...)

#define OOOForEach101_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),101,ARG,OOOForEach_SimplePaste(OOOForEach102_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach101_1(MACRO,ARGS...)

#define OOOForEach100_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),100,ARG,OOOForEach_SimplePaste(OOOForEach101_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
#define OOOForEach100_1(MACRO,ARGS...)

#define OOOForEach99_0(MACRO,ARG,ARGS...) MACRO(0,OOOForEach_IsEmpty(ARGS),99,ARG,OOOForEach_SimplePaste(OOOForEach100_,OOOForEach_IsEmpty(ARGS))(MACRO,ARGS))
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

