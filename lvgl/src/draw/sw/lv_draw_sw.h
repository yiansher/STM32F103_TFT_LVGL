/**
 * @file lv_draw_sw.h
 *
 */

#ifndef LV_DRAW_SW_H
#define LV_DRAW_SW_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lv_draw_sw_blend.h"
#if LV_USE_DRAW_SW

#include "../lv_draw.h"
#include "../../misc/lv_area.h"
#include "../../misc/lv_color.h"
#include "../../core/lv_disp.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef struct {
    lv_draw_ctx_t base_draw;

    /** Fill an area of the destination buffer with a color*/
    void (*blend)(lv_draw_ctx_t * draw_ctx, const lv_draw_sw_blend_dsc_t * dsc);
} lv_draw_sw_ctx_t;

typedef struct {
    lv_draw_layer_ctx_t base_draw;
    uint32_t buf_size_bytes;
} lv_draw_sw_layer_ctx_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

void lv_draw_sw_init_ctx(struct _lv_disp_t * disp, lv_draw_ctx_t * draw_ctx);
void lv_draw_sw_deinit_ctx(struct _lv_disp_t * disp, lv_draw_ctx_t * draw_ctx);

void lv_draw_sw_wait_for_finish(lv_draw_ctx_t * draw_ctx);

void lv_draw_sw_arc(lv_draw_ctx_t * draw_ctx, const lv_draw_arc_dsc_t * dsc, const lv_point_t * center, uint16_t radius,
                    uint16_t start_angle, uint16_t end_angle);

void lv_draw_sw_rect(lv_draw_ctx_t * draw_ctx, const lv_draw_rect_dsc_t * dsc, const lv_area_t * coords);

void lv_draw_sw_letter(lv_draw_ctx_t * draw_ctx, const lv_draw_label_dsc_t * dsc, const lv_point_t * pos_p,
                       uint32_t letter);

LV_ATTRIBUTE_FAST_MEM void lv_draw_sw_img_decoded(struct _lv_draw_ctx_t * draw_ctx, const lv_draw_img_dsc_t * draw_dsc,
                                                  const lv_area_t * coords,
                                                  const uint8_t * src_buf, const lv_draw_img_sup_t * sup, lv_color_format_t cf);

LV_ATTRIBUTE_FAST_MEM void lv_draw_sw_line(struct _lv_draw_ctx_t * draw_ctx, const lv_draw_line_dsc_t * dsc,
                                           const lv_point_t * point1, const lv_point_t * point2);

void lv_draw_sw_polygon(struct _lv_draw_ctx_t * draw_ctx, const lv_draw_rect_dsc_t * draw_dsc,
                        const lv_point_t points[], uint16_t point_cnt);

void lv_draw_sw_buffer_copy(lv_draw_ctx_t * draw_ctx,
                            void * dest_buf, lv_coord_t dest_stride, const lv_area_t * dest_area,
                            void * src_buf, lv_coord_t src_stride, const lv_area_t * src_area);

void lv_draw_sw_buffer_convert(lv_draw_ctx_t * draw_ctx);

void lv_draw_sw_buffer_clear(lv_draw_ctx_t * draw_ctx);

void lv_draw_sw_transform(lv_draw_ctx_t * draw_ctx, const lv_area_t * dest_area, const void * src_buf,
                          lv_coord_t src_w, lv_coord_t src_h, lv_coord_t src_stride,
                          const lv_draw_img_dsc_t * draw_dsc, const lv_draw_img_sup_t * sup, lv_color_format_t cf, lv_color_t * cbuf,
                          lv_opa_t * abuf);

struct _lv_draw_layer_ctx_t * lv_draw_sw_layer_create(struct _lv_draw_ctx_t * draw_ctx, lv_draw_layer_ctx_t * layer_ctx,
                                                      lv_draw_layer_flags_t flags);

void lv_draw_sw_layer_adjust(struct _lv_draw_ctx_t * draw_ctx, struct _lv_draw_layer_ctx_t * layer_ctx,
                             lv_draw_layer_flags_t flags);

void lv_draw_sw_layer_blend(struct _lv_draw_ctx_t * draw_ctx, struct _lv_draw_layer_ctx_t * layer_ctx,
                            const lv_draw_img_dsc_t * draw_dsc);

void lv_draw_sw_layer_destroy(lv_draw_ctx_t * draw_ctx, lv_draw_layer_ctx_t * layer_ctx);

/***********************
 * GLOBAL VARIABLES
 ***********************/

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_DRAW_SW*/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_DRAW_SW_H*/
