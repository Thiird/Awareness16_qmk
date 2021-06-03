#pragma once

#include "quantum.h"

#define LAYOUT_ortho_4x4( \
	K01, K02, K03, K04, \
	K11, K12, K13, K14, \
	K21, K22, K23, K24, \
	K31, K32, K33, K34 \
) \
{ \
  { K01, K02, K03, K04 }, \
  { K11, K12, K13, K14 }, \
  { K21, K22, K23, K24 }, \
  { K31, K32, K33, K34 } \
}
