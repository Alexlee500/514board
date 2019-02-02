#ifndef ORTHO5X14_h
#define ORTHO5X14_h

#include "quantum.h"

#define KEYMAP ( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k1b, k112, k113, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k2b, k212, k213, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k3b, k312, k313, \
  k40, k41, k42, k43,  k44  , k45,  k47  , k48, k49, k410, k4b, k412, k413 \
) \
{ \
  { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k0b, k012, k013 }, \
  { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k1b, k112, k113 }, \
  { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k2b, k212, k213 }, \
  { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k3b, k312, k313 }, \
  { k40, k41, k42, k43, k44, k45, KC_NO, k47, k48, k49, k410, k4b, k412, k413 } \
}

#endif