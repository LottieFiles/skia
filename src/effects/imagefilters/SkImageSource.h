/*
 * Copyright 2015 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef SkImageSource_DEFINED
#define SkImageSource_DEFINED

#include "include/core/SkImage.h"
#include "include/core/SkImageFilter.h"

class SkImageSource {
public:
    static sk_sp<SkImageFilter> Make(sk_sp<SkImage> image,
                                     const SkRect& srcRect,
                                     const SkRect& dstRect,
                                     const SkSamplingOptions& sampling);

    static void RegisterFlattenables();

private:
    SkImageSource() = delete;
};

#endif
