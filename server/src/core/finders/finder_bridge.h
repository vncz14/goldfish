#pragma once

#include "lib/RP/RPGolDefine.h"
#include "lib/RP/RPGolWindSet.h"

#include "OgWindFinder.h"
#include "WsrWindFinder.h"

#include "types.h"

#include "server/src/ffi.rs.h"

#include "rust/cxx.h"

RPGolWindSet inputFFIToWindSet(const OgWindFinderInputFFI &input);
OgWindFinderOutputFFI windSetToOutputFFI(const RPGolWindSet &windSet);
OgWindFinderOutputWithErrorFFI find_og_wind(const OgWindFinderInputFFI &input, const OgWindFinderSettings &settings);