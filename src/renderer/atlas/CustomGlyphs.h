// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "common.h"

namespace Microsoft::Console::Render::Atlas::CustomGlyphs
{
    bool IsCustomGlyph(char32_t codepoint) noexcept;
    void DrawCustomGlyph(ID2D1Factory* factory, ID2D1DeviceContext* renderTarget, ID2D1SolidColorBrush* brush, const D2D1_RECT_F& rect, char32_t codepoint);

    // This is just an extra. It's not actually implemented as part of CustomGlyphs.cpp.
    constexpr bool IsSoftFontChar(char32_t ch) noexcept
    {
        return ch >= 0xEF20 && ch < 0xEF80;
    }
}
