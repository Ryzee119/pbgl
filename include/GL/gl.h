/**
 * DISCLAIMER
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 *
 * The mingw-w64 runtime package and its code is distributed in the hope that it 
 * will be useful but WITHOUT ANY WARRANTY.  ALL WARRANTIES, EXPRESSED OR 
 * IMPLIED ARE HEREBY DISCLAIMED.  This includes but is not limited to 
 * warranties of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */
#ifndef __gl_h_
#ifndef __GL_H__

#define __gl_h_
#define __GL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef GL_API
# define GL_API
#endif

typedef uint32_t GLenum;
typedef uint8_t  GLboolean;
typedef uint32_t GLbitfield;
typedef int8_t   GLbyte;
typedef int16_t  GLshort;
typedef int32_t  GLint;
typedef int32_t  GLsizei;
typedef uint8_t  GLubyte;
typedef uint16_t GLushort;
typedef uint32_t GLuint;
typedef float    GLfloat;
typedef float    GLclampf;
typedef double   GLdouble;
typedef double   GLclampd;
typedef void     GLvoid;

#define GL_VERSION_1_1 1

#define GL_ACCUM 0x0100
#define GL_LOAD 0x0101
#define GL_RETURN 0x0102
#define GL_MULT 0x0103
#define GL_ADD 0x0104

#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_EQUAL 0x0202
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207

#define GL_CURRENT_BIT 0x00000001
#define GL_POINT_BIT 0x00000002
#define GL_LINE_BIT 0x00000004
#define GL_POLYGON_BIT 0x00000008
#define GL_POLYGON_STIPPLE_BIT 0x00000010
#define GL_PIXEL_MODE_BIT 0x00000020
#define GL_LIGHTING_BIT 0x00000040
#define GL_FOG_BIT 0x00000080
#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_ACCUM_BUFFER_BIT 0x00000200
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_VIEWPORT_BIT 0x00000800
#define GL_TRANSFORM_BIT 0x00001000
#define GL_ENABLE_BIT 0x00002000
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_HINT_BIT 0x00008000
#define GL_EVAL_BIT 0x00010000
#define GL_LIST_BIT 0x00020000
#define GL_TEXTURE_BIT 0x00040000
#define GL_SCISSOR_BIT 0x00080000
#define GL_ALL_ATTRIB_BITS 0x000fffff

#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_QUADS 0x0007
#define GL_QUAD_STRIP 0x0008
#define GL_POLYGON 0x0009

#define GL_ZERO 0
#define GL_ONE 1
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305

#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308

#define GL_TRUE 1
#define GL_FALSE 0

#define GL_CLIP_PLANE0 0x3000
#define GL_CLIP_PLANE1 0x3001
#define GL_CLIP_PLANE2 0x3002
#define GL_CLIP_PLANE3 0x3003
#define GL_CLIP_PLANE4 0x3004
#define GL_CLIP_PLANE5 0x3005

#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_INT 0x1404
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT 0x1406
#define GL_2_BYTES 0x1407
#define GL_3_BYTES 0x1408
#define GL_4_BYTES 0x1409
#define GL_DOUBLE 0x140A

#define GL_NONE 0
#define GL_FRONT_LEFT 0x0400
#define GL_FRONT_RIGHT 0x0401
#define GL_BACK_LEFT 0x0402
#define GL_BACK_RIGHT 0x0403
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_LEFT 0x0406
#define GL_RIGHT 0x0407
#define GL_FRONT_AND_BACK 0x0408
#define GL_AUX0 0x0409
#define GL_AUX1 0x040A
#define GL_AUX2 0x040B
#define GL_AUX3 0x040C

#define GL_NO_ERROR 0
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_STACK_OVERFLOW 0x0503
#define GL_STACK_UNDERFLOW 0x0504
#define GL_OUT_OF_MEMORY 0x0505

#define GL_2D 0x0600
#define GL_3D 0x0601
#define GL_3D_COLOR 0x0602
#define GL_3D_COLOR_TEXTURE 0x0603
#define GL_4D_COLOR_TEXTURE 0x0604

#define GL_PASS_THROUGH_TOKEN 0x0700
#define GL_POINT_TOKEN 0x0701
#define GL_LINE_TOKEN 0x0702
#define GL_POLYGON_TOKEN 0x0703
#define GL_BITMAP_TOKEN 0x0704
#define GL_DRAW_PIXEL_TOKEN 0x0705
#define GL_COPY_PIXEL_TOKEN 0x0706
#define GL_LINE_RESET_TOKEN 0x0707

#define GL_EXP 0x0800
#define GL_EXP2 0x0801

#define GL_CW 0x0900
#define GL_CCW 0x0901

#define GL_COEFF 0x0A00
#define GL_ORDER 0x0A01
#define GL_DOMAIN 0x0A02

#define GL_CURRENT_COLOR 0x0B00
#define GL_CURRENT_INDEX 0x0B01
#define GL_CURRENT_NORMAL 0x0B02
#define GL_CURRENT_TEXTURE_COORDS 0x0B03
#define GL_CURRENT_RASTER_COLOR 0x0B04
#define GL_CURRENT_RASTER_INDEX 0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS 0x0B06
#define GL_CURRENT_RASTER_POSITION 0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID 0x0B08
#define GL_CURRENT_RASTER_DISTANCE 0x0B09
#define GL_POINT_SMOOTH 0x0B10
#define GL_POINT_SIZE 0x0B11
#define GL_POINT_SIZE_RANGE 0x0B12
#define GL_POINT_SIZE_GRANULARITY 0x0B13
#define GL_LINE_SMOOTH 0x0B20
#define GL_LINE_WIDTH 0x0B21
#define GL_LINE_WIDTH_RANGE 0x0B22
#define GL_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_LINE_STIPPLE 0x0B24
#define GL_LINE_STIPPLE_PATTERN 0x0B25
#define GL_LINE_STIPPLE_REPEAT 0x0B26
#define GL_LIST_MODE 0x0B30
#define GL_MAX_LIST_NESTING 0x0B31
#define GL_LIST_BASE 0x0B32
#define GL_LIST_INDEX 0x0B33
#define GL_POLYGON_MODE 0x0B40
#define GL_POLYGON_SMOOTH 0x0B41
#define GL_POLYGON_STIPPLE 0x0B42
#define GL_EDGE_FLAG 0x0B43
#define GL_CULL_FACE 0x0B44
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_LIGHTING 0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER 0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE 0x0B52
#define GL_LIGHT_MODEL_AMBIENT 0x0B53
#define GL_SHADE_MODEL 0x0B54
#define GL_COLOR_MATERIAL_FACE 0x0B55
#define GL_COLOR_MATERIAL_PARAMETER 0x0B56
#define GL_COLOR_MATERIAL 0x0B57
#define GL_FOG 0x0B60
#define GL_FOG_INDEX 0x0B61
#define GL_FOG_DENSITY 0x0B62
#define GL_FOG_START 0x0B63
#define GL_FOG_END 0x0B64
#define GL_FOG_MODE 0x0B65
#define GL_FOG_COLOR 0x0B66
#define GL_DEPTH_RANGE 0x0B70
#define GL_DEPTH_TEST 0x0B71
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_ACCUM_CLEAR_VALUE 0x0B80
#define GL_STENCIL_TEST 0x0B90
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_MATRIX_MODE 0x0BA0
#define GL_NORMALIZE 0x0BA1
#define GL_VIEWPORT 0x0BA2
#define GL_MODELVIEW_STACK_DEPTH 0x0BA3
#define GL_PROJECTION_STACK_DEPTH 0x0BA4
#define GL_TEXTURE_STACK_DEPTH 0x0BA5
#define GL_MODELVIEW_MATRIX 0x0BA6
#define GL_PROJECTION_MATRIX 0x0BA7
#define GL_TEXTURE_MATRIX 0x0BA8
#define GL_ATTRIB_STACK_DEPTH 0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH 0x0BB1
#define GL_ALPHA_TEST 0x0BC0
#define GL_ALPHA_TEST_FUNC 0x0BC1
#define GL_ALPHA_TEST_REF 0x0BC2
#define GL_DITHER 0x0BD0
#define GL_BLEND_DST 0x0BE0
#define GL_BLEND_SRC 0x0BE1
#define GL_BLEND 0x0BE2
#define GL_LOGIC_OP_MODE 0x0BF0
#define GL_INDEX_LOGIC_OP 0x0BF1
#define GL_COLOR_LOGIC_OP 0x0BF2
#define GL_AUX_BUFFERS 0x0C00
#define GL_DRAW_BUFFER 0x0C01
#define GL_READ_BUFFER 0x0C02
#define GL_SCISSOR_BOX 0x0C10
#define GL_SCISSOR_TEST 0x0C11
#define GL_INDEX_CLEAR_VALUE 0x0C20
#define GL_INDEX_WRITEMASK 0x0C21
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_INDEX_MODE 0x0C30
#define GL_RGBA_MODE 0x0C31
#define GL_DOUBLEBUFFER 0x0C32
#define GL_STEREO 0x0C33
#define GL_RENDER_MODE 0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT 0x0C50
#define GL_POINT_SMOOTH_HINT 0x0C51
#define GL_LINE_SMOOTH_HINT 0x0C52
#define GL_POLYGON_SMOOTH_HINT 0x0C53
#define GL_FOG_HINT 0x0C54
#define GL_TEXTURE_GEN_S 0x0C60
#define GL_TEXTURE_GEN_T 0x0C61
#define GL_TEXTURE_GEN_R 0x0C62
#define GL_TEXTURE_GEN_Q 0x0C63
#define GL_PIXEL_MAP_I_TO_I 0x0C70
#define GL_PIXEL_MAP_S_TO_S 0x0C71
#define GL_PIXEL_MAP_I_TO_R 0x0C72
#define GL_PIXEL_MAP_I_TO_G 0x0C73
#define GL_PIXEL_MAP_I_TO_B 0x0C74
#define GL_PIXEL_MAP_I_TO_A 0x0C75
#define GL_PIXEL_MAP_R_TO_R 0x0C76
#define GL_PIXEL_MAP_G_TO_G 0x0C77
#define GL_PIXEL_MAP_B_TO_B 0x0C78
#define GL_PIXEL_MAP_A_TO_A 0x0C79
#define GL_PIXEL_MAP_I_TO_I_SIZE 0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE 0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE 0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE 0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE 0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE 0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE 0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE 0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE 0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE 0x0CB9
#define GL_UNPACK_SWAP_BYTES 0x0CF0
#define GL_UNPACK_LSB_FIRST 0x0CF1
#define GL_UNPACK_ROW_LENGTH 0x0CF2
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#define GL_UNPACK_SKIP_PIXELS 0x0CF4
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_SWAP_BYTES 0x0D00
#define GL_PACK_LSB_FIRST 0x0D01
#define GL_PACK_ROW_LENGTH 0x0D02
#define GL_PACK_SKIP_ROWS 0x0D03
#define GL_PACK_SKIP_PIXELS 0x0D04
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_MAP_COLOR 0x0D10
#define GL_MAP_STENCIL 0x0D11
#define GL_INDEX_SHIFT 0x0D12
#define GL_INDEX_OFFSET 0x0D13
#define GL_RED_SCALE 0x0D14
#define GL_RED_BIAS 0x0D15
#define GL_ZOOM_X 0x0D16
#define GL_ZOOM_Y 0x0D17
#define GL_GREEN_SCALE 0x0D18
#define GL_GREEN_BIAS 0x0D19
#define GL_BLUE_SCALE 0x0D1A
#define GL_BLUE_BIAS 0x0D1B
#define GL_ALPHA_SCALE 0x0D1C
#define GL_ALPHA_BIAS 0x0D1D
#define GL_DEPTH_SCALE 0x0D1E
#define GL_DEPTH_BIAS 0x0D1F
#define GL_MAX_EVAL_ORDER 0x0D30
#define GL_MAX_LIGHTS 0x0D31
#define GL_MAX_CLIP_PLANES 0x0D32
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_PIXEL_MAP_TABLE 0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH 0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH 0x0D36
#define GL_MAX_NAME_STACK_DEPTH 0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH 0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH 0x0D39
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH 0x0D3B
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_INDEX_BITS 0x0D51
#define GL_RED_BITS 0x0D52
#define GL_GREEN_BITS 0x0D53
#define GL_BLUE_BITS 0x0D54
#define GL_ALPHA_BITS 0x0D55
#define GL_DEPTH_BITS 0x0D56
#define GL_STENCIL_BITS 0x0D57
#define GL_ACCUM_RED_BITS 0x0D58
#define GL_ACCUM_GREEN_BITS 0x0D59
#define GL_ACCUM_BLUE_BITS 0x0D5A
#define GL_ACCUM_ALPHA_BITS 0x0D5B
#define GL_NAME_STACK_DEPTH 0x0D70
#define GL_AUTO_NORMAL 0x0D80
#define GL_MAP1_COLOR_4 0x0D90
#define GL_MAP1_INDEX 0x0D91
#define GL_MAP1_NORMAL 0x0D92
#define GL_MAP1_TEXTURE_COORD_1 0x0D93
#define GL_MAP1_TEXTURE_COORD_2 0x0D94
#define GL_MAP1_TEXTURE_COORD_3 0x0D95
#define GL_MAP1_TEXTURE_COORD_4 0x0D96
#define GL_MAP1_VERTEX_3 0x0D97
#define GL_MAP1_VERTEX_4 0x0D98
#define GL_MAP2_COLOR_4 0x0DB0
#define GL_MAP2_INDEX 0x0DB1
#define GL_MAP2_NORMAL 0x0DB2
#define GL_MAP2_TEXTURE_COORD_1 0x0DB3
#define GL_MAP2_TEXTURE_COORD_2 0x0DB4
#define GL_MAP2_TEXTURE_COORD_3 0x0DB5
#define GL_MAP2_TEXTURE_COORD_4 0x0DB6
#define GL_MAP2_VERTEX_3 0x0DB7
#define GL_MAP2_VERTEX_4 0x0DB8
#define GL_MAP1_GRID_DOMAIN 0x0DD0
#define GL_MAP1_GRID_SEGMENTS 0x0DD1
#define GL_MAP2_GRID_DOMAIN 0x0DD2
#define GL_MAP2_GRID_SEGMENTS 0x0DD3
#define GL_TEXTURE_1D 0x0DE0
#define GL_TEXTURE_2D 0x0DE1
#define GL_FEEDBACK_BUFFER_POINTER 0x0DF0
#define GL_FEEDBACK_BUFFER_SIZE 0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE 0x0DF2
#define GL_SELECTION_BUFFER_POINTER 0x0DF3
#define GL_SELECTION_BUFFER_SIZE 0x0DF4

#define GL_TEXTURE_WIDTH 0x1000
#define GL_TEXTURE_HEIGHT 0x1001
#define GL_TEXTURE_INTERNAL_FORMAT 0x1003
#define GL_TEXTURE_BORDER_COLOR 0x1004
#define GL_TEXTURE_BORDER 0x1005

#define GL_DONT_CARE 0x1100
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102

#define GL_LIGHT0 0x4000
#define GL_LIGHT1 0x4001
#define GL_LIGHT2 0x4002
#define GL_LIGHT3 0x4003
#define GL_LIGHT4 0x4004
#define GL_LIGHT5 0x4005
#define GL_LIGHT6 0x4006
#define GL_LIGHT7 0x4007

#define GL_AMBIENT 0x1200
#define GL_DIFFUSE 0x1201
#define GL_SPECULAR 0x1202
#define GL_POSITION 0x1203
#define GL_SPOT_DIRECTION 0x1204
#define GL_SPOT_EXPONENT 0x1205
#define GL_SPOT_CUTOFF 0x1206
#define GL_CONSTANT_ATTENUATION 0x1207
#define GL_LINEAR_ATTENUATION 0x1208
#define GL_QUADRATIC_ATTENUATION 0x1209

#define GL_COMPILE 0x1300
#define GL_COMPILE_AND_EXECUTE 0x1301

#define GL_CLEAR 0x1500
#define GL_AND 0x1501
#define GL_AND_REVERSE 0x1502
#define GL_COPY 0x1503
#define GL_AND_INVERTED 0x1504
#define GL_NOOP 0x1505
#define GL_XOR 0x1506
#define GL_OR 0x1507
#define GL_NOR 0x1508
#define GL_EQUIV 0x1509
#define GL_INVERT 0x150A
#define GL_OR_REVERSE 0x150B
#define GL_COPY_INVERTED 0x150C
#define GL_OR_INVERTED 0x150D
#define GL_NAND 0x150E
#define GL_SET 0x150F

#define GL_EMISSION 0x1600
#define GL_SHININESS 0x1601
#define GL_AMBIENT_AND_DIFFUSE 0x1602
#define GL_COLOR_INDEXES 0x1603

#define GL_MODELVIEW 0x1700
#define GL_PROJECTION 0x1701
#define GL_TEXTURE 0x1702

#define GL_COLOR 0x1800
#define GL_DEPTH 0x1801
#define GL_STENCIL 0x1802

#define GL_COLOR_INDEX 0x1900
#define GL_STENCIL_INDEX 0x1901
#define GL_DEPTH_COMPONENT 0x1902
#define GL_RED 0x1903
#define GL_GREEN 0x1904
#define GL_BLUE 0x1905
#define GL_ALPHA 0x1906
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A

#define GL_BITMAP 0x1A00

#define GL_POINT 0x1B00
#define GL_LINE 0x1B01
#define GL_FILL 0x1B02

#define GL_RENDER 0x1C00
#define GL_FEEDBACK 0x1C01
#define GL_SELECT 0x1C02

#define GL_FLAT 0x1D00
#define GL_SMOOTH 0x1D01

#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03

#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_EXTENSIONS 0x1F03

#define GL_S 0x2000
#define GL_T 0x2001
#define GL_R 0x2002
#define GL_Q 0x2003

#define GL_MODULATE 0x2100
#define GL_DECAL 0x2101

#define GL_TEXTURE_ENV_MODE 0x2200
#define GL_TEXTURE_ENV_COLOR 0x2201

#define GL_TEXTURE_ENV 0x2300

#define GL_EYE_LINEAR 0x2400
#define GL_OBJECT_LINEAR 0x2401
#define GL_SPHERE_MAP 0x2402

#define GL_TEXTURE_GEN_MODE 0x2500
#define GL_OBJECT_PLANE 0x2501
#define GL_EYE_PLANE 0x2502

#define GL_NEAREST 0x2600
#define GL_LINEAR 0x2601

#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703

#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803

#define GL_CLAMP 0x2900
#define GL_REPEAT 0x2901

#define GL_CLIENT_PIXEL_STORE_BIT 0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT 0x00000002
#define GL_CLIENT_ALL_ATTRIB_BITS 0xffffffff

#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_POINT 0x2A01
#define GL_POLYGON_OFFSET_LINE 0x2A02
#define GL_POLYGON_OFFSET_FILL 0x8037

#define GL_ALPHA4 0x803B
#define GL_ALPHA8 0x803C
#define GL_ALPHA12 0x803D
#define GL_ALPHA16 0x803E
#define GL_LUMINANCE4 0x803F
#define GL_LUMINANCE8 0x8040
#define GL_LUMINANCE12 0x8041
#define GL_LUMINANCE16 0x8042
#define GL_LUMINANCE4_ALPHA4 0x8043
#define GL_LUMINANCE6_ALPHA2 0x8044
#define GL_LUMINANCE8_ALPHA8 0x8045
#define GL_LUMINANCE12_ALPHA4 0x8046
#define GL_LUMINANCE12_ALPHA12 0x8047
#define GL_LUMINANCE16_ALPHA16 0x8048
#define GL_INTENSITY 0x8049
#define GL_INTENSITY4 0x804A
#define GL_INTENSITY8 0x804B
#define GL_INTENSITY12 0x804C
#define GL_INTENSITY16 0x804D
#define GL_R3_G3_B2 0x2A10
#define GL_RGB4 0x804F
#define GL_RGB5 0x8050
#define GL_RGB8 0x8051
#define GL_RGB10 0x8052
#define GL_RGB12 0x8053
#define GL_RGB16 0x8054
#define GL_RGBA2 0x8055
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGBA8 0x8058
#define GL_RGB10_A2 0x8059
#define GL_RGBA12 0x805A
#define GL_RGBA16 0x805B
#define GL_TEXTURE_RED_SIZE 0x805C
#define GL_TEXTURE_GREEN_SIZE 0x805D
#define GL_TEXTURE_BLUE_SIZE 0x805E
#define GL_TEXTURE_ALPHA_SIZE 0x805F
#define GL_TEXTURE_LUMINANCE_SIZE 0x8060
#define GL_TEXTURE_INTENSITY_SIZE 0x8061
#define GL_PROXY_TEXTURE_1D 0x8063
#define GL_PROXY_TEXTURE_2D 0x8064

#define GL_TEXTURE_PRIORITY 0x8066
#define GL_TEXTURE_RESIDENT 0x8067
#define GL_TEXTURE_BINDING_1D 0x8068
#define GL_TEXTURE_BINDING_2D 0x8069

#define GL_VERTEX_ARRAY 0x8074
#define GL_NORMAL_ARRAY 0x8075
#define GL_COLOR_ARRAY 0x8076
#define GL_INDEX_ARRAY 0x8077
#define GL_TEXTURE_COORD_ARRAY 0x8078
#define GL_EDGE_FLAG_ARRAY 0x8079
#define GL_VERTEX_ARRAY_SIZE 0x807A
#define GL_VERTEX_ARRAY_TYPE 0x807B
#define GL_VERTEX_ARRAY_STRIDE 0x807C
#define GL_NORMAL_ARRAY_TYPE 0x807E
#define GL_NORMAL_ARRAY_STRIDE 0x807F
#define GL_COLOR_ARRAY_SIZE 0x8081
#define GL_COLOR_ARRAY_TYPE 0x8082
#define GL_COLOR_ARRAY_STRIDE 0x8083
#define GL_INDEX_ARRAY_TYPE 0x8085
#define GL_INDEX_ARRAY_STRIDE 0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE 0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE 0x808C
#define GL_VERTEX_ARRAY_POINTER 0x808E
#define GL_NORMAL_ARRAY_POINTER 0x808F
#define GL_COLOR_ARRAY_POINTER 0x8090
#define GL_INDEX_ARRAY_POINTER 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER 0x8093
#define GL_V2F 0x2A20
#define GL_V3F 0x2A21
#define GL_C4UB_V2F 0x2A22
#define GL_C4UB_V3F 0x2A23
#define GL_C3F_V3F 0x2A24
#define GL_N3F_V3F 0x2A25
#define GL_C4F_N3F_V3F 0x2A26
#define GL_T2F_V3F 0x2A27
#define GL_T4F_V4F 0x2A28
#define GL_T2F_C4UB_V3F 0x2A29
#define GL_T2F_C3F_V3F 0x2A2A
#define GL_T2F_N3F_V3F 0x2A2B
#define GL_T2F_C4F_N3F_V3F 0x2A2C
#define GL_T4F_C4F_N3F_V4F 0x2A2D

#define GL_EXT_vertex_array 1
#define GL_EXT_bgra 1
#define GL_EXT_paletted_texture 1
#define GL_WIN_swap_hint 1
#define GL_WIN_draw_range_elements 1

#define GL_VERTEX_ARRAY_EXT 0x8074
#define GL_NORMAL_ARRAY_EXT 0x8075
#define GL_COLOR_ARRAY_EXT 0x8076
#define GL_INDEX_ARRAY_EXT 0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT 0x8078
#define GL_EDGE_FLAG_ARRAY_EXT 0x8079
#define GL_VERTEX_ARRAY_SIZE_EXT 0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT 0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT 0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT 0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT 0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT 0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT 0x8080
#define GL_COLOR_ARRAY_SIZE_EXT 0x8081
#define GL_COLOR_ARRAY_TYPE_EXT 0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT 0x8083
#define GL_COLOR_ARRAY_COUNT_EXT 0x8084
#define GL_INDEX_ARRAY_TYPE_EXT 0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT 0x8086
#define GL_INDEX_ARRAY_COUNT_EXT 0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT 0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT 0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT 0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT 0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT 0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT 0x808F
#define GL_COLOR_ARRAY_POINTER_EXT 0x8090
#define GL_INDEX_ARRAY_POINTER_EXT 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT 0x8093
#define GL_DOUBLE_EXT GL_DOUBLE

#define GL_BGR_EXT 0x80E0
#define GL_BGRA_EXT 0x80E1

#define GL_COLOR_TABLE_FORMAT_EXT 0x80D8
#define GL_COLOR_TABLE_WIDTH_EXT 0x80D9
#define GL_COLOR_TABLE_RED_SIZE_EXT 0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_EXT 0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_EXT 0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_EXT 0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_EXT 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_EXT 0x80DF

#define GL_COLOR_INDEX1_EXT 0x80E2
#define GL_COLOR_INDEX2_EXT 0x80E3
#define GL_COLOR_INDEX4_EXT 0x80E4
#define GL_COLOR_INDEX8_EXT 0x80E5
#define GL_COLOR_INDEX12_EXT 0x80E6
#define GL_COLOR_INDEX16_EXT 0x80E7

#define GL_MAX_ELEMENTS_VERTICES_WIN 0x80E8
#define GL_MAX_ELEMENTS_INDICES_WIN 0x80E9

#define GL_PHONG_WIN 0x80EA
#define GL_PHONG_HINT_WIN 0x80EB

#define GL_FOG_SPECULAR_TEXTURE_WIN 0x80EC

#define GL_LOGIC_OP GL_INDEX_LOGIC_OP
#define GL_TEXTURE_COMPONENTS GL_TEXTURE_INTERNAL_FORMAT

// GL_API void glAccum(GLenum op, GLfloat value);
GL_API void glAlphaFunc(GLenum func, GLclampf ref);
// GL_API GLboolean glAreTexturesResident(GLsizei n, const GLuint *textures, GLboolean *residences);
GL_API void glArrayElement(GLint i);
GL_API void glBegin(GLenum mode);
GL_API void glBindTexture(GLenum target, GLuint texture);
// GL_API void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
GL_API void glBlendFunc(GLenum sfactor, GLenum dfactor);
// GL_API void glCallList(GLuint list);
// GL_API void glCallLists(GLsizei n, GLenum type, const GLvoid *lists);
GL_API void glClear(GLbitfield mask);
// GL_API void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GL_API void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
GL_API void glClearDepth(GLclampd depth);
// GL_API void glClearIndex(GLfloat c);
GL_API void glClearStencil(GLint s);
// GL_API void glClipPlane(GLenum plane, const GLdouble *equation);
// GL_API void glColor3b(GLbyte red, GLbyte green, GLbyte blue);
// GL_API void glColor3bv(const GLbyte *v);
// GL_API void glColor3d(GLdouble red, GLdouble green, GLdouble blue);
// GL_API void glColor3dv(const GLdouble *v);
GL_API void glColor3f(GLfloat red, GLfloat green, GLfloat blue);
GL_API void glColor3fv(const GLfloat *v);
// GL_API void glColor3i(GLint red, GLint green, GLint blue);
// GL_API void glColor3iv(const GLint *v);
// GL_API void glColor3s(GLshort red, GLshort green, GLshort blue);
// GL_API void glColor3sv(const GLshort *v);
GL_API void glColor3ub(GLubyte red, GLubyte green, GLubyte blue);
GL_API void glColor3ubv(const GLubyte *v);
// GL_API void glColor3ui(GLuint red, GLuint green, GLuint blue);
// GL_API void glColor3uiv(const GLuint *v);
// GL_API void glColor3us(GLushort red, GLushort green, GLushort blue);
// GL_API void glColor3usv(const GLushort *v);
// GL_API void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
// GL_API void glColor4bv(const GLbyte *v);
// GL_API void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
// GL_API void glColor4dv(const GLdouble *v);
GL_API void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GL_API void glColor4fv(const GLfloat *v);
// GL_API void glColor4i(GLint red, GLint green, GLint blue, GLint alpha);
// GL_API void glColor4iv(const GLint *v);
// GL_API void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);
// GL_API void glColor4sv(const GLshort *v);
GL_API void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
GL_API void glColor4ubv(const GLubyte *v);
// GL_API void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);
// GL_API void glColor4uiv(const GLuint *v);
// GL_API void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);
// GL_API void glColor4usv(const GLushort *v);
GL_API void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GL_API void glColorMaterial(GLenum face, GLenum mode);
GL_API void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
// GL_API void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
// GL_API void glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
GL_API void glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
// GL_API void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GL_API void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GL_API void glCullFace(GLenum mode);
// GL_API void glDeleteLists(GLuint list, GLsizei range);
GL_API void glDeleteTextures(GLsizei n, const GLuint *textures);
GL_API void glDepthFunc(GLenum func);
GL_API void glDepthMask(GLboolean flag);
GL_API void glDepthRange(GLclampd zNear, GLclampd zFar);
GL_API void glDisable(GLenum cap);
GL_API void glDisableClientState(GLenum array);
GL_API void glDrawArrays(GLenum mode, GLint first, GLsizei count);
// GL_API void glDrawBuffer(GLenum mode);
GL_API void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
// GL_API void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
// GL_API void glEdgeFlag(GLboolean flag);
// GL_API void glEdgeFlagPointer(GLsizei stride, const GLvoid *pointer);
// GL_API void glEdgeFlagv(const GLboolean *flag);
GL_API void glEnable(GLenum cap);
GL_API void glEnableClientState(GLenum array);
GL_API void glEnd(void);
// GL_API void glEndList(void);
// GL_API void glEvalCoord1d(GLdouble u);
// GL_API void glEvalCoord1dv(const GLdouble *u);
// GL_API void glEvalCoord1f(GLfloat u);
// GL_API void glEvalCoord1fv(const GLfloat *u);
// GL_API void glEvalCoord2d(GLdouble u, GLdouble v);
// GL_API void glEvalCoord2dv(const GLdouble *u);
// GL_API void glEvalCoord2f(GLfloat u, GLfloat v);
// GL_API void glEvalCoord2fv(const GLfloat *u);
// GL_API void glEvalMesh1(GLenum mode, GLint i1, GLint i2);
// GL_API void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
// GL_API void glEvalPoint1(GLint i);
// GL_API void glEvalPoint2(GLint i, GLint j);
// GL_API void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer);
GL_API void glFinish(void);
GL_API void glFlush(void);
GL_API void glFogf(GLenum pname, GLfloat param);
GL_API void glFogfv(GLenum pname, const GLfloat *params);
GL_API void glFogi(GLenum pname, GLint param);
GL_API void glFogiv(GLenum pname, const GLint *params);
GL_API void glFrontFace(GLenum mode);
GL_API void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
// GL_API GLuint glGenLists(GLsizei range);
GL_API void glGenTextures(GLsizei n, GLuint *textures);
GL_API void glGetBooleanv(GLenum pname, GLboolean *params);
// GL_API void glGetClipPlane(GLenum plane, GLdouble *equation);
// GL_API void glGetDoublev(GLenum pname, GLdouble *params);
GL_API GLenum glGetError(void);
GL_API void glGetFloatv(GLenum pname, GLfloat *params);
GL_API void glGetIntegerv(GLenum pname, GLint *params);
// GL_API void glGetLightfv(GLenum light, GLenum pname, GLfloat *params);
// GL_API void glGetLightiv(GLenum light, GLenum pname, GLint *params);
// GL_API void glGetMapdv(GLenum target, GLenum query, GLdouble *v);
// GL_API void glGetMapfv(GLenum target, GLenum query, GLfloat *v);
// GL_API void glGetMapiv(GLenum target, GLenum query, GLint *v);
// GL_API void glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params);
// GL_API void glGetMaterialiv(GLenum face, GLenum pname, GLint *params);
// GL_API void glGetPixelMapfv(GLenum map, GLfloat *values);
// GL_API void glGetPixelMapuiv(GLenum map, GLuint *values);
// GL_API void glGetPixelMapusv(GLenum map, GLushort *values);
// GL_API void glGetPointerv(GLenum pname, GLvoid **params);
// GL_API void glGetPolygonStipple(GLubyte *mask);
GL_API const GLubyte *glGetString(GLenum name);
// GL_API void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params);
GL_API void glGetTexEnviv(GLenum target, GLenum pname, GLint *params);
// GL_API void glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params);
// GL_API void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params);
// GL_API void glGetTexGeniv(GLenum coord, GLenum pname, GLint *params);
GL_API void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
// GL_API void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params);
// GL_API void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params);
GL_API void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params);
GL_API void glGetTexParameteriv(GLenum target, GLenum pname, GLint *params);
GL_API void glHint(GLenum target, GLenum mode);
// GL_API void glIndexMask(GLuint mask);
// GL_API void glIndexPointer(GLenum type, GLsizei stride, const GLvoid *pointer);
// GL_API void glIndexd(GLdouble c);
// GL_API void glIndexdv(const GLdouble *c);
// GL_API void glIndexf(GLfloat c);
// GL_API void glIndexfv(const GLfloat *c);
// GL_API void glIndexi(GLint c);
// GL_API void glIndexiv(const GLint *c);
// GL_API void glIndexs(GLshort c);
// GL_API void glIndexsv(const GLshort *c);
// GL_API void glIndexub(GLubyte c);
// GL_API void glIndexubv(const GLubyte *c);
// GL_API void glInitNames(void);
// GL_API void glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid *pointer);
GL_API GLboolean glIsEnabled(GLenum cap);
// GL_API GLboolean glIsList(GLuint list);
GL_API GLboolean glIsTexture(GLuint texture);
GL_API void glLightModelf(GLenum pname, GLfloat param);
GL_API void glLightModelfv(GLenum pname, const GLfloat *params);
GL_API void glLightModeli(GLenum pname, GLint param);
GL_API void glLightModeliv(GLenum pname, const GLint *params);
GL_API void glLightf(GLenum light, GLenum pname, GLfloat param);
GL_API void glLightfv(GLenum light, GLenum pname, const GLfloat *params);
GL_API void glLighti(GLenum light, GLenum pname, GLint param);
GL_API void glLightiv(GLenum light, GLenum pname, const GLint *params);
// GL_API void glLineStipple(GLint factor, GLushort pattern);
GL_API void glLineWidth(GLfloat width);
// GL_API void glListBase(GLuint base);
GL_API void glLoadIdentity(void);
GL_API void glLoadMatrixd(const GLdouble *m);
GL_API void glLoadMatrixf(const GLfloat *m);
// GL_API void glLoadName(GLuint name);
// GL_API void glLogicOp(GLenum opcode);
// GL_API void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
// GL_API void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
// GL_API void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
// GL_API void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
// GL_API void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2);
// GL_API void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2);
// GL_API void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
// GL_API void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
GL_API void glMaterialf(GLenum face, GLenum pname, GLfloat param);
GL_API void glMaterialfv(GLenum face, GLenum pname, const GLfloat *params);
// GL_API void glMateriali(GLenum face, GLenum pname, GLint param);
// GL_API void glMaterialiv(GLenum face, GLenum pname, const GLint *params);
GL_API void glMatrixMode(GLenum mode);
GL_API void glMultMatrixd(const GLdouble *m);
GL_API void glMultMatrixf(const GLfloat *m);
// GL_API void glNewList(GLuint list, GLenum mode);
// GL_API void glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz);
// GL_API void glNormal3bv(const GLbyte *v);
GL_API void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz);
GL_API void glNormal3dv(const GLdouble *v);
GL_API void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);
GL_API void glNormal3fv(const GLfloat *v);
// GL_API void glNormal3i(GLint nx, GLint ny, GLint nz);
// GL_API void glNormal3iv(const GLint *v);
// GL_API void glNormal3s(GLshort nx, GLshort ny, GLshort nz);
// GL_API void glNormal3sv(const GLshort *v);
GL_API void glNormalPointer(GLenum type, GLsizei stride, const GLvoid *pointer);
GL_API void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
// GL_API void glPassThrough(GLfloat token);
// GL_API void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values);
// GL_API void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint *values);
// GL_API void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort *values);
// GL_API void glPixelStoref(GLenum pname, GLfloat param);
GL_API void glPixelStorei(GLenum pname, GLint param);
// GL_API void glPixelTransferf(GLenum pname, GLfloat param);
// GL_API void glPixelTransferi(GLenum pname, GLint param);
// GL_API void glPixelZoom(GLfloat xfactor, GLfloat yfactor);
GL_API void glPointSize(GLfloat size);
GL_API void glPolygonMode(GLenum face, GLenum mode);
GL_API void glPolygonOffset(GLfloat factor, GLfloat units);
// GL_API void glPolygonStipple(const GLubyte *mask);
GL_API void glPopAttrib(void);
// GL_API void glPopClientAttrib(void);
GL_API void glPopMatrix(void);
// GL_API void glPopName(void);
// GL_API void glPrioritizeTextures(GLsizei n, const GLuint *textures, const GLclampf *priorities);
GL_API void glPushAttrib(GLbitfield mask);
// GL_API void glPushClientAttrib(GLbitfield mask);
GL_API void glPushMatrix(void);
// GL_API void glPushName(GLuint name);
// GL_API void glRasterPos2d(GLdouble x, GLdouble y);
// GL_API void glRasterPos2dv(const GLdouble *v);
// GL_API void glRasterPos2f(GLfloat x, GLfloat y);
// GL_API void glRasterPos2fv(const GLfloat *v);
// GL_API void glRasterPos2i(GLint x, GLint y);
// GL_API void glRasterPos2iv(const GLint *v);
// GL_API void glRasterPos2s(GLshort x, GLshort y);
// GL_API void glRasterPos2sv(const GLshort *v);
// GL_API void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z);
// GL_API void glRasterPos3dv(const GLdouble *v);
// GL_API void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z);
// GL_API void glRasterPos3fv(const GLfloat *v);
// GL_API void glRasterPos3i(GLint x, GLint y, GLint z);
// GL_API void glRasterPos3iv(const GLint *v);
// GL_API void glRasterPos3s(GLshort x, GLshort y, GLshort z);
// GL_API void glRasterPos3sv(const GLshort *v);
// GL_API void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
// GL_API void glRasterPos4dv(const GLdouble *v);
// GL_API void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
// GL_API void glRasterPos4fv(const GLfloat *v);
// GL_API void glRasterPos4i(GLint x, GLint y, GLint z, GLint w);
// GL_API void glRasterPos4iv(const GLint *v);
// GL_API void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);
// GL_API void glRasterPos4sv(const GLshort *v);
// GL_API void glReadBuffer(GLenum mode);
GL_API void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
// GL_API void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
// GL_API void glRectdv(const GLdouble *v1, const GLdouble *v2);
GL_API void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
GL_API void glRectfv(const GLfloat *v1, const GLfloat *v2);
GL_API void glRecti(GLint x1, GLint y1, GLint x2, GLint y2);
GL_API void glRectiv(const GLint *v1, const GLint *v2);
// GL_API void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
// GL_API void glRectsv(const GLshort *v1, const GLshort *v2);
// GL_API GLint glRenderMode(GLenum mode);
GL_API void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
GL_API void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
GL_API void glScaled(GLdouble x, GLdouble y, GLdouble z);
GL_API void glScalef(GLfloat x, GLfloat y, GLfloat z);
GL_API void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
// GL_API void glSelectBuffer(GLsizei size, GLuint *buffer);
GL_API void glShadeModel(GLenum mode);
GL_API void glStencilFunc(GLenum func, GLint ref, GLuint mask);
GL_API void glStencilMask(GLuint mask);
GL_API void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
// GL_API void glTexCoord1d(GLdouble s);
// GL_API void glTexCoord1dv(const GLdouble *v);
// GL_API void glTexCoord1f(GLfloat s);
// GL_API void glTexCoord1fv(const GLfloat *v);
// GL_API void glTexCoord1i(GLint s);
// GL_API void glTexCoord1iv(const GLint *v);
// GL_API void glTexCoord1s(GLshort s);
// GL_API void glTexCoord1sv(const GLshort *v);
// GL_API void glTexCoord2d(GLdouble s, GLdouble t);
// GL_API void glTexCoord2dv(const GLdouble *v);
GL_API void glTexCoord2f(GLfloat s, GLfloat t);
GL_API void glTexCoord2fv(const GLfloat *v);
GL_API void glTexCoord2i(GLint s, GLint t);
GL_API void glTexCoord2iv(const GLint *v);
// GL_API void glTexCoord2s(GLshort s, GLshort t);
// GL_API void glTexCoord2sv(const GLshort *v);
// GL_API void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r);
// GL_API void glTexCoord3dv(const GLdouble *v);
GL_API void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r);
GL_API void glTexCoord3fv(const GLfloat *v);
GL_API void glTexCoord3i(GLint s, GLint t, GLint r);
GL_API void glTexCoord3iv(const GLint *v);
// GL_API void glTexCoord3s(GLshort s, GLshort t, GLshort r);
// GL_API void glTexCoord3sv(const GLshort *v);
// GL_API void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
// GL_API void glTexCoord4dv(const GLdouble *v);
GL_API void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
// GL_API void glTexCoord4fv(const GLfloat *v);
// GL_API void glTexCoord4i(GLint s, GLint t, GLint r, GLint q);
// GL_API void glTexCoord4iv(const GLint *v);
// GL_API void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);
// GL_API void glTexCoord4sv(const GLshort *v);
GL_API void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_API void glTexEnvf(GLenum target, GLenum pname, GLfloat param);
// GL_API void glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params);
GL_API void glTexEnvi(GLenum target, GLenum pname, GLint param);
// GL_API void glTexEnviv(GLenum target, GLenum pname, const GLint *params);
// GL_API void glTexGend(GLenum coord, GLenum pname, GLdouble param);
// GL_API void glTexGendv(GLenum coord, GLenum pname, const GLdouble *params);
// GL_API void glTexGenf(GLenum coord, GLenum pname, GLfloat param);
// GL_API void glTexGenfv(GLenum coord, GLenum pname, const GLfloat *params);
// GL_API void glTexGeni(GLenum coord, GLenum pname, GLint param);
// GL_API void glTexGeniv(GLenum coord, GLenum pname, const GLint *params);
// GL_API void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
GL_API void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
GL_API void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
// GL_API void glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params);
GL_API void glTexParameteri(GLenum target, GLenum pname, GLint param);
// GL_API void glTexParameteriv(GLenum target, GLenum pname, const GLint *params);
// GL_API void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
GL_API void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
GL_API void glTranslated(GLdouble x, GLdouble y, GLdouble z);
GL_API void glTranslatef(GLfloat x, GLfloat y, GLfloat z);
GL_API void glVertex2d(GLdouble x, GLdouble y);
GL_API void glVertex2dv(const GLdouble *v);
GL_API void glVertex2f(GLfloat x, GLfloat y);
GL_API void glVertex2fv(const GLfloat *v);
GL_API void glVertex2i(GLint x, GLint y);
GL_API void glVertex2iv(const GLint *v);
// GL_API void glVertex2s(GLshort x, GLshort y);
// GL_API void glVertex2sv(const GLshort *v);
GL_API void glVertex3d(GLdouble x, GLdouble y, GLdouble z);
GL_API void glVertex3dv(const GLdouble *v);
GL_API void glVertex3f(GLfloat x, GLfloat y, GLfloat z);
GL_API void glVertex3fv(const GLfloat *v);
GL_API void glVertex3i(GLint x, GLint y, GLint z);
GL_API void glVertex3iv(const GLint *v);
// GL_API void glVertex3s(GLshort x, GLshort y, GLshort z);
// GL_API void glVertex3sv(const GLshort *v);
GL_API void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GL_API void glVertex4dv(const GLdouble *v);
GL_API void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GL_API void glVertex4fv(const GLfloat *v);
GL_API void glVertex4i(GLint x, GLint y, GLint z, GLint w);
GL_API void glVertex4iv(const GLint *v);
// GL_API void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w);
// GL_API void glVertex4sv(const GLshort *v);
GL_API void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
GL_API void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

GL_API void gluPerspective(GLdouble fovy, GLdouble aspect, GLdouble znear, GLdouble zfar);

typedef void (*PFNGLARRAYELEMENTEXTPROC)(GLint i);
typedef void (*PFNGLDRAWARRAYSEXTPROC)(GLenum mode,GLint first,GLsizei count);
typedef void (*PFNGLVERTEXPOINTEREXTPROC)(GLint size,GLenum type,GLsizei stride,GLsizei count,const GLvoid *pointer);
typedef void (*PFNGLNORMALPOINTEREXTPROC)(GLenum type,GLsizei stride,GLsizei count,const GLvoid *pointer);
typedef void (*PFNGLCOLORPOINTEREXTPROC)(GLint size,GLenum type,GLsizei stride,GLsizei count,const GLvoid *pointer);
typedef void (*PFNGLINDEXPOINTEREXTPROC)(GLenum type,GLsizei stride,GLsizei count,const GLvoid *pointer);
typedef void (*PFNGLTEXCOORDPOINTEREXTPROC)(GLint size,GLenum type,GLsizei stride,GLsizei count,const GLvoid *pointer);
typedef void (*PFNGLEDGEFLAGPOINTEREXTPROC)(GLsizei stride,GLsizei count,const GLboolean *pointer);
typedef void (*PFNGLGETPOINTERVEXTPROC)(GLenum pname,GLvoid **params);
typedef void (*PFNGLARRAYELEMENTARRAYEXTPROC)(GLenum mode,GLsizei count,const GLvoid *pi);
typedef void (*PFNGLDRAWRANGEELEMENTSWINPROC)(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const GLvoid *indices);
typedef void (*PFNGLADDSWAPHINTRECTWINPROC)(GLint x,GLint y,GLsizei width,GLsizei height);
typedef void (*PFNGLCOLORTABLEEXTPROC)(GLenum target,GLenum internalFormat,GLsizei width,GLenum format,GLenum type,const GLvoid *data);
typedef void (*PFNGLCOLORSUBTABLEEXTPROC)(GLenum target,GLsizei start,GLsizei count,GLenum format,GLenum type,const GLvoid *data);
typedef void (*PFNGLGETCOLORTABLEEXTPROC)(GLenum target,GLenum format,GLenum type,GLvoid *data);
typedef void (*PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)(GLenum target,GLenum pname,GLint *params);
typedef void (*PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)(GLenum target,GLenum pname,GLfloat *params);

#ifdef __cplusplus
}
#endif

#endif /* __GL_H__ */
#endif /* __gl_h_  */
