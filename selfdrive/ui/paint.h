#pragma once

#include "selfdrive/ui/ui.h"

void ui_draw(UIState *s, int w, int h);
void ui_draw_image(const UIState *s, const Rect &r, const char *name, float alpha);
void ui_draw_rect(NVGcontext *vg, const Rect &r, NVGcolor color, int width, float radius = 0);
void ui_fill_rect(NVGcontext *vg, const Rect &r, const NVGpaint &paint, float radius = 0);
void ui_fill_rect(NVGcontext *vg, const Rect &r, const NVGcolor &color, float radius = 0);
void ui_nvg_init(UIState *s);
void ui_resize(UIState *s, int width, int height);

const int v_edge_padding = 130;
const int h_edge_padding = 70;

const int autoFollowSmallWidth_btn = 200;
const int autoFollowLargeWidth_btn = 475;