#line 1 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
#line 168 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#pragma pack ( push, 8 )
#line 32 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 50 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\vadefs.h"
extern "C" { typedef unsigned __int64 uintptr_t; }
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\vadefs.h"
extern "C" { typedef char *va_list; }
#line 125 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\vadefs.h"
extern "C" { extern void __cdecl __va_start(va_list *, ...); } 
#line 151 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\vadefs.h"
#pragma pack ( pop )
#line 488 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
typedef unsigned __int64 size_t; 
#include "crt/host_runtime.h"
#line 497 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef size_t rsize_t; }
#line 504 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef __int64 intptr_t; }
#line 522 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef __int64 ptrdiff_t; }
#line 535 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef unsigned short wint_t; }
#line 536
extern "C" { typedef unsigned short wctype_t; }
#line 560 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef int errcode; }
#line 565 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef int errno_t; }
#line 569 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef long __time32_t; }
#line 574 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef __int64 __time64_t; }
#line 582 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef __time64_t time_t; }
#line 2037 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
struct threadlocaleinfostruct; 
#line 2038
struct threadmbcinfostruct; 
#line 2039
extern "C" { typedef threadlocaleinfostruct *pthreadlocinfo; }
#line 2040
extern "C" { typedef threadmbcinfostruct *pthreadmbcinfo; }
#line 2041
struct __lc_time_data; 
#line 2047
extern "C" { typedef 
#line 2043
struct localeinfo_struct { 
#line 2045
pthreadlocinfo locinfo; 
#line 2046
pthreadmbcinfo mbcinfo; 
#line 2047
} _locale_tstruct, *_locale_t; }
#line 2054
extern "C" { typedef 
#line 2050
struct tagLC_ID { 
#line 2051
unsigned short wLanguage; 
#line 2052
unsigned short wCountry; 
#line 2053
unsigned short wCodePage; 
#line 2054
} LC_ID, *LPLC_ID; }
#line 2083 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef 
#line 2059
struct threadlocaleinfostruct { 
#line 2060
int refcount; 
#line 2061
unsigned lc_codepage; 
#line 2062
unsigned lc_collate_cp; 
#line 2063
unsigned long lc_handle[6]; 
#line 2064
LC_ID lc_id[6]; 
#line 2065
struct { 
#line 2066
char *locale; 
#line 2067
__wchar_t *wlocale; 
#line 2068
int *refcount; 
#line 2069
int *wrefcount; 
#line 2070
} lc_category[6]; 
#line 2071
int lc_clike; 
#line 2072
int mb_cur_max; 
#line 2073
int *lconv_intl_refcount; 
#line 2074
int *lconv_num_refcount; 
#line 2075
int *lconv_mon_refcount; 
#line 2076
struct lconv *lconv; 
#line 2077
int *ctype1_refcount; 
#line 2078
unsigned short *ctype1; 
#line 2079
const unsigned short *pctype; 
#line 2080
const unsigned char *pclmap; 
#line 2081
const unsigned char *pcumap; 
#line 2082
__lc_time_data *lc_time_curr; 
#line 2083
} threadlocinfo; }
#line 2121 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#pragma pack ( pop )
#line 46 "c:\\cuda\\include\\device_types.h"
#if 0
#line 46
enum cudaRoundMode { 
#line 48
cudaRoundNearest, 
#line 49
cudaRoundZero, 
#line 50
cudaRoundPosInf, 
#line 51
cudaRoundMinInf
#line 52
}; 
#endif
#line 41 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
extern "C" { extern int *__cdecl _errno(); } 
#line 44
extern "C" { errno_t __cdecl _set_errno(int); } 
#line 45
extern "C" { errno_t __cdecl _get_errno(int *); } 
#line 68 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
extern "C" { extern unsigned long __cdecl __threadid(); } 
#line 70
extern "C" { extern uintptr_t __cdecl __threadhandle(); } 
#line 94 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 94
enum cudaError { 
#line 96
cudaSuccess, 
#line 97
cudaErrorMissingConfiguration, 
#line 98
cudaErrorMemoryAllocation, 
#line 99
cudaErrorInitializationError, 
#line 100
cudaErrorLaunchFailure, 
#line 101
cudaErrorPriorLaunchFailure, 
#line 102
cudaErrorLaunchTimeout, 
#line 103
cudaErrorLaunchOutOfResources, 
#line 104
cudaErrorInvalidDeviceFunction, 
#line 105
cudaErrorInvalidConfiguration, 
#line 106
cudaErrorInvalidDevice, 
#line 107
cudaErrorInvalidValue, 
#line 108
cudaErrorInvalidPitchValue, 
#line 109
cudaErrorInvalidSymbol, 
#line 110
cudaErrorMapBufferObjectFailed, 
#line 111
cudaErrorUnmapBufferObjectFailed, 
#line 112
cudaErrorInvalidHostPointer, 
#line 113
cudaErrorInvalidDevicePointer, 
#line 114
cudaErrorInvalidTexture, 
#line 115
cudaErrorInvalidTextureBinding, 
#line 116
cudaErrorInvalidChannelDescriptor, 
#line 117
cudaErrorInvalidMemcpyDirection, 
#line 118
cudaErrorAddressOfConstant, 
#line 124
cudaErrorTextureFetchFailed, 
#line 125
cudaErrorTextureNotBound, 
#line 126
cudaErrorSynchronizationError, 
#line 127
cudaErrorInvalidFilterSetting, 
#line 128
cudaErrorInvalidNormSetting, 
#line 129
cudaErrorMixedDeviceExecution, 
#line 130
cudaErrorCudartUnloading, 
#line 131
cudaErrorUnknown, 
#line 132
cudaErrorNotYetImplemented, 
#line 133
cudaErrorMemoryValueTooLarge, 
#line 134
cudaErrorInvalidResourceHandle, 
#line 135
cudaErrorNotReady, 
#line 136
cudaErrorInsufficientDriver, 
#line 137
cudaErrorSetOnActiveProcess, 
#line 138
cudaErrorInvalidSurface, 
#line 139
cudaErrorNoDevice, 
#line 140
cudaErrorECCUncorrectable, 
#line 141
cudaErrorSharedObjectSymbolNotFound, 
#line 142
cudaErrorSharedObjectInitFailed, 
#line 143
cudaErrorUnsupportedLimit, 
#line 144
cudaErrorDuplicateVariableName, 
#line 145
cudaErrorDuplicateTextureName, 
#line 146
cudaErrorDuplicateSurfaceName, 
#line 147
cudaErrorDevicesUnavailable, 
#line 148
cudaErrorStartupFailure = 127, 
#line 149
cudaErrorApiFailureBase = 10000
#line 150
}; 
#endif
#line 156 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 156
enum cudaChannelFormatKind { 
#line 158
cudaChannelFormatKindSigned, 
#line 159
cudaChannelFormatKindUnsigned, 
#line 160
cudaChannelFormatKindFloat, 
#line 161
cudaChannelFormatKindNone
#line 162
}; 
#endif
#line 168 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 168
struct cudaChannelFormatDesc { 
#line 170
int x; 
#line 171
int y; 
#line 172
int z; 
#line 173
int w; 
#line 174
cudaChannelFormatKind f; 
#line 175
}; 
#endif
#line 181 "c:\\cuda\\include\\driver_types.h"
#if 0
struct cudaArray; 
#endif
#line 187 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 187
enum cudaMemcpyKind { 
#line 189
cudaMemcpyHostToHost, 
#line 190
cudaMemcpyHostToDevice, 
#line 191
cudaMemcpyDeviceToHost, 
#line 192
cudaMemcpyDeviceToDevice
#line 193
}; 
#endif
#line 200 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 200
struct cudaPitchedPtr { 
#line 202
void *ptr; 
#line 203
size_t pitch; 
#line 204
size_t xsize; 
#line 205
size_t ysize; 
#line 206
}; 
#endif
#line 213 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 213
struct cudaExtent { 
#line 215
size_t width; 
#line 216
size_t height; 
#line 217
size_t depth; 
#line 218
}; 
#endif
#line 225 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 225
struct cudaPos { 
#line 227
size_t x; 
#line 228
size_t y; 
#line 229
size_t z; 
#line 230
}; 
#endif
#line 236 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 236
struct cudaMemcpy3DParms { 
#line 238
cudaArray *srcArray; 
#line 239
cudaPos srcPos; 
#line 240
cudaPitchedPtr srcPtr; 
#line 242
cudaArray *dstArray; 
#line 243
cudaPos dstPos; 
#line 244
cudaPitchedPtr dstPtr; 
#line 246
cudaExtent extent; 
#line 247
cudaMemcpyKind kind; 
#line 248
}; 
#endif
#line 254 "c:\\cuda\\include\\driver_types.h"
#if 0
struct cudaGraphicsResource; 
#endif
#line 260 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 260
enum cudaGraphicsRegisterFlags { 
#line 262
cudaGraphicsRegisterFlagsNone
#line 263
}; 
#endif
#line 269 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 269
enum cudaGraphicsMapFlags { 
#line 271
cudaGraphicsMapFlagsNone, 
#line 272
cudaGraphicsMapFlagsReadOnly, 
#line 273
cudaGraphicsMapFlagsWriteDiscard
#line 274
}; 
#endif
#line 280 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 280
enum cudaGraphicsCubeFace { 
#line 281
cudaGraphicsCubeFacePositiveX, 
#line 282
cudaGraphicsCubeFaceNegativeX, 
#line 283
cudaGraphicsCubeFacePositiveY, 
#line 284
cudaGraphicsCubeFaceNegativeY, 
#line 285
cudaGraphicsCubeFacePositiveZ, 
#line 286
cudaGraphicsCubeFaceNegativeZ
#line 287
}; 
#endif
#line 293 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 293
struct cudaFuncAttributes { 
#line 295
size_t sharedSizeBytes; 
#line 296
size_t constSizeBytes; 
#line 297
size_t localSizeBytes; 
#line 298
int maxThreadsPerBlock; 
#line 299
int numRegs; 
#line 305
int ptxVersion; 
#line 311
int binaryVersion; 
#line 312
int __cudaReserved[6]; 
#line 313
}; 
#endif
#line 319 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 319
enum cudaFuncCache { 
#line 321
cudaFuncCachePreferNone, 
#line 322
cudaFuncCachePreferShared, 
#line 323
cudaFuncCachePreferL1
#line 324
}; 
#endif
#line 330 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 330
enum cudaComputeMode { 
#line 332
cudaComputeModeDefault, 
#line 333
cudaComputeModeExclusive, 
#line 334
cudaComputeModeProhibited
#line 335
}; 
#endif
#line 341 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 341
enum cudaLimit { 
#line 343
cudaLimitStackSize, 
#line 344
cudaLimitPrintfFifoSize
#line 345
}; 
#endif
#line 351 "c:\\cuda\\include\\driver_types.h"
#if 0
#line 351
struct cudaDeviceProp { 
#line 353
char name[256]; 
#line 354
size_t totalGlobalMem; 
#line 355
size_t sharedMemPerBlock; 
#line 356
int regsPerBlock; 
#line 357
int warpSize; 
#line 358
size_t memPitch; 
#line 359
int maxThreadsPerBlock; 
#line 360
int maxThreadsDim[3]; 
#line 361
int maxGridSize[3]; 
#line 362
int clockRate; 
#line 363
size_t totalConstMem; 
#line 364
int major; 
#line 365
int minor; 
#line 366
size_t textureAlignment; 
#line 367
int deviceOverlap; 
#line 368
int multiProcessorCount; 
#line 369
int kernelExecTimeoutEnabled; 
#line 370
int integrated; 
#line 371
int canMapHostMemory; 
#line 372
int computeMode; 
#line 373
int maxTexture1D; 
#line 374
int maxTexture2D[2]; 
#line 375
int maxTexture3D[3]; 
#line 376
int maxTexture2DArray[3]; 
#line 377
size_t surfaceAlignment; 
#line 378
int concurrentKernels; 
#line 379
int ECCEnabled; 
#line 380
int pciBusID; 
#line 381
int pciDeviceID; 
#line 382
int __cudaReserved[22]; 
#line 383
}; 
#endif
#line 426 "c:\\cuda\\include\\driver_types.h"
#if 0
typedef cudaError 
#line 426
cudaError_t; 
#endif
#line 432 "c:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUstream_st *
#line 432
cudaStream_t; 
#endif
#line 438 "c:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUevent_st *
#line 438
cudaEvent_t; 
#endif
#line 444 "c:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUuuid_st 
#line 444
cudaUUID_t; 
#endif
#line 54 "c:\\cuda\\include\\surface_types.h"
#if 0
#line 54
enum cudaSurfaceBoundaryMode { 
#line 56
cudaBoundaryModeZero, 
#line 57
cudaBoundaryModeClamp, 
#line 58
cudaBoundaryModeTrap
#line 59
}; 
#endif
#line 62 "c:\\cuda\\include\\surface_types.h"
#if 0
#line 62
enum cudaSurfaceFormatMode { 
#line 64
cudaFormatModeForced, 
#line 65
cudaFormatModeAuto
#line 66
}; 
#endif
#line 69 "c:\\cuda\\include\\surface_types.h"
#if 0
#line 69
struct surfaceReference { 
#line 71
cudaChannelFormatDesc channelDesc; 
#line 72
}; 
#endif
#line 54 "c:\\cuda\\include\\texture_types.h"
#if 0
#line 54
enum cudaTextureAddressMode { 
#line 56
cudaAddressModeWrap, 
#line 57
cudaAddressModeClamp, 
#line 58
cudaAddressModeMirror
#line 59
}; 
#endif
#line 62 "c:\\cuda\\include\\texture_types.h"
#if 0
#line 62
enum cudaTextureFilterMode { 
#line 64
cudaFilterModePoint, 
#line 65
cudaFilterModeLinear
#line 66
}; 
#endif
#line 69 "c:\\cuda\\include\\texture_types.h"
#if 0
#line 69
enum cudaTextureReadMode { 
#line 71
cudaReadModeElementType, 
#line 72
cudaReadModeNormalizedFloat
#line 73
}; 
#endif
#line 76 "c:\\cuda\\include\\texture_types.h"
#if 0
#line 76
struct textureReference { 
#line 78
int normalized; 
#line 79
cudaTextureFilterMode filterMode; 
#line 80
cudaTextureAddressMode addressMode[3]; 
#line 81
cudaChannelFormatDesc channelDesc; 
#line 82
int __cudaReserved[16]; 
#line 83
}; 
#endif
#line 75 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 75
struct char1 { 
#line 77
signed char x; 
#line 78
}; 
#endif
#line 81 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 81
struct uchar1 { 
#line 83
unsigned char x; 
#line 84
}; 
#endif
#line 87 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 87
struct __declspec(align(2)) char2 { 
#line 89
signed char x, y; 
#line 90
}; 
#endif
#line 93 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 93
struct __declspec(align(2)) uchar2 { 
#line 95
unsigned char x, y; 
#line 96
}; 
#endif
#line 99 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 99
struct char3 { 
#line 101
signed char x, y, z; 
#line 102
}; 
#endif
#line 105 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 105
struct uchar3 { 
#line 107
unsigned char x, y, z; 
#line 108
}; 
#endif
#line 111 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 111
struct __declspec(align(4)) char4 { 
#line 113
signed char x, y, z, w; 
#line 114
}; 
#endif
#line 117 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 117
struct __declspec(align(4)) uchar4 { 
#line 119
unsigned char x, y, z, w; 
#line 120
}; 
#endif
#line 123 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 123
struct short1 { 
#line 125
short x; 
#line 126
}; 
#endif
#line 129 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 129
struct ushort1 { 
#line 131
unsigned short x; 
#line 132
}; 
#endif
#line 135 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 135
struct __declspec(align(4)) short2 { 
#line 137
short x, y; 
#line 138
}; 
#endif
#line 141 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 141
struct __declspec(align(4)) ushort2 { 
#line 143
unsigned short x, y; 
#line 144
}; 
#endif
#line 147 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 147
struct short3 { 
#line 149
short x, y, z; 
#line 150
}; 
#endif
#line 153 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 153
struct ushort3 { 
#line 155
unsigned short x, y, z; 
#line 156
}; 
#endif
#line 159 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 159
struct __declspec(align(8)) short4 { short x; short y; short z; short w; }; 
#endif
#line 162 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 162
struct __declspec(align(8)) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
#line 165 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 165
struct int1 { 
#line 167
int x; 
#line 168
}; 
#endif
#line 171 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 171
struct uint1 { 
#line 173
unsigned x; 
#line 174
}; 
#endif
#line 177 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 177
struct __declspec(align(8)) int2 { int x; int y; }; 
#endif
#line 180 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 180
struct __declspec(align(8)) uint2 { unsigned x; unsigned y; }; 
#endif
#line 183 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 183
struct int3 { 
#line 185
int x, y, z; 
#line 186
}; 
#endif
#line 189 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 189
struct uint3 { 
#line 191
unsigned x, y, z; 
#line 192
}; 
#endif
#line 195 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 195
struct __declspec(align(16)) int4 { 
#line 197
int x, y, z, w; 
#line 198
}; 
#endif
#line 201 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 201
struct __declspec(align(16)) uint4 { 
#line 203
unsigned x, y, z, w; 
#line 204
}; 
#endif
#line 207 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 207
struct long1 { 
#line 209
long x; 
#line 210
}; 
#endif
#line 213 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 213
struct ulong1 { 
#line 215
unsigned long x; 
#line 216
}; 
#endif
#line 221 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 221
struct __declspec(align(8)) long2 { long x; long y; }; 
#endif
#line 224 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 224
struct __declspec(align(8)) ulong2 { unsigned long x; unsigned long y; }; 
#endif
#line 243 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 243
struct long3 { 
#line 245
long x, y, z; 
#line 246
}; 
#endif
#line 249 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 249
struct ulong3 { 
#line 251
unsigned long x, y, z; 
#line 252
}; 
#endif
#line 255 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 255
struct __declspec(align(16)) long4 { 
#line 257
long x, y, z, w; 
#line 258
}; 
#endif
#line 261 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 261
struct __declspec(align(16)) ulong4 { 
#line 263
unsigned long x, y, z, w; 
#line 264
}; 
#endif
#line 267 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 267
struct float1 { 
#line 269
float x; 
#line 270
}; 
#endif
#line 273 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 273
struct __declspec(align(8)) float2 { float x; float y; }; 
#endif
#line 276 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 276
struct float3 { 
#line 278
float x, y, z; 
#line 279
}; 
#endif
#line 282 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 282
struct __declspec(align(16)) float4 { 
#line 284
float x, y, z, w; 
#line 285
}; 
#endif
#line 288 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 288
struct longlong1 { 
#line 290
__int64 x; 
#line 291
}; 
#endif
#line 294 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 294
struct ulonglong1 { 
#line 296
unsigned __int64 x; 
#line 297
}; 
#endif
#line 300 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 300
struct __declspec(align(16)) longlong2 { 
#line 302
__int64 x, y; 
#line 303
}; 
#endif
#line 306 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 306
struct __declspec(align(16)) ulonglong2 { 
#line 308
unsigned __int64 x, y; 
#line 309
}; 
#endif
#line 312 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 312
struct longlong3 { 
#line 314
__int64 x, y, z; 
#line 315
}; 
#endif
#line 318 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 318
struct ulonglong3 { 
#line 320
unsigned __int64 x, y, z; 
#line 321
}; 
#endif
#line 324 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 324
struct __declspec(align(16)) longlong4 { 
#line 326
__int64 x, y, z, w; 
#line 327
}; 
#endif
#line 330 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 330
struct __declspec(align(16)) ulonglong4 { 
#line 332
unsigned __int64 x, y, z, w; 
#line 333
}; 
#endif
#line 336 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 336
struct double1 { 
#line 338
double x; 
#line 339
}; 
#endif
#line 342 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 342
struct __declspec(align(16)) double2 { 
#line 344
double x, y; 
#line 345
}; 
#endif
#line 348 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 348
struct double3 { 
#line 350
double x, y, z; 
#line 351
}; 
#endif
#line 354 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 354
struct __declspec(align(16)) double4 { 
#line 356
double x, y, z, w; 
#line 357
}; 
#endif
#line 366 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef char1 
#line 366
char1; 
#endif
#line 368 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef uchar1 
#line 368
uchar1; 
#endif
#line 370 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef char2 
#line 370
char2; 
#endif
#line 372 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef uchar2 
#line 372
uchar2; 
#endif
#line 374 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef char3 
#line 374
char3; 
#endif
#line 376 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef uchar3 
#line 376
uchar3; 
#endif
#line 378 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef char4 
#line 378
char4; 
#endif
#line 380 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef uchar4 
#line 380
uchar4; 
#endif
#line 382 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef short1 
#line 382
short1; 
#endif
#line 384 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ushort1 
#line 384
ushort1; 
#endif
#line 386 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef short2 
#line 386
short2; 
#endif
#line 388 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ushort2 
#line 388
ushort2; 
#endif
#line 390 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef short3 
#line 390
short3; 
#endif
#line 392 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ushort3 
#line 392
ushort3; 
#endif
#line 394 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef short4 
#line 394
short4; 
#endif
#line 396 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ushort4 
#line 396
ushort4; 
#endif
#line 398 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef int1 
#line 398
int1; 
#endif
#line 400 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef uint1 
#line 400
uint1; 
#endif
#line 402 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef int2 
#line 402
int2; 
#endif
#line 404 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef uint2 
#line 404
uint2; 
#endif
#line 406 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef int3 
#line 406
int3; 
#endif
#line 408 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef uint3 
#line 408
uint3; 
#endif
#line 410 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef int4 
#line 410
int4; 
#endif
#line 412 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef uint4 
#line 412
uint4; 
#endif
#line 414 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef long1 
#line 414
long1; 
#endif
#line 416 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ulong1 
#line 416
ulong1; 
#endif
#line 418 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef long2 
#line 418
long2; 
#endif
#line 420 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ulong2 
#line 420
ulong2; 
#endif
#line 422 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef long3 
#line 422
long3; 
#endif
#line 424 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ulong3 
#line 424
ulong3; 
#endif
#line 426 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef long4 
#line 426
long4; 
#endif
#line 428 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ulong4 
#line 428
ulong4; 
#endif
#line 430 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef float1 
#line 430
float1; 
#endif
#line 432 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef float2 
#line 432
float2; 
#endif
#line 434 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef float3 
#line 434
float3; 
#endif
#line 436 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef float4 
#line 436
float4; 
#endif
#line 438 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef longlong1 
#line 438
longlong1; 
#endif
#line 440 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ulonglong1 
#line 440
ulonglong1; 
#endif
#line 442 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef longlong2 
#line 442
longlong2; 
#endif
#line 444 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ulonglong2 
#line 444
ulonglong2; 
#endif
#line 446 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef longlong3 
#line 446
longlong3; 
#endif
#line 448 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ulonglong3 
#line 448
ulonglong3; 
#endif
#line 450 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef longlong4 
#line 450
longlong4; 
#endif
#line 452 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef ulonglong4 
#line 452
ulonglong4; 
#endif
#line 454 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef double1 
#line 454
double1; 
#endif
#line 456 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef double2 
#line 456
double2; 
#endif
#line 458 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef double3 
#line 458
double3; 
#endif
#line 460 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef double4 
#line 460
double4; 
#endif
#line 469 "c:\\cuda\\include\\vector_types.h"
#if 0
#line 469
struct dim3 { 
#line 471
unsigned x, y, z; 
#line 477 "c:\\cuda\\include\\vector_types.h"
}; 
#endif
#line 480 "c:\\cuda\\include\\vector_types.h"
#if 0
typedef dim3 
#line 480
dim3; 
#endif
#line 89 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMalloc3D(cudaPitchedPtr *, cudaExtent); } 
#line 90
extern "C" { extern cudaError_t __stdcall cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0)); } 
#line 91
extern "C" { extern cudaError_t __stdcall cudaMemset3D(cudaPitchedPtr, int, cudaExtent); } 
#line 92
extern "C" { extern cudaError_t __stdcall cudaMemcpy3D(const cudaMemcpy3DParms *); } 
#line 93
extern "C" { extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0); } 
#line 101
extern "C" { extern cudaError_t __stdcall cudaMalloc(void **, size_t); } 
#line 102
extern "C" { extern cudaError_t __stdcall cudaMallocHost(void **, size_t); } 
#line 103
extern "C" { extern cudaError_t __stdcall cudaMallocPitch(void **, size_t *, size_t, size_t); } 
#line 104
extern "C" { extern cudaError_t __stdcall cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0)); } 
#line 105
extern "C" { extern cudaError_t __stdcall cudaFree(void *); } 
#line 106
extern "C" { extern cudaError_t __stdcall cudaFreeHost(void *); } 
#line 107
extern "C" { extern cudaError_t __stdcall cudaFreeArray(cudaArray *); } 
#line 109
extern "C" { extern cudaError_t __stdcall cudaHostAlloc(void **, size_t, unsigned); } 
#line 110
extern "C" { extern cudaError_t __stdcall cudaHostGetDevicePointer(void **, void *, unsigned); } 
#line 111
extern "C" { extern cudaError_t __stdcall cudaHostGetFlags(unsigned *, void *); } 
#line 119
extern "C" { extern cudaError_t __stdcall cudaMemGetInfo(size_t *, size_t *); } 
#line 120
extern "C" { extern cudaError_t __stdcall cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind); } 
#line 121
extern "C" { extern cudaError_t __stdcall cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind); } 
#line 122
extern "C" { extern cudaError_t __stdcall cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind); } 
#line 123
extern "C" { extern cudaError_t __stdcall cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); } 
#line 124
extern "C" { extern cudaError_t __stdcall cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); } 
#line 125
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); } 
#line 126
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind); } 
#line 127
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); } 
#line 128
extern "C" { extern cudaError_t __stdcall cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice); } 
#line 129
extern "C" { extern cudaError_t __stdcall cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost); } 
#line 137
extern "C" { extern cudaError_t __stdcall cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 138
extern "C" { extern cudaError_t __stdcall cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 139
extern "C" { extern cudaError_t __stdcall cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 140
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 141
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 142
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 143
extern "C" { extern cudaError_t __stdcall cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 144
extern "C" { extern cudaError_t __stdcall cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 152
extern "C" { extern cudaError_t __stdcall cudaMemset(void *, int, size_t); } 
#line 153
extern "C" { extern cudaError_t __stdcall cudaMemset2D(void *, size_t, int, size_t, size_t); } 
#line 161
extern "C" { extern cudaError_t __stdcall cudaGetSymbolAddress(void **, const char *); } 
#line 162
extern "C" { extern cudaError_t __stdcall cudaGetSymbolSize(size_t *, const char *); } 
#line 170
extern "C" { extern cudaError_t __stdcall cudaGetDeviceCount(int *); } 
#line 171
extern "C" { extern cudaError_t __stdcall cudaGetDeviceProperties(cudaDeviceProp *, int); } 
#line 172
extern "C" { extern cudaError_t __stdcall cudaChooseDevice(int *, const cudaDeviceProp *); } 
#line 173
extern "C" { extern cudaError_t __stdcall cudaSetDevice(int); } 
#line 174
extern "C" { extern cudaError_t __stdcall cudaGetDevice(int *); } 
#line 175
extern "C" { extern cudaError_t __stdcall cudaSetValidDevices(int *, int); } 
#line 176
extern "C" { extern cudaError_t __stdcall cudaSetDeviceFlags(int); } 
#line 184
extern "C" { extern cudaError_t __stdcall cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (4294967295U)); } 
#line 185
extern "C" { extern cudaError_t __stdcall cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t); } 
#line 186
extern "C" { extern cudaError_t __stdcall cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *); } 
#line 187
extern "C" { extern cudaError_t __stdcall cudaUnbindTexture(const textureReference *); } 
#line 188
extern "C" { extern cudaError_t __stdcall cudaGetTextureAlignmentOffset(size_t *, const textureReference *); } 
#line 189
extern "C" { extern cudaError_t __stdcall cudaGetTextureReference(const textureReference **, const char *); } 
#line 197
extern "C" { extern cudaError_t __stdcall cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *); } 
#line 198
extern "C" { extern cudaError_t __stdcall cudaGetSurfaceAlignmentOffset(size_t *, const surfaceReference *); } 
#line 199
extern "C" { extern cudaError_t __stdcall cudaGetSurfaceReference(const surfaceReference **, const char *); } 
#line 207
extern "C" { extern cudaError_t __stdcall cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *); } 
#line 208
extern "C" { extern cudaChannelFormatDesc __stdcall cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind); } 
#line 216
extern "C" { extern cudaError_t __stdcall cudaGetLastError(); } 
#line 217
extern "C" { extern cudaError_t __stdcall cudaPeekAtLastError(); } 
#line 218
extern "C" { extern const char *__stdcall cudaGetErrorString(cudaError_t); } 
#line 226
extern "C" { extern cudaError_t __stdcall cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0); } 
#line 227
extern "C" { extern cudaError_t __stdcall cudaSetupArgument(const void *, size_t, size_t); } 
#line 228
extern "C" { extern cudaError_t __stdcall cudaFuncSetCacheConfig(const char *, cudaFuncCache); } 
#line 229
extern "C" { extern cudaError_t __stdcall cudaLaunch(const char *); } 
#line 230
extern "C" { extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes *, const char *); } 
#line 238
extern "C" { extern cudaError_t __stdcall cudaStreamCreate(cudaStream_t *); } 
#line 239
extern "C" { extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t); } 
#line 240
extern "C" { extern cudaError_t __stdcall cudaStreamSynchronize(cudaStream_t); } 
#line 241
extern "C" { extern cudaError_t __stdcall cudaStreamQuery(cudaStream_t); } 
#line 249
extern "C" { extern cudaError_t __stdcall cudaEventCreate(cudaEvent_t *); } 
#line 250
extern "C" { extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t *, int); } 
#line 251
extern "C" { extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t, cudaStream_t = 0); } 
#line 252
extern "C" { extern cudaError_t __stdcall cudaEventQuery(cudaEvent_t); } 
#line 253
extern "C" { extern cudaError_t __stdcall cudaEventSynchronize(cudaEvent_t); } 
#line 254
extern "C" { extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t); } 
#line 255
extern "C" { extern cudaError_t __stdcall cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t); } 
#line 263
extern "C" { extern cudaError_t __stdcall cudaSetDoubleForDevice(double *); } 
#line 264
extern "C" { extern cudaError_t __stdcall cudaSetDoubleForHost(double *); } 
#line 272
extern "C" { extern cudaError_t __stdcall cudaThreadExit(); } 
#line 273
extern "C" { extern cudaError_t __stdcall cudaThreadSynchronize(); } 
#line 274
extern "C" { extern cudaError_t __stdcall cudaThreadSetLimit(cudaLimit, size_t); } 
#line 275
extern "C" { extern cudaError_t __stdcall cudaThreadGetLimit(size_t *, cudaLimit); } 
#line 283
extern "C" { extern cudaError_t __stdcall cudaDriverGetVersion(int *); } 
#line 284
extern "C" { extern cudaError_t __stdcall cudaRuntimeGetVersion(int *); } 
#line 285
extern "C" { extern cudaError_t __stdcall cudaGetExportTable(const void **, const cudaUUID_t *); } 
#line 294
extern "C" { extern cudaError_t __stdcall cudaGraphicsUnregisterResource(cudaGraphicsResource *); } 
#line 295
extern "C" { extern cudaError_t __stdcall cudaGraphicsResourceSetMapFlags(cudaGraphicsResource *, unsigned); } 
#line 296
extern "C" { extern cudaError_t __stdcall cudaGraphicsMapResources(int, cudaGraphicsResource **, cudaStream_t = 0); } 
#line 297
extern "C" { extern cudaError_t __stdcall cudaGraphicsUnmapResources(int, cudaGraphicsResource **, cudaStream_t = 0); } 
#line 298
extern "C" { extern cudaError_t __stdcall cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource *); } 
#line 299
extern "C" { extern cudaError_t __stdcall cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource *, unsigned, unsigned); } 
#line 93 "c:\\cuda\\include\\channel_descriptor.h"
template<class T> __inline cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 94
{ 
#line 95
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 96
} 
#line 98
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
#line 99
{ 
#line 100
int e = (((int)sizeof(unsigned short)) * 8); 
#line 102
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 103
} 
#line 105
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
#line 106
{ 
#line 107
int e = (((int)sizeof(unsigned short)) * 8); 
#line 109
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 110
} 
#line 112
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
#line 113
{ 
#line 114
int e = (((int)sizeof(unsigned short)) * 8); 
#line 116
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 117
} 
#line 119
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
#line 120
{ 
#line 121
int e = (((int)sizeof(unsigned short)) * 8); 
#line 123
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 124
} 
#line 126
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
#line 127
{ 
#line 128
int e = (((int)sizeof(char)) * 8); 
#line 133 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 135 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 137
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
#line 138
{ 
#line 139
int e = (((int)sizeof(signed char)) * 8); 
#line 141
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 142
} 
#line 144
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
#line 145
{ 
#line 146
int e = (((int)sizeof(unsigned char)) * 8); 
#line 148
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 149
} 
#line 151
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
#line 152
{ 
#line 153
int e = (((int)sizeof(signed char)) * 8); 
#line 155
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 156
} 
#line 158
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
#line 159
{ 
#line 160
int e = (((int)sizeof(unsigned char)) * 8); 
#line 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 163
} 
#line 165
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
#line 166
{ 
#line 167
int e = (((int)sizeof(signed char)) * 8); 
#line 169
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 170
} 
#line 172
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
#line 173
{ 
#line 174
int e = (((int)sizeof(unsigned char)) * 8); 
#line 176
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 177
} 
#line 179
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
#line 180
{ 
#line 181
int e = (((int)sizeof(signed char)) * 8); 
#line 183
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 184
} 
#line 186
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
#line 187
{ 
#line 188
int e = (((int)sizeof(unsigned char)) * 8); 
#line 190
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 191
} 
#line 193
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
#line 194
{ 
#line 195
int e = (((int)sizeof(short)) * 8); 
#line 197
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 198
} 
#line 200
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
#line 201
{ 
#line 202
int e = (((int)sizeof(unsigned short)) * 8); 
#line 204
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 205
} 
#line 207
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
#line 208
{ 
#line 209
int e = (((int)sizeof(short)) * 8); 
#line 211
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 212
} 
#line 214
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
#line 215
{ 
#line 216
int e = (((int)sizeof(unsigned short)) * 8); 
#line 218
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 219
} 
#line 221
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
#line 222
{ 
#line 223
int e = (((int)sizeof(short)) * 8); 
#line 225
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 226
} 
#line 228
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
#line 229
{ 
#line 230
int e = (((int)sizeof(unsigned short)) * 8); 
#line 232
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 233
} 
#line 235
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
#line 236
{ 
#line 237
int e = (((int)sizeof(short)) * 8); 
#line 239
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 240
} 
#line 242
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
#line 243
{ 
#line 244
int e = (((int)sizeof(unsigned short)) * 8); 
#line 246
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 247
} 
#line 249
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
#line 250
{ 
#line 251
int e = (((int)sizeof(int)) * 8); 
#line 253
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 254
} 
#line 256
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
#line 257
{ 
#line 258
int e = (((int)sizeof(unsigned)) * 8); 
#line 260
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 261
} 
#line 263
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
#line 264
{ 
#line 265
int e = (((int)sizeof(int)) * 8); 
#line 267
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 268
} 
#line 270
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
#line 271
{ 
#line 272
int e = (((int)sizeof(unsigned)) * 8); 
#line 274
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 275
} 
#line 277
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
#line 278
{ 
#line 279
int e = (((int)sizeof(int)) * 8); 
#line 281
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 282
} 
#line 284
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
#line 285
{ 
#line 286
int e = (((int)sizeof(unsigned)) * 8); 
#line 288
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 289
} 
#line 291
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
#line 292
{ 
#line 293
int e = (((int)sizeof(int)) * 8); 
#line 295
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 296
} 
#line 298
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
#line 299
{ 
#line 300
int e = (((int)sizeof(unsigned)) * 8); 
#line 302
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 303
} 
#line 307
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
#line 308
{ 
#line 309
int e = (((int)sizeof(long)) * 8); 
#line 311
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 312
} 
#line 314
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
#line 315
{ 
#line 316
int e = (((int)sizeof(unsigned long)) * 8); 
#line 318
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 319
} 
#line 321
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
#line 322
{ 
#line 323
int e = (((int)sizeof(long)) * 8); 
#line 325
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 326
} 
#line 328
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
#line 329
{ 
#line 330
int e = (((int)sizeof(unsigned long)) * 8); 
#line 332
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 333
} 
#line 335
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
#line 336
{ 
#line 337
int e = (((int)sizeof(long)) * 8); 
#line 339
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 340
} 
#line 342
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
#line 343
{ 
#line 344
int e = (((int)sizeof(unsigned long)) * 8); 
#line 346
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 347
} 
#line 349
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
#line 350
{ 
#line 351
int e = (((int)sizeof(long)) * 8); 
#line 353
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 354
} 
#line 356
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
#line 357
{ 
#line 358
int e = (((int)sizeof(unsigned long)) * 8); 
#line 360
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 361
} 
#line 365 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
#line 366
{ 
#line 367
int e = (((int)sizeof(float)) * 8); 
#line 369
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 370
} 
#line 372
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
#line 373
{ 
#line 374
int e = (((int)sizeof(float)) * 8); 
#line 376
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 377
} 
#line 379
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
#line 380
{ 
#line 381
int e = (((int)sizeof(float)) * 8); 
#line 383
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 384
} 
#line 386
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
#line 387
{ 
#line 388
int e = (((int)sizeof(float)) * 8); 
#line 390
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 391
} 
#line 55 "c:\\cuda\\include\\driver_functions.h"
static __inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
#line 56
{ 
#line 57
cudaPitchedPtr s; 
#line 59
(s.ptr) = d; 
#line 60
(s.pitch) = p; 
#line 61
(s.xsize) = xsz; 
#line 62
(s.ysize) = ysz; 
#line 64
return s; 
#line 65
} 
#line 67
static __inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
#line 68
{ 
#line 69
cudaPos p; 
#line 71
(p.x) = x; 
#line 72
(p.y) = y; 
#line 73
(p.z) = z; 
#line 75
return p; 
#line 76
} 
#line 78
static __inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
#line 79
{ 
#line 80
cudaExtent e; 
#line 82
(e.width) = w; 
#line 83
(e.height) = h; 
#line 84
(e.depth) = d; 
#line 86
return e; 
#line 87
} 
#line 55 "c:\\cuda\\include\\vector_functions.h"
static __inline char1 make_char1(signed char x) 
#line 56
{ 
#line 57
char1 t; (t.x) = x; return t; 
#line 58
} 
#line 60
static __inline uchar1 make_uchar1(unsigned char x) 
#line 61
{ 
#line 62
uchar1 t; (t.x) = x; return t; 
#line 63
} 
#line 65
static __inline char2 make_char2(signed char x, signed char y) 
#line 66
{ 
#line 67
char2 t; (t.x) = x; (t.y) = y; return t; 
#line 68
} 
#line 70
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
#line 71
{ 
#line 72
uchar2 t; (t.x) = x; (t.y) = y; return t; 
#line 73
} 
#line 75
static __inline char3 make_char3(signed char x, signed char y, signed char z) 
#line 76
{ 
#line 77
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 78
} 
#line 80
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
#line 81
{ 
#line 82
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 83
} 
#line 85
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
#line 86
{ 
#line 87
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 88
} 
#line 90
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
#line 91
{ 
#line 92
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 93
} 
#line 95
static __inline short1 make_short1(short x) 
#line 96
{ 
#line 97
short1 t; (t.x) = x; return t; 
#line 98
} 
#line 100
static __inline ushort1 make_ushort1(unsigned short x) 
#line 101
{ 
#line 102
ushort1 t; (t.x) = x; return t; 
#line 103
} 
#line 105
static __inline short2 make_short2(short x, short y) 
#line 106
{ 
#line 107
short2 t; (t.x) = x; (t.y) = y; return t; 
#line 108
} 
#line 110
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
#line 111
{ 
#line 112
ushort2 t; (t.x) = x; (t.y) = y; return t; 
#line 113
} 
#line 115
static __inline short3 make_short3(short x, short y, short z) 
#line 116
{ 
#line 117
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 118
} 
#line 120
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
#line 121
{ 
#line 122
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 123
} 
#line 125
static __inline short4 make_short4(short x, short y, short z, short w) 
#line 126
{ 
#line 127
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 128
} 
#line 130
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
#line 131
{ 
#line 132
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 133
} 
#line 135
static __inline int1 make_int1(int x) 
#line 136
{ 
#line 137
int1 t; (t.x) = x; return t; 
#line 138
} 
#line 140
static __inline uint1 make_uint1(unsigned x) 
#line 141
{ 
#line 142
uint1 t; (t.x) = x; return t; 
#line 143
} 
#line 145
static __inline int2 make_int2(int x, int y) 
#line 146
{ 
#line 147
int2 t; (t.x) = x; (t.y) = y; return t; 
#line 148
} 
#line 150
static __inline uint2 make_uint2(unsigned x, unsigned y) 
#line 151
{ 
#line 152
uint2 t; (t.x) = x; (t.y) = y; return t; 
#line 153
} 
#line 155
static __inline int3 make_int3(int x, int y, int z) 
#line 156
{ 
#line 157
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 158
} 
#line 160
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
#line 161
{ 
#line 162
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 163
} 
#line 165
static __inline int4 make_int4(int x, int y, int z, int w) 
#line 166
{ 
#line 167
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 168
} 
#line 170
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
#line 171
{ 
#line 172
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 173
} 
#line 175
static __inline long1 make_long1(long x) 
#line 176
{ 
#line 177
long1 t; (t.x) = x; return t; 
#line 178
} 
#line 180
static __inline ulong1 make_ulong1(unsigned long x) 
#line 181
{ 
#line 182
ulong1 t; (t.x) = x; return t; 
#line 183
} 
#line 185
static __inline long2 make_long2(long x, long y) 
#line 186
{ 
#line 187
long2 t; (t.x) = x; (t.y) = y; return t; 
#line 188
} 
#line 190
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
#line 191
{ 
#line 192
ulong2 t; (t.x) = x; (t.y) = y; return t; 
#line 193
} 
#line 195
static __inline long3 make_long3(long x, long y, long z) 
#line 196
{ 
#line 197
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 198
} 
#line 200
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
#line 201
{ 
#line 202
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 203
} 
#line 205
static __inline long4 make_long4(long x, long y, long z, long w) 
#line 206
{ 
#line 207
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 208
} 
#line 210
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
#line 211
{ 
#line 212
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 213
} 
#line 215
static __inline float1 make_float1(float x) 
#line 216
{ 
#line 217
float1 t; (t.x) = x; return t; 
#line 218
} 
#line 220
static __inline float2 make_float2(float x, float y) 
#line 221
{ 
#line 222
float2 t; (t.x) = x; (t.y) = y; return t; 
#line 223
} 
#line 225
static __inline float3 make_float3(float x, float y, float z) 
#line 226
{ 
#line 227
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 228
} 
#line 230
static __inline float4 make_float4(float x, float y, float z, float w) 
#line 231
{ 
#line 232
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 233
} 
#line 235
static __inline longlong1 make_longlong1(__int64 x) 
#line 236
{ 
#line 237
longlong1 t; (t.x) = x; return t; 
#line 238
} 
#line 240
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x) 
#line 241
{ 
#line 242
ulonglong1 t; (t.x) = x; return t; 
#line 243
} 
#line 245
static __inline longlong2 make_longlong2(__int64 x, __int64 y) 
#line 246
{ 
#line 247
longlong2 t; (t.x) = x; (t.y) = y; return t; 
#line 248
} 
#line 250
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y) 
#line 251
{ 
#line 252
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
#line 253
} 
#line 255
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z) 
#line 256
{ 
#line 257
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 258
} 
#line 260
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z) 
#line 261
{ 
#line 262
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 263
} 
#line 265
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w) 
#line 266
{ 
#line 267
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 268
} 
#line 270
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w) 
#line 271
{ 
#line 272
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 273
} 
#line 275
static __inline double1 make_double1(double x) 
#line 276
{ 
#line 277
double1 t; (t.x) = x; return t; 
#line 278
} 
#line 280
static __inline double2 make_double2(double x, double y) 
#line 281
{ 
#line 282
double2 t; (t.x) = x; (t.y) = y; return t; 
#line 283
} 
#line 285
static __inline double3 make_double3(double x, double y, double z) 
#line 286
{ 
#line 287
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 288
} 
#line 290
static __inline double4 make_double4(double x, double y, double z, double w) 
#line 291
{ 
#line 292
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 293
} 
#line 48 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { void *__cdecl _memccpy(void *, const void *, int, size_t); } 
#line 49
extern "C" { const void *__cdecl memchr(const void *, int, size_t); } 
#line 50
extern "C" { int __cdecl _memicmp(const void *, const void *, size_t); } 
#line 51
extern "C" { int __cdecl _memicmp_l(const void *, const void *, size_t, _locale_t); } 
#line 52
extern "C" { int __cdecl memcmp(const void *, const void *, size_t); } 
#line 53
extern "C" { void *__cdecl memcpy(void *, const void *, size_t); } 
#line 55
extern "C" { errno_t __cdecl memcpy_s(void *, rsize_t, const void *, rsize_t); } 
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { void *__cdecl memset(void *, int, size_t); } 
#line 61
extern "C" { void *__cdecl memccpy(void *, const void *, int, size_t); } 
#line 62
extern "C" { int __cdecl memicmp(const void *, const void *, size_t); } 
#line 67 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strset_s(char *, size_t, int); } 
#line 68
template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Dest ) [ _Size ], int _Value ) { return _strset_s ( _Dest, _Size, _Value ); }
#line 69
extern "C" { char *__cdecl _strset(char *, int); } 
#line 71
extern "C" { errno_t __cdecl strcpy_s(char *, rsize_t, const char *); } 
#line 73 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Dest ) [ _Size ], const char * _Source ) { return strcpy_s ( _Dest, _Size, _Source ); }
#line 74
extern "C" { char *__cdecl strcpy(char *, const char *); } 
#line 76
extern "C" { errno_t __cdecl strcat_s(char *, rsize_t, const char *); } 
#line 78 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Dest ) [ _Size ], const char * _Source ) { return strcat_s ( _Dest, _Size, _Source ); }
#line 79
extern "C" { char *__cdecl strcat(char *, const char *); } 
#line 80
extern "C" { int __cdecl strcmp(const char *, const char *); } 
#line 81
extern "C" { size_t __cdecl strlen(const char *); } 
#line 82
extern "C" { size_t __cdecl strnlen(const char *, size_t); } 
#line 84
extern "C" { static __inline size_t __cdecl strnlen_s(const char *_Str, size_t _MaxCount) 
#line 85
{ 
#line 86
return (_Str == (0)) ? (0) : strnlen(_Str, _MaxCount); 
#line 87
} } 
#line 90 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl memmove_s(void *, rsize_t, const void *, rsize_t); } 
#line 96 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { void *__cdecl memmove(void *, const void *, size_t); } 
#line 104 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strdup(const char *); } 
#line 110 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const char *__cdecl strchr(const char *, int); } 
#line 111
extern "C" { int __cdecl _stricmp(const char *, const char *); } 
#line 112
extern "C" { int __cdecl _strcmpi(const char *, const char *); } 
#line 113
extern "C" { int __cdecl _stricmp_l(const char *, const char *, _locale_t); } 
#line 114
extern "C" { int __cdecl strcoll(const char *, const char *); } 
#line 115
extern "C" { int __cdecl _strcoll_l(const char *, const char *, _locale_t); } 
#line 116
extern "C" { int __cdecl _stricoll(const char *, const char *); } 
#line 117
extern "C" { int __cdecl _stricoll_l(const char *, const char *, _locale_t); } 
#line 118
extern "C" { int __cdecl _strncoll(const char *, const char *, size_t); } 
#line 119
extern "C" { int __cdecl _strncoll_l(const char *, const char *, size_t, _locale_t); } 
#line 120
extern "C" { int __cdecl _strnicoll(const char *, const char *, size_t); } 
#line 121
extern "C" { int __cdecl _strnicoll_l(const char *, const char *, size_t, _locale_t); } 
#line 122
extern "C" { size_t __cdecl strcspn(const char *, const char *); } 
#line 123
extern "C" { char *__cdecl _strerror(const char *); } 
#line 124
extern "C" { errno_t __cdecl _strerror_s(char *, size_t, const char *); } 
#line 125
template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], const char * _ErrorMessage ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 126
extern "C" { char *__cdecl strerror(int); } 
#line 128
extern "C" { errno_t __cdecl strerror_s(char *, size_t, int); } 
#line 130 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 131
extern "C" { errno_t __cdecl _strlwr_s(char *, size_t); } 
#line 132
template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) { return _strlwr_s ( _String, _Size ); }
#line 133
extern "C" { char *__cdecl _strlwr(char *); } 
#line 134
extern "C" { errno_t __cdecl _strlwr_s_l(char *, size_t, _locale_t); } 
#line 135
template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) { return _strlwr_s_l ( _String, _Size, _Locale ); }
#line 136
extern "C" { char *__cdecl _strlwr_l(char *, _locale_t); } 
#line 138
extern "C" { errno_t __cdecl strncat_s(char *, rsize_t, const char *, rsize_t); } 
#line 140 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Dest ) [ _Size ], const char * _Source, size_t _Count ) { return strncat_s ( _Dest, _Size, _Source, _Count ); }
#pragma warning(push)
#pragma warning(disable:6059)
#line 144
extern "C" { char *__cdecl strncat(char *, const char *, size_t); } 
#pragma warning(pop)
#line 149 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl strncmp(const char *, const char *, size_t); } 
#line 151 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strnicmp(const char *, const char *, size_t); } 
#line 152
extern "C" { int __cdecl _strnicmp_l(const char *, const char *, size_t, _locale_t); } 
#line 154
extern "C" { errno_t __cdecl strncpy_s(char *, rsize_t, const char *, rsize_t); } 
#line 156 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Dest ) [ _Size ], const char * _Source, size_t _Count ) { return strncpy_s ( _Dest, _Size, _Source, _Count ); }
#line 157
extern "C" { char *__cdecl strncpy(char *, const char *, size_t); } 
#line 158
extern "C" { errno_t __cdecl _strnset_s(char *, size_t, int, size_t); } 
#line 159
template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Dest ) [ _Size ], int _Val, size_t _Count ) { return _strnset_s ( _Dest, _Size, _Val, _Count ); }
#line 160
extern "C" { char *__cdecl _strnset(char *, int, size_t); } 
#line 161
extern "C" { const char *__cdecl strpbrk(const char *, const char *); } 
#line 162
extern "C" { const char *__cdecl strrchr(const char *, int); } 
#line 163
extern "C" { char *__cdecl _strrev(char *); } 
#line 164
extern "C" { size_t __cdecl strspn(const char *, const char *); } 
#line 165
extern "C" { const char *__cdecl strstr(const char *, const char *); } 
#line 166
extern "C" { char *__cdecl strtok(char *, const char *); } 
#line 168
extern "C" { char *__cdecl strtok_s(char *, const char *, char **); } 
#line 170 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strupr_s(char *, size_t); } 
#line 171
template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) { return _strupr_s ( _String, _Size ); }
#line 172
extern "C" { char *__cdecl _strupr(char *); } 
#line 173
extern "C" { errno_t __cdecl _strupr_s_l(char *, size_t, _locale_t); } 
#line 174
template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) { return _strupr_s_l ( _String, _Size, _Locale ); }
#line 175
extern "C" { char *__cdecl _strupr_l(char *, _locale_t); } 
#line 176
extern "C" { size_t __cdecl strxfrm(char *, const char *, size_t); } 
#line 177
extern "C" { size_t __cdecl _strxfrm_l(char *, const char *, size_t, _locale_t); } 
#line 183
inline char *__cdecl strchr(char *_Str, int _Ch) 
#line 184
{ return (char *)strchr((const char *)_Str, _Ch); } 
#line 185
inline char *__cdecl strpbrk(char *_Str, const char *_Control) 
#line 186
{ return (char *)strpbrk((const char *)_Str, _Control); } 
#line 187
inline char *__cdecl strrchr(char *_Str, int _Ch) 
#line 188
{ return (char *)strrchr((const char *)_Str, _Ch); } 
#line 189
inline char *__cdecl strstr(char *_Str, const char *_SubStr) 
#line 190
{ return (char *)strstr((const char *)_Str, _SubStr); } 
#line 194 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline void *__cdecl memchr(void *_Pv, int _C, size_t _N) 
#line 195
{ return (void *)memchr((const void *)_Pv, _C, _N); } 
#line 207 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strdup(const char *); } 
#line 214 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl strcmpi(const char *, const char *); } 
#line 215
extern "C" { int __cdecl stricmp(const char *, const char *); } 
#line 216
extern "C" { char *__cdecl strlwr(char *); } 
#line 217
extern "C" { int __cdecl strnicmp(const char *, const char *, size_t); } 
#line 218
extern "C" { char *__cdecl strnset(char *, int, size_t); } 
#line 219
extern "C" { char *__cdecl strrev(char *); } 
#line 220
extern "C" { char *__cdecl strset(char *, int); } 
#line 221
extern "C" { char *__cdecl strupr(char *); } 
#line 235 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcsdup(const __wchar_t *); } 
#line 242 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl wcscat_s(__wchar_t *, rsize_t, const __wchar_t *); } 
#line 244 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source ) { return wcscat_s ( _Dest, _Size, _Source ); }
#line 245
extern "C" { __wchar_t *__cdecl wcscat(__wchar_t *, const __wchar_t *); } 
#line 246
extern "C" { const __wchar_t *__cdecl wcschr(const __wchar_t *, __wchar_t); } 
#line 247
extern "C" { int __cdecl wcscmp(const __wchar_t *, const __wchar_t *); } 
#line 249
extern "C" { errno_t __cdecl wcscpy_s(__wchar_t *, rsize_t, const __wchar_t *); } 
#line 251 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source ) { return wcscpy_s ( _Dest, _Size, _Source ); }
#line 252
extern "C" { __wchar_t *__cdecl wcscpy(__wchar_t *, const __wchar_t *); } 
#line 253
extern "C" { size_t __cdecl wcscspn(const __wchar_t *, const __wchar_t *); } 
#line 254
extern "C" { size_t __cdecl wcslen(const __wchar_t *); } 
#line 255
extern "C" { size_t __cdecl wcsnlen(const __wchar_t *, size_t); } 
#line 257
extern "C" { static __inline size_t __cdecl wcsnlen_s(const __wchar_t *_Src, size_t _MaxCount) 
#line 258
{ 
#line 259
return (_Src == (0)) ? (0) : wcsnlen(_Src, _MaxCount); 
#line 260
} } 
#line 263 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl wcsncat_s(__wchar_t *, rsize_t, const __wchar_t *, rsize_t); } 
#line 265 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _Count ) { return wcsncat_s ( _Dest, _Size, _Source, _Count ); }
#pragma warning(push)
#pragma warning(disable:6059)
extern "C" { __wchar_t *__cdecl wcsncat(__wchar_t *, const __wchar_t *, size_t); } 
#pragma warning(pop)
extern "C" { int __cdecl wcsncmp(const __wchar_t *, const __wchar_t *, size_t); } 
#line 272
extern "C" { errno_t __cdecl wcsncpy_s(__wchar_t *, rsize_t, const __wchar_t *, rsize_t); } 
#line 274 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _Count ) { return wcsncpy_s ( _Dest, _Size, _Source, _Count ); }
#line 275
extern "C" { __wchar_t *__cdecl wcsncpy(__wchar_t *, const __wchar_t *, size_t); } 
#line 276
extern "C" { const __wchar_t *__cdecl wcspbrk(const __wchar_t *, const __wchar_t *); } 
#line 277
extern "C" { const __wchar_t *__cdecl wcsrchr(const __wchar_t *, __wchar_t); } 
#line 278
extern "C" { size_t __cdecl wcsspn(const __wchar_t *, const __wchar_t *); } 
#line 279
extern "C" { const __wchar_t *__cdecl wcsstr(const __wchar_t *, const __wchar_t *); } 
#line 280
extern "C" { __wchar_t *__cdecl wcstok(__wchar_t *, const __wchar_t *); } 
#line 282
extern "C" { __wchar_t *__cdecl wcstok_s(__wchar_t *, const __wchar_t *, __wchar_t **); } 
#line 284 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcserror(int); } 
#line 285
extern "C" { errno_t __cdecl _wcserror_s(__wchar_t *, size_t, int); } 
#line 286
template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) { return _wcserror_s ( _Buffer, _Size, _Error ); }
#line 287
extern "C" { __wchar_t *__cdecl __wcserror(const __wchar_t *); } 
#line 288
extern "C" { errno_t __cdecl __wcserror_s(__wchar_t *, size_t, const __wchar_t *); } 
#line 289
template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], const wchar_t * _ErrorMessage ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 291
extern "C" { int __cdecl _wcsicmp(const __wchar_t *, const __wchar_t *); } 
#line 292
extern "C" { int __cdecl _wcsicmp_l(const __wchar_t *, const __wchar_t *, _locale_t); } 
#line 293
extern "C" { int __cdecl _wcsnicmp(const __wchar_t *, const __wchar_t *, size_t); } 
#line 294
extern "C" { int __cdecl _wcsnicmp_l(const __wchar_t *, const __wchar_t *, size_t, _locale_t); } 
#line 295
extern "C" { errno_t __cdecl _wcsnset_s(__wchar_t *, size_t, __wchar_t, size_t); } 
#line 296
template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Dst ) [ _Size ], wchar_t _Val, size_t _MaxCount ) { return _wcsnset_s ( _Dst, _Size, _Val, _MaxCount ); }
#line 297
extern "C" { __wchar_t *__cdecl _wcsnset(__wchar_t *, __wchar_t, size_t); } 
#line 298
extern "C" { __wchar_t *__cdecl _wcsrev(__wchar_t *); } 
#line 299
extern "C" { errno_t __cdecl _wcsset_s(__wchar_t *, size_t, __wchar_t); } 
#line 300
template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _Str ) [ _Size ], wchar_t _Val ) { return _wcsset_s ( _Str, _Size, _Val ); }
#line 301
extern "C" { __wchar_t *__cdecl _wcsset(__wchar_t *, __wchar_t); } 
#line 303
extern "C" { errno_t __cdecl _wcslwr_s(__wchar_t *, size_t); } 
#line 304
template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) { return _wcslwr_s ( _String, _Size ); }
#line 305
extern "C" { __wchar_t *__cdecl _wcslwr(__wchar_t *); } 
#line 306
extern "C" { errno_t __cdecl _wcslwr_s_l(__wchar_t *, size_t, _locale_t); } 
#line 307
template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }
#line 308
extern "C" { __wchar_t *__cdecl _wcslwr_l(__wchar_t *, _locale_t); } 
#line 309
extern "C" { errno_t __cdecl _wcsupr_s(__wchar_t *, size_t); } 
#line 310
template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) { return _wcsupr_s ( _String, _Size ); }
#line 311
extern "C" { __wchar_t *__cdecl _wcsupr(__wchar_t *); } 
#line 312
extern "C" { errno_t __cdecl _wcsupr_s_l(__wchar_t *, size_t, _locale_t); } 
#line 313
template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }
#line 314
extern "C" { __wchar_t *__cdecl _wcsupr_l(__wchar_t *, _locale_t); } 
#line 315
extern "C" { size_t __cdecl wcsxfrm(__wchar_t *, const __wchar_t *, size_t); } 
#line 316
extern "C" { size_t __cdecl _wcsxfrm_l(__wchar_t *, const __wchar_t *, size_t, _locale_t); } 
#line 317
extern "C" { int __cdecl wcscoll(const __wchar_t *, const __wchar_t *); } 
#line 318
extern "C" { int __cdecl _wcscoll_l(const __wchar_t *, const __wchar_t *, _locale_t); } 
#line 319
extern "C" { int __cdecl _wcsicoll(const __wchar_t *, const __wchar_t *); } 
#line 320
extern "C" { int __cdecl _wcsicoll_l(const __wchar_t *, const __wchar_t *, _locale_t); } 
#line 321
extern "C" { int __cdecl _wcsncoll(const __wchar_t *, const __wchar_t *, size_t); } 
#line 322
extern "C" { int __cdecl _wcsncoll_l(const __wchar_t *, const __wchar_t *, size_t, _locale_t); } 
#line 323
extern "C" { int __cdecl _wcsnicoll(const __wchar_t *, const __wchar_t *, size_t); } 
#line 324
extern "C" { int __cdecl _wcsnicoll_l(const __wchar_t *, const __wchar_t *, size_t, _locale_t); } 
#line 330
inline __wchar_t *__cdecl wcschr(__wchar_t *_Str, __wchar_t _Ch) 
#line 331
{ return (__wchar_t *)wcschr((const __wchar_t *)_Str, _Ch); } 
#line 332
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_Str, const __wchar_t *_Control) 
#line 333
{ return (__wchar_t *)wcspbrk((const __wchar_t *)_Str, _Control); } 
#line 334
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_Str, __wchar_t _Ch) 
#line 335
{ return (__wchar_t *)wcsrchr((const __wchar_t *)_Str, _Ch); } 
#line 336
inline __wchar_t *__cdecl wcsstr(__wchar_t *_Str, const __wchar_t *_SubStr) 
#line 337
{ return (__wchar_t *)wcsstr((const __wchar_t *)_Str, _SubStr); } 
#line 349 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcsdup(const __wchar_t *); } 
#line 359 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl wcsicmp(const __wchar_t *, const __wchar_t *); } 
#line 360
extern "C" { int __cdecl wcsnicmp(const __wchar_t *, const __wchar_t *, size_t); } 
#line 361
extern "C" { __wchar_t *__cdecl wcsnset(__wchar_t *, __wchar_t, size_t); } 
#line 362
extern "C" { __wchar_t *__cdecl wcsrev(__wchar_t *); } 
#line 363
extern "C" { __wchar_t *__cdecl wcsset(__wchar_t *, __wchar_t); } 
#line 364
extern "C" { __wchar_t *__cdecl wcslwr(__wchar_t *); } 
#line 365
extern "C" { __wchar_t *__cdecl wcsupr(__wchar_t *); } 
#line 366
extern "C" { int __cdecl wcsicoll(const __wchar_t *, const __wchar_t *); } 
#line 35 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
#pragma pack ( push, 8 )
#line 93 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { typedef long clock_t; }
#line 117 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { struct tm { 
#line 118
int tm_sec; 
#line 119
int tm_min; 
#line 120
int tm_hour; 
#line 121
int tm_mday; 
#line 122
int tm_mon; 
#line 123
int tm_year; 
#line 124
int tm_wday; 
#line 125
int tm_yday; 
#line 126
int tm_isdst; 
#line 127
}; }
#line 142 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { int *__cdecl __daylight(); } 
#line 146
extern "C" { long *__cdecl __dstbias(); } 
#line 150
extern "C" { long *__cdecl __timezone(); } 
#line 154
extern "C" { char **__cdecl __tzname(); } 
#line 157
extern "C" { errno_t __cdecl _get_daylight(int *); } 
#line 158
extern "C" { errno_t __cdecl _get_dstbias(long *); } 
#line 159
extern "C" { errno_t __cdecl _get_timezone(long *); } 
#line 160
extern "C" { errno_t __cdecl _get_tzname(size_t *, char *, size_t, int); } 
#line 164
extern "C" { char *__cdecl asctime(const tm *); } 
#line 166
extern "C" { errno_t __cdecl asctime_s(char *, size_t, const tm *); } 
#line 168 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl asctime_s ( char ( & _Buffer ) [ _Size ], const struct tm * _Time ) { return asctime_s ( _Buffer, _Size, _Time ); }
#line 170
extern "C" { char *__cdecl _ctime32(const __time32_t *); } 
#line 171
extern "C" { errno_t __cdecl _ctime32_s(char *, size_t, const __time32_t *); } 
#line 172
template < size_t _Size > inline errno_t __cdecl _ctime32_s ( char ( & _Buffer ) [ _Size ], const __time32_t * _Time ) { return _ctime32_s ( _Buffer, _Size, _Time ); }
#line 174
extern "C" { clock_t __cdecl clock(); } 
#line 175
extern "C" { double __cdecl _difftime32(__time32_t, __time32_t); } 
#line 177
extern "C" { tm *__cdecl _gmtime32(const __time32_t *); } 
#line 178
extern "C" { errno_t __cdecl _gmtime32_s(tm *, const __time32_t *); } 
#line 180
extern "C" { tm *__cdecl _localtime32(const __time32_t *); } 
#line 181
extern "C" { errno_t __cdecl _localtime32_s(tm *, const __time32_t *); } 
#line 183
extern "C" { size_t __cdecl strftime(char *, size_t, const char *, const tm *); } 
#line 184
extern "C" { size_t __cdecl _strftime_l(char *, size_t, const char *, const tm *, _locale_t); } 
#line 186
extern "C" { errno_t __cdecl _strdate_s(char *, size_t); } 
#line 187
template < size_t _Size > inline errno_t __cdecl _strdate_s ( char ( & _Buffer ) [ _Size ] ) { return _strdate_s ( _Buffer, _Size ); }
#line 188
extern "C" { char *__cdecl _strdate(char *); } 
#line 190
extern "C" { errno_t __cdecl _strtime_s(char *, size_t); } 
#line 191
template < size_t _Size > inline errno_t __cdecl _strtime_s ( char ( & _Buffer ) [ _Size ] ) { return _strtime_s ( _Buffer, _Size ); }
#line 192
extern "C" { char *__cdecl _strtime(char *); } 
#line 194
extern "C" { __time32_t __cdecl _time32(__time32_t *); } 
#line 195
extern "C" { __time32_t __cdecl _mktime32(tm *); } 
#line 196
extern "C" { __time32_t __cdecl _mkgmtime32(tm *); } 
#line 201
extern "C" { void __cdecl _tzset(); } 
#line 204 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { double __cdecl _difftime64(__time64_t, __time64_t); } 
#line 205
extern "C" { char *__cdecl _ctime64(const __time64_t *); } 
#line 206
extern "C" { errno_t __cdecl _ctime64_s(char *, size_t, const __time64_t *); } 
#line 207
template < size_t _Size > inline errno_t __cdecl _ctime64_s ( char ( & _Buffer ) [ _Size ], const __time64_t * _Time ) { return _ctime64_s ( _Buffer, _Size, _Time ); }
#line 209
extern "C" { tm *__cdecl _gmtime64(const __time64_t *); } 
#line 210
extern "C" { errno_t __cdecl _gmtime64_s(tm *, const __time64_t *); } 
#line 212
extern "C" { tm *__cdecl _localtime64(const __time64_t *); } 
#line 213
extern "C" { errno_t __cdecl _localtime64_s(tm *, const __time64_t *); } 
#line 215
extern "C" { __time64_t __cdecl _mktime64(tm *); } 
#line 216
extern "C" { __time64_t __cdecl _mkgmtime64(tm *); } 
#line 217
extern "C" { __time64_t __cdecl _time64(__time64_t *); } 
#line 220
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetLocalTime instead. See online help for details.")) unsigned __cdecl _getsystime(tm *); } 
#line 221
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetLocalTime instead. See online help for details.")) unsigned __cdecl _setsystime(tm *, unsigned); } 
#line 233
extern "C" { __wchar_t *__cdecl _wasctime(const tm *); } 
#line 234
extern "C" { errno_t __cdecl _wasctime_s(__wchar_t *, size_t, const tm *); } 
#line 235
template < size_t _Size > inline errno_t __cdecl _wasctime_s ( wchar_t ( & _Buffer ) [ _Size ], const struct tm * _Time ) { return _wasctime_s ( _Buffer, _Size, _Time ); }
#line 237
extern "C" { __wchar_t *__cdecl _wctime32(const __time32_t *); } 
#line 238
extern "C" { errno_t __cdecl _wctime32_s(__wchar_t *, size_t, const __time32_t *); } 
#line 239
template < size_t _Size > inline errno_t __cdecl _wctime32_s ( wchar_t ( & _Buffer ) [ _Size ], const __time32_t * _Time ) { return _wctime32_s ( _Buffer, _Size, _Time ); }
#line 241
extern "C" { size_t __cdecl wcsftime(__wchar_t *, size_t, const __wchar_t *, const tm *); } 
#line 242
extern "C" { size_t __cdecl _wcsftime_l(__wchar_t *, size_t, const __wchar_t *, const tm *, _locale_t); } 
#line 244
extern "C" { errno_t __cdecl _wstrdate_s(__wchar_t *, size_t); } 
#line 245
template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( wchar_t ( & _Buffer ) [ _Size ] ) { return _wstrdate_s ( _Buffer, _Size ); }
#line 246
extern "C" { __wchar_t *__cdecl _wstrdate(__wchar_t *); } 
#line 248
extern "C" { errno_t __cdecl _wstrtime_s(__wchar_t *, size_t); } 
#line 249
template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( wchar_t ( & _Buffer ) [ _Size ] ) { return _wstrtime_s ( _Buffer, _Size ); }
#line 250
extern "C" { __wchar_t *__cdecl _wstrtime(__wchar_t *); } 
#line 252
extern "C" { __wchar_t *__cdecl _wctime64(const __time64_t *); } 
#line 253
extern "C" { errno_t __cdecl _wctime64_s(__wchar_t *, size_t, const __time64_t *); } 
#line 254
template < size_t _Size > inline errno_t __cdecl _wctime64_s ( wchar_t ( & _Buffer ) [ _Size ], const __time64_t * _Time ) { return _wctime64_s ( _Buffer, _Size, _Time ); }
#line 29 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
#pragma warning(push)
#pragma warning(disable:4996)
#line 46
extern "C" { static __inline __wchar_t *__cdecl _wctime(const time_t *_Time) 
#line 47
{ 
#pragma warning( push )
#pragma warning( disable : 4996 )
return _wctime64(_Time); 
#pragma warning( pop )
} } 
#line 54
extern "C" { static __inline errno_t __cdecl _wctime_s(__wchar_t *_Buffer, size_t _SizeInWords, const time_t *_Time) 
#line 55
{ 
#line 56
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
#line 57
} } 
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
#pragma warning(pop)
#line 84 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline double __cdecl difftime(time_t _Time1, time_t _Time2) 
#line 85
{ 
#line 86
return _difftime64(_Time1, _Time2); 
#line 87
} } 
#line 88
extern "C" { static __inline char *__cdecl ctime(const time_t *_Time) 
#line 89
{ 
#pragma warning( push )
#pragma warning( disable : 4996 )
return _ctime64(_Time); 
#pragma warning( pop )
} } 
#line 96
extern "C" { static __inline errno_t __cdecl ctime_s(char *_Buffer, size_t _SizeInBytes, const time_t *_Time) 
#line 97
{ 
#line 98
return _ctime64_s(_Buffer, _SizeInBytes, _Time); 
#line 99
} } 
#line 101 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline tm *__cdecl gmtime(const time_t *_Time) 
#line 102
{ 
#pragma warning( push )
#pragma warning( disable : 4996 )
return _gmtime64(_Time); 
#pragma warning( pop )
} } 
#line 109
extern "C" { static __inline errno_t __cdecl gmtime_s(tm *_Tm, const time_t *_Time) 
#line 110
{ 
#line 111
return _gmtime64_s(_Tm, _Time); 
#line 112
} } 
#line 114 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline tm *__cdecl localtime(const time_t *_Time) 
#line 115
{ 
#pragma warning( push )
#pragma warning( disable : 4996 )
return _localtime64(_Time); 
#pragma warning( pop )
} } 
#line 121
extern "C" { static __inline errno_t __cdecl localtime_s(tm *_Tm, const time_t *_Time) 
#line 122
{ 
#line 123
return _localtime64_s(_Tm, _Time); 
#line 124
} } 
#line 125
extern "C" { static __inline time_t __cdecl mktime(tm *_Tm) 
#line 126
{ 
#line 127
return _mktime64(_Tm); 
#line 128
} } 
#line 129
extern "C" { static __inline time_t __cdecl _mkgmtime(tm *_Tm) 
#line 130
{ 
#line 131
return _mkgmtime64(_Tm); 
#line 132
} } 
#line 133
extern "C" { static __inline time_t __cdecl time(time_t *_Time) 
#line 134
{ 
#line 135
return _time64(_Time); 
#line 136
} } 
#line 279 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" int daylight; 
#line 280
extern "C" long timezone; 
#line 281
extern "C" char *tzname[2]; 
#line 284 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { void __cdecl tzset(); } 
#line 294 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
#pragma pack ( pop )
#line 57 "c:\\cuda\\include\\common_functions.h"
extern "C" { extern clock_t __cdecl clock(); } 
#line 59
extern "C" { extern void *__cdecl memset(void *, int, size_t); } 
#line 61
extern "C" { extern void *__cdecl memcpy(void *, const void *, size_t); } 
#line 66 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __cdecl abs(int); } 
#line 68
extern "C" { extern long __cdecl labs(long); } 
#line 70
extern "C" { extern __int64 llabs(__int64); } 
#line 72
extern "C" { extern double __cdecl fabs(double); } 
#line 74
extern "C" { inline float fabsf(float); } 
#line 77
extern "C" { extern int min(int, int); } 
#line 79
extern "C" { extern unsigned umin(unsigned, unsigned); } 
#line 81
extern "C" { extern __int64 llmin(__int64, __int64); } 
#line 83
extern "C" { extern unsigned __int64 ullmin(unsigned __int64, unsigned __int64); } 
#line 85
extern "C" { extern float fminf(float, float); } 
#line 87
extern "C" { extern double fmin(double, double); } 
#line 90
extern "C" { extern int max(int, int); } 
#line 92
extern "C" { extern unsigned umax(unsigned, unsigned); } 
#line 94
extern "C" { extern __int64 llmax(__int64, __int64); } 
#line 96
extern "C" { extern unsigned __int64 ullmax(unsigned __int64, unsigned __int64); } 
#line 98
extern "C" { extern float fmaxf(float, float); } 
#line 100
extern "C" { extern double fmax(double, double); } 
#line 103
extern "C" { extern double __cdecl sin(double); } 
#line 105
extern "C" { extern float sinf(float); } 
#line 108
extern "C" { extern double __cdecl cos(double); } 
#line 110
extern "C" { extern float cosf(float); } 
#line 113
extern "C" { extern void sincos(double, double *, double *); } 
#line 115
extern "C" { extern void sincosf(float, float *, float *); } 
#line 118
extern "C" { extern double __cdecl tan(double); } 
#line 120
extern "C" { extern float tanf(float); } 
#line 123
extern "C" { extern double __cdecl sqrt(double); } 
#line 125
extern "C" { extern float sqrtf(float); } 
#line 128
extern "C" { extern double rsqrt(double); } 
#line 130
extern "C" { extern float rsqrtf(float); } 
#line 133
extern "C" { extern double exp2(double); } 
#line 135
extern "C" { extern float exp2f(float); } 
#line 138
extern "C" { extern double exp10(double); } 
#line 140
extern "C" { extern float exp10f(float); } 
#line 143
extern "C" { extern double expm1(double); } 
#line 145
extern "C" { extern float expm1f(float); } 
#line 148
extern "C" { extern double log2(double); } 
#line 150
extern "C" { extern float log2f(float); } 
#line 153
extern "C" { extern double __cdecl log10(double); } 
#line 155
extern "C" { extern float log10f(float); } 
#line 158
extern "C" { extern double __cdecl log(double); } 
#line 160
extern "C" { extern float logf(float); } 
#line 163
extern "C" { extern double log1p(double); } 
#line 165
extern "C" { extern float log1pf(float); } 
#line 168
extern "C" { extern double __cdecl floor(double); } 
#line 170
extern "C" { extern float floorf(float); } 
#line 173
extern "C" { extern double __cdecl exp(double); } 
#line 175
extern "C" { extern float expf(float); } 
#line 178
extern "C" { extern double __cdecl cosh(double); } 
#line 180
extern "C" { extern float coshf(float); } 
#line 183
extern "C" { extern double __cdecl sinh(double); } 
#line 185
extern "C" { extern float sinhf(float); } 
#line 188
extern "C" { extern double __cdecl tanh(double); } 
#line 190
extern "C" { extern float tanhf(float); } 
#line 193
extern "C" { extern double acosh(double); } 
#line 195
extern "C" { extern float acoshf(float); } 
#line 198
extern "C" { extern double asinh(double); } 
#line 200
extern "C" { extern float asinhf(float); } 
#line 203
extern "C" { extern double atanh(double); } 
#line 205
extern "C" { extern float atanhf(float); } 
#line 208
extern "C" { extern double __cdecl ldexp(double, int); } 
#line 210
extern "C" { inline float ldexpf(float, int); } 
#line 213
extern "C" { extern double logb(double); } 
#line 215
extern "C" { extern float logbf(float); } 
#line 218
extern "C" { extern int ilogb(double); } 
#line 220
extern "C" { extern int ilogbf(float); } 
#line 223
extern "C" { extern double scalbn(double, int); } 
#line 225
extern "C" { extern float scalbnf(float, int); } 
#line 228
extern "C" { extern double scalbln(double, long); } 
#line 230
extern "C" { extern float scalblnf(float, long); } 
#line 233
extern "C" { extern double __cdecl frexp(double, int *); } 
#line 235
extern "C" { inline float frexpf(float, int *); } 
#line 238
extern "C" { extern double round(double); } 
#line 240
extern "C" { extern float roundf(float); } 
#line 243
extern "C" { extern long lround(double); } 
#line 245
extern "C" { extern long lroundf(float); } 
#line 248
extern "C" { extern __int64 llround(double); } 
#line 250
extern "C" { extern __int64 llroundf(float); } 
#line 253
extern "C" { extern double rint(double); } 
#line 255
extern "C" { extern float rintf(float); } 
#line 258
extern "C" { extern long lrint(double); } 
#line 260
extern "C" { extern long lrintf(float); } 
#line 263
extern "C" { extern __int64 llrint(double); } 
#line 265
extern "C" { extern __int64 llrintf(float); } 
#line 268
extern "C" { extern double nearbyint(double); } 
#line 270
extern "C" { extern float nearbyintf(float); } 
#line 273
extern "C" { extern double __cdecl ceil(double); } 
#line 275
extern "C" { extern float ceilf(float); } 
#line 278
extern "C" { extern double trunc(double); } 
#line 280
extern "C" { extern float truncf(float); } 
#line 283
extern "C" { extern double fdim(double, double); } 
#line 285
extern "C" { extern float fdimf(float, float); } 
#line 288
extern "C" { extern double __cdecl atan2(double, double); } 
#line 290
extern "C" { extern float atan2f(float, float); } 
#line 293
extern "C" { extern double __cdecl atan(double); } 
#line 295
extern "C" { extern float atanf(float); } 
#line 298
extern "C" { extern double __cdecl asin(double); } 
#line 300
extern "C" { extern float asinf(float); } 
#line 303
extern "C" { extern double __cdecl acos(double); } 
#line 305
extern "C" { extern float acosf(float); } 
#line 308
extern "C" { extern double __cdecl hypot(double, double); } 
#line 310
extern "C" { extern float hypotf(float, float); } 
#line 313
extern "C" { extern double cbrt(double); } 
#line 315
extern "C" { extern float cbrtf(float); } 
#line 318
extern "C" { extern double rcbrt(double); } 
#line 320
extern "C" { extern float rcbrtf(float); } 
#line 323
extern "C" { extern double sinpi(double); } 
#line 325
extern "C" { extern float sinpif(float); } 
#line 328
extern "C" { extern double __cdecl pow(double, double); } 
#line 330
extern "C" { extern float powf(float, float); } 
#line 333
extern "C" { extern double __cdecl modf(double, double *); } 
#line 335
extern "C" { extern float modff(float, float *); } 
#line 338
extern "C" { extern double __cdecl fmod(double, double); } 
#line 340
extern "C" { extern float fmodf(float, float); } 
#line 343
extern "C" { extern double remainder(double, double); } 
#line 345
extern "C" { extern float remainderf(float, float); } 
#line 348
extern "C" { extern double remquo(double, double, int *); } 
#line 350
extern "C" { extern float remquof(float, float, int *); } 
#line 353
extern "C" { extern double erf(double); } 
#line 355
extern "C" { extern float erff(float); } 
#line 358
extern "C" { extern double erfinv(double); } 
#line 360
extern "C" { extern float erfinvf(float); } 
#line 363
extern "C" { extern double erfc(double); } 
#line 365
extern "C" { extern float erfcf(float); } 
#line 368
extern "C" { extern double erfcinv(double); } 
#line 370
extern "C" { extern float erfcinvf(float); } 
#line 373
extern "C" { extern double lgamma(double); } 
#line 375
extern "C" { extern float lgammaf(float); } 
#line 378
extern "C" { extern double tgamma(double); } 
#line 380
extern "C" { extern float tgammaf(float); } 
#line 383
extern "C" { extern double copysign(double, double); } 
#line 385
extern "C" { extern float copysignf(float, float); } 
#line 388
extern "C" { extern double nextafter(double, double); } 
#line 390
extern "C" { extern float nextafterf(float, float); } 
#line 393
extern "C" { extern double nan(const char *); } 
#line 395
extern "C" { extern float nanf(const char *); } 
#line 398
extern "C" { extern int __isinf(double); } 
#line 400
extern "C" { extern int __isinff(float); } 
#line 403
extern "C" { extern int __isnan(double); } 
#line 405
extern "C" { extern int __isnanf(float); } 
#line 419 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __finite(double); } 
#line 421
extern "C" { extern int __finitef(float); } 
#line 423
extern "C" { extern int __signbit(double); } 
#line 428 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __signbitf(float); } 
#line 431
extern "C" { extern double fma(double, double, double); } 
#line 433
extern "C" { extern float fmaf(float, float, float); } 
#line 25 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
#pragma pack ( push, 8 )
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { struct _exception { 
#line 40
int type; 
#line 41
char *name; 
#line 42
double arg1; 
#line 43
double arg2; 
#line 44
double retval; 
#line 45
}; }
#line 56 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { struct _complex { 
#line 57
double x, y; 
#line 58
}; }
#line 90 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" double _HUGE; 
#line 103 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { int __cdecl abs(int); } 
#line 104
extern "C" { long __cdecl labs(long); } 
#line 107 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl acos(double); } 
#line 108
extern "C" { double __cdecl asin(double); } 
#line 109
extern "C" { double __cdecl atan(double); } 
#line 110
extern "C" { double __cdecl atan2(double, double); } 
#line 112
extern "C" { double __cdecl _copysign(double, double); } 
#line 113
extern "C" { double __cdecl _chgsign(double); } 
#line 116 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl cos(double); } 
#line 117
extern "C" { double __cdecl cosh(double); } 
#line 118
extern "C" { double __cdecl exp(double); } 
#line 119
extern "C" { double __cdecl fabs(double); } 
#line 120
extern "C" { double __cdecl fmod(double, double); } 
#line 121
extern "C" { double __cdecl log(double); } 
#line 122
extern "C" { double __cdecl log10(double); } 
#line 123
extern "C" { double __cdecl pow(double, double); } 
#line 124
extern "C" { double __cdecl sin(double); } 
#line 125
extern "C" { double __cdecl sinh(double); } 
#line 126
extern "C" { double __cdecl tan(double); } 
#line 127
extern "C" { double __cdecl tanh(double); } 
#line 128
extern "C" { double __cdecl sqrt(double); } 
#line 131
extern "C" { double __cdecl atof(const char *); } 
#line 132
extern "C" { double __cdecl _atof_l(const char *, _locale_t); } 
#line 135 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _cabs(_complex); } 
#line 136
extern "C" { double __cdecl ceil(double); } 
#line 137
extern "C" { double __cdecl floor(double); } 
#line 138
extern "C" { double __cdecl frexp(double, int *); } 
#line 139
extern "C" { double __cdecl _hypot(double, double); } 
#line 140
extern "C" { double __cdecl _j0(double); } 
#line 141
extern "C" { double __cdecl _j1(double); } 
#line 142
extern "C" { double __cdecl _jn(int, double); } 
#line 143
extern "C" { double __cdecl ldexp(double, int); } 
#line 149 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { int __cdecl _matherr(_exception *); } 
#line 152 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl modf(double, double *); } 
#line 154
extern "C" { double __cdecl _y0(double); } 
#line 155
extern "C" { double __cdecl _y1(double); } 
#line 156
extern "C" { double __cdecl _yn(int, double); } 
#line 212 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl acosf(float); } 
#line 213
extern "C" { float __cdecl asinf(float); } 
#line 214
extern "C" { float __cdecl atanf(float); } 
#line 215
extern "C" { float __cdecl atan2f(float, float); } 
#line 216
extern "C" { float __cdecl cosf(float); } 
#line 217
extern "C" { float __cdecl sinf(float); } 
#line 218
extern "C" { float __cdecl tanf(float); } 
#line 221
extern "C" { float __cdecl coshf(float); } 
#line 222
extern "C" { float __cdecl sinhf(float); } 
#line 223
extern "C" { float __cdecl tanhf(float); } 
#line 226
extern "C" { float __cdecl expf(float); } 
#line 227
extern "C" { float __cdecl logf(float); } 
#line 228
extern "C" { float __cdecl log10f(float); } 
#line 229
extern "C" { float __cdecl modff(float, float *); } 
#line 232
extern "C" { float __cdecl powf(float, float); } 
#line 233
extern "C" { float __cdecl sqrtf(float); } 
#line 236
extern "C" { float __cdecl ceilf(float); } 
#line 237
extern "C" { float __cdecl floorf(float); } 
#line 238
extern "C" { float __cdecl fmodf(float, float); } 
#line 240
extern "C" { float __cdecl _hypotf(float, float); } 
#line 242
extern "C" { float __cdecl _copysignf(float, float); } 
#line 243
extern "C" { float __cdecl _chgsignf(float); } 
#line 244
extern "C" { float __cdecl _logbf(float); } 
#line 245
extern "C" { float __cdecl _nextafterf(float, float); } 
#line 246
extern "C" { int __cdecl _finitef(float); } 
#line 247
extern "C" { int __cdecl _isnanf(float); } 
#line 248
extern "C" { int __cdecl _fpclassf(float); } 
#line 317 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double acosl(long double _X) 
#line 318
{ return acos((double)_X); } } 
#line 319
extern "C" { inline long double asinl(long double _X) 
#line 320
{ return asin((double)_X); } } 
#line 321
extern "C" { inline long double atanl(long double _X) 
#line 322
{ return atan((double)_X); } } 
#line 323
extern "C" { inline long double atan2l(long double _Y, long double _X) 
#line 324
{ return atan2((double)_Y, (double)_X); } } 
#line 325
extern "C" { inline long double ceill(long double _X) 
#line 326
{ return ceil((double)_X); } } 
#line 327
extern "C" { inline long double cosl(long double _X) 
#line 328
{ return cos((double)_X); } } 
#line 329
extern "C" { inline long double coshl(long double _X) 
#line 330
{ return cosh((double)_X); } } 
#line 331
extern "C" { inline long double expl(long double _X) 
#line 332
{ return exp((double)_X); } } 
#line 333
extern "C" { inline long double fabsl(long double _X) 
#line 334
{ return fabs((double)_X); } } 
#line 335
extern "C" { inline long double floorl(long double _X) 
#line 336
{ return floor((double)_X); } } 
#line 337
extern "C" { inline long double fmodl(long double _X, long double _Y) 
#line 338
{ return fmod((double)_X, (double)_Y); } } 
#line 339
extern "C" { inline long double frexpl(long double _X, int *_Y) 
#line 340
{ return frexp((double)_X, _Y); } } 
#line 341
extern "C" { inline long double ldexpl(long double _X, int _Y) 
#line 342
{ return ldexp((double)_X, _Y); } } 
#line 343
extern "C" { inline long double logl(long double _X) 
#line 344
{ return log((double)_X); } } 
#line 345
extern "C" { inline long double log10l(long double _X) 
#line 346
{ return log10((double)_X); } } 
#line 347
extern "C" { inline long double modfl(long double _X, long double *_Y) 
#line 348
{ double _Di, _Df = modf((double)_X, &_Di); 
#line 349
(*_Y) = ((long double)_Di); 
#line 350
return _Df; } } 
#line 351
extern "C" { inline long double powl(long double _X, long double _Y) 
#line 352
{ return pow((double)_X, (double)_Y); } } 
#line 353
extern "C" { inline long double sinl(long double _X) 
#line 354
{ return sin((double)_X); } } 
#line 355
extern "C" { inline long double sinhl(long double _X) 
#line 356
{ return sinh((double)_X); } } 
#line 357
extern "C" { inline long double sqrtl(long double _X) 
#line 358
{ return sqrt((double)_X); } } 
#line 360
extern "C" { inline long double tanl(long double _X) 
#line 361
{ return tan((double)_X); } } 
#line 366 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double tanhl(long double _X) 
#line 367
{ return tanh((double)_X); } } 
#line 369
extern "C" { inline long double _chgsignl(long double _Number) 
#line 370
{ 
#line 371
return _chgsign(static_cast< double>(_Number)); 
#line 372
} } 
#line 374
extern "C" { inline long double _copysignl(long double _Number, long double _Sign) 
#line 375
{ 
#line 376
return _copysign(static_cast< double>(_Number), static_cast< double>(_Sign)); 
#line 377
} } 
#line 379
extern "C" { inline float frexpf(float _X, int *_Y) 
#line 380
{ return (float)frexp((double)_X, _Y); } } 
#line 383
extern "C" { inline float fabsf(float _X) 
#line 384
{ return (float)fabs((double)_X); } } 
#line 385
extern "C" { inline float ldexpf(float _X, int _Y) 
#line 386
{ return (float)ldexp((double)_X, _Y); } } 
#line 449 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" double HUGE; 
#line 454 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl cabs(_complex); } 
#line 455
extern "C" { double __cdecl hypot(double, double); } 
#line 456
extern "C" { double __cdecl j0(double); } 
#line 457
extern "C" { double __cdecl j1(double); } 
#line 458
extern "C" { double __cdecl jn(int, double); } 
#line 459
extern "C" { double __cdecl y0(double); } 
#line 460
extern "C" { double __cdecl y1(double); } 
#line 461
extern "C" { double __cdecl yn(int, double); } 
#line 472 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
template < class _Ty > inline
        _Ty _Pow_int ( _Ty _X, int _Y )
        { unsigned int _N;
        if ( _Y >= 0 )
                _N = ( unsigned int ) _Y;
        else
                _N = ( unsigned int ) ( - _Y );
        for ( _Ty _Z = _Ty ( 1 );; _X *= _X )
                { if ( ( _N & 1 ) != 0 )
                        _Z *= _X;
                if ( ( _N >>= 1 ) == 0 )
                        return ( _Y < 0 ? _Ty ( 1 ) / _Z : _Z ); } }
#line 485
inline long __cdecl abs(long _X) 
#line 486
{ return labs(_X); } 
#line 487
inline double __cdecl abs(double _X) 
#line 488
{ return fabs(_X); } 
#line 489
inline double __cdecl pow(double _X, int _Y) 
#line 490
{ return _Pow_int(_X, _Y); } 
#line 491
inline float __cdecl abs(float _X) 
#line 492
{ return fabsf(_X); } 
#line 493
inline float __cdecl acos(float _X) 
#line 494
{ return acosf(_X); } 
#line 495
inline float __cdecl asin(float _X) 
#line 496
{ return asinf(_X); } 
#line 497
inline float __cdecl atan(float _X) 
#line 498
{ return atanf(_X); } 
#line 499
inline float __cdecl atan2(float _Y, float _X) 
#line 500
{ return atan2f(_Y, _X); } 
#line 501
inline float __cdecl ceil(float _X) 
#line 502
{ return ceilf(_X); } 
#line 503
inline float __cdecl cos(float _X) 
#line 504
{ return cosf(_X); } 
#line 505
inline float __cdecl cosh(float _X) 
#line 506
{ return coshf(_X); } 
#line 507
inline float __cdecl exp(float _X) 
#line 508
{ return expf(_X); } 
#line 509
inline float __cdecl fabs(float _X) 
#line 510
{ return fabsf(_X); } 
#line 511
inline float __cdecl floor(float _X) 
#line 512
{ return floorf(_X); } 
#line 513
inline float __cdecl fmod(float _X, float _Y) 
#line 514
{ return fmodf(_X, _Y); } 
#line 515
inline float __cdecl frexp(float _X, int *_Y) 
#line 516
{ return frexpf(_X, _Y); } 
#line 517
inline float __cdecl ldexp(float _X, int _Y) 
#line 518
{ return ldexpf(_X, _Y); } 
#line 519
inline float __cdecl log(float _X) 
#line 520
{ return logf(_X); } 
#line 521
inline float __cdecl log10(float _X) 
#line 522
{ return log10f(_X); } 
#line 523
inline float __cdecl modf(float _X, float *_Y) 
#line 524
{ return modff(_X, _Y); } 
#line 525
inline float __cdecl pow(float _X, float _Y) 
#line 526
{ return powf(_X, _Y); } 
#line 527
inline float __cdecl pow(float _X, int _Y) 
#line 528
{ return _Pow_int(_X, _Y); } 
#line 529
inline float __cdecl sin(float _X) 
#line 530
{ return sinf(_X); } 
#line 531
inline float __cdecl sinh(float _X) 
#line 532
{ return sinhf(_X); } 
#line 533
inline float __cdecl sqrt(float _X) 
#line 534
{ return sqrtf(_X); } 
#line 535
inline float __cdecl tan(float _X) 
#line 536
{ return tanf(_X); } 
#line 537
inline float __cdecl tanh(float _X) 
#line 538
{ return tanhf(_X); } 
#line 539
inline long double __cdecl abs(long double _X) 
#line 540
{ return fabsl(_X); } 
#line 541
inline long double __cdecl acos(long double _X) 
#line 542
{ return acosl(_X); } 
#line 543
inline long double __cdecl asin(long double _X) 
#line 544
{ return asinl(_X); } 
#line 545
inline long double __cdecl atan(long double _X) 
#line 546
{ return atanl(_X); } 
#line 547
inline long double __cdecl atan2(long double _Y, long double _X) 
#line 548
{ return atan2l(_Y, _X); } 
#line 549
inline long double __cdecl ceil(long double _X) 
#line 550
{ return ceill(_X); } 
#line 551
inline long double __cdecl cos(long double _X) 
#line 552
{ return cosl(_X); } 
#line 553
inline long double __cdecl cosh(long double _X) 
#line 554
{ return coshl(_X); } 
#line 555
inline long double __cdecl exp(long double _X) 
#line 556
{ return expl(_X); } 
#line 557
inline long double __cdecl fabs(long double _X) 
#line 558
{ return fabsl(_X); } 
#line 559
inline long double __cdecl floor(long double _X) 
#line 560
{ return floorl(_X); } 
#line 561
inline long double __cdecl fmod(long double _X, long double _Y) 
#line 562
{ return fmodl(_X, _Y); } 
#line 563
inline long double __cdecl frexp(long double _X, int *_Y) 
#line 564
{ return frexpl(_X, _Y); } 
#line 565
inline long double __cdecl ldexp(long double _X, int _Y) 
#line 566
{ return ldexpl(_X, _Y); } 
#line 567
inline long double __cdecl log(long double _X) 
#line 568
{ return logl(_X); } 
#line 569
inline long double __cdecl log10(long double _X) 
#line 570
{ return log10l(_X); } 
#line 571
inline long double __cdecl modf(long double _X, long double *_Y) 
#line 572
{ return modfl(_X, _Y); } 
#line 573
inline long double __cdecl pow(long double _X, long double _Y) 
#line 574
{ return powl(_X, _Y); } 
#line 575
inline long double __cdecl pow(long double _X, int _Y) 
#line 576
{ return _Pow_int(_X, _Y); } 
#line 577
inline long double __cdecl sin(long double _X) 
#line 578
{ return sinl(_X); } 
#line 579
inline long double __cdecl sinh(long double _X) 
#line 580
{ return sinhl(_X); } 
#line 581
inline long double __cdecl sqrt(long double _X) 
#line 582
{ return sqrtl(_X); } 
#line 583
inline long double __cdecl tan(long double _X) 
#line 584
{ return tanl(_X); } 
#line 585
inline long double __cdecl tanh(long double _X) 
#line 586
{ return tanhl(_X); } 
#line 592 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
#pragma pack ( pop )
#line 31 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma pack ( push, 8 )
#line 56 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef int (__cdecl *_onexit_t)(void); }
#line 82 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 79
struct _div_t { 
#line 80
int quot; 
#line 81
int rem; 
#line 82
} div_t; }
#line 87
extern "C" { typedef 
#line 84
struct _ldiv_t { 
#line 85
long quot; 
#line 86
long rem; 
#line 87
} ldiv_t; }
#line 101 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma pack ( 4 )
#line 104
extern "C" { typedef 
#line 102
struct { 
#line 103
unsigned char ld[10]; 
#line 104
} _LDOUBLE; }
#pragma pack ( )
#line 123 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 121
struct { 
#line 122
double x; 
#line 123
} _CRT_DOUBLE; }
#line 127
extern "C" { typedef 
#line 125
struct { 
#line 126
float f; 
#line 127
} _CRT_FLOAT; }
#line 138
extern "C" { typedef 
#line 133
struct { 
#line 137
long double x; 
#line 138
} _LONGDOUBLE; }
#line 142
#pragma pack ( 4 )
#line 145
extern "C" { typedef 
#line 143
struct { 
#line 144
unsigned char ld12[12]; 
#line 145
} _LDBL12; }
#pragma pack ( )
#line 166 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" int __mb_cur_max; 
#line 171 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl ___mb_cur_max_func(); } 
#line 172
extern "C" { int __cdecl ___mb_cur_max_l_func(_locale_t); } 
#line 211 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef void (__cdecl *_purecall_handler)(void); }
#line 214
extern "C" { _purecall_handler __cdecl _set_purecall_handler(_purecall_handler); } 
#line 215
extern "C" { _purecall_handler __cdecl _get_purecall_handler(); } 
#line 239 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); }
#line 242
extern "C" { _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler); } 
#line 243
extern "C" { _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); } 
#line 274 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long *__cdecl __doserrno(); } 
#line 277
extern "C" { errno_t __cdecl _set_doserrno(unsigned long); } 
#line 278
extern "C" { errno_t __cdecl _get_doserrno(unsigned long *); } 
#line 281
extern "C" { char **__cdecl __sys_errlist(); } 
#line 284
extern "C" { int *__cdecl __sys_nerr(); } 
#line 301 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" int __argc; 
#line 302
extern "C" char **__argv; 
#line 303
extern "C" __wchar_t **__wargv; 
#line 317 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" char **_environ; 
#line 318
extern "C" __wchar_t **_wenviron; 
#line 321 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" char *_pgmptr; 
#line 322
extern "C" __wchar_t *_wpgmptr; 
#line 339 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _get_pgmptr(char **); } 
#line 340
extern "C" { errno_t __cdecl _get_wpgmptr(__wchar_t **); } 
#line 344
extern "C" int _fmode; 
#line 350 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _set_fmode(int); } 
#line 351
extern "C" { errno_t __cdecl _get_fmode(int *); } 
#line 360 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template<class _CountofType, size_t _SizeOfArray> char (*__countof_helper(__unaligned _CountofType (&)[_SizeOfArray]))[_SizeOfArray]; 
#line 371 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noreturn ) void __cdecl exit(int); } 
#line 372
extern "C" { __declspec( noreturn ) void __cdecl _exit(int); } 
#line 373
extern "C" { void __cdecl abort(); } 
#line 376 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __cdecl _set_abort_behavior(unsigned, unsigned); } 
#line 384
extern "C" { __int64 __cdecl _abs64(__int64); } 
#line 412 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl atexit(void (__cdecl *)(void)); } 
#line 419 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl atoi(const char *); } 
#line 420
extern "C" { int __cdecl _atoi_l(const char *, _locale_t); } 
#line 421
extern "C" { long __cdecl atol(const char *); } 
#line 422
extern "C" { long __cdecl _atol_l(const char *, _locale_t); } 
#line 426
extern "C" { void *__cdecl bsearch_s(const void *, const void *, rsize_t, rsize_t, int (__cdecl *)(void *, const void *, const void *), void *); } 
#line 430 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void *__cdecl bsearch(const void *, const void *, size_t, size_t, int (__cdecl *)(const void *, const void *)); } 
#line 435
extern "C" { void __cdecl qsort_s(void *, rsize_t, rsize_t, int (__cdecl *)(void *, const void *, const void *), void *); } 
#line 439 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl qsort(void *, size_t, size_t, int (__cdecl *)(const void *, const void *)); } 
#line 443 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned short __cdecl _byteswap_ushort(unsigned short); } 
#line 444
extern "C" { unsigned long __cdecl _byteswap_ulong(unsigned long); } 
#line 445
extern "C" { unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64); } 
#line 446
extern "C" { div_t __cdecl div(int, int); } 
#line 447
extern "C" { char *__cdecl getenv(const char *); } 
#line 449
extern "C" { errno_t __cdecl getenv_s(size_t *, char *, rsize_t, const char *); } 
#line 451 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl getenv_s ( size_t * _ReturnSize, char ( & _Dest ) [ _Size ], const char * _VarName ) { return getenv_s ( _ReturnSize, _Dest, _Size, _VarName ); }
#line 457 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _dupenv_s(char **, size_t *, const char *); } 
#line 463 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _itoa_s(int, char *, size_t, int); } 
#line 464
template < size_t _Size > inline errno_t __cdecl _itoa_s ( int _Value, char ( & _Dest ) [ _Size ], int _Radix ) { return _itoa_s ( _Value, _Dest, _Size, _Radix ); }
#line 465
extern "C" { char *__cdecl _itoa(int, char *, int); } 
#line 466
extern "C" { errno_t __cdecl _i64toa_s(__int64, char *, size_t, int); } 
#line 467
extern "C" { char *__cdecl _i64toa(__int64, char *, int); } 
#line 468
extern "C" { errno_t __cdecl _ui64toa_s(unsigned __int64, char *, size_t, int); } 
#line 469
extern "C" { char *__cdecl _ui64toa(unsigned __int64, char *, int); } 
#line 470
extern "C" { __int64 __cdecl _atoi64(const char *); } 
#line 471
extern "C" { __int64 __cdecl _atoi64_l(const char *, _locale_t); } 
#line 472
extern "C" { __int64 __cdecl _strtoi64(const char *, char **, int); } 
#line 473
extern "C" { __int64 __cdecl _strtoi64_l(const char *, char **, int, _locale_t); } 
#line 474
extern "C" { unsigned __int64 __cdecl _strtoui64(const char *, char **, int); } 
#line 475
extern "C" { unsigned __int64 __cdecl _strtoui64_l(const char *, char **, int, _locale_t); } 
#line 476
extern "C" { ldiv_t __cdecl ldiv(long, long); } 
#line 480
inline ldiv_t div(long _A1, long _A2) 
#line 481
{ 
#line 482
return ldiv(_A1, _A2); 
#line 483
} 
#line 486 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ltoa_s(long, char *, size_t, int); } 
#line 487
template < size_t _Size > inline errno_t __cdecl _ltoa_s ( long _Value, char ( & _Dest ) [ _Size ], int _Radix ) { return _ltoa_s ( _Value, _Dest, _Size, _Radix ); }
#line 488
extern "C" { char *__cdecl _ltoa(long, char *, int); } 
#line 489
extern "C" { int __cdecl mblen(const char *, size_t); } 
#line 490
extern "C" { int __cdecl _mblen_l(const char *, size_t, _locale_t); } 
#line 491
extern "C" { size_t __cdecl _mbstrlen(const char *); } 
#line 492
extern "C" { size_t __cdecl _mbstrlen_l(const char *, _locale_t); } 
#line 493
extern "C" { size_t __cdecl _mbstrnlen(const char *, size_t); } 
#line 494
extern "C" { size_t __cdecl _mbstrnlen_l(const char *, size_t, _locale_t); } 
#line 495
extern "C" { int __cdecl mbtowc(__wchar_t *, const char *, size_t); } 
#line 496
extern "C" { int __cdecl _mbtowc_l(__wchar_t *, const char *, size_t, _locale_t); } 
#line 497
extern "C" { errno_t __cdecl mbstowcs_s(size_t *, __wchar_t *, size_t, const char *, size_t); } 
#line 498
template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], const char * _Source, size_t _MaxCount ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
#line 499
extern "C" { size_t __cdecl mbstowcs(__wchar_t *, const char *, size_t); } 
#line 501
extern "C" { errno_t __cdecl _mbstowcs_s_l(size_t *, __wchar_t *, size_t, const char *, size_t, _locale_t); } 
#line 502
template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], const char * _Source, size_t _MaxCount, _locale_t _Locale ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
#line 503
extern "C" { size_t __cdecl _mbstowcs_l(__wchar_t *, const char *, size_t, _locale_t); } 
#line 505
extern "C" { int __cdecl rand(); } 
#line 510 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _set_error_mode(int); } 
#line 512
extern "C" { void __cdecl srand(unsigned); } 
#line 513
extern "C" { double __cdecl strtod(const char *, char **); } 
#line 514
extern "C" { double __cdecl _strtod_l(const char *, char **, _locale_t); } 
#line 515
extern "C" { long __cdecl strtol(const char *, char **, int); } 
#line 516
extern "C" { long __cdecl _strtol_l(const char *, char **, int, _locale_t); } 
#line 517
extern "C" { unsigned long __cdecl strtoul(const char *, char **, int); } 
#line 518
extern "C" { unsigned long __cdecl _strtoul_l(const char *, char **, int, _locale_t); } 
#line 521
extern "C" { int __cdecl system(const char *); } 
#line 523 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ultoa_s(unsigned long, char *, size_t, int); } 
#line 524
template < size_t _Size > inline errno_t __cdecl _ultoa_s ( unsigned long _Value, char ( & _Dest ) [ _Size ], int _Radix ) { return _ultoa_s ( _Value, _Dest, _Size, _Radix ); }
#line 525
extern "C" { char *__cdecl _ultoa(unsigned long, char *, int); } 
#line 526
extern "C" { int __cdecl wctomb(char *, __wchar_t); } 
#line 527
extern "C" { int __cdecl _wctomb_l(char *, __wchar_t, _locale_t); } 
#line 529
extern "C" { errno_t __cdecl wctomb_s(int *, char *, rsize_t, __wchar_t); } 
#line 531 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wctomb_s_l(int *, char *, size_t, __wchar_t, _locale_t); } 
#line 532
extern "C" { errno_t __cdecl wcstombs_s(size_t *, char *, size_t, const __wchar_t *, size_t); } 
#line 533
template < size_t _Size > inline errno_t __cdecl wcstombs_s ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _MaxCount ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
#line 534
extern "C" { size_t __cdecl wcstombs(char *, const __wchar_t *, size_t); } 
#line 535
extern "C" { errno_t __cdecl _wcstombs_s_l(size_t *, char *, size_t, const __wchar_t *, size_t, _locale_t); } 
#line 536
template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
#line 537
extern "C" { size_t __cdecl _wcstombs_l(char *, const __wchar_t *, size_t, _locale_t); } 
#line 599 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl calloc(size_t, size_t); } 
#line 600
extern "C" { __declspec( noalias ) void __cdecl free(void *); } 
#line 601
extern "C" { __declspec( noalias restrict ) void *__cdecl malloc(size_t); } 
#line 602
extern "C" { __declspec( noalias restrict ) void *__cdecl realloc(void *, size_t); } 
#line 603
extern "C" { __declspec( noalias restrict ) void *__cdecl _recalloc(void *, size_t, size_t); } 
#line 604
extern "C" { __declspec( noalias ) void __cdecl _aligned_free(void *); } 
#line 605
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_malloc(size_t, size_t); } 
#line 606
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_offset_malloc(size_t, size_t, size_t); } 
#line 607
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_realloc(void *, size_t, size_t); } 
#line 608
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_recalloc(void *, size_t, size_t, size_t); } 
#line 609
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_offset_realloc(void *, size_t, size_t, size_t); } 
#line 610
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_offset_recalloc(void *, size_t, size_t, size_t, size_t); } 
#line 611
extern "C" { size_t __cdecl _aligned_msize(void *, size_t, size_t); } 
#line 638 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _itow_s(int, __wchar_t *, size_t, int); } 
#line 639
template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) { return _itow_s ( _Value, _Dest, _Size, _Radix ); }
#line 640
extern "C" { __wchar_t *__cdecl _itow(int, __wchar_t *, int); } 
#line 641
extern "C" { errno_t __cdecl _ltow_s(long, __wchar_t *, size_t, int); } 
#line 642
template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) { return _ltow_s ( _Value, _Dest, _Size, _Radix ); }
#line 643
extern "C" { __wchar_t *__cdecl _ltow(long, __wchar_t *, int); } 
#line 644
extern "C" { errno_t __cdecl _ultow_s(unsigned long, __wchar_t *, size_t, int); } 
#line 645
template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) { return _ultow_s ( _Value, _Dest, _Size, _Radix ); }
#line 646
extern "C" { __wchar_t *__cdecl _ultow(unsigned long, __wchar_t *, int); } 
#line 647
extern "C" { double __cdecl wcstod(const __wchar_t *, __wchar_t **); } 
#line 648
extern "C" { double __cdecl _wcstod_l(const __wchar_t *, __wchar_t **, _locale_t); } 
#line 649
extern "C" { long __cdecl wcstol(const __wchar_t *, __wchar_t **, int); } 
#line 650
extern "C" { long __cdecl _wcstol_l(const __wchar_t *, __wchar_t **, int, _locale_t); } 
#line 651
extern "C" { unsigned long __cdecl wcstoul(const __wchar_t *, __wchar_t **, int); } 
#line 652
extern "C" { unsigned long __cdecl _wcstoul_l(const __wchar_t *, __wchar_t **, int, _locale_t); } 
#line 653
extern "C" { __wchar_t *__cdecl _wgetenv(const __wchar_t *); } 
#line 654
extern "C" { errno_t __cdecl _wgetenv_s(size_t *, __wchar_t *, size_t, const __wchar_t *); } 
#line 655
template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _ReturnSize, wchar_t ( & _Dest ) [ _Size ], const wchar_t * _VarName ) { return _wgetenv_s ( _ReturnSize, _Dest, _Size, _VarName ); }
#line 662 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wdupenv_s(__wchar_t **, size_t *, const __wchar_t *); } 
#line 670 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _wsystem(const __wchar_t *); } 
#line 672 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { double __cdecl _wtof(const __wchar_t *); } 
#line 673
extern "C" { double __cdecl _wtof_l(const __wchar_t *, _locale_t); } 
#line 674
extern "C" { int __cdecl _wtoi(const __wchar_t *); } 
#line 675
extern "C" { int __cdecl _wtoi_l(const __wchar_t *, _locale_t); } 
#line 676
extern "C" { long __cdecl _wtol(const __wchar_t *); } 
#line 677
extern "C" { long __cdecl _wtol_l(const __wchar_t *, _locale_t); } 
#line 679
extern "C" { errno_t __cdecl _i64tow_s(__int64, __wchar_t *, size_t, int); } 
#line 680
extern "C" { __wchar_t *__cdecl _i64tow(__int64, __wchar_t *, int); } 
#line 681
extern "C" { errno_t __cdecl _ui64tow_s(unsigned __int64, __wchar_t *, size_t, int); } 
#line 682
extern "C" { __wchar_t *__cdecl _ui64tow(unsigned __int64, __wchar_t *, int); } 
#line 683
extern "C" { __int64 __cdecl _wtoi64(const __wchar_t *); } 
#line 684
extern "C" { __int64 __cdecl _wtoi64_l(const __wchar_t *, _locale_t); } 
#line 685
extern "C" { __int64 __cdecl _wcstoi64(const __wchar_t *, __wchar_t **, int); } 
#line 686
extern "C" { __int64 __cdecl _wcstoi64_l(const __wchar_t *, __wchar_t **, int, _locale_t); } 
#line 687
extern "C" { unsigned __int64 __cdecl _wcstoui64(const __wchar_t *, __wchar_t **, int); } 
#line 688
extern "C" { unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t *, __wchar_t **, int, _locale_t); } 
#line 708 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _fullpath(char *, const char *, size_t); } 
#line 716 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ecvt_s(char *, size_t, double, int, int *, int *); } 
#line 717
template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Dest ) [ _Size ], double _Value, int _NumOfDigits, int * _PtDec, int * _PtSign ) { return _ecvt_s ( _Dest, _Size, _Value, _NumOfDigits, _PtDec, _PtSign ); }
#line 718
extern "C" { char *__cdecl _ecvt(double, int, int *, int *); } 
#line 719
extern "C" { errno_t __cdecl _fcvt_s(char *, size_t, double, int, int *, int *); } 
#line 720
template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Dest ) [ _Size ], double _Value, int _NumOfDigits, int * _PtDec, int * _PtSign ) { return _fcvt_s ( _Dest, _Size, _Value, _NumOfDigits, _PtDec, _PtSign ); }
#line 721
extern "C" { char *__cdecl _fcvt(double, int, int *, int *); } 
#line 722
extern "C" { errno_t __cdecl _gcvt_s(char *, size_t, double, int); } 
#line 723
template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Dest ) [ _Size ], double _Value, int _NumOfDigits ) { return _gcvt_s ( _Dest, _Size, _Value, _NumOfDigits ); }
#line 724
extern "C" { char *__cdecl _gcvt(double, int, char *); } 
#line 726
extern "C" { int __cdecl _atodbl(_CRT_DOUBLE *, char *); } 
#line 727
extern "C" { int __cdecl _atoldbl(_LDOUBLE *, char *); } 
#line 728
extern "C" { int __cdecl _atoflt(_CRT_FLOAT *, char *); } 
#line 729
extern "C" { int __cdecl _atodbl_l(_CRT_DOUBLE *, char *, _locale_t); } 
#line 730
extern "C" { int __cdecl _atoldbl_l(_LDOUBLE *, char *, _locale_t); } 
#line 731
extern "C" { int __cdecl _atoflt_l(_CRT_FLOAT *, char *, _locale_t); } 
#line 732
extern "C" { unsigned long __cdecl _lrotl(unsigned long, int); } 
#line 733
extern "C" { unsigned long __cdecl _lrotr(unsigned long, int); } 
#line 734
extern "C" { errno_t __cdecl _makepath_s(char *, size_t, const char *, const char *, const char *, const char *); } 
#line 736
template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Path ) [ _Size ], const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext ) { return _makepath_s ( _Path, _Size, _Drive, _Dir, _Filename, _Ext ); }
#line 737
extern "C" { void __cdecl _makepath(char *, const char *, const char *, const char *, const char *); } 
#line 764 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { _onexit_t __cdecl _onexit(_onexit_t); } 
#line 769 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl perror(const char *); } 
#line 772 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma warning (push)
#pragma warning (disable:6540)
extern "C" { int __cdecl _putenv(const char *); } 
#line 775
extern "C" { errno_t __cdecl _putenv_s(const char *, const char *); } 
#line 776
extern "C" { unsigned __cdecl _rotl(unsigned, int); } 
#line 777
extern "C" { unsigned __int64 __cdecl _rotl64(unsigned __int64, int); } 
#line 778
extern "C" { unsigned __cdecl _rotr(unsigned, int); } 
#line 779
extern "C" { unsigned __int64 __cdecl _rotr64(unsigned __int64, int); } 
#pragma warning (pop)
#line 782
extern "C" { errno_t __cdecl _searchenv_s(const char *, const char *, char *, size_t); } 
#line 783
template < size_t _Size > inline errno_t __cdecl _searchenv_s ( const char * _Filename, const char * _EnvVar, char ( & _ResultPath ) [ _Size ] ) { return _searchenv_s ( _Filename, _EnvVar, _ResultPath, _Size ); }
#line 784
extern "C" { void __cdecl _searchenv(const char *, const char *, char *); } 
#line 786
extern "C" { void __cdecl _splitpath(const char *, char *, char *, char *, char *); } 
#line 787
extern "C" { errno_t __cdecl _splitpath_s(const char *, char *, size_t, char *, size_t, char *, size_t, char *, size_t); } 
#line 792
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( const char * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 794
extern "C" { void __cdecl _swab(char *, char *, int); } 
#line 805 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __wchar_t *__cdecl _wfullpath(__wchar_t *, const __wchar_t *, size_t); } 
#line 811 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wmakepath_s(__wchar_t *, size_t, const __wchar_t *, const __wchar_t *, const __wchar_t *, const __wchar_t *); } 
#line 813
template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _ResultPath ) [ _Size ], const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext ) { return _wmakepath_s ( _ResultPath, _Size, _Drive, _Dir, _Filename, _Ext ); }
#line 814
extern "C" { void __cdecl _wmakepath(__wchar_t *, const __wchar_t *, const __wchar_t *, const __wchar_t *, const __wchar_t *); } 
#line 817
extern "C" { void __cdecl _wperror(const __wchar_t *); } 
#line 819 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _wputenv(const __wchar_t *); } 
#line 820
extern "C" { errno_t __cdecl _wputenv_s(const __wchar_t *, const __wchar_t *); } 
#line 821
extern "C" { errno_t __cdecl _wsearchenv_s(const __wchar_t *, const __wchar_t *, __wchar_t *, size_t); } 
#line 822
template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( const wchar_t * _Filename, const wchar_t * _EnvVar, wchar_t ( & _ResultPath ) [ _Size ] ) { return _wsearchenv_s ( _Filename, _EnvVar, _ResultPath, _Size ); }
#line 823
extern "C" { void __cdecl _wsearchenv(const __wchar_t *, const __wchar_t *, __wchar_t *); } 
#line 824
extern "C" { void __cdecl _wsplitpath(const __wchar_t *, __wchar_t *, __wchar_t *, __wchar_t *, __wchar_t *); } 
#line 825
extern "C" { errno_t __cdecl _wsplitpath_s(const __wchar_t *, __wchar_t *, size_t, __wchar_t *, size_t, __wchar_t *, size_t, __wchar_t *, size_t); } 
#line 830
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( const wchar_t * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 836 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode instead. See online help for details.")) void __cdecl _seterrormode(int); } 
#line 837
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. See online help for details.")) void __cdecl _beep(unsigned, unsigned); } 
#line 838
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. See online help for details.")) void __cdecl _sleep(unsigned long); } 
#line 857 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4141)
extern "C" { char *__cdecl ecvt(double, int, int *, int *); } 
#line 860
extern "C" { char *__cdecl fcvt(double, int, int *, int *); } 
#line 861
extern "C" { char *__cdecl gcvt(double, int, char *); } 
#line 862
extern "C" { char *__cdecl itoa(int, char *, int); } 
#line 863
extern "C" { char *__cdecl ltoa(long, char *, int); } 
#line 864
extern "C" { int __cdecl putenv(const char *); } 
#line 865
extern "C" { void __cdecl swab(char *, char *, int); } 
#line 866
extern "C" { char *__cdecl ultoa(unsigned long, char *, int); } 
#pragma warning(pop)
extern "C" { _onexit_t __cdecl onexit(_onexit_t); } 
#line 114 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\use_ansi.h"
#pragma comment(lib,"libcpmt")
#line 880 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma pack ( pop )
#line 9 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
#pragma pack ( push, 8 )
#line 528 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
namespace std { 
#line 529
typedef bool _Bool; 
#line 530
}
#line 546 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
typedef __int64 _Longlong; 
#line 547
typedef unsigned __int64 _ULonglong; 
#line 569 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
namespace std { 
#line 573
#pragma warning(push)
#pragma warning(disable:4412)
class _Lockit { 
#line 595 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
public: explicit __thiscall _Lockit(); 
#line 596
explicit __thiscall _Lockit(int); 
#line 597
__thiscall ~_Lockit(); 
#line 600 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Lockit_ctor(int); 
#line 601
static void __cdecl _Lockit_dtor(int); 
#line 604
private: static void __cdecl _Lockit_ctor(_Lockit *); 
#line 605
static void __cdecl _Lockit_ctor(_Lockit *, int); 
#line 606
static void __cdecl _Lockit_dtor(_Lockit *); 
#line 608
_Lockit(const _Lockit &); 
#line 609
_Lockit &operator=(const _Lockit &); 
#line 611
int _Locktype; 
#line 628 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
}; 
#line 722 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
class _Mutex { 
#line 746 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
public: __thiscall _Mutex(); 
#line 747
__thiscall ~_Mutex(); 
#line 748
void __thiscall _Lock(); 
#line 749
void __thiscall _Unlock(); 
#line 753 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
private: static void __cdecl _Mutex_ctor(_Mutex *); 
#line 754
static void __cdecl _Mutex_dtor(_Mutex *); 
#line 755
static void __cdecl _Mutex_Lock(_Mutex *); 
#line 756
static void __cdecl _Mutex_Unlock(_Mutex *); 
#line 758
_Mutex(const _Mutex &); 
#line 759
_Mutex &operator=(const _Mutex &); 
#line 760
void *_Mtx; 
#line 772 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
}; 
#line 774
class _Init_locks { 
#line 790 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
public: __thiscall _Init_locks(); 
#line 791
__thiscall ~_Init_locks(); 
#line 795 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
private: static void __cdecl _Init_locks_ctor(_Init_locks *); 
#line 796
static void __cdecl _Init_locks_dtor(_Init_locks *); 
#line 808 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
}; 
#pragma warning(pop)
}
#line 819 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
void __cdecl _Atexit(void (__cdecl *)(void)); 
#line 821
typedef int _Mbstatet; 
#line 830
#pragma pack ( pop )
#line 20 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
namespace std { 
#line 21
using ::acosf;using ::asinf;
#line 22
using ::atanf;using ::atan2f;using ::ceilf;
#line 23
using ::cosf;using ::coshf;using ::expf;
#line 24
using ::fabsf;using ::floorf;using ::fmodf;
#line 25
using ::frexpf;using ::ldexpf;using ::logf;
#line 26
using ::log10f;using ::modff;using ::powf;
#line 27
using ::sinf;using ::sinhf;using ::sqrtf;
#line 28
using ::tanf;using ::tanhf;
#line 30
using ::acosl;using ::asinl;
#line 31
using ::atanl;using ::atan2l;using ::ceill;
#line 32
using ::cosl;using ::coshl;using ::expl;
#line 33
using ::fabsl;using ::floorl;using ::fmodl;
#line 34
using ::frexpl;using ::ldexpl;using ::logl;
#line 35
using ::log10l;using ::modfl;using ::powl;
#line 36
using ::sinl;using ::sinhl;using ::sqrtl;
#line 37
using ::tanl;using ::tanhl;
#line 39
using ::abs;
#line 41
using ::acos;using ::asin;
#line 42
using ::atan;using ::atan2;using ::ceil;
#line 43
using ::cos;using ::cosh;using ::exp;
#line 44
using ::fabs;using ::floor;using ::fmod;
#line 45
using ::frexp;using ::ldexp;using ::log;
#line 46
using ::log10;using ::modf;using ::pow;
#line 47
using ::sin;using ::sinh;using ::sqrt;
#line 48
using ::tan;using ::tanh;
#line 51
}
#line 19 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
namespace std { 
#line 21
using ::size_t;using ::div_t;using ::ldiv_t;
#line 23
using ::abort;using ::atexit;
#line 24
using ::atof;using ::atoi;using ::atol;
#line 25
using ::bsearch;using ::calloc;using ::div;
#line 26
using ::exit;using ::free;using ::getenv;
#line 27
using ::labs;using ::ldiv;using ::malloc;
#line 28
using ::mblen;using ::mbstowcs;using ::mbtowc;
#line 29
using ::qsort;using ::rand;using ::realloc;
#line 30
using ::srand;using ::strtod;using ::strtol;
#line 31
using ::strtoul;using ::system;
#line 32
using ::wcstombs;using ::wctomb;
#line 35
}
#line 534 "c:\\cuda\\include\\math_functions.h"
static __inline __int64 abs(__int64 a) 
#line 535
{ 
#line 536
return llabs(a); 
#line 537
} 
#line 539
static __inline int signbit(double a) 
#line 540
{ 
#line 541
return __signbit(a); 
#line 542
} 
#line 544
static __inline int signbit(float a) 
#line 545
{ 
#line 546
return __signbitf(a); 
#line 547
} 
#line 549
static __inline int isinf(double a) 
#line 550
{ 
#line 551
return __isinf(a); 
#line 552
} 
#line 554
static __inline int isinf(float a) 
#line 555
{ 
#line 556
return __isinff(a); 
#line 557
} 
#line 559
static __inline int isnan(double a) 
#line 560
{ 
#line 561
return __isnan(a); 
#line 562
} 
#line 564
static __inline int isnan(float a) 
#line 565
{ 
#line 566
return __isnanf(a); 
#line 567
} 
#line 569
static __inline int isfinite(double a) 
#line 570
{ 
#line 571
return __finite(a); 
#line 572
} 
#line 574
static __inline int isfinite(float a) 
#line 575
{ 
#line 576
return __finitef(a); 
#line 577
} 
#line 579
template<class T> inline T _Pow_int(T, int); 
#line 587 "c:\\cuda\\include\\math_functions.h"
inline long __cdecl abs(long); 
#line 588
inline float __cdecl abs(float); 
#line 589
inline double __cdecl abs(double); 
#line 590
inline float __cdecl fabs(float); 
#line 591
inline float __cdecl ceil(float); 
#line 592
inline float __cdecl floor(float); 
#line 593
inline float __cdecl sqrt(float); 
#line 594
inline float __cdecl pow(float, float); 
#line 595
inline float __cdecl pow(float, int); 
#line 596
inline double __cdecl pow(double, int); 
#line 597
inline float __cdecl log(float); 
#line 598
inline float __cdecl log10(float); 
#line 599
inline float __cdecl fmod(float, float); 
#line 600
inline float __cdecl modf(float, float *); 
#line 601
inline float __cdecl exp(float); 
#line 602
inline float __cdecl frexp(float, int *); 
#line 603
inline float __cdecl ldexp(float, int); 
#line 604
inline float __cdecl asin(float); 
#line 605
inline float __cdecl sin(float); 
#line 606
inline float __cdecl sinh(float); 
#line 607
inline float __cdecl acos(float); 
#line 608
inline float __cdecl cos(float); 
#line 609
inline float __cdecl cosh(float); 
#line 610
inline float __cdecl atan(float); 
#line 611
inline float __cdecl atan2(float, float); 
#line 612
inline float __cdecl tan(float); 
#line 613
inline float __cdecl tanh(float); 
#line 619 "c:\\cuda\\include\\math_functions.h"
static __inline float logb(float a) 
#line 620
{ 
#line 621
return logbf(a); 
#line 622
} 
#line 624
static __inline int ilogb(float a) 
#line 625
{ 
#line 626
return ilogbf(a); 
#line 627
} 
#line 629
static __inline float scalbn(float a, int b) 
#line 630
{ 
#line 631
return scalbnf(a, b); 
#line 632
} 
#line 634
static __inline float scalbln(float a, long b) 
#line 635
{ 
#line 636
return scalblnf(a, b); 
#line 637
} 
#line 639
static __inline float exp2(float a) 
#line 640
{ 
#line 641
return exp2f(a); 
#line 642
} 
#line 644
static __inline float exp10(float a) 
#line 645
{ 
#line 646
return exp10f(a); 
#line 647
} 
#line 649
static __inline float expm1(float a) 
#line 650
{ 
#line 651
return expm1f(a); 
#line 652
} 
#line 654
static __inline float log2(float a) 
#line 655
{ 
#line 656
return log2f(a); 
#line 657
} 
#line 659
static __inline float log1p(float a) 
#line 660
{ 
#line 661
return log1pf(a); 
#line 662
} 
#line 664
static __inline float rsqrt(float a) 
#line 665
{ 
#line 666
return rsqrtf(a); 
#line 667
} 
#line 669
static __inline float acosh(float a) 
#line 670
{ 
#line 671
return acoshf(a); 
#line 672
} 
#line 674
static __inline float asinh(float a) 
#line 675
{ 
#line 676
return asinhf(a); 
#line 677
} 
#line 679
static __inline float atanh(float a) 
#line 680
{ 
#line 681
return atanhf(a); 
#line 682
} 
#line 684
static __inline float hypot(float a, float b) 
#line 685
{ 
#line 686
return hypotf(a, b); 
#line 687
} 
#line 689
static __inline float cbrt(float a) 
#line 690
{ 
#line 691
return cbrtf(a); 
#line 692
} 
#line 694
static __inline float rcbrt(float a) 
#line 695
{ 
#line 696
return rcbrtf(a); 
#line 697
} 
#line 699
static __inline float sinpi(float a) 
#line 700
{ 
#line 701
return sinpif(a); 
#line 702
} 
#line 704
static __inline void sincos(float a, float *sptr, float *cptr) 
#line 705
{ 
#line 706
sincosf(a, sptr, cptr); 
#line 707
} 
#line 709
static __inline float erf(float a) 
#line 710
{ 
#line 711
return erff(a); 
#line 712
} 
#line 714
static __inline float erfinv(float a) 
#line 715
{ 
#line 716
return erfinvf(a); 
#line 717
} 
#line 719
static __inline float erfc(float a) 
#line 720
{ 
#line 721
return erfcf(a); 
#line 722
} 
#line 724
static __inline float erfcinv(float a) 
#line 725
{ 
#line 726
return erfcinvf(a); 
#line 727
} 
#line 729
static __inline float lgamma(float a) 
#line 730
{ 
#line 731
return lgammaf(a); 
#line 732
} 
#line 734
static __inline float tgamma(float a) 
#line 735
{ 
#line 736
return tgammaf(a); 
#line 737
} 
#line 739
static __inline float copysign(float a, float b) 
#line 740
{ 
#line 741
return copysignf(a, b); 
#line 742
} 
#line 744
static __inline double copysign(double a, float b) 
#line 745
{ 
#line 746
return copysign(a, (double)b); 
#line 747
} 
#line 749
static __inline float copysign(float a, double b) 
#line 750
{ 
#line 751
return copysignf(a, (float)b); 
#line 752
} 
#line 754
static __inline float nextafter(float a, float b) 
#line 755
{ 
#line 756
return nextafterf(a, b); 
#line 757
} 
#line 759
static __inline float remainder(float a, float b) 
#line 760
{ 
#line 761
return remainderf(a, b); 
#line 762
} 
#line 764
static __inline float remquo(float a, float b, int *quo) 
#line 765
{ 
#line 766
return remquof(a, b, quo); 
#line 767
} 
#line 769
static __inline float round(float a) 
#line 770
{ 
#line 771
return roundf(a); 
#line 772
} 
#line 774
static __inline long lround(float a) 
#line 775
{ 
#line 776
return lroundf(a); 
#line 777
} 
#line 779
static __inline __int64 llround(float a) 
#line 780
{ 
#line 781
return llroundf(a); 
#line 782
} 
#line 784
static __inline float trunc(float a) 
#line 785
{ 
#line 786
return truncf(a); 
#line 787
} 
#line 789
static __inline float rint(float a) 
#line 790
{ 
#line 791
return rintf(a); 
#line 792
} 
#line 794
static __inline long lrint(float a) 
#line 795
{ 
#line 796
return lrintf(a); 
#line 797
} 
#line 799
static __inline __int64 llrint(float a) 
#line 800
{ 
#line 801
return llrintf(a); 
#line 802
} 
#line 804
static __inline float nearbyint(float a) 
#line 805
{ 
#line 806
return nearbyintf(a); 
#line 807
} 
#line 809
static __inline float fdim(float a, float b) 
#line 810
{ 
#line 811
return fdimf(a, b); 
#line 812
} 
#line 814
static __inline float fma(float a, float b, float c) 
#line 815
{ 
#line 816
return fmaf(a, b, c); 
#line 817
} 
#line 819
static __inline float fmax(float a, float b) 
#line 820
{ 
#line 821
return fmaxf(a, b); 
#line 822
} 
#line 824
static __inline float fmin(float a, float b) 
#line 825
{ 
#line 826
return fminf(a, b); 
#line 827
} 
#line 829
static __inline unsigned min(unsigned a, unsigned b) 
#line 830
{ 
#line 831
return umin(a, b); 
#line 832
} 
#line 834
static __inline unsigned min(int a, unsigned b) 
#line 835
{ 
#line 836
return umin((unsigned)a, b); 
#line 837
} 
#line 839
static __inline unsigned min(unsigned a, int b) 
#line 840
{ 
#line 841
return umin(a, (unsigned)b); 
#line 842
} 
#line 844
static __inline __int64 min(__int64 a, __int64 b) 
#line 845
{ 
#line 846
return llmin(a, b); 
#line 847
} 
#line 849
static __inline unsigned __int64 min(unsigned __int64 a, unsigned __int64 b) 
#line 850
{ 
#line 851
return ullmin(a, b); 
#line 852
} 
#line 854
static __inline unsigned __int64 min(__int64 a, unsigned __int64 b) 
#line 855
{ 
#line 856
return ullmin((unsigned __int64)a, b); 
#line 857
} 
#line 859
static __inline unsigned __int64 min(unsigned __int64 a, __int64 b) 
#line 860
{ 
#line 861
return ullmin(a, (unsigned __int64)b); 
#line 862
} 
#line 864
static __inline float min(float a, float b) 
#line 865
{ 
#line 866
return fminf(a, b); 
#line 867
} 
#line 869
static __inline double min(double a, double b) 
#line 870
{ 
#line 871
return fmin(a, b); 
#line 872
} 
#line 874
static __inline double min(float a, double b) 
#line 875
{ 
#line 876
return fmin((double)a, b); 
#line 877
} 
#line 879
static __inline double min(double a, float b) 
#line 880
{ 
#line 881
return fmin(a, (double)b); 
#line 882
} 
#line 884
static __inline unsigned max(unsigned a, unsigned b) 
#line 885
{ 
#line 886
return umax(a, b); 
#line 887
} 
#line 889
static __inline unsigned max(int a, unsigned b) 
#line 890
{ 
#line 891
return umax((unsigned)a, b); 
#line 892
} 
#line 894
static __inline unsigned max(unsigned a, int b) 
#line 895
{ 
#line 896
return umax(a, (unsigned)b); 
#line 897
} 
#line 899
static __inline __int64 max(__int64 a, __int64 b) 
#line 900
{ 
#line 901
return llmax(a, b); 
#line 902
} 
#line 904
static __inline unsigned __int64 max(unsigned __int64 a, unsigned __int64 b) 
#line 905
{ 
#line 906
return ullmax(a, b); 
#line 907
} 
#line 909
static __inline unsigned __int64 max(__int64 a, unsigned __int64 b) 
#line 910
{ 
#line 911
return ullmax((unsigned __int64)a, b); 
#line 912
} 
#line 914
static __inline unsigned __int64 max(unsigned __int64 a, __int64 b) 
#line 915
{ 
#line 916
return ullmax(a, (unsigned __int64)b); 
#line 917
} 
#line 919
static __inline float max(float a, float b) 
#line 920
{ 
#line 921
return fmaxf(a, b); 
#line 922
} 
#line 924
static __inline double max(double a, double b) 
#line 925
{ 
#line 926
return fmax(a, b); 
#line 927
} 
#line 929
static __inline double max(float a, double b) 
#line 930
{ 
#line 931
return fmax((double)a, b); 
#line 932
} 
#line 934
static __inline double max(double a, float b) 
#line 935
{ 
#line 936
return fmax(a, (double)b); 
#line 937
} 
#line 60 "c:\\cuda\\include\\cuda_surface_types.h"
template<class T, int dim = 1> 
#line 61
struct surface : public surfaceReference { 
#line 63
surface() 
#line 64
{ 
#line 65
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 66
} 
#line 68
surface(cudaChannelFormatDesc desc) 
#line 69
{ 
#line 70
(channelDesc) = desc; 
#line 71
} 
#line 72
}; 
#line 75
template<int dim> 
#line 76
struct surface< void, dim>  : public surfaceReference { 
#line 78
surface() 
#line 79
{ 
#line 80
(channelDesc) = cudaCreateChannelDesc< void> (); 
#line 81
} 
#line 82
}; 
#line 60 "c:\\cuda\\include\\cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
#line 61
struct texture : public textureReference { 
#line 63
texture(int norm = 0, cudaTextureFilterMode 
#line 64
fMode = cudaFilterModePoint, cudaTextureAddressMode 
#line 65
aMode = cudaAddressModeClamp) 
#line 66
{ 
#line 67
(normalized) = norm; 
#line 68
(filterMode) = fMode; 
#line 69
((addressMode)[0]) = aMode; 
#line 70
((addressMode)[1]) = aMode; 
#line 71
((addressMode)[2]) = aMode; 
#line 72
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 73
} 
#line 75
texture(int norm, cudaTextureFilterMode 
#line 76
fMode, cudaTextureAddressMode 
#line 77
aMode, cudaChannelFormatDesc 
#line 78
desc) 
#line 79
{ 
#line 80
(normalized) = norm; 
#line 81
(filterMode) = fMode; 
#line 82
((addressMode)[0]) = aMode; 
#line 83
((addressMode)[1]) = aMode; 
#line 84
((addressMode)[2]) = aMode; 
#line 85
(channelDesc) = desc; 
#line 86
} 
#line 87
}; 
#line 329 "c:\\cuda\\include\\device_functions.h"
static __inline int mulhi(int a, int b) 
#line 330
{int volatile ___ = 1;
#line 332
exit(___);}
#if 0
#line 330
{ 
#line 331
return __mulhi(a, b); 
#line 332
} 
#endif
#line 334 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned mulhi(unsigned a, unsigned b) 
#line 335
{int volatile ___ = 1;
#line 337
exit(___);}
#if 0
#line 335
{ 
#line 336
return __umulhi(a, b); 
#line 337
} 
#endif
#line 339 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned mulhi(int a, unsigned b) 
#line 340
{int volatile ___ = 1;
#line 342
exit(___);}
#if 0
#line 340
{ 
#line 341
return __umulhi((unsigned)a, b); 
#line 342
} 
#endif
#line 344 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned mulhi(unsigned a, int b) 
#line 345
{int volatile ___ = 1;
#line 347
exit(___);}
#if 0
#line 345
{ 
#line 346
return __umulhi(a, (unsigned)b); 
#line 347
} 
#endif
#line 349 "c:\\cuda\\include\\device_functions.h"
static __inline __int64 mul64hi(__int64 a, __int64 b) 
#line 350
{int volatile ___ = 1;
#line 352
exit(___);}
#if 0
#line 350
{ 
#line 351
return __mul64hi(a, b); 
#line 352
} 
#endif
#line 354 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, unsigned __int64 b) 
#line 355
{int volatile ___ = 1;
#line 357
exit(___);}
#if 0
#line 355
{ 
#line 356
return __umul64hi(a, b); 
#line 357
} 
#endif
#line 359 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned __int64 mul64hi(__int64 a, unsigned __int64 b) 
#line 360
{int volatile ___ = 1;
#line 362
exit(___);}
#if 0
#line 360
{ 
#line 361
return __umul64hi((unsigned __int64)a, b); 
#line 362
} 
#endif
#line 364 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, __int64 b) 
#line 365
{int volatile ___ = 1;
#line 367
exit(___);}
#if 0
#line 365
{ 
#line 366
return __umul64hi(a, (unsigned __int64)b); 
#line 367
} 
#endif
#line 369 "c:\\cuda\\include\\device_functions.h"
static __inline int float_as_int(float a) 
#line 370
{int volatile ___ = 1;
#line 372
exit(___);}
#if 0
#line 370
{ 
#line 371
return __float_as_int(a); 
#line 372
} 
#endif
#line 374 "c:\\cuda\\include\\device_functions.h"
static __inline float int_as_float(int a) 
#line 375
{int volatile ___ = 1;
#line 377
exit(___);}
#if 0
#line 375
{ 
#line 376
return __int_as_float(a); 
#line 377
} 
#endif
#line 379 "c:\\cuda\\include\\device_functions.h"
static __inline float saturate(float a) 
#line 380
{int volatile ___ = 1;
#line 382
exit(___);}
#if 0
#line 380
{ 
#line 381
return __saturatef(a); 
#line 382
} 
#endif
#line 384 "c:\\cuda\\include\\device_functions.h"
static __inline int mul24(int a, int b) 
#line 385
{int volatile ___ = 1;
#line 387
exit(___);}
#if 0
#line 385
{ 
#line 386
return __mul24(a, b); 
#line 387
} 
#endif
#line 389 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned umul24(unsigned a, unsigned b) 
#line 390
{int volatile ___ = 1;
#line 392
exit(___);}
#if 0
#line 390
{ 
#line 391
return __umul24(a, b); 
#line 392
} 
#endif
#line 394 "c:\\cuda\\include\\device_functions.h"
static __inline void trap() 
#line 395
{int volatile ___ = 1;
#line 397
exit(___);}
#if 0
#line 395
{ 
#line 396
__trap(); 
#line 397
} 
#endif
#line 399 "c:\\cuda\\include\\device_functions.h"
static __inline void brkpt(int c) 
#line 400
{int volatile ___ = 1;
#line 402
exit(___);}
#if 0
#line 400
{ 
#line 401
__brkpt(c); 
#line 402
} 
#endif
#line 404 "c:\\cuda\\include\\device_functions.h"
static __inline void syncthreads() 
#line 405
{int volatile ___ = 1;
#line 407
exit(___);}
#if 0
#line 405
{ 
#line 406
__syncthreads(); 
#line 407
} 
#endif
#line 409 "c:\\cuda\\include\\device_functions.h"
static __inline void prof_trigger(int e) 
#line 410
{int volatile ___ = 1;
#line 427
exit(___);}
#if 0
#line 410
{ 
#line 411
if (e == 0) { __prof_trigger(0); } else { 
#line 412
if (e == 1) { __prof_trigger(1); } else { 
#line 413
if (e == 2) { __prof_trigger(2); } else { 
#line 414
if (e == 3) { __prof_trigger(3); } else { 
#line 415
if (e == 4) { __prof_trigger(4); } else { 
#line 416
if (e == 5) { __prof_trigger(5); } else { 
#line 417
if (e == 6) { __prof_trigger(6); } else { 
#line 418
if (e == 7) { __prof_trigger(7); } else { 
#line 419
if (e == 8) { __prof_trigger(8); } else { 
#line 420
if (e == 9) { __prof_trigger(9); } else { 
#line 421
if (e == 10) { __prof_trigger(10); } else { 
#line 422
if (e == 11) { __prof_trigger(11); } else { 
#line 423
if (e == 12) { __prof_trigger(12); } else { 
#line 424
if (e == 13) { __prof_trigger(13); } else { 
#line 425
if (e == 14) { __prof_trigger(14); } else { 
#line 426
if (e == 15) { __prof_trigger(15); }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  
#line 427
} 
#endif
#line 429 "c:\\cuda\\include\\device_functions.h"
static __inline void threadfence(bool global) 
#line 430
{int volatile ___ = 1;
#line 432
exit(___);}
#if 0
#line 430
{ 
#line 431
global ? __threadfence() : __threadfence_block(); 
#line 432
} 
#endif
#line 434 "c:\\cuda\\include\\device_functions.h"
static __inline int float2int(float a, cudaRoundMode mode) 
#line 435
{int volatile ___ = 1;
#line 440
exit(___);}
#if 0
#line 435
{ 
#line 436
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
#line 440
} 
#endif
#line 442 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned float2uint(float a, cudaRoundMode mode) 
#line 443
{int volatile ___ = 1;
#line 448
exit(___);}
#if 0
#line 443
{ 
#line 444
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
#line 448
} 
#endif
#line 450 "c:\\cuda\\include\\device_functions.h"
static __inline float int2float(int a, cudaRoundMode mode) 
#line 451
{int volatile ___ = 1;
#line 456
exit(___);}
#if 0
#line 451
{ 
#line 452
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
#line 456
} 
#endif
#line 458 "c:\\cuda\\include\\device_functions.h"
static __inline float uint2float(unsigned a, cudaRoundMode mode) 
#line 459
{int volatile ___ = 1;
#line 464
exit(___);}
#if 0
#line 459
{ 
#line 460
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
#line 464
} 
#endif
#line 102 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicAdd(int *address, int val) 
#line 103
{int volatile ___ = 1;
#line 105
exit(___);}
#if 0
#line 103
{ 
#line 104
return __iAtomicAdd(address, val); 
#line 105
} 
#endif
#line 107 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicAdd(unsigned *address, unsigned val) 
#line 108
{int volatile ___ = 1;
#line 110
exit(___);}
#if 0
#line 108
{ 
#line 109
return __uAtomicAdd(address, val); 
#line 110
} 
#endif
#line 112 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicSub(int *address, int val) 
#line 113
{int volatile ___ = 1;
#line 115
exit(___);}
#if 0
#line 113
{ 
#line 114
return __iAtomicAdd(address, (unsigned)(-val)); 
#line 115
} 
#endif
#line 117 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicSub(unsigned *address, unsigned val) 
#line 118
{int volatile ___ = 1;
#line 120
exit(___);}
#if 0
#line 118
{ 
#line 119
return __uAtomicAdd(address, (unsigned)(-((int)val))); 
#line 120
} 
#endif
#line 122 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicExch(int *address, int val) 
#line 123
{int volatile ___ = 1;
#line 125
exit(___);}
#if 0
#line 123
{ 
#line 124
return __iAtomicExch(address, val); 
#line 125
} 
#endif
#line 127 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicExch(unsigned *address, unsigned val) 
#line 128
{int volatile ___ = 1;
#line 130
exit(___);}
#if 0
#line 128
{ 
#line 129
return __uAtomicExch(address, val); 
#line 130
} 
#endif
#line 132 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline float atomicExch(float *address, float val) 
#line 133
{int volatile ___ = 1;
#line 135
exit(___);}
#if 0
#line 133
{ 
#line 134
return __fAtomicExch(address, val); 
#line 135
} 
#endif
#line 137 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicMin(int *address, int val) 
#line 138
{int volatile ___ = 1;
#line 140
exit(___);}
#if 0
#line 138
{ 
#line 139
return __iAtomicMin(address, val); 
#line 140
} 
#endif
#line 142 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicMin(unsigned *address, unsigned val) 
#line 143
{int volatile ___ = 1;
#line 145
exit(___);}
#if 0
#line 143
{ 
#line 144
return __uAtomicMin(address, val); 
#line 145
} 
#endif
#line 147 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicMax(int *address, int val) 
#line 148
{int volatile ___ = 1;
#line 150
exit(___);}
#if 0
#line 148
{ 
#line 149
return __iAtomicMax(address, val); 
#line 150
} 
#endif
#line 152 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicMax(unsigned *address, unsigned val) 
#line 153
{int volatile ___ = 1;
#line 155
exit(___);}
#if 0
#line 153
{ 
#line 154
return __uAtomicMax(address, val); 
#line 155
} 
#endif
#line 157 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicInc(unsigned *address, unsigned val) 
#line 158
{int volatile ___ = 1;
#line 160
exit(___);}
#if 0
#line 158
{ 
#line 159
return __uAtomicInc(address, val); 
#line 160
} 
#endif
#line 162 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicDec(unsigned *address, unsigned val) 
#line 163
{int volatile ___ = 1;
#line 165
exit(___);}
#if 0
#line 163
{ 
#line 164
return __uAtomicDec(address, val); 
#line 165
} 
#endif
#line 167 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicAnd(int *address, int val) 
#line 168
{int volatile ___ = 1;
#line 170
exit(___);}
#if 0
#line 168
{ 
#line 169
return __iAtomicAnd(address, val); 
#line 170
} 
#endif
#line 172 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicAnd(unsigned *address, unsigned val) 
#line 173
{int volatile ___ = 1;
#line 175
exit(___);}
#if 0
#line 173
{ 
#line 174
return __uAtomicAnd(address, val); 
#line 175
} 
#endif
#line 177 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicOr(int *address, int val) 
#line 178
{int volatile ___ = 1;
#line 180
exit(___);}
#if 0
#line 178
{ 
#line 179
return __iAtomicOr(address, val); 
#line 180
} 
#endif
#line 182 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicOr(unsigned *address, unsigned val) 
#line 183
{int volatile ___ = 1;
#line 185
exit(___);}
#if 0
#line 183
{ 
#line 184
return __uAtomicOr(address, val); 
#line 185
} 
#endif
#line 187 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicXor(int *address, int val) 
#line 188
{int volatile ___ = 1;
#line 190
exit(___);}
#if 0
#line 188
{ 
#line 189
return __iAtomicXor(address, val); 
#line 190
} 
#endif
#line 192 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicXor(unsigned *address, unsigned val) 
#line 193
{int volatile ___ = 1;
#line 195
exit(___);}
#if 0
#line 193
{ 
#line 194
return __uAtomicXor(address, val); 
#line 195
} 
#endif
#line 197 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicCAS(int *address, int compare, int val) 
#line 198
{int volatile ___ = 1;
#line 200
exit(___);}
#if 0
#line 198
{ 
#line 199
return __iAtomicCAS(address, compare, val); 
#line 200
} 
#endif
#line 202 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) 
#line 203
{int volatile ___ = 1;
#line 205
exit(___);}
#if 0
#line 203
{ 
#line 204
return __uAtomicCAS(address, compare, val); 
#line 205
} 
#endif
#line 75 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline unsigned __int64 atomicAdd(unsigned __int64 *address, unsigned __int64 val) 
#line 76
{int volatile ___ = 1;
#line 78
exit(___);}
#if 0
#line 76
{ 
#line 77
return __ullAtomicAdd(address, val); 
#line 78
} 
#endif
#line 80 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline unsigned __int64 atomicExch(unsigned __int64 *address, unsigned __int64 val) 
#line 81
{int volatile ___ = 1;
#line 83
exit(___);}
#if 0
#line 81
{ 
#line 82
return __ullAtomicExch(address, val); 
#line 83
} 
#endif
#line 85 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline unsigned __int64 atomicCAS(unsigned __int64 *address, unsigned __int64 compare, unsigned __int64 val) 
#line 86
{int volatile ___ = 1;
#line 88
exit(___);}
#if 0
#line 86
{ 
#line 87
return __ullAtomicCAS(address, compare, val); 
#line 88
} 
#endif
#line 90 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline bool any(bool cond) 
#line 91
{int volatile ___ = 1;
#line 93
exit(___);}
#if 0
#line 91
{ 
#line 92
return (bool)__any((int)cond); 
#line 93
} 
#endif
#line 95 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline bool all(bool cond) 
#line 96
{int volatile ___ = 1;
#line 98
exit(___);}
#if 0
#line 96
{ 
#line 97
return (bool)__all((int)cond); 
#line 98
} 
#endif
#line 170 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double fma(double a, double b, double c, cudaRoundMode mode) 
#line 171
{int volatile ___ = 1;
#line 176
exit(___);}
#if 0
#line 171
{ 
#line 172
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
#line 176
} 
#endif
#line 178 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double dmul(double a, double b, cudaRoundMode mode) 
#line 179
{int volatile ___ = 1;
#line 184
exit(___);}
#if 0
#line 179
{ 
#line 180
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
#line 184
} 
#endif
#line 186 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double dadd(double a, double b, cudaRoundMode mode) 
#line 187
{int volatile ___ = 1;
#line 192
exit(___);}
#if 0
#line 187
{ 
#line 188
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
#line 192
} 
#endif
#line 194 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline int double2int(double a, cudaRoundMode mode) 
#line 195
{int volatile ___ = 1;
#line 200
exit(___);}
#if 0
#line 195
{ 
#line 196
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
#line 200
} 
#endif
#line 202 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline unsigned double2uint(double a, cudaRoundMode mode) 
#line 203
{int volatile ___ = 1;
#line 208
exit(___);}
#if 0
#line 203
{ 
#line 204
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
#line 208
} 
#endif
#line 210 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline __int64 double2ll(double a, cudaRoundMode mode) 
#line 211
{int volatile ___ = 1;
#line 216
exit(___);}
#if 0
#line 211
{ 
#line 212
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
#line 216
} 
#endif
#line 218 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode) 
#line 219
{int volatile ___ = 1;
#line 224
exit(___);}
#if 0
#line 219
{ 
#line 220
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
#line 224
} 
#endif
#line 226 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double ll2double(__int64 a, cudaRoundMode mode) 
#line 227
{int volatile ___ = 1;
#line 232
exit(___);}
#if 0
#line 227
{ 
#line 228
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
#line 232
} 
#endif
#line 234 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode) 
#line 235
{int volatile ___ = 1;
#line 240
exit(___);}
#if 0
#line 235
{ 
#line 236
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
#line 240
} 
#endif
#line 242 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double int2double(int a, cudaRoundMode mode) 
#line 243
{int volatile ___ = 1;
#line 245
exit(___);}
#if 0
#line 243
{ 
#line 244
return (double)a; 
#line 245
} 
#endif
#line 247 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double uint2double(unsigned a, cudaRoundMode mode) 
#line 248
{int volatile ___ = 1;
#line 250
exit(___);}
#if 0
#line 248
{ 
#line 249
return (double)a; 
#line 250
} 
#endif
#line 252 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double float2double(float a, cudaRoundMode mode) 
#line 253
{int volatile ___ = 1;
#line 255
exit(___);}
#if 0
#line 253
{ 
#line 254
return (double)a; 
#line 255
} 
#endif
#line 66 "c:\\cuda\\include\\sm_20_atomic_functions.h"
static __inline float atomicAdd(float *address, float val) 
#line 67
{int volatile ___ = 1;
#line 69
exit(___);}
#if 0
#line 67
{ 
#line 68
return __fAtomicAdd(address, val); 
#line 69
} 
#endif
#line 124 "c:\\cuda\\include\\sm_20_intrinsics.h"
static __inline unsigned ballot(bool pred) 
#line 125
{int volatile ___ = 1;
#line 127
exit(___);}
#if 0
#line 125
{ 
#line 126
return __ballot((int)pred); 
#line 127
} 
#endif
#line 129 "c:\\cuda\\include\\sm_20_intrinsics.h"
static __inline int syncthreads_count(bool pred) 
#line 130
{int volatile ___ = 1;
#line 132
exit(___);}
#if 0
#line 130
{ 
#line 131
return __syncthreads_count((int)pred); 
#line 132
} 
#endif
#line 134 "c:\\cuda\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_and(bool pred) 
#line 135
{int volatile ___ = 1;
#line 137
exit(___);}
#if 0
#line 135
{ 
#line 136
return (bool)__syncthreads_and((int)pred); 
#line 137
} 
#endif
#line 139 "c:\\cuda\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_or(bool pred) 
#line 140
{int volatile ___ = 1;
#line 142
exit(___);}
#if 0
#line 140
{ 
#line 141
return (bool)__syncthreads_or((int)pred); 
#line 142
} 
#endif
#line 97 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 98
surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode) 
#line 99
{int volatile ___ = 1;
#line 106
exit(___);}
#if 0
#line 99
{ 
#line 100
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf1Dreadc1(surf, x, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf1Dreads1(surf, x, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf1Dreadu1(surf, x, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap))) : ((void)0))))); 
#line 106
} 
#endif
#line 108 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline T 
#line 109
surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 110
{int volatile ___ = 1;
#line 116
exit(___);}
#if 0
#line 110
{ 
#line 111
T tmp; 
#line 113
surf1Dread(&tmp, surf, x, (int)sizeof(T), mode); 
#line 115
return tmp; 
#line 116
} 
#endif
#line 118 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 119
surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 120
{int volatile ___ = 1;
#line 122
exit(___);}
#if 0
#line 120
{ 
#line 121
(*res) = surf1Dread< T> (surf, x, mode); 
#line 122
} 
#endif
#line 125 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 126
{int volatile ___ = 1;
#line 128
exit(___);}
#if 0
#line 126
{ 
#line 127
return (char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x); 
#line 128
} 
#endif
#line 131 "c:\\cuda\\include\\surface_functions.h"
template<> __inline signed char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 132
{int volatile ___ = 1;
#line 134
exit(___);}
#if 0
#line 132
{ 
#line 133
return (signed char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x); 
#line 134
} 
#endif
#line 137 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 138
{int volatile ___ = 1;
#line 140
exit(___);}
#if 0
#line 138
{ 
#line 139
return __surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x; 
#line 140
} 
#endif
#line 143 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 144
{int volatile ___ = 1;
#line 146
exit(___);}
#if 0
#line 144
{ 
#line 145
return make_char1((signed char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x)); 
#line 146
} 
#endif
#line 149 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 150
{int volatile ___ = 1;
#line 152
exit(___);}
#if 0
#line 150
{ 
#line 151
return __surf1Dreadc1(surf, x, cudaBoundaryModeTrap); 
#line 152
} 
#endif
#line 155 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 156
{int volatile ___ = 1;
#line 160
exit(___);}
#if 0
#line 156
{ 
#line 157
uchar2 tmp = __surf1Dreadc2(surf, x, cudaBoundaryModeTrap); 
#line 159
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
#line 160
} 
#endif
#line 163 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 164
{int volatile ___ = 1;
#line 166
exit(___);}
#if 0
#line 164
{ 
#line 165
return __surf1Dreadc2(surf, x, cudaBoundaryModeTrap); 
#line 166
} 
#endif
#line 169 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 170
{int volatile ___ = 1;
#line 174
exit(___);}
#if 0
#line 170
{ 
#line 171
uchar4 tmp = __surf1Dreadc4(surf, x, cudaBoundaryModeTrap); 
#line 173
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
#line 174
} 
#endif
#line 177 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 178
{int volatile ___ = 1;
#line 180
exit(___);}
#if 0
#line 178
{ 
#line 179
return __surf1Dreadc4(surf, x, cudaBoundaryModeTrap); 
#line 180
} 
#endif
#line 183 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 184
{int volatile ___ = 1;
#line 186
exit(___);}
#if 0
#line 184
{ 
#line 185
return (short)(__surf1Dreads1(surf, x, cudaBoundaryModeTrap).x); 
#line 186
} 
#endif
#line 189 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 190
{int volatile ___ = 1;
#line 192
exit(___);}
#if 0
#line 190
{ 
#line 191
return __surf1Dreads1(surf, x, cudaBoundaryModeTrap).x; 
#line 192
} 
#endif
#line 195 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 196
{int volatile ___ = 1;
#line 198
exit(___);}
#if 0
#line 196
{ 
#line 197
return make_short1((signed short)(__surf1Dreads1(surf, x, cudaBoundaryModeTrap).x)); 
#line 198
} 
#endif
#line 201 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 202
{int volatile ___ = 1;
#line 204
exit(___);}
#if 0
#line 202
{ 
#line 203
return __surf1Dreads1(surf, x, cudaBoundaryModeTrap); 
#line 204
} 
#endif
#line 207 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 208
{int volatile ___ = 1;
#line 212
exit(___);}
#if 0
#line 208
{ 
#line 209
ushort2 tmp = __surf1Dreads2(surf, x, cudaBoundaryModeTrap); 
#line 211
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
#line 212
} 
#endif
#line 215 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 216
{int volatile ___ = 1;
#line 218
exit(___);}
#if 0
#line 216
{ 
#line 217
return __surf1Dreads2(surf, x, cudaBoundaryModeTrap); 
#line 218
} 
#endif
#line 221 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 222
{int volatile ___ = 1;
#line 226
exit(___);}
#if 0
#line 222
{ 
#line 223
ushort4 tmp = __surf1Dreads4(surf, x, cudaBoundaryModeTrap); 
#line 225
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
#line 226
} 
#endif
#line 229 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 230
{int volatile ___ = 1;
#line 232
exit(___);}
#if 0
#line 230
{ 
#line 231
return __surf1Dreads4(surf, x, cudaBoundaryModeTrap); 
#line 232
} 
#endif
#line 235 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 236
{int volatile ___ = 1;
#line 238
exit(___);}
#if 0
#line 236
{ 
#line 237
return (int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x); 
#line 238
} 
#endif
#line 241 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 242
{int volatile ___ = 1;
#line 244
exit(___);}
#if 0
#line 242
{ 
#line 243
return __surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x; 
#line 244
} 
#endif
#line 247 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 248
{int volatile ___ = 1;
#line 250
exit(___);}
#if 0
#line 248
{ 
#line 249
return make_int1((signed int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
#line 250
} 
#endif
#line 253 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 254
{int volatile ___ = 1;
#line 256
exit(___);}
#if 0
#line 254
{ 
#line 255
return __surf1Dreadu1(surf, x, cudaBoundaryModeTrap); 
#line 256
} 
#endif
#line 259 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 260
{int volatile ___ = 1;
#line 264
exit(___);}
#if 0
#line 260
{ 
#line 261
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
#line 263
return make_int2((int)(tmp.x), (int)(tmp.y)); 
#line 264
} 
#endif
#line 267 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 268
{int volatile ___ = 1;
#line 270
exit(___);}
#if 0
#line 268
{ 
#line 269
return __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
#line 270
} 
#endif
#line 273 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 274
{int volatile ___ = 1;
#line 278
exit(___);}
#if 0
#line 274
{ 
#line 275
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
#line 277
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
#line 278
} 
#endif
#line 281 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 282
{int volatile ___ = 1;
#line 284
exit(___);}
#if 0
#line 282
{ 
#line 283
return __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
#line 284
} 
#endif
#line 287 "c:\\cuda\\include\\surface_functions.h"
template<> __inline __int64 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 288
{int volatile ___ = 1;
#line 290
exit(___);}
#if 0
#line 288
{ 
#line 289
return (__int64)(__surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x); 
#line 290
} 
#endif
#line 293 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned __int64 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 294
{int volatile ___ = 1;
#line 296
exit(___);}
#if 0
#line 294
{ 
#line 295
return __surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x; 
#line 296
} 
#endif
#line 299 "c:\\cuda\\include\\surface_functions.h"
template<> __inline longlong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 300
{int volatile ___ = 1;
#line 302
exit(___);}
#if 0
#line 300
{ 
#line 301
return make_longlong1((__int64)(__surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x)); 
#line 302
} 
#endif
#line 305 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulonglong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 306
{int volatile ___ = 1;
#line 308
exit(___);}
#if 0
#line 306
{ 
#line 307
return __surf1Dreadl1(surf, x, cudaBoundaryModeTrap); 
#line 308
} 
#endif
#line 311 "c:\\cuda\\include\\surface_functions.h"
template<> __inline longlong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 312
{int volatile ___ = 1;
#line 316
exit(___);}
#if 0
#line 312
{ 
#line 313
ulonglong2 tmp = __surf1Dreadl2(surf, x, cudaBoundaryModeTrap); 
#line 315
return make_longlong2((__int64)(tmp.x), (__int64)(tmp.y)); 
#line 316
} 
#endif
#line 319 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulonglong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 320
{int volatile ___ = 1;
#line 322
exit(___);}
#if 0
#line 320
{ 
#line 321
return __surf1Dreadl2(surf, x, cudaBoundaryModeTrap); 
#line 322
} 
#endif
#line 327 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 328
{int volatile ___ = 1;
#line 330
exit(___);}
#if 0
#line 328
{ 
#line 329
return (long)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x); 
#line 330
} 
#endif
#line 333 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 334
{int volatile ___ = 1;
#line 336
exit(___);}
#if 0
#line 334
{ 
#line 335
return (unsigned long)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x); 
#line 336
} 
#endif
#line 339 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 340
{int volatile ___ = 1;
#line 342
exit(___);}
#if 0
#line 340
{ 
#line 341
return make_long1((long)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
#line 342
} 
#endif
#line 345 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 346
{int volatile ___ = 1;
#line 348
exit(___);}
#if 0
#line 346
{ 
#line 347
return make_ulong1((unsigned long)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
#line 348
} 
#endif
#line 351 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 352
{int volatile ___ = 1;
#line 356
exit(___);}
#if 0
#line 352
{ 
#line 353
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
#line 355
return make_long2((long)(tmp.x), (long)(tmp.y)); 
#line 356
} 
#endif
#line 359 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 360
{int volatile ___ = 1;
#line 364
exit(___);}
#if 0
#line 360
{ 
#line 361
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
#line 363
return make_ulong2((unsigned long)(tmp.x), (unsigned long)(tmp.y)); 
#line 364
} 
#endif
#line 367 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 368
{int volatile ___ = 1;
#line 372
exit(___);}
#if 0
#line 368
{ 
#line 369
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
#line 371
return make_long4((long)(tmp.x), (long)(tmp.y), (long)(tmp.z), (long)(tmp.w)); 
#line 372
} 
#endif
#line 375 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 376
{int volatile ___ = 1;
#line 380
exit(___);}
#if 0
#line 376
{ 
#line 377
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
#line 379
return make_ulong4((unsigned long)(tmp.x), (unsigned long)(tmp.y), (unsigned long)(tmp.z), (unsigned long)(tmp.w)); 
#line 380
} 
#endif
#line 385 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 386
{int volatile ___ = 1;
#line 388
exit(___);}
#if 0
#line 386
{ 
#line 387
return __int_as_float((int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
#line 388
} 
#endif
#line 391 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 392
{int volatile ___ = 1;
#line 394
exit(___);}
#if 0
#line 392
{ 
#line 393
return make_float1(__int_as_float((int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x))); 
#line 394
} 
#endif
#line 397 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 398
{int volatile ___ = 1;
#line 402
exit(___);}
#if 0
#line 398
{ 
#line 399
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
#line 401
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
#line 402
} 
#endif
#line 405 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 406
{int volatile ___ = 1;
#line 410
exit(___);}
#if 0
#line 406
{ 
#line 407
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
#line 409
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
#line 410
} 
#endif
#line 457 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 458
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode) 
#line 459
{int volatile ___ = 1;
#line 466
exit(___);}
#if 0
#line 459
{ 
#line 460
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap))) : ((void)0))))); 
#line 466
} 
#endif
#line 468 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline T 
#line 469
surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 470
{int volatile ___ = 1;
#line 476
exit(___);}
#if 0
#line 470
{ 
#line 471
T tmp; 
#line 473
surf2Dread(&tmp, surf, x, y, (int)sizeof(T), mode); 
#line 475
return tmp; 
#line 476
} 
#endif
#line 478 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 479
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 480
{int volatile ___ = 1;
#line 482
exit(___);}
#if 0
#line 480
{ 
#line 481
(*res) = surf2Dread< T> (surf, x, y, mode); 
#line 482
} 
#endif
#line 485 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 486
{int volatile ___ = 1;
#line 488
exit(___);}
#if 0
#line 486
{ 
#line 487
return (char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x); 
#line 488
} 
#endif
#line 491 "c:\\cuda\\include\\surface_functions.h"
template<> __inline signed char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 492
{int volatile ___ = 1;
#line 494
exit(___);}
#if 0
#line 492
{ 
#line 493
return (signed char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x); 
#line 494
} 
#endif
#line 497 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 498
{int volatile ___ = 1;
#line 500
exit(___);}
#if 0
#line 498
{ 
#line 499
return __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x; 
#line 500
} 
#endif
#line 503 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 504
{int volatile ___ = 1;
#line 506
exit(___);}
#if 0
#line 504
{ 
#line 505
return make_char1((signed char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x)); 
#line 506
} 
#endif
#line 509 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 510
{int volatile ___ = 1;
#line 512
exit(___);}
#if 0
#line 510
{ 
#line 511
return __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap); 
#line 512
} 
#endif
#line 515 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 516
{int volatile ___ = 1;
#line 520
exit(___);}
#if 0
#line 516
{ 
#line 517
uchar2 tmp = __surf2Dreadc2(surf, x, y, cudaBoundaryModeTrap); 
#line 519
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
#line 520
} 
#endif
#line 523 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 524
{int volatile ___ = 1;
#line 526
exit(___);}
#if 0
#line 524
{ 
#line 525
return __surf2Dreadc2(surf, x, y, cudaBoundaryModeTrap); 
#line 526
} 
#endif
#line 529 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 530
{int volatile ___ = 1;
#line 534
exit(___);}
#if 0
#line 530
{ 
#line 531
uchar4 tmp = __surf2Dreadc4(surf, x, y, cudaBoundaryModeTrap); 
#line 533
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
#line 534
} 
#endif
#line 537 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 538
{int volatile ___ = 1;
#line 540
exit(___);}
#if 0
#line 538
{ 
#line 539
return __surf2Dreadc4(surf, x, y, cudaBoundaryModeTrap); 
#line 540
} 
#endif
#line 543 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 544
{int volatile ___ = 1;
#line 546
exit(___);}
#if 0
#line 544
{ 
#line 545
return (short)(__surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x); 
#line 546
} 
#endif
#line 549 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 550
{int volatile ___ = 1;
#line 552
exit(___);}
#if 0
#line 550
{ 
#line 551
return __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x; 
#line 552
} 
#endif
#line 555 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 556
{int volatile ___ = 1;
#line 558
exit(___);}
#if 0
#line 556
{ 
#line 557
return make_short1((signed short)(__surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x)); 
#line 558
} 
#endif
#line 561 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 562
{int volatile ___ = 1;
#line 564
exit(___);}
#if 0
#line 562
{ 
#line 563
return __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap); 
#line 564
} 
#endif
#line 567 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 568
{int volatile ___ = 1;
#line 572
exit(___);}
#if 0
#line 568
{ 
#line 569
ushort2 tmp = __surf2Dreads2(surf, x, y, cudaBoundaryModeTrap); 
#line 571
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
#line 572
} 
#endif
#line 575 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 576
{int volatile ___ = 1;
#line 578
exit(___);}
#if 0
#line 576
{ 
#line 577
return __surf2Dreads2(surf, x, y, cudaBoundaryModeTrap); 
#line 578
} 
#endif
#line 581 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 582
{int volatile ___ = 1;
#line 586
exit(___);}
#if 0
#line 582
{ 
#line 583
ushort4 tmp = __surf2Dreads4(surf, x, y, cudaBoundaryModeTrap); 
#line 585
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
#line 586
} 
#endif
#line 589 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 590
{int volatile ___ = 1;
#line 592
exit(___);}
#if 0
#line 590
{ 
#line 591
return __surf2Dreads4(surf, x, y, cudaBoundaryModeTrap); 
#line 592
} 
#endif
#line 595 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 596
{int volatile ___ = 1;
#line 598
exit(___);}
#if 0
#line 596
{ 
#line 597
return (int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x); 
#line 598
} 
#endif
#line 601 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 602
{int volatile ___ = 1;
#line 604
exit(___);}
#if 0
#line 602
{ 
#line 603
return __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x; 
#line 604
} 
#endif
#line 607 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 608
{int volatile ___ = 1;
#line 610
exit(___);}
#if 0
#line 608
{ 
#line 609
return make_int1((signed int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
#line 610
} 
#endif
#line 613 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 614
{int volatile ___ = 1;
#line 616
exit(___);}
#if 0
#line 614
{ 
#line 615
return __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap); 
#line 616
} 
#endif
#line 619 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 620
{int volatile ___ = 1;
#line 624
exit(___);}
#if 0
#line 620
{ 
#line 621
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
#line 623
return make_int2((int)(tmp.x), (int)(tmp.y)); 
#line 624
} 
#endif
#line 627 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 628
{int volatile ___ = 1;
#line 630
exit(___);}
#if 0
#line 628
{ 
#line 629
return __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
#line 630
} 
#endif
#line 633 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 634
{int volatile ___ = 1;
#line 638
exit(___);}
#if 0
#line 634
{ 
#line 635
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
#line 637
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
#line 638
} 
#endif
#line 641 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 642
{int volatile ___ = 1;
#line 644
exit(___);}
#if 0
#line 642
{ 
#line 643
return __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
#line 644
} 
#endif
#line 647 "c:\\cuda\\include\\surface_functions.h"
template<> __inline __int64 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 648
{int volatile ___ = 1;
#line 650
exit(___);}
#if 0
#line 648
{ 
#line 649
return (__int64)(__surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x); 
#line 650
} 
#endif
#line 653 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned __int64 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 654
{int volatile ___ = 1;
#line 656
exit(___);}
#if 0
#line 654
{ 
#line 655
return __surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x; 
#line 656
} 
#endif
#line 659 "c:\\cuda\\include\\surface_functions.h"
template<> __inline longlong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 660
{int volatile ___ = 1;
#line 662
exit(___);}
#if 0
#line 660
{ 
#line 661
return make_longlong1((__int64)(__surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x)); 
#line 662
} 
#endif
#line 665 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulonglong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 666
{int volatile ___ = 1;
#line 668
exit(___);}
#if 0
#line 666
{ 
#line 667
return __surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap); 
#line 668
} 
#endif
#line 671 "c:\\cuda\\include\\surface_functions.h"
template<> __inline longlong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 672
{int volatile ___ = 1;
#line 676
exit(___);}
#if 0
#line 672
{ 
#line 673
ulonglong2 tmp = __surf2Dreadl2(surf, x, y, cudaBoundaryModeTrap); 
#line 675
return make_longlong2((__int64)(tmp.x), (__int64)(tmp.y)); 
#line 676
} 
#endif
#line 679 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulonglong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 680
{int volatile ___ = 1;
#line 682
exit(___);}
#if 0
#line 680
{ 
#line 681
return __surf2Dreadl2(surf, x, y, cudaBoundaryModeTrap); 
#line 682
} 
#endif
#line 687 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 688
{int volatile ___ = 1;
#line 690
exit(___);}
#if 0
#line 688
{ 
#line 689
return (long)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x); 
#line 690
} 
#endif
#line 693 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 694
{int volatile ___ = 1;
#line 696
exit(___);}
#if 0
#line 694
{ 
#line 695
return (unsigned long)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x); 
#line 696
} 
#endif
#line 699 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 700
{int volatile ___ = 1;
#line 702
exit(___);}
#if 0
#line 700
{ 
#line 701
return make_long1((long)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
#line 702
} 
#endif
#line 705 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 706
{int volatile ___ = 1;
#line 708
exit(___);}
#if 0
#line 706
{ 
#line 707
return make_ulong1((unsigned long)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
#line 708
} 
#endif
#line 711 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 712
{int volatile ___ = 1;
#line 716
exit(___);}
#if 0
#line 712
{ 
#line 713
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
#line 715
return make_long2((long)(tmp.x), (long)(tmp.y)); 
#line 716
} 
#endif
#line 719 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 720
{int volatile ___ = 1;
#line 724
exit(___);}
#if 0
#line 720
{ 
#line 721
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
#line 723
return make_ulong2((unsigned long)(tmp.x), (unsigned long)(tmp.y)); 
#line 724
} 
#endif
#line 727 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 728
{int volatile ___ = 1;
#line 732
exit(___);}
#if 0
#line 728
{ 
#line 729
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
#line 731
return make_long4((long)(tmp.x), (long)(tmp.y), (long)(tmp.z), (long)(tmp.w)); 
#line 732
} 
#endif
#line 735 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 736
{int volatile ___ = 1;
#line 740
exit(___);}
#if 0
#line 736
{ 
#line 737
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
#line 739
return make_ulong4((unsigned long)(tmp.x), (unsigned long)(tmp.y), (unsigned long)(tmp.z), (unsigned long)(tmp.w)); 
#line 740
} 
#endif
#line 745 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 746
{int volatile ___ = 1;
#line 748
exit(___);}
#if 0
#line 746
{ 
#line 747
return __int_as_float((int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
#line 748
} 
#endif
#line 751 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 752
{int volatile ___ = 1;
#line 754
exit(___);}
#if 0
#line 752
{ 
#line 753
return make_float1(__int_as_float((int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x))); 
#line 754
} 
#endif
#line 757 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 758
{int volatile ___ = 1;
#line 762
exit(___);}
#if 0
#line 758
{ 
#line 759
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
#line 761
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
#line 762
} 
#endif
#line 765 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 766
{int volatile ___ = 1;
#line 770
exit(___);}
#if 0
#line 766
{ 
#line 767
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
#line 769
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
#line 770
} 
#endif
#line 817 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 818
surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode) 
#line 819
{int volatile ___ = 1;
#line 837
exit(___);}
#if 0
#line 819
{ 
#line 820
union { 
#line 821
T val; 
#line 822
uchar1 c1; 
#line 823
ushort1 s1; 
#line 824
uint1 u1; 
#line 825
uint2 u2; 
#line 826
uint4 u4; 
#line 827
} tmp; 
#line 829
(tmp.val) = val; 
#line 831
(s == 1) ? ((void)__surf1Dwritec1(tmp.c1, surf, x, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf1Dwrites1(tmp.s1, surf, x, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf1Dwriteu1(tmp.u1, surf, x, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf1Dwriteu2(tmp.u2, surf, x, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf1Dwriteu4(tmp.u4, surf, x, cudaBoundaryModeTrap)) : ((void)0))))); 
#line 837
} 
#endif
#line 839 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 840
surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 841
{int volatile ___ = 1;
#line 843
exit(___);}
#if 0
#line 841
{ ; 
#line 842
surf1Dwrite(val, surf, x, (int)sizeof(T), mode); 
#line 843
} 
#endif
#line 846 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 847
{int volatile ___ = 1;
#line 849
exit(___);}
#if 0
#line 847
{ 
#line 848
__surf1Dwritec1(make_uchar1((unsigned char)val), surf, x, cudaBoundaryModeTrap); 
#line 849
} 
#endif
#line 851 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(signed char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 852
{int volatile ___ = 1;
#line 854
exit(___);}
#if 0
#line 852
{ 
#line 853
__surf1Dwritec1(make_uchar1((unsigned char)val), surf, x, cudaBoundaryModeTrap); 
#line 854
} 
#endif
#line 856 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 857
{int volatile ___ = 1;
#line 859
exit(___);}
#if 0
#line 857
{ 
#line 858
__surf1Dwritec1(make_uchar1(val), surf, x, cudaBoundaryModeTrap); 
#line 859
} 
#endif
#line 861 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(char1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 862
{int volatile ___ = 1;
#line 864
exit(___);}
#if 0
#line 862
{ 
#line 863
__surf1Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, cudaBoundaryModeTrap); 
#line 864
} 
#endif
#line 866 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uchar1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 867
{int volatile ___ = 1;
#line 869
exit(___);}
#if 0
#line 867
{ 
#line 868
__surf1Dwritec1(val, surf, x, cudaBoundaryModeTrap); 
#line 869
} 
#endif
#line 871 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(char2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 872
{int volatile ___ = 1;
#line 874
exit(___);}
#if 0
#line 872
{ 
#line 873
__surf1Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, cudaBoundaryModeTrap); 
#line 874
} 
#endif
#line 876 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uchar2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 877
{int volatile ___ = 1;
#line 879
exit(___);}
#if 0
#line 877
{ 
#line 878
__surf1Dwritec2(val, surf, x, cudaBoundaryModeTrap); 
#line 879
} 
#endif
#line 881 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(char4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 882
{int volatile ___ = 1;
#line 884
exit(___);}
#if 0
#line 882
{ 
#line 883
__surf1Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, cudaBoundaryModeTrap); 
#line 884
} 
#endif
#line 886 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uchar4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 887
{int volatile ___ = 1;
#line 889
exit(___);}
#if 0
#line 887
{ 
#line 888
__surf1Dwritec4(val, surf, x, cudaBoundaryModeTrap); 
#line 889
} 
#endif
#line 891 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 892
{int volatile ___ = 1;
#line 894
exit(___);}
#if 0
#line 892
{ 
#line 893
__surf1Dwrites1(make_ushort1((unsigned short)val), surf, x, cudaBoundaryModeTrap); 
#line 894
} 
#endif
#line 896 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 897
{int volatile ___ = 1;
#line 899
exit(___);}
#if 0
#line 897
{ 
#line 898
__surf1Dwrites1(make_ushort1(val), surf, x, cudaBoundaryModeTrap); 
#line 899
} 
#endif
#line 901 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(short1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 902
{int volatile ___ = 1;
#line 904
exit(___);}
#if 0
#line 902
{ 
#line 903
__surf1Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, cudaBoundaryModeTrap); 
#line 904
} 
#endif
#line 906 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ushort1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 907
{int volatile ___ = 1;
#line 909
exit(___);}
#if 0
#line 907
{ 
#line 908
__surf1Dwrites1(val, surf, x, cudaBoundaryModeTrap); 
#line 909
} 
#endif
#line 911 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(short2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 912
{int volatile ___ = 1;
#line 914
exit(___);}
#if 0
#line 912
{ 
#line 913
__surf1Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, cudaBoundaryModeTrap); 
#line 914
} 
#endif
#line 916 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ushort2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 917
{int volatile ___ = 1;
#line 919
exit(___);}
#if 0
#line 917
{ 
#line 918
__surf1Dwrites2(val, surf, x, cudaBoundaryModeTrap); 
#line 919
} 
#endif
#line 921 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(short4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 922
{int volatile ___ = 1;
#line 924
exit(___);}
#if 0
#line 922
{ 
#line 923
__surf1Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, cudaBoundaryModeTrap); 
#line 924
} 
#endif
#line 926 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ushort4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 927
{int volatile ___ = 1;
#line 929
exit(___);}
#if 0
#line 927
{ 
#line 928
__surf1Dwrites4(val, surf, x, cudaBoundaryModeTrap); 
#line 929
} 
#endif
#line 931 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(int val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 932
{int volatile ___ = 1;
#line 934
exit(___);}
#if 0
#line 932
{ 
#line 933
__surf1Dwriteu1(make_uint1((unsigned)val), surf, x, cudaBoundaryModeTrap); 
#line 934
} 
#endif
#line 936 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 937
{int volatile ___ = 1;
#line 939
exit(___);}
#if 0
#line 937
{ 
#line 938
__surf1Dwriteu1(make_uint1(val), surf, x, cudaBoundaryModeTrap); 
#line 939
} 
#endif
#line 941 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(int1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 942
{int volatile ___ = 1;
#line 944
exit(___);}
#if 0
#line 942
{ 
#line 943
__surf1Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, cudaBoundaryModeTrap); 
#line 944
} 
#endif
#line 946 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uint1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 947
{int volatile ___ = 1;
#line 949
exit(___);}
#if 0
#line 947
{ 
#line 948
__surf1Dwriteu1(val, surf, x, cudaBoundaryModeTrap); 
#line 949
} 
#endif
#line 951 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(int2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 952
{int volatile ___ = 1;
#line 954
exit(___);}
#if 0
#line 952
{ 
#line 953
__surf1Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, cudaBoundaryModeTrap); 
#line 954
} 
#endif
#line 956 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uint2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 957
{int volatile ___ = 1;
#line 959
exit(___);}
#if 0
#line 957
{ 
#line 958
__surf1Dwriteu2(val, surf, x, cudaBoundaryModeTrap); 
#line 959
} 
#endif
#line 961 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(int4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 962
{int volatile ___ = 1;
#line 964
exit(___);}
#if 0
#line 962
{ 
#line 963
__surf1Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, cudaBoundaryModeTrap); 
#line 964
} 
#endif
#line 966 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uint4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 967
{int volatile ___ = 1;
#line 969
exit(___);}
#if 0
#line 967
{ 
#line 968
__surf1Dwriteu4(val, surf, x, cudaBoundaryModeTrap); 
#line 969
} 
#endif
#line 971 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(__int64 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 972
{int volatile ___ = 1;
#line 974
exit(___);}
#if 0
#line 972
{ 
#line 973
__surf1Dwritel1(make_ulonglong1((unsigned __int64)val), surf, x, cudaBoundaryModeTrap); 
#line 974
} 
#endif
#line 976 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned __int64 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 977
{int volatile ___ = 1;
#line 979
exit(___);}
#if 0
#line 977
{ 
#line 978
__surf1Dwritel1(make_ulonglong1(val), surf, x, cudaBoundaryModeTrap); 
#line 979
} 
#endif
#line 981 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(longlong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 982
{int volatile ___ = 1;
#line 984
exit(___);}
#if 0
#line 982
{ 
#line 983
__surf1Dwritel1(make_ulonglong1((unsigned __int64)(val.x)), surf, x, cudaBoundaryModeTrap); 
#line 984
} 
#endif
#line 986 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulonglong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 987
{int volatile ___ = 1;
#line 989
exit(___);}
#if 0
#line 987
{ 
#line 988
__surf1Dwritel1(val, surf, x, cudaBoundaryModeTrap); 
#line 989
} 
#endif
#line 991 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(longlong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 992
{int volatile ___ = 1;
#line 994
exit(___);}
#if 0
#line 992
{ 
#line 993
__surf1Dwritel2(make_ulonglong2((unsigned __int64)(val.x), (unsigned __int64)(val.y)), surf, x, cudaBoundaryModeTrap); 
#line 994
} 
#endif
#line 996 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulonglong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 997
{int volatile ___ = 1;
#line 999
exit(___);}
#if 0
#line 997
{ 
#line 998
__surf1Dwritel2(val, surf, x, cudaBoundaryModeTrap); 
#line 999
} 
#endif
#line 1003 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1004
{int volatile ___ = 1;
#line 1006
exit(___);}
#if 0
#line 1004
{ 
#line 1005
__surf1Dwriteu1(make_uint1((unsigned)val), surf, x, cudaBoundaryModeTrap); 
#line 1006
} 
#endif
#line 1008 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1009
{int volatile ___ = 1;
#line 1011
exit(___);}
#if 0
#line 1009
{ 
#line 1010
__surf1Dwriteu1(make_uint1((unsigned)val), surf, x, cudaBoundaryModeTrap); 
#line 1011
} 
#endif
#line 1013 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(long1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1014
{int volatile ___ = 1;
#line 1016
exit(___);}
#if 0
#line 1014
{ 
#line 1015
__surf1Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, cudaBoundaryModeTrap); 
#line 1016
} 
#endif
#line 1018 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1019
{int volatile ___ = 1;
#line 1021
exit(___);}
#if 0
#line 1019
{ 
#line 1020
__surf1Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, cudaBoundaryModeTrap); 
#line 1021
} 
#endif
#line 1023 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(long2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1024
{int volatile ___ = 1;
#line 1026
exit(___);}
#if 0
#line 1024
{ 
#line 1025
__surf1Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, cudaBoundaryModeTrap); 
#line 1026
} 
#endif
#line 1028 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1029
{int volatile ___ = 1;
#line 1031
exit(___);}
#if 0
#line 1029
{ 
#line 1030
__surf1Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, cudaBoundaryModeTrap); 
#line 1031
} 
#endif
#line 1033 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(long4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1034
{int volatile ___ = 1;
#line 1036
exit(___);}
#if 0
#line 1034
{ 
#line 1035
__surf1Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, cudaBoundaryModeTrap); 
#line 1036
} 
#endif
#line 1038 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulong4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1039
{int volatile ___ = 1;
#line 1041
exit(___);}
#if 0
#line 1039
{ 
#line 1040
__surf1Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, cudaBoundaryModeTrap); 
#line 1041
} 
#endif
#line 1045 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(float val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1046
{int volatile ___ = 1;
#line 1048
exit(___);}
#if 0
#line 1046
{ 
#line 1047
__surf1Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, cudaBoundaryModeTrap); 
#line 1048
} 
#endif
#line 1050 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(float1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1051
{int volatile ___ = 1;
#line 1053
exit(___);}
#if 0
#line 1051
{ 
#line 1052
__surf1Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, cudaBoundaryModeTrap); 
#line 1053
} 
#endif
#line 1055 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(float2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1056
{int volatile ___ = 1;
#line 1058
exit(___);}
#if 0
#line 1056
{ 
#line 1057
__surf1Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, cudaBoundaryModeTrap); 
#line 1058
} 
#endif
#line 1060 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(float4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1061
{int volatile ___ = 1;
#line 1063
exit(___);}
#if 0
#line 1061
{ 
#line 1062
__surf1Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, cudaBoundaryModeTrap); 
#line 1063
} 
#endif
#line 1110 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 1111
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode) 
#line 1112
{int volatile ___ = 1;
#line 1130
exit(___);}
#if 0
#line 1112
{ 
#line 1113
union { 
#line 1114
T val; 
#line 1115
uchar1 c1; 
#line 1116
ushort1 s1; 
#line 1117
uint1 u1; 
#line 1118
uint2 u2; 
#line 1119
uint4 u4; 
#line 1120
} tmp; 
#line 1122
(tmp.val) = val; 
#line 1124
(s == 1) ? ((void)__surf2Dwritec1(tmp.c1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf2Dwrites1(tmp.s1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf2Dwriteu1(tmp.u1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf2Dwriteu2(tmp.u2, surf, x, y, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf2Dwriteu4(tmp.u4, surf, x, y, cudaBoundaryModeTrap)) : ((void)0))))); 
#line 1130
} 
#endif
#line 1132 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 1133
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1134
{int volatile ___ = 1;
#line 1136
exit(___);}
#if 0
#line 1134
{ ; 
#line 1135
surf2Dwrite(val, surf, x, y, (int)sizeof(T), mode); 
#line 1136
} 
#endif
#line 1139 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1140
{int volatile ___ = 1;
#line 1142
exit(___);}
#if 0
#line 1140
{ 
#line 1141
__surf2Dwritec1(make_uchar1((unsigned char)val), surf, x, y, cudaBoundaryModeTrap); 
#line 1142
} 
#endif
#line 1144 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(signed char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1145
{int volatile ___ = 1;
#line 1147
exit(___);}
#if 0
#line 1145
{ 
#line 1146
__surf2Dwritec1(make_uchar1((unsigned char)val), surf, x, y, cudaBoundaryModeTrap); 
#line 1147
} 
#endif
#line 1149 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1150
{int volatile ___ = 1;
#line 1152
exit(___);}
#if 0
#line 1150
{ 
#line 1151
__surf2Dwritec1(make_uchar1(val), surf, x, y, cudaBoundaryModeTrap); 
#line 1152
} 
#endif
#line 1154 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(char1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1155
{int volatile ___ = 1;
#line 1157
exit(___);}
#if 0
#line 1155
{ 
#line 1156
__surf2Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
#line 1157
} 
#endif
#line 1159 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uchar1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1160
{int volatile ___ = 1;
#line 1162
exit(___);}
#if 0
#line 1160
{ 
#line 1161
__surf2Dwritec1(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1162
} 
#endif
#line 1164 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(char2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1165
{int volatile ___ = 1;
#line 1167
exit(___);}
#if 0
#line 1165
{ 
#line 1166
__surf2Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
#line 1167
} 
#endif
#line 1169 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uchar2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1170
{int volatile ___ = 1;
#line 1172
exit(___);}
#if 0
#line 1170
{ 
#line 1171
__surf2Dwritec2(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1172
} 
#endif
#line 1174 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(char4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1175
{int volatile ___ = 1;
#line 1177
exit(___);}
#if 0
#line 1175
{ 
#line 1176
__surf2Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
#line 1177
} 
#endif
#line 1179 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uchar4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1180
{int volatile ___ = 1;
#line 1182
exit(___);}
#if 0
#line 1180
{ 
#line 1181
__surf2Dwritec4(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1182
} 
#endif
#line 1184 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1185
{int volatile ___ = 1;
#line 1187
exit(___);}
#if 0
#line 1185
{ 
#line 1186
__surf2Dwrites1(make_ushort1((unsigned short)val), surf, x, y, cudaBoundaryModeTrap); 
#line 1187
} 
#endif
#line 1189 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1190
{int volatile ___ = 1;
#line 1192
exit(___);}
#if 0
#line 1190
{ 
#line 1191
__surf2Dwrites1(make_ushort1(val), surf, x, y, cudaBoundaryModeTrap); 
#line 1192
} 
#endif
#line 1194 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(short1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1195
{int volatile ___ = 1;
#line 1197
exit(___);}
#if 0
#line 1195
{ 
#line 1196
__surf2Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
#line 1197
} 
#endif
#line 1199 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ushort1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1200
{int volatile ___ = 1;
#line 1202
exit(___);}
#if 0
#line 1200
{ 
#line 1201
__surf2Dwrites1(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1202
} 
#endif
#line 1204 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(short2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1205
{int volatile ___ = 1;
#line 1207
exit(___);}
#if 0
#line 1205
{ 
#line 1206
__surf2Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
#line 1207
} 
#endif
#line 1209 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ushort2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1210
{int volatile ___ = 1;
#line 1212
exit(___);}
#if 0
#line 1210
{ 
#line 1211
__surf2Dwrites2(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1212
} 
#endif
#line 1214 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(short4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1215
{int volatile ___ = 1;
#line 1217
exit(___);}
#if 0
#line 1215
{ 
#line 1216
__surf2Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
#line 1217
} 
#endif
#line 1219 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ushort4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1220
{int volatile ___ = 1;
#line 1222
exit(___);}
#if 0
#line 1220
{ 
#line 1221
__surf2Dwrites4(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1222
} 
#endif
#line 1224 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(int val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1225
{int volatile ___ = 1;
#line 1227
exit(___);}
#if 0
#line 1225
{ 
#line 1226
__surf2Dwriteu1(make_uint1((unsigned)val), surf, x, y, cudaBoundaryModeTrap); 
#line 1227
} 
#endif
#line 1229 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1230
{int volatile ___ = 1;
#line 1232
exit(___);}
#if 0
#line 1230
{ 
#line 1231
__surf2Dwriteu1(make_uint1(val), surf, x, y, cudaBoundaryModeTrap); 
#line 1232
} 
#endif
#line 1234 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(int1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1235
{int volatile ___ = 1;
#line 1237
exit(___);}
#if 0
#line 1235
{ 
#line 1236
__surf2Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
#line 1237
} 
#endif
#line 1239 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uint1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1240
{int volatile ___ = 1;
#line 1242
exit(___);}
#if 0
#line 1240
{ 
#line 1241
__surf2Dwriteu1(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1242
} 
#endif
#line 1244 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(int2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1245
{int volatile ___ = 1;
#line 1247
exit(___);}
#if 0
#line 1245
{ 
#line 1246
__surf2Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
#line 1247
} 
#endif
#line 1249 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uint2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1250
{int volatile ___ = 1;
#line 1252
exit(___);}
#if 0
#line 1250
{ 
#line 1251
__surf2Dwriteu2(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1252
} 
#endif
#line 1254 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(int4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1255
{int volatile ___ = 1;
#line 1257
exit(___);}
#if 0
#line 1255
{ 
#line 1256
__surf2Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
#line 1257
} 
#endif
#line 1259 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uint4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1260
{int volatile ___ = 1;
#line 1262
exit(___);}
#if 0
#line 1260
{ 
#line 1261
__surf2Dwriteu4(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1262
} 
#endif
#line 1264 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(__int64 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1265
{int volatile ___ = 1;
#line 1267
exit(___);}
#if 0
#line 1265
{ 
#line 1266
__surf2Dwritel1(make_ulonglong1((unsigned __int64)val), surf, x, y, cudaBoundaryModeTrap); 
#line 1267
} 
#endif
#line 1269 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned __int64 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1270
{int volatile ___ = 1;
#line 1272
exit(___);}
#if 0
#line 1270
{ 
#line 1271
__surf2Dwritel1(make_ulonglong1(val), surf, x, y, cudaBoundaryModeTrap); 
#line 1272
} 
#endif
#line 1274 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(longlong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1275
{int volatile ___ = 1;
#line 1277
exit(___);}
#if 0
#line 1275
{ 
#line 1276
__surf2Dwritel1(make_ulonglong1((unsigned __int64)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
#line 1277
} 
#endif
#line 1279 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulonglong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1280
{int volatile ___ = 1;
#line 1282
exit(___);}
#if 0
#line 1280
{ 
#line 1281
__surf2Dwritel1(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1282
} 
#endif
#line 1284 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(longlong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1285
{int volatile ___ = 1;
#line 1287
exit(___);}
#if 0
#line 1285
{ 
#line 1286
__surf2Dwritel2(make_ulonglong2((unsigned __int64)(val.x), (unsigned __int64)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
#line 1287
} 
#endif
#line 1289 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulonglong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1290
{int volatile ___ = 1;
#line 1292
exit(___);}
#if 0
#line 1290
{ 
#line 1291
__surf2Dwritel2(val, surf, x, y, cudaBoundaryModeTrap); 
#line 1292
} 
#endif
#line 1296 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1297
{int volatile ___ = 1;
#line 1299
exit(___);}
#if 0
#line 1297
{ 
#line 1298
__surf2Dwriteu1(make_uint1((unsigned)val), surf, x, y, cudaBoundaryModeTrap); 
#line 1299
} 
#endif
#line 1301 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1302
{int volatile ___ = 1;
#line 1304
exit(___);}
#if 0
#line 1302
{ 
#line 1303
__surf2Dwriteu1(make_uint1((unsigned)val), surf, x, y, cudaBoundaryModeTrap); 
#line 1304
} 
#endif
#line 1306 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(long1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1307
{int volatile ___ = 1;
#line 1309
exit(___);}
#if 0
#line 1307
{ 
#line 1308
__surf2Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
#line 1309
} 
#endif
#line 1311 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1312
{int volatile ___ = 1;
#line 1314
exit(___);}
#if 0
#line 1312
{ 
#line 1313
__surf2Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
#line 1314
} 
#endif
#line 1316 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(long2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1317
{int volatile ___ = 1;
#line 1319
exit(___);}
#if 0
#line 1317
{ 
#line 1318
__surf2Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
#line 1319
} 
#endif
#line 1321 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1322
{int volatile ___ = 1;
#line 1324
exit(___);}
#if 0
#line 1322
{ 
#line 1323
__surf2Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
#line 1324
} 
#endif
#line 1326 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(long4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1327
{int volatile ___ = 1;
#line 1329
exit(___);}
#if 0
#line 1327
{ 
#line 1328
__surf2Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
#line 1329
} 
#endif
#line 1331 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulong4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1332
{int volatile ___ = 1;
#line 1334
exit(___);}
#if 0
#line 1332
{ 
#line 1333
__surf2Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
#line 1334
} 
#endif
#line 1338 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(float val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1339
{int volatile ___ = 1;
#line 1341
exit(___);}
#if 0
#line 1339
{ 
#line 1340
__surf2Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, y, cudaBoundaryModeTrap); 
#line 1341
} 
#endif
#line 1343 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(float1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1344
{int volatile ___ = 1;
#line 1346
exit(___);}
#if 0
#line 1344
{ 
#line 1345
__surf2Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, y, cudaBoundaryModeTrap); 
#line 1346
} 
#endif
#line 1348 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(float2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1349
{int volatile ___ = 1;
#line 1351
exit(___);}
#if 0
#line 1349
{ 
#line 1350
__surf2Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, y, cudaBoundaryModeTrap); 
#line 1351
} 
#endif
#line 1353 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(float4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1354
{int volatile ___ = 1;
#line 1356
exit(___);}
#if 0
#line 1354
{ 
#line 1355
__surf2Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, y, cudaBoundaryModeTrap); 
#line 1356
} 
#endif
#line 61 "c:\\cuda\\include\\texture_fetch_functions.h"
template<class T, cudaTextureReadMode readMode> extern uint4 __utexfetchi(texture< T, 1, readMode> , int4); 
#line 63
template<class T, cudaTextureReadMode readMode> extern int4 __itexfetchi(texture< T, 1, readMode> , int4); 
#line 65
template<class T, cudaTextureReadMode readMode> extern float4 __ftexfetchi(texture< T, 1, readMode> , int4); 
#line 68
template<class T, int dim, cudaTextureReadMode readMode> extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int); 
#line 70
template<class T, int dim, cudaTextureReadMode readMode> extern int4 __itexfetch(texture< T, dim, readMode> , float4, int); 
#line 72
template<class T, int dim, cudaTextureReadMode readMode> extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int); 
#line 80
static __inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType>  t, int x) 
#line 81
{int volatile ___ = 1;
#line 89 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}
#if 0
#line 81 "c:\\cuda\\include\\texture_fetch_functions.h"
{ 
#line 85 "c:\\cuda\\include\\texture_fetch_functions.h"
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 88 "c:\\cuda\\include\\texture_fetch_functions.h"
return (char)(v.x); 
#line 89
} 
#endif
#line 91 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType>  t, int x) 
#line 92
{int volatile ___ = 1;
#line 96
exit(___);}
#if 0
#line 92
{ 
#line 93
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 95
return (signed char)(v.x); 
#line 96
} 
#endif
#line 98 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType>  t, int x) 
#line 99
{int volatile ___ = 1;
#line 103
exit(___);}
#if 0
#line 99
{ 
#line 100
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 102
return (unsigned char)(v.x); 
#line 103
} 
#endif
#line 105 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType>  t, int x) 
#line 106
{int volatile ___ = 1;
#line 110
exit(___);}
#if 0
#line 106
{ 
#line 107
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 109
return make_char1(v.x); 
#line 110
} 
#endif
#line 112 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType>  t, int x) 
#line 113
{int volatile ___ = 1;
#line 117
exit(___);}
#if 0
#line 113
{ 
#line 114
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 116
return make_uchar1(v.x); 
#line 117
} 
#endif
#line 119 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType>  t, int x) 
#line 120
{int volatile ___ = 1;
#line 124
exit(___);}
#if 0
#line 120
{ 
#line 121
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 123
return make_char2(v.x, v.y); 
#line 124
} 
#endif
#line 126 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType>  t, int x) 
#line 127
{int volatile ___ = 1;
#line 131
exit(___);}
#if 0
#line 127
{ 
#line 128
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 130
return make_uchar2(v.x, v.y); 
#line 131
} 
#endif
#line 133 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType>  t, int x) 
#line 134
{int volatile ___ = 1;
#line 138
exit(___);}
#if 0
#line 134
{ 
#line 135
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 137
return make_char4(v.x, v.y, v.z, v.w); 
#line 138
} 
#endif
#line 140 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType>  t, int x) 
#line 141
{int volatile ___ = 1;
#line 145
exit(___);}
#if 0
#line 141
{ 
#line 142
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 144
return make_uchar4(v.x, v.y, v.z, v.w); 
#line 145
} 
#endif
#line 153 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType>  t, int x) 
#line 154
{int volatile ___ = 1;
#line 158
exit(___);}
#if 0
#line 154
{ 
#line 155
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 157
return (short)(v.x); 
#line 158
} 
#endif
#line 160 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType>  t, int x) 
#line 161
{int volatile ___ = 1;
#line 165
exit(___);}
#if 0
#line 161
{ 
#line 162
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 164
return (unsigned short)(v.x); 
#line 165
} 
#endif
#line 167 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType>  t, int x) 
#line 168
{int volatile ___ = 1;
#line 172
exit(___);}
#if 0
#line 168
{ 
#line 169
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 171
return make_short1(v.x); 
#line 172
} 
#endif
#line 174 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType>  t, int x) 
#line 175
{int volatile ___ = 1;
#line 179
exit(___);}
#if 0
#line 175
{ 
#line 176
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 178
return make_ushort1(v.x); 
#line 179
} 
#endif
#line 181 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType>  t, int x) 
#line 182
{int volatile ___ = 1;
#line 186
exit(___);}
#if 0
#line 182
{ 
#line 183
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 185
return make_short2(v.x, v.y); 
#line 186
} 
#endif
#line 188 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType>  t, int x) 
#line 189
{int volatile ___ = 1;
#line 193
exit(___);}
#if 0
#line 189
{ 
#line 190
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 192
return make_ushort2(v.x, v.y); 
#line 193
} 
#endif
#line 195 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType>  t, int x) 
#line 196
{int volatile ___ = 1;
#line 200
exit(___);}
#if 0
#line 196
{ 
#line 197
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 199
return make_short4(v.x, v.y, v.z, v.w); 
#line 200
} 
#endif
#line 202 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType>  t, int x) 
#line 203
{int volatile ___ = 1;
#line 207
exit(___);}
#if 0
#line 203
{ 
#line 204
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 206
return make_ushort4(v.x, v.y, v.z, v.w); 
#line 207
} 
#endif
#line 215 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType>  t, int x) 
#line 216
{int volatile ___ = 1;
#line 220
exit(___);}
#if 0
#line 216
{ 
#line 217
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 219
return v.x; 
#line 220
} 
#endif
#line 222 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType>  t, int x) 
#line 223
{int volatile ___ = 1;
#line 227
exit(___);}
#if 0
#line 223
{ 
#line 224
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 226
return v.x; 
#line 227
} 
#endif
#line 229 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType>  t, int x) 
#line 230
{int volatile ___ = 1;
#line 234
exit(___);}
#if 0
#line 230
{ 
#line 231
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 233
return make_int1(v.x); 
#line 234
} 
#endif
#line 236 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType>  t, int x) 
#line 237
{int volatile ___ = 1;
#line 241
exit(___);}
#if 0
#line 237
{ 
#line 238
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 240
return make_uint1(v.x); 
#line 241
} 
#endif
#line 243 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType>  t, int x) 
#line 244
{int volatile ___ = 1;
#line 248
exit(___);}
#if 0
#line 244
{ 
#line 245
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 247
return make_int2(v.x, v.y); 
#line 248
} 
#endif
#line 250 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType>  t, int x) 
#line 251
{int volatile ___ = 1;
#line 255
exit(___);}
#if 0
#line 251
{ 
#line 252
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 254
return make_uint2(v.x, v.y); 
#line 255
} 
#endif
#line 257 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType>  t, int x) 
#line 258
{int volatile ___ = 1;
#line 262
exit(___);}
#if 0
#line 258
{ 
#line 259
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 261
return make_int4(v.x, v.y, v.z, v.w); 
#line 262
} 
#endif
#line 264 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType>  t, int x) 
#line 265
{int volatile ___ = 1;
#line 269
exit(___);}
#if 0
#line 265
{ 
#line 266
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 268
return make_uint4(v.x, v.y, v.z, v.w); 
#line 269
} 
#endif
#line 279 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long tex1Dfetch(texture< long, 1, cudaReadModeElementType>  t, int x) 
#line 280
{int volatile ___ = 1;
#line 284
exit(___);}
#if 0
#line 280
{ 
#line 281
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 283
return (long)(v.x); 
#line 284
} 
#endif
#line 286 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned long tex1Dfetch(texture< unsigned long, 1, cudaReadModeElementType>  t, int x) 
#line 287
{int volatile ___ = 1;
#line 291
exit(___);}
#if 0
#line 287
{ 
#line 288
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 290
return (unsigned long)(v.x); 
#line 291
} 
#endif
#line 293 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long1 tex1Dfetch(texture< long1, 1, cudaReadModeElementType>  t, int x) 
#line 294
{int volatile ___ = 1;
#line 298
exit(___);}
#if 0
#line 294
{ 
#line 295
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 297
return make_long1(v.x); 
#line 298
} 
#endif
#line 300 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong1 tex1Dfetch(texture< ulong1, 1, cudaReadModeElementType>  t, int x) 
#line 301
{int volatile ___ = 1;
#line 305
exit(___);}
#if 0
#line 301
{ 
#line 302
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 304
return make_ulong1(v.x); 
#line 305
} 
#endif
#line 307 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long2 tex1Dfetch(texture< long2, 1, cudaReadModeElementType>  t, int x) 
#line 308
{int volatile ___ = 1;
#line 312
exit(___);}
#if 0
#line 308
{ 
#line 309
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 311
return make_long2(v.x, v.y); 
#line 312
} 
#endif
#line 314 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong2 tex1Dfetch(texture< ulong2, 1, cudaReadModeElementType>  t, int x) 
#line 315
{int volatile ___ = 1;
#line 319
exit(___);}
#if 0
#line 315
{ 
#line 316
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 318
return make_ulong2(v.x, v.y); 
#line 319
} 
#endif
#line 321 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long4 tex1Dfetch(texture< long4, 1, cudaReadModeElementType>  t, int x) 
#line 322
{int volatile ___ = 1;
#line 326
exit(___);}
#if 0
#line 322
{ 
#line 323
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 325
return make_long4(v.x, v.y, v.z, v.w); 
#line 326
} 
#endif
#line 328 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong4 tex1Dfetch(texture< ulong4, 1, cudaReadModeElementType>  t, int x) 
#line 329
{int volatile ___ = 1;
#line 333
exit(___);}
#if 0
#line 329
{ 
#line 330
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 332
return make_ulong4(v.x, v.y, v.z, v.w); 
#line 333
} 
#endif
#line 343 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType>  t, int x) 
#line 344
{int volatile ___ = 1;
#line 348
exit(___);}
#if 0
#line 344
{ 
#line 345
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 347
return v.x; 
#line 348
} 
#endif
#line 350 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType>  t, int x) 
#line 351
{int volatile ___ = 1;
#line 355
exit(___);}
#if 0
#line 351
{ 
#line 352
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 354
return make_float1(v.x); 
#line 355
} 
#endif
#line 357 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType>  t, int x) 
#line 358
{int volatile ___ = 1;
#line 362
exit(___);}
#if 0
#line 358
{ 
#line 359
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 361
return make_float2(v.x, v.y); 
#line 362
} 
#endif
#line 364 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType>  t, int x) 
#line 365
{int volatile ___ = 1;
#line 369
exit(___);}
#if 0
#line 365
{ 
#line 366
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 368
return make_float4(v.x, v.y, v.z, v.w); 
#line 369
} 
#endif
#line 377 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 378
{int volatile ___ = 1;
#line 387 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}
#if 0
#line 378 "c:\\cuda\\include\\texture_fetch_functions.h"
{ 
#line 382 "c:\\cuda\\include\\texture_fetch_functions.h"
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 384 "c:\\cuda\\include\\texture_fetch_functions.h"
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 386
return w.x; 
#line 387
} 
#endif
#line 389 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 390
{int volatile ___ = 1;
#line 395
exit(___);}
#if 0
#line 390
{ 
#line 391
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 392
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 394
return w.x; 
#line 395
} 
#endif
#line 397 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 398
{int volatile ___ = 1;
#line 403
exit(___);}
#if 0
#line 398
{ 
#line 399
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 400
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 402
return w.x; 
#line 403
} 
#endif
#line 405 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 406
{int volatile ___ = 1;
#line 411
exit(___);}
#if 0
#line 406
{ 
#line 407
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 408
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 410
return make_float1(w.x); 
#line 411
} 
#endif
#line 413 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 414
{int volatile ___ = 1;
#line 419
exit(___);}
#if 0
#line 414
{ 
#line 415
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 416
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 418
return make_float1(w.x); 
#line 419
} 
#endif
#line 421 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 422
{int volatile ___ = 1;
#line 427
exit(___);}
#if 0
#line 422
{ 
#line 423
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 424
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 426
return make_float2(w.x, w.y); 
#line 427
} 
#endif
#line 429 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 430
{int volatile ___ = 1;
#line 435
exit(___);}
#if 0
#line 430
{ 
#line 431
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 432
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 434
return make_float2(w.x, w.y); 
#line 435
} 
#endif
#line 437 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 438
{int volatile ___ = 1;
#line 443
exit(___);}
#if 0
#line 438
{ 
#line 439
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 440
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 442
return make_float4(w.x, w.y, w.z, w.w); 
#line 443
} 
#endif
#line 445 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 446
{int volatile ___ = 1;
#line 451
exit(___);}
#if 0
#line 446
{ 
#line 447
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 448
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 450
return make_float4(w.x, w.y, w.z, w.w); 
#line 451
} 
#endif
#line 459 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 460
{int volatile ___ = 1;
#line 465
exit(___);}
#if 0
#line 460
{ 
#line 461
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 462
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 464
return w.x; 
#line 465
} 
#endif
#line 467 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 468
{int volatile ___ = 1;
#line 473
exit(___);}
#if 0
#line 468
{ 
#line 469
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 470
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 472
return w.x; 
#line 473
} 
#endif
#line 475 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 476
{int volatile ___ = 1;
#line 481
exit(___);}
#if 0
#line 476
{ 
#line 477
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 478
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 480
return make_float1(w.x); 
#line 481
} 
#endif
#line 483 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 484
{int volatile ___ = 1;
#line 489
exit(___);}
#if 0
#line 484
{ 
#line 485
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 486
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 488
return make_float1(w.x); 
#line 489
} 
#endif
#line 491 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 492
{int volatile ___ = 1;
#line 497
exit(___);}
#if 0
#line 492
{ 
#line 493
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 494
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 496
return make_float2(w.x, w.y); 
#line 497
} 
#endif
#line 499 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 500
{int volatile ___ = 1;
#line 505
exit(___);}
#if 0
#line 500
{ 
#line 501
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 502
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 504
return make_float2(w.x, w.y); 
#line 505
} 
#endif
#line 507 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 508
{int volatile ___ = 1;
#line 513
exit(___);}
#if 0
#line 508
{ 
#line 509
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 510
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 512
return make_float4(w.x, w.y, w.z, w.w); 
#line 513
} 
#endif
#line 515 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 516
{int volatile ___ = 1;
#line 521
exit(___);}
#if 0
#line 516
{ 
#line 517
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
#line 518
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 520
return make_float4(w.x, w.y, w.z, w.w); 
#line 521
} 
#endif
#line 529 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char tex1D(texture< char, 1, cudaReadModeElementType>  t, float x) 
#line 530
{int volatile ___ = 1;
#line 538 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}
#if 0
#line 530 "c:\\cuda\\include\\texture_fetch_functions.h"
{ 
#line 534 "c:\\cuda\\include\\texture_fetch_functions.h"
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 537 "c:\\cuda\\include\\texture_fetch_functions.h"
return (char)(v.x); 
#line 538
} 
#endif
#line 540 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType>  t, float x) 
#line 541
{int volatile ___ = 1;
#line 545
exit(___);}
#if 0
#line 541
{ 
#line 542
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 544
return (signed char)(v.x); 
#line 545
} 
#endif
#line 547 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType>  t, float x) 
#line 548
{int volatile ___ = 1;
#line 552
exit(___);}
#if 0
#line 548
{ 
#line 549
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 551
return (unsigned char)(v.x); 
#line 552
} 
#endif
#line 554 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char1 tex1D(texture< char1, 1, cudaReadModeElementType>  t, float x) 
#line 555
{int volatile ___ = 1;
#line 559
exit(___);}
#if 0
#line 555
{ 
#line 556
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 558
return make_char1(v.x); 
#line 559
} 
#endif
#line 561 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType>  t, float x) 
#line 562
{int volatile ___ = 1;
#line 566
exit(___);}
#if 0
#line 562
{ 
#line 563
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 565
return make_uchar1(v.x); 
#line 566
} 
#endif
#line 568 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char2 tex1D(texture< char2, 1, cudaReadModeElementType>  t, float x) 
#line 569
{int volatile ___ = 1;
#line 573
exit(___);}
#if 0
#line 569
{ 
#line 570
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 572
return make_char2(v.x, v.y); 
#line 573
} 
#endif
#line 575 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType>  t, float x) 
#line 576
{int volatile ___ = 1;
#line 580
exit(___);}
#if 0
#line 576
{ 
#line 577
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 579
return make_uchar2(v.x, v.y); 
#line 580
} 
#endif
#line 582 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char4 tex1D(texture< char4, 1, cudaReadModeElementType>  t, float x) 
#line 583
{int volatile ___ = 1;
#line 587
exit(___);}
#if 0
#line 583
{ 
#line 584
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 586
return make_char4(v.x, v.y, v.z, v.w); 
#line 587
} 
#endif
#line 589 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType>  t, float x) 
#line 590
{int volatile ___ = 1;
#line 594
exit(___);}
#if 0
#line 590
{ 
#line 591
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 593
return make_uchar4(v.x, v.y, v.z, v.w); 
#line 594
} 
#endif
#line 602 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short tex1D(texture< short, 1, cudaReadModeElementType>  t, float x) 
#line 603
{int volatile ___ = 1;
#line 607
exit(___);}
#if 0
#line 603
{ 
#line 604
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 606
return (short)(v.x); 
#line 607
} 
#endif
#line 609 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType>  t, float x) 
#line 610
{int volatile ___ = 1;
#line 614
exit(___);}
#if 0
#line 610
{ 
#line 611
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 613
return (unsigned short)(v.x); 
#line 614
} 
#endif
#line 616 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short1 tex1D(texture< short1, 1, cudaReadModeElementType>  t, float x) 
#line 617
{int volatile ___ = 1;
#line 621
exit(___);}
#if 0
#line 617
{ 
#line 618
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 620
return make_short1(v.x); 
#line 621
} 
#endif
#line 623 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType>  t, float x) 
#line 624
{int volatile ___ = 1;
#line 628
exit(___);}
#if 0
#line 624
{ 
#line 625
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 627
return make_ushort1(v.x); 
#line 628
} 
#endif
#line 630 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short2 tex1D(texture< short2, 1, cudaReadModeElementType>  t, float x) 
#line 631
{int volatile ___ = 1;
#line 635
exit(___);}
#if 0
#line 631
{ 
#line 632
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 634
return make_short2(v.x, v.y); 
#line 635
} 
#endif
#line 637 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType>  t, float x) 
#line 638
{int volatile ___ = 1;
#line 642
exit(___);}
#if 0
#line 638
{ 
#line 639
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 641
return make_ushort2(v.x, v.y); 
#line 642
} 
#endif
#line 644 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short4 tex1D(texture< short4, 1, cudaReadModeElementType>  t, float x) 
#line 645
{int volatile ___ = 1;
#line 649
exit(___);}
#if 0
#line 645
{ 
#line 646
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 648
return make_short4(v.x, v.y, v.z, v.w); 
#line 649
} 
#endif
#line 651 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType>  t, float x) 
#line 652
{int volatile ___ = 1;
#line 656
exit(___);}
#if 0
#line 652
{ 
#line 653
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 655
return make_ushort4(v.x, v.y, v.z, v.w); 
#line 656
} 
#endif
#line 664 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int tex1D(texture< int, 1, cudaReadModeElementType>  t, float x) 
#line 665
{int volatile ___ = 1;
#line 669
exit(___);}
#if 0
#line 665
{ 
#line 666
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 668
return v.x; 
#line 669
} 
#endif
#line 671 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType>  t, float x) 
#line 672
{int volatile ___ = 1;
#line 676
exit(___);}
#if 0
#line 672
{ 
#line 673
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 675
return v.x; 
#line 676
} 
#endif
#line 678 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int1 tex1D(texture< int1, 1, cudaReadModeElementType>  t, float x) 
#line 679
{int volatile ___ = 1;
#line 683
exit(___);}
#if 0
#line 679
{ 
#line 680
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 682
return make_int1(v.x); 
#line 683
} 
#endif
#line 685 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType>  t, float x) 
#line 686
{int volatile ___ = 1;
#line 690
exit(___);}
#if 0
#line 686
{ 
#line 687
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 689
return make_uint1(v.x); 
#line 690
} 
#endif
#line 692 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int2 tex1D(texture< int2, 1, cudaReadModeElementType>  t, float x) 
#line 693
{int volatile ___ = 1;
#line 697
exit(___);}
#if 0
#line 693
{ 
#line 694
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 696
return make_int2(v.x, v.y); 
#line 697
} 
#endif
#line 699 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType>  t, float x) 
#line 700
{int volatile ___ = 1;
#line 704
exit(___);}
#if 0
#line 700
{ 
#line 701
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 703
return make_uint2(v.x, v.y); 
#line 704
} 
#endif
#line 706 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int4 tex1D(texture< int4, 1, cudaReadModeElementType>  t, float x) 
#line 707
{int volatile ___ = 1;
#line 711
exit(___);}
#if 0
#line 707
{ 
#line 708
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 710
return make_int4(v.x, v.y, v.z, v.w); 
#line 711
} 
#endif
#line 713 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType>  t, float x) 
#line 714
{int volatile ___ = 1;
#line 718
exit(___);}
#if 0
#line 714
{ 
#line 715
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 717
return make_uint4(v.x, v.y, v.z, v.w); 
#line 718
} 
#endif
#line 734 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long tex1D(texture< long, 1, cudaReadModeElementType>  t, float x) 
#line 735
{int volatile ___ = 1;
#line 739
exit(___);}
#if 0
#line 735
{ 
#line 736
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 738
return (long)(v.x); 
#line 739
} 
#endif
#line 741 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned long tex1D(texture< unsigned long, 1, cudaReadModeElementType>  t, float x) 
#line 742
{int volatile ___ = 1;
#line 746
exit(___);}
#if 0
#line 742
{ 
#line 743
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 745
return (unsigned long)(v.x); 
#line 746
} 
#endif
#line 748 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long1 tex1D(texture< long1, 1, cudaReadModeElementType>  t, float x) 
#line 749
{int volatile ___ = 1;
#line 753
exit(___);}
#if 0
#line 749
{ 
#line 750
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 752
return make_long1(v.x); 
#line 753
} 
#endif
#line 755 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong1 tex1D(texture< ulong1, 1, cudaReadModeElementType>  t, float x) 
#line 756
{int volatile ___ = 1;
#line 760
exit(___);}
#if 0
#line 756
{ 
#line 757
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 759
return make_ulong1(v.x); 
#line 760
} 
#endif
#line 762 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long2 tex1D(texture< long2, 1, cudaReadModeElementType>  t, float x) 
#line 763
{int volatile ___ = 1;
#line 767
exit(___);}
#if 0
#line 763
{ 
#line 764
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 766
return make_long2(v.x, v.y); 
#line 767
} 
#endif
#line 769 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong2 tex1D(texture< ulong2, 1, cudaReadModeElementType>  t, float x) 
#line 770
{int volatile ___ = 1;
#line 774
exit(___);}
#if 0
#line 770
{ 
#line 771
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 773
return make_ulong2(v.x, v.y); 
#line 774
} 
#endif
#line 776 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long4 tex1D(texture< long4, 1, cudaReadModeElementType>  t, float x) 
#line 777
{int volatile ___ = 1;
#line 781
exit(___);}
#if 0
#line 777
{ 
#line 778
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 780
return make_long4(v.x, v.y, v.z, v.w); 
#line 781
} 
#endif
#line 783 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong4 tex1D(texture< ulong4, 1, cudaReadModeElementType>  t, float x) 
#line 784
{int volatile ___ = 1;
#line 788
exit(___);}
#if 0
#line 784
{ 
#line 785
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 787
return make_ulong4(v.x, v.y, v.z, v.w); 
#line 788
} 
#endif
#line 798 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< float, 1, cudaReadModeElementType>  t, float x) 
#line 799
{int volatile ___ = 1;
#line 803
exit(___);}
#if 0
#line 799
{ 
#line 800
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
#line 802
return v.x; 
#line 803
} 
#endif
#line 805 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< float1, 1, cudaReadModeElementType>  t, float x) 
#line 806
{int volatile ___ = 1;
#line 810
exit(___);}
#if 0
#line 806
{ 
#line 807
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
#line 809
return make_float1(v.x); 
#line 810
} 
#endif
#line 812 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< float2, 1, cudaReadModeElementType>  t, float x) 
#line 813
{int volatile ___ = 1;
#line 817
exit(___);}
#if 0
#line 813
{ 
#line 814
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
#line 816
return make_float2(v.x, v.y); 
#line 817
} 
#endif
#line 819 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< float4, 1, cudaReadModeElementType>  t, float x) 
#line 820
{int volatile ___ = 1;
#line 824
exit(___);}
#if 0
#line 820
{ 
#line 821
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
#line 823
return make_float4(v.x, v.y, v.z, v.w); 
#line 824
} 
#endif
#line 832 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 833
{int volatile ___ = 1;
#line 842 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}
#if 0
#line 833 "c:\\cuda\\include\\texture_fetch_functions.h"
{ 
#line 837 "c:\\cuda\\include\\texture_fetch_functions.h"
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 839 "c:\\cuda\\include\\texture_fetch_functions.h"
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 841
return w.x; 
#line 842
} 
#endif
#line 844 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 845
{int volatile ___ = 1;
#line 850
exit(___);}
#if 0
#line 845
{ 
#line 846
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 847
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 849
return w.x; 
#line 850
} 
#endif
#line 852 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 853
{int volatile ___ = 1;
#line 858
exit(___);}
#if 0
#line 853
{ 
#line 854
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 855
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 857
return w.x; 
#line 858
} 
#endif
#line 860 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 861
{int volatile ___ = 1;
#line 866
exit(___);}
#if 0
#line 861
{ 
#line 862
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 863
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 865
return make_float1(w.x); 
#line 866
} 
#endif
#line 868 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 869
{int volatile ___ = 1;
#line 874
exit(___);}
#if 0
#line 869
{ 
#line 870
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 871
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 873
return make_float1(w.x); 
#line 874
} 
#endif
#line 876 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 877
{int volatile ___ = 1;
#line 882
exit(___);}
#if 0
#line 877
{ 
#line 878
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 879
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 881
return make_float2(w.x, w.y); 
#line 882
} 
#endif
#line 884 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 885
{int volatile ___ = 1;
#line 890
exit(___);}
#if 0
#line 885
{ 
#line 886
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 887
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 889
return make_float2(w.x, w.y); 
#line 890
} 
#endif
#line 892 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 893
{int volatile ___ = 1;
#line 898
exit(___);}
#if 0
#line 893
{ 
#line 894
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 895
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 897
return make_float4(w.x, w.y, w.z, w.w); 
#line 898
} 
#endif
#line 900 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 901
{int volatile ___ = 1;
#line 906
exit(___);}
#if 0
#line 901
{ 
#line 902
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 903
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 905
return make_float4(w.x, w.y, w.z, w.w); 
#line 906
} 
#endif
#line 914 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 915
{int volatile ___ = 1;
#line 920
exit(___);}
#if 0
#line 915
{ 
#line 916
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 917
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 919
return w.x; 
#line 920
} 
#endif
#line 922 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 923
{int volatile ___ = 1;
#line 928
exit(___);}
#if 0
#line 923
{ 
#line 924
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 925
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 927
return w.x; 
#line 928
} 
#endif
#line 930 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 931
{int volatile ___ = 1;
#line 936
exit(___);}
#if 0
#line 931
{ 
#line 932
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 933
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 935
return make_float1(w.x); 
#line 936
} 
#endif
#line 938 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 939
{int volatile ___ = 1;
#line 944
exit(___);}
#if 0
#line 939
{ 
#line 940
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 941
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 943
return make_float1(w.x); 
#line 944
} 
#endif
#line 946 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 947
{int volatile ___ = 1;
#line 952
exit(___);}
#if 0
#line 947
{ 
#line 948
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 949
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 951
return make_float2(w.x, w.y); 
#line 952
} 
#endif
#line 954 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 955
{int volatile ___ = 1;
#line 960
exit(___);}
#if 0
#line 955
{ 
#line 956
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 957
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 959
return make_float2(w.x, w.y); 
#line 960
} 
#endif
#line 962 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 963
{int volatile ___ = 1;
#line 968
exit(___);}
#if 0
#line 963
{ 
#line 964
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
#line 965
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 967
return make_float4(w.x, w.y, w.z, w.w); 
#line 968
} 
#endif
#line 970 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 971
{int volatile ___ = 1;
#line 976
exit(___);}
#if 0
#line 971
{ 
#line 972
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
#line 973
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 975
return make_float4(w.x, w.y, w.z, w.w); 
#line 976
} 
#endif
#line 984 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char tex2D(texture< char, 2, cudaReadModeElementType>  t, float x, float y) 
#line 985
{int volatile ___ = 1;
#line 993 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}
#if 0
#line 985 "c:\\cuda\\include\\texture_fetch_functions.h"
{ 
#line 989 "c:\\cuda\\include\\texture_fetch_functions.h"
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 992 "c:\\cuda\\include\\texture_fetch_functions.h"
return (char)(v.x); 
#line 993
} 
#endif
#line 995 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType>  t, float x, float y) 
#line 996
{int volatile ___ = 1;
#line 1000
exit(___);}
#if 0
#line 996
{ 
#line 997
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 999
return (signed char)(v.x); 
#line 1000
} 
#endif
#line 1002 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1003
{int volatile ___ = 1;
#line 1007
exit(___);}
#if 0
#line 1003
{ 
#line 1004
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1006
return (unsigned char)(v.x); 
#line 1007
} 
#endif
#line 1009 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char1 tex2D(texture< char1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1010
{int volatile ___ = 1;
#line 1014
exit(___);}
#if 0
#line 1010
{ 
#line 1011
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1013
return make_char1(v.x); 
#line 1014
} 
#endif
#line 1016 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1017
{int volatile ___ = 1;
#line 1021
exit(___);}
#if 0
#line 1017
{ 
#line 1018
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1020
return make_uchar1(v.x); 
#line 1021
} 
#endif
#line 1023 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char2 tex2D(texture< char2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1024
{int volatile ___ = 1;
#line 1028
exit(___);}
#if 0
#line 1024
{ 
#line 1025
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1027
return make_char2(v.x, v.y); 
#line 1028
} 
#endif
#line 1030 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1031
{int volatile ___ = 1;
#line 1035
exit(___);}
#if 0
#line 1031
{ 
#line 1032
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1034
return make_uchar2(v.x, v.y); 
#line 1035
} 
#endif
#line 1037 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char4 tex2D(texture< char4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1038
{int volatile ___ = 1;
#line 1042
exit(___);}
#if 0
#line 1038
{ 
#line 1039
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1041
return make_char4(v.x, v.y, v.z, v.w); 
#line 1042
} 
#endif
#line 1044 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1045
{int volatile ___ = 1;
#line 1049
exit(___);}
#if 0
#line 1045
{ 
#line 1046
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1048
return make_uchar4(v.x, v.y, v.z, v.w); 
#line 1049
} 
#endif
#line 1057 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short tex2D(texture< short, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1058
{int volatile ___ = 1;
#line 1062
exit(___);}
#if 0
#line 1058
{ 
#line 1059
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1061
return (short)(v.x); 
#line 1062
} 
#endif
#line 1064 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1065
{int volatile ___ = 1;
#line 1069
exit(___);}
#if 0
#line 1065
{ 
#line 1066
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1068
return (unsigned short)(v.x); 
#line 1069
} 
#endif
#line 1071 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short1 tex2D(texture< short1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1072
{int volatile ___ = 1;
#line 1076
exit(___);}
#if 0
#line 1072
{ 
#line 1073
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1075
return make_short1(v.x); 
#line 1076
} 
#endif
#line 1078 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1079
{int volatile ___ = 1;
#line 1083
exit(___);}
#if 0
#line 1079
{ 
#line 1080
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1082
return make_ushort1(v.x); 
#line 1083
} 
#endif
#line 1085 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short2 tex2D(texture< short2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1086
{int volatile ___ = 1;
#line 1090
exit(___);}
#if 0
#line 1086
{ 
#line 1087
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1089
return make_short2(v.x, v.y); 
#line 1090
} 
#endif
#line 1092 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1093
{int volatile ___ = 1;
#line 1097
exit(___);}
#if 0
#line 1093
{ 
#line 1094
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1096
return make_ushort2(v.x, v.y); 
#line 1097
} 
#endif
#line 1099 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short4 tex2D(texture< short4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1100
{int volatile ___ = 1;
#line 1104
exit(___);}
#if 0
#line 1100
{ 
#line 1101
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1103
return make_short4(v.x, v.y, v.z, v.w); 
#line 1104
} 
#endif
#line 1106 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1107
{int volatile ___ = 1;
#line 1111
exit(___);}
#if 0
#line 1107
{ 
#line 1108
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1110
return make_ushort4(v.x, v.y, v.z, v.w); 
#line 1111
} 
#endif
#line 1119 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int tex2D(texture< int, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1120
{int volatile ___ = 1;
#line 1124
exit(___);}
#if 0
#line 1120
{ 
#line 1121
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1123
return v.x; 
#line 1124
} 
#endif
#line 1126 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1127
{int volatile ___ = 1;
#line 1131
exit(___);}
#if 0
#line 1127
{ 
#line 1128
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1130
return v.x; 
#line 1131
} 
#endif
#line 1133 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int1 tex2D(texture< int1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1134
{int volatile ___ = 1;
#line 1138
exit(___);}
#if 0
#line 1134
{ 
#line 1135
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1137
return make_int1(v.x); 
#line 1138
} 
#endif
#line 1140 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1141
{int volatile ___ = 1;
#line 1145
exit(___);}
#if 0
#line 1141
{ 
#line 1142
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1144
return make_uint1(v.x); 
#line 1145
} 
#endif
#line 1147 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int2 tex2D(texture< int2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1148
{int volatile ___ = 1;
#line 1152
exit(___);}
#if 0
#line 1148
{ 
#line 1149
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1151
return make_int2(v.x, v.y); 
#line 1152
} 
#endif
#line 1154 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1155
{int volatile ___ = 1;
#line 1159
exit(___);}
#if 0
#line 1155
{ 
#line 1156
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1158
return make_uint2(v.x, v.y); 
#line 1159
} 
#endif
#line 1161 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int4 tex2D(texture< int4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1162
{int volatile ___ = 1;
#line 1166
exit(___);}
#if 0
#line 1162
{ 
#line 1163
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1165
return make_int4(v.x, v.y, v.z, v.w); 
#line 1166
} 
#endif
#line 1168 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1169
{int volatile ___ = 1;
#line 1173
exit(___);}
#if 0
#line 1169
{ 
#line 1170
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1172
return make_uint4(v.x, v.y, v.z, v.w); 
#line 1173
} 
#endif
#line 1183 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long tex2D(texture< long, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1184
{int volatile ___ = 1;
#line 1188
exit(___);}
#if 0
#line 1184
{ 
#line 1185
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1187
return (long)(v.x); 
#line 1188
} 
#endif
#line 1190 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned long tex2D(texture< unsigned long, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1191
{int volatile ___ = 1;
#line 1195
exit(___);}
#if 0
#line 1191
{ 
#line 1192
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1194
return (unsigned long)(v.x); 
#line 1195
} 
#endif
#line 1197 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long1 tex2D(texture< long1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1198
{int volatile ___ = 1;
#line 1202
exit(___);}
#if 0
#line 1198
{ 
#line 1199
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1201
return make_long1(v.x); 
#line 1202
} 
#endif
#line 1204 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong1 tex2D(texture< ulong1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1205
{int volatile ___ = 1;
#line 1209
exit(___);}
#if 0
#line 1205
{ 
#line 1206
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1208
return make_ulong1(v.x); 
#line 1209
} 
#endif
#line 1211 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long2 tex2D(texture< long2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1212
{int volatile ___ = 1;
#line 1216
exit(___);}
#if 0
#line 1212
{ 
#line 1213
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1215
return make_long2(v.x, v.y); 
#line 1216
} 
#endif
#line 1218 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong2 tex2D(texture< ulong2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1219
{int volatile ___ = 1;
#line 1223
exit(___);}
#if 0
#line 1219
{ 
#line 1220
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1222
return make_ulong2(v.x, v.y); 
#line 1223
} 
#endif
#line 1225 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long4 tex2D(texture< long4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1226
{int volatile ___ = 1;
#line 1230
exit(___);}
#if 0
#line 1226
{ 
#line 1227
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1229
return make_long4(v.x, v.y, v.z, v.w); 
#line 1230
} 
#endif
#line 1232 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong4 tex2D(texture< ulong4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1233
{int volatile ___ = 1;
#line 1237
exit(___);}
#if 0
#line 1233
{ 
#line 1234
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1236
return make_ulong4(v.x, v.y, v.z, v.w); 
#line 1237
} 
#endif
#line 1247 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< float, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1248
{int volatile ___ = 1;
#line 1252
exit(___);}
#if 0
#line 1248
{ 
#line 1249
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
#line 1251
return v.x; 
#line 1252
} 
#endif
#line 1254 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< float1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1255
{int volatile ___ = 1;
#line 1259
exit(___);}
#if 0
#line 1255
{ 
#line 1256
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
#line 1258
return make_float1(v.x); 
#line 1259
} 
#endif
#line 1261 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< float2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1262
{int volatile ___ = 1;
#line 1266
exit(___);}
#if 0
#line 1262
{ 
#line 1263
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
#line 1265
return make_float2(v.x, v.y); 
#line 1266
} 
#endif
#line 1268 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< float4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1269
{int volatile ___ = 1;
#line 1273
exit(___);}
#if 0
#line 1269
{ 
#line 1270
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
#line 1272
return make_float4(v.x, v.y, v.z, v.w); 
#line 1273
} 
#endif
#line 1281 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1282
{int volatile ___ = 1;
#line 1291 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}
#if 0
#line 1282 "c:\\cuda\\include\\texture_fetch_functions.h"
{ 
#line 1286 "c:\\cuda\\include\\texture_fetch_functions.h"
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1288 "c:\\cuda\\include\\texture_fetch_functions.h"
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1290
return w.x; 
#line 1291
} 
#endif
#line 1293 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1294
{int volatile ___ = 1;
#line 1299
exit(___);}
#if 0
#line 1294
{ 
#line 1295
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1296
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1298
return w.x; 
#line 1299
} 
#endif
#line 1301 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1302
{int volatile ___ = 1;
#line 1307
exit(___);}
#if 0
#line 1302
{ 
#line 1303
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1304
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1306
return w.x; 
#line 1307
} 
#endif
#line 1309 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1310
{int volatile ___ = 1;
#line 1315
exit(___);}
#if 0
#line 1310
{ 
#line 1311
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1312
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1314
return make_float1(w.x); 
#line 1315
} 
#endif
#line 1317 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1318
{int volatile ___ = 1;
#line 1323
exit(___);}
#if 0
#line 1318
{ 
#line 1319
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1320
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1322
return make_float1(w.x); 
#line 1323
} 
#endif
#line 1325 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1326
{int volatile ___ = 1;
#line 1331
exit(___);}
#if 0
#line 1326
{ 
#line 1327
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1328
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1330
return make_float2(w.x, w.y); 
#line 1331
} 
#endif
#line 1333 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1334
{int volatile ___ = 1;
#line 1339
exit(___);}
#if 0
#line 1334
{ 
#line 1335
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1336
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1338
return make_float2(w.x, w.y); 
#line 1339
} 
#endif
#line 1341 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1342
{int volatile ___ = 1;
#line 1347
exit(___);}
#if 0
#line 1342
{ 
#line 1343
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1344
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1346
return make_float4(w.x, w.y, w.z, w.w); 
#line 1347
} 
#endif
#line 1349 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1350
{int volatile ___ = 1;
#line 1355
exit(___);}
#if 0
#line 1350
{ 
#line 1351
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1352
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1354
return make_float4(w.x, w.y, w.z, w.w); 
#line 1355
} 
#endif
#line 1363 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1364
{int volatile ___ = 1;
#line 1369
exit(___);}
#if 0
#line 1364
{ 
#line 1365
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1366
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1368
return w.x; 
#line 1369
} 
#endif
#line 1371 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1372
{int volatile ___ = 1;
#line 1377
exit(___);}
#if 0
#line 1372
{ 
#line 1373
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1374
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1376
return w.x; 
#line 1377
} 
#endif
#line 1379 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1380
{int volatile ___ = 1;
#line 1385
exit(___);}
#if 0
#line 1380
{ 
#line 1381
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1382
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1384
return make_float1(w.x); 
#line 1385
} 
#endif
#line 1387 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1388
{int volatile ___ = 1;
#line 1393
exit(___);}
#if 0
#line 1388
{ 
#line 1389
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1390
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1392
return make_float1(w.x); 
#line 1393
} 
#endif
#line 1395 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1396
{int volatile ___ = 1;
#line 1401
exit(___);}
#if 0
#line 1396
{ 
#line 1397
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1398
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1400
return make_float2(w.x, w.y); 
#line 1401
} 
#endif
#line 1403 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1404
{int volatile ___ = 1;
#line 1409
exit(___);}
#if 0
#line 1404
{ 
#line 1405
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1406
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1408
return make_float2(w.x, w.y); 
#line 1409
} 
#endif
#line 1411 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1412
{int volatile ___ = 1;
#line 1417
exit(___);}
#if 0
#line 1412
{ 
#line 1413
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
#line 1414
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1416
return make_float4(w.x, w.y, w.z, w.w); 
#line 1417
} 
#endif
#line 1419 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1420
{int volatile ___ = 1;
#line 1425
exit(___);}
#if 0
#line 1420
{ 
#line 1421
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
#line 1422
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1424
return make_float4(w.x, w.y, w.z, w.w); 
#line 1425
} 
#endif
#line 1433 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char tex3D(texture< char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1434
{int volatile ___ = 1;
#line 1442 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}
#if 0
#line 1434 "c:\\cuda\\include\\texture_fetch_functions.h"
{ 
#line 1438 "c:\\cuda\\include\\texture_fetch_functions.h"
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1441 "c:\\cuda\\include\\texture_fetch_functions.h"
return (char)(v.x); 
#line 1442
} 
#endif
#line 1444 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1445
{int volatile ___ = 1;
#line 1449
exit(___);}
#if 0
#line 1445
{ 
#line 1446
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1448
return (signed char)(v.x); 
#line 1449
} 
#endif
#line 1451 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1452
{int volatile ___ = 1;
#line 1456
exit(___);}
#if 0
#line 1452
{ 
#line 1453
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1455
return (unsigned char)(v.x); 
#line 1456
} 
#endif
#line 1458 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char1 tex3D(texture< char1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1459
{int volatile ___ = 1;
#line 1463
exit(___);}
#if 0
#line 1459
{ 
#line 1460
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1462
return make_char1(v.x); 
#line 1463
} 
#endif
#line 1465 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1466
{int volatile ___ = 1;
#line 1470
exit(___);}
#if 0
#line 1466
{ 
#line 1467
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1469
return make_uchar1(v.x); 
#line 1470
} 
#endif
#line 1472 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char2 tex3D(texture< char2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1473
{int volatile ___ = 1;
#line 1477
exit(___);}
#if 0
#line 1473
{ 
#line 1474
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1476
return make_char2(v.x, v.y); 
#line 1477
} 
#endif
#line 1479 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1480
{int volatile ___ = 1;
#line 1484
exit(___);}
#if 0
#line 1480
{ 
#line 1481
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1483
return make_uchar2(v.x, v.y); 
#line 1484
} 
#endif
#line 1486 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char4 tex3D(texture< char4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1487
{int volatile ___ = 1;
#line 1491
exit(___);}
#if 0
#line 1487
{ 
#line 1488
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1490
return make_char4(v.x, v.y, v.z, v.w); 
#line 1491
} 
#endif
#line 1493 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1494
{int volatile ___ = 1;
#line 1498
exit(___);}
#if 0
#line 1494
{ 
#line 1495
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1497
return make_uchar4(v.x, v.y, v.z, v.w); 
#line 1498
} 
#endif
#line 1506 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short tex3D(texture< short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1507
{int volatile ___ = 1;
#line 1511
exit(___);}
#if 0
#line 1507
{ 
#line 1508
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1510
return (short)(v.x); 
#line 1511
} 
#endif
#line 1513 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1514
{int volatile ___ = 1;
#line 1518
exit(___);}
#if 0
#line 1514
{ 
#line 1515
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1517
return (unsigned short)(v.x); 
#line 1518
} 
#endif
#line 1520 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short1 tex3D(texture< short1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1521
{int volatile ___ = 1;
#line 1525
exit(___);}
#if 0
#line 1521
{ 
#line 1522
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1524
return make_short1(v.x); 
#line 1525
} 
#endif
#line 1527 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1528
{int volatile ___ = 1;
#line 1532
exit(___);}
#if 0
#line 1528
{ 
#line 1529
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1531
return make_ushort1(v.x); 
#line 1532
} 
#endif
#line 1534 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short2 tex3D(texture< short2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1535
{int volatile ___ = 1;
#line 1539
exit(___);}
#if 0
#line 1535
{ 
#line 1536
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1538
return make_short2(v.x, v.y); 
#line 1539
} 
#endif
#line 1541 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1542
{int volatile ___ = 1;
#line 1546
exit(___);}
#if 0
#line 1542
{ 
#line 1543
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1545
return make_ushort2(v.x, v.y); 
#line 1546
} 
#endif
#line 1548 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short4 tex3D(texture< short4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1549
{int volatile ___ = 1;
#line 1553
exit(___);}
#if 0
#line 1549
{ 
#line 1550
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1552
return make_short4(v.x, v.y, v.z, v.w); 
#line 1553
} 
#endif
#line 1555 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1556
{int volatile ___ = 1;
#line 1560
exit(___);}
#if 0
#line 1556
{ 
#line 1557
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1559
return make_ushort4(v.x, v.y, v.z, v.w); 
#line 1560
} 
#endif
#line 1568 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int tex3D(texture< int, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1569
{int volatile ___ = 1;
#line 1573
exit(___);}
#if 0
#line 1569
{ 
#line 1570
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1572
return v.x; 
#line 1573
} 
#endif
#line 1575 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1576
{int volatile ___ = 1;
#line 1580
exit(___);}
#if 0
#line 1576
{ 
#line 1577
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1579
return v.x; 
#line 1580
} 
#endif
#line 1582 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int1 tex3D(texture< int1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1583
{int volatile ___ = 1;
#line 1587
exit(___);}
#if 0
#line 1583
{ 
#line 1584
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1586
return make_int1(v.x); 
#line 1587
} 
#endif
#line 1589 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1590
{int volatile ___ = 1;
#line 1594
exit(___);}
#if 0
#line 1590
{ 
#line 1591
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1593
return make_uint1(v.x); 
#line 1594
} 
#endif
#line 1596 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int2 tex3D(texture< int2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1597
{int volatile ___ = 1;
#line 1601
exit(___);}
#if 0
#line 1597
{ 
#line 1598
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1600
return make_int2(v.x, v.y); 
#line 1601
} 
#endif
#line 1603 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1604
{int volatile ___ = 1;
#line 1608
exit(___);}
#if 0
#line 1604
{ 
#line 1605
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1607
return make_uint2(v.x, v.y); 
#line 1608
} 
#endif
#line 1610 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int4 tex3D(texture< int4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1611
{int volatile ___ = 1;
#line 1615
exit(___);}
#if 0
#line 1611
{ 
#line 1612
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1614
return make_int4(v.x, v.y, v.z, v.w); 
#line 1615
} 
#endif
#line 1617 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1618
{int volatile ___ = 1;
#line 1622
exit(___);}
#if 0
#line 1618
{ 
#line 1619
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1621
return make_uint4(v.x, v.y, v.z, v.w); 
#line 1622
} 
#endif
#line 1632 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long tex3D(texture< long, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1633
{int volatile ___ = 1;
#line 1637
exit(___);}
#if 0
#line 1633
{ 
#line 1634
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1636
return (long)(v.x); 
#line 1637
} 
#endif
#line 1639 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned long tex3D(texture< unsigned long, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1640
{int volatile ___ = 1;
#line 1644
exit(___);}
#if 0
#line 1640
{ 
#line 1641
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1643
return (unsigned long)(v.x); 
#line 1644
} 
#endif
#line 1646 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long1 tex3D(texture< long1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1647
{int volatile ___ = 1;
#line 1651
exit(___);}
#if 0
#line 1647
{ 
#line 1648
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1650
return make_long1(v.x); 
#line 1651
} 
#endif
#line 1653 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong1 tex3D(texture< ulong1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1654
{int volatile ___ = 1;
#line 1658
exit(___);}
#if 0
#line 1654
{ 
#line 1655
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1657
return make_ulong1(v.x); 
#line 1658
} 
#endif
#line 1660 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long2 tex3D(texture< long2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1661
{int volatile ___ = 1;
#line 1665
exit(___);}
#if 0
#line 1661
{ 
#line 1662
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1664
return make_long2(v.x, v.y); 
#line 1665
} 
#endif
#line 1667 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong2 tex3D(texture< ulong2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1668
{int volatile ___ = 1;
#line 1672
exit(___);}
#if 0
#line 1668
{ 
#line 1669
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1671
return make_ulong2(v.x, v.y); 
#line 1672
} 
#endif
#line 1674 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long4 tex3D(texture< long4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1675
{int volatile ___ = 1;
#line 1679
exit(___);}
#if 0
#line 1675
{ 
#line 1676
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1678
return make_long4(v.x, v.y, v.z, v.w); 
#line 1679
} 
#endif
#line 1681 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong4 tex3D(texture< ulong4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1682
{int volatile ___ = 1;
#line 1686
exit(___);}
#if 0
#line 1682
{ 
#line 1683
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1685
return make_ulong4(v.x, v.y, v.z, v.w); 
#line 1686
} 
#endif
#line 1696 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< float, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1697
{int volatile ___ = 1;
#line 1701
exit(___);}
#if 0
#line 1697
{ 
#line 1698
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
#line 1700
return v.x; 
#line 1701
} 
#endif
#line 1703 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< float1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1704
{int volatile ___ = 1;
#line 1708
exit(___);}
#if 0
#line 1704
{ 
#line 1705
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
#line 1707
return make_float1(v.x); 
#line 1708
} 
#endif
#line 1710 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< float2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1711
{int volatile ___ = 1;
#line 1715
exit(___);}
#if 0
#line 1711
{ 
#line 1712
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
#line 1714
return make_float2(v.x, v.y); 
#line 1715
} 
#endif
#line 1717 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< float4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1718
{int volatile ___ = 1;
#line 1722
exit(___);}
#if 0
#line 1718
{ 
#line 1719
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
#line 1721
return make_float4(v.x, v.y, v.z, v.w); 
#line 1722
} 
#endif
#line 1730 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1731
{int volatile ___ = 1;
#line 1740 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}
#if 0
#line 1731 "c:\\cuda\\include\\texture_fetch_functions.h"
{ 
#line 1735 "c:\\cuda\\include\\texture_fetch_functions.h"
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1737 "c:\\cuda\\include\\texture_fetch_functions.h"
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1739
return w.x; 
#line 1740
} 
#endif
#line 1742 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1743
{int volatile ___ = 1;
#line 1748
exit(___);}
#if 0
#line 1743
{ 
#line 1744
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1745
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1747
return w.x; 
#line 1748
} 
#endif
#line 1750 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1751
{int volatile ___ = 1;
#line 1756
exit(___);}
#if 0
#line 1751
{ 
#line 1752
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1753
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1755
return w.x; 
#line 1756
} 
#endif
#line 1758 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1759
{int volatile ___ = 1;
#line 1764
exit(___);}
#if 0
#line 1759
{ 
#line 1760
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1761
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1763
return make_float1(w.x); 
#line 1764
} 
#endif
#line 1766 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1767
{int volatile ___ = 1;
#line 1772
exit(___);}
#if 0
#line 1767
{ 
#line 1768
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1769
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1771
return make_float1(w.x); 
#line 1772
} 
#endif
#line 1774 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1775
{int volatile ___ = 1;
#line 1780
exit(___);}
#if 0
#line 1775
{ 
#line 1776
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1777
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1779
return make_float2(w.x, w.y); 
#line 1780
} 
#endif
#line 1782 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1783
{int volatile ___ = 1;
#line 1788
exit(___);}
#if 0
#line 1783
{ 
#line 1784
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1785
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1787
return make_float2(w.x, w.y); 
#line 1788
} 
#endif
#line 1790 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1791
{int volatile ___ = 1;
#line 1796
exit(___);}
#if 0
#line 1791
{ 
#line 1792
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1793
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1795
return make_float4(w.x, w.y, w.z, w.w); 
#line 1796
} 
#endif
#line 1798 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1799
{int volatile ___ = 1;
#line 1804
exit(___);}
#if 0
#line 1799
{ 
#line 1800
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1801
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1803
return make_float4(w.x, w.y, w.z, w.w); 
#line 1804
} 
#endif
#line 1812 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1813
{int volatile ___ = 1;
#line 1818
exit(___);}
#if 0
#line 1813
{ 
#line 1814
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1815
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1817
return w.x; 
#line 1818
} 
#endif
#line 1820 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1821
{int volatile ___ = 1;
#line 1826
exit(___);}
#if 0
#line 1821
{ 
#line 1822
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1823
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1825
return w.x; 
#line 1826
} 
#endif
#line 1828 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1829
{int volatile ___ = 1;
#line 1834
exit(___);}
#if 0
#line 1829
{ 
#line 1830
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1831
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1833
return make_float1(w.x); 
#line 1834
} 
#endif
#line 1836 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1837
{int volatile ___ = 1;
#line 1842
exit(___);}
#if 0
#line 1837
{ 
#line 1838
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1839
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1841
return make_float1(w.x); 
#line 1842
} 
#endif
#line 1844 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1845
{int volatile ___ = 1;
#line 1850
exit(___);}
#if 0
#line 1845
{ 
#line 1846
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1847
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1849
return make_float2(w.x, w.y); 
#line 1850
} 
#endif
#line 1852 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1853
{int volatile ___ = 1;
#line 1858
exit(___);}
#if 0
#line 1853
{ 
#line 1854
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1855
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1857
return make_float2(w.x, w.y); 
#line 1858
} 
#endif
#line 1860 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1861
{int volatile ___ = 1;
#line 1866
exit(___);}
#if 0
#line 1861
{ 
#line 1862
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
#line 1863
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1865
return make_float4(w.x, w.y, w.z, w.w); 
#line 1866
} 
#endif
#line 1868 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1869
{int volatile ___ = 1;
#line 1874
exit(___);}
#if 0
#line 1869
{ 
#line 1870
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
#line 1871
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
#line 1873
return make_float4(w.x, w.y, w.z, w.w); 
#line 1874
} 
#endif
#line 53 "c:\\cuda\\include\\device_launch_parameters.h"
#if 0
extern "C" const uint3 
#line 53
threadIdx; 
#endif
#line 55 "c:\\cuda\\include\\device_launch_parameters.h"
#if 0
extern "C" const uint3 
#line 55
blockIdx; 
#endif
#line 57 "c:\\cuda\\include\\device_launch_parameters.h"
#if 0
extern "C" const dim3 
#line 57
blockDim; 
#endif
#line 59 "c:\\cuda\\include\\device_launch_parameters.h"
#if 0
extern "C" const dim3 
#line 59
gridDim; 
#endif
#line 61 "c:\\cuda\\include\\device_launch_parameters.h"
#if 0
extern "C" const int 
#line 61
warpSize; 
#endif
#line 102 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 103
cudaSetupArgument(T 
#line 104
arg, size_t 
#line 105
offset) 
#line 107
{ 
#line 108
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
#line 109
} 
#line 111
template<class T> __inline cudaError_t 
#line 112
cudaHostAlloc(T **
#line 113
ptr, size_t 
#line 114
size, unsigned 
#line 115
flags) 
#line 117
{ 
#line 118
return cudaHostAlloc((void **)((void *)ptr), size, flags); 
#line 119
} 
#line 121
template<class T> __inline cudaError_t 
#line 122
cudaHostGetDevicePointer(T **
#line 123
pDevice, void *
#line 124
pHost, unsigned 
#line 125
flags) 
#line 127
{ 
#line 128
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
#line 129
} 
#line 131
template<class T> __inline cudaError_t 
#line 132
cudaMalloc(T **
#line 133
devPtr, size_t 
#line 134
size) 
#line 136
{ 
#line 137
return cudaMalloc((void **)((void *)devPtr), size); 
#line 138
} 
#line 140
template<class T> __inline cudaError_t 
#line 141
cudaMallocHost(T **
#line 142
ptr, size_t 
#line 143
size) 
#line 145
{ 
#line 146
return cudaMallocHost((void **)((void *)ptr), size); 
#line 147
} 
#line 149
template<class T> __inline cudaError_t 
#line 150
cudaMallocPitch(T **
#line 151
devPtr, size_t *
#line 152
pitch, size_t 
#line 153
width, size_t 
#line 154
height) 
#line 156
{ 
#line 157
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
#line 158
} 
#line 173
static __inline cudaError_t cudaMemcpyToSymbol(char *
#line 174
symbol, const void *
#line 175
src, size_t 
#line 176
count, size_t 
#line 177
offset = (0), cudaMemcpyKind 
#line 178
kind = cudaMemcpyHostToDevice) 
#line 180
{ 
#line 181
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind); 
#line 182
} 
#line 184
template<class T> __inline cudaError_t 
#line 185
cudaMemcpyToSymbol(const T &
#line 186
symbol, const void *
#line 187
src, size_t 
#line 188
count, size_t 
#line 189
offset = (0), cudaMemcpyKind 
#line 190
kind = cudaMemcpyHostToDevice) 
#line 192
{ 
#line 193
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind); 
#line 194
} 
#line 196
static __inline cudaError_t cudaMemcpyToSymbolAsync(char *
#line 197
symbol, const void *
#line 198
src, size_t 
#line 199
count, size_t 
#line 200
offset = (0), cudaMemcpyKind 
#line 201
kind = cudaMemcpyHostToDevice, cudaStream_t 
#line 202
stream = 0) 
#line 204
{ 
#line 205
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream); 
#line 206
} 
#line 208
template<class T> __inline cudaError_t 
#line 209
cudaMemcpyToSymbolAsync(const T &
#line 210
symbol, const void *
#line 211
src, size_t 
#line 212
count, size_t 
#line 213
offset = (0), cudaMemcpyKind 
#line 214
kind = cudaMemcpyHostToDevice, cudaStream_t 
#line 215
stream = 0) 
#line 217
{ 
#line 218
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream); 
#line 219
} 
#line 227
static __inline cudaError_t cudaMemcpyFromSymbol(void *
#line 228
dst, char *
#line 229
symbol, size_t 
#line 230
count, size_t 
#line 231
offset = (0), cudaMemcpyKind 
#line 232
kind = cudaMemcpyDeviceToHost) 
#line 234
{ 
#line 235
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind); 
#line 236
} 
#line 238
template<class T> __inline cudaError_t 
#line 239
cudaMemcpyFromSymbol(void *
#line 240
dst, const T &
#line 241
symbol, size_t 
#line 242
count, size_t 
#line 243
offset = (0), cudaMemcpyKind 
#line 244
kind = cudaMemcpyDeviceToHost) 
#line 246
{ 
#line 247
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind); 
#line 248
} 
#line 250
static __inline cudaError_t cudaMemcpyFromSymbolAsync(void *
#line 251
dst, char *
#line 252
symbol, size_t 
#line 253
count, size_t 
#line 254
offset = (0), cudaMemcpyKind 
#line 255
kind = cudaMemcpyDeviceToHost, cudaStream_t 
#line 256
stream = 0) 
#line 258
{ 
#line 259
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream); 
#line 260
} 
#line 262
template<class T> __inline cudaError_t 
#line 263
cudaMemcpyFromSymbolAsync(void *
#line 264
dst, const T &
#line 265
symbol, size_t 
#line 266
count, size_t 
#line 267
offset = (0), cudaMemcpyKind 
#line 268
kind = cudaMemcpyDeviceToHost, cudaStream_t 
#line 269
stream = 0) 
#line 271
{ 
#line 272
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream); 
#line 273
} 
#line 275
static __inline cudaError_t cudaGetSymbolAddress(void **
#line 276
devPtr, char *
#line 277
symbol) 
#line 279
{ 
#line 280
return cudaGetSymbolAddress(devPtr, (const char *)symbol); 
#line 281
} 
#line 308
template<class T> __inline cudaError_t 
#line 309
cudaGetSymbolAddress(void **
#line 310
devPtr, const T &
#line 311
symbol) 
#line 313
{ 
#line 314
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol)); 
#line 315
} 
#line 323
static __inline cudaError_t cudaGetSymbolSize(size_t *
#line 324
size, char *
#line 325
symbol) 
#line 327
{ 
#line 328
return cudaGetSymbolSize(size, (const char *)symbol); 
#line 329
} 
#line 356
template<class T> __inline cudaError_t 
#line 357
cudaGetSymbolSize(size_t *
#line 358
size, const T &
#line 359
symbol) 
#line 361
{ 
#line 362
return cudaGetSymbolSize(size, (const char *)(&symbol)); 
#line 363
} 
#line 412
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 413
cudaBindTexture(size_t *
#line 414
offset, const texture< T, dim, readMode>  &
#line 415
tex, const void *
#line 416
devPtr, const cudaChannelFormatDesc &
#line 417
desc, size_t 
#line 418
size = (4294967295U)) 
#line 420
{ 
#line 421
return cudaBindTexture(offset, &tex, devPtr, &desc, size); 
#line 422
} 
#line 456
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 457
cudaBindTexture(size_t *
#line 458
offset, const texture< T, dim, readMode>  &
#line 459
tex, const void *
#line 460
devPtr, size_t 
#line 461
size = (4294967295U)) 
#line 463
{ 
#line 464
return cudaBindTexture(offset, tex, devPtr, (tex.texture< T, dim, readMode> ::channelDesc), size); 
#line 465
} 
#line 511
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 512
cudaBindTexture2D(size_t *
#line 513
offset, const texture< T, dim, readMode>  &
#line 514
tex, const void *
#line 515
devPtr, const cudaChannelFormatDesc &
#line 516
desc, size_t 
#line 517
width, size_t 
#line 518
height, size_t 
#line 519
pitch) 
#line 521
{ 
#line 522
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
#line 523
} 
#line 553
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 554
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 555
tex, const cudaArray *
#line 556
array, const cudaChannelFormatDesc &
#line 557
desc) 
#line 559
{ 
#line 560
return cudaBindTextureToArray(&tex, array, &desc); 
#line 561
} 
#line 590
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 591
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 592
tex, const cudaArray *
#line 593
array) 
#line 595
{ 
#line 596
cudaChannelFormatDesc desc; 
#line 597
cudaError_t err = cudaGetChannelDesc(&desc, array); 
#line 599
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
#line 600
} 
#line 628
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 629
cudaUnbindTexture(const texture< T, dim, readMode>  &
#line 630
tex) 
#line 632
{ 
#line 633
return cudaUnbindTexture(&tex); 
#line 634
} 
#line 667
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 668
cudaGetTextureAlignmentOffset(size_t *
#line 669
offset, const texture< T, dim, readMode>  &
#line 670
tex) 
#line 672
{ 
#line 673
return cudaGetTextureAlignmentOffset(offset, &tex); 
#line 674
} 
#line 724
template<class T> __inline cudaError_t 
#line 725
cudaFuncSetCacheConfig(T *
#line 726
func, cudaFuncCache 
#line 727
cacheConfig) 
#line 729
{ 
#line 730
return cudaFuncSetCacheConfig((const char *)func, cacheConfig); 
#line 731
} 
#line 768
template<class T> __inline cudaError_t 
#line 769
cudaLaunch(T *
#line 770
entry) 
#line 772
{ 
#line 773
return cudaLaunch((const char *)entry); 
#line 774
} 
#line 805
template<class T> __inline cudaError_t 
#line 806
cudaFuncGetAttributes(cudaFuncAttributes *
#line 807
attr, T *
#line 808
entry) 
#line 810
{ 
#line 811
return cudaFuncGetAttributes(attr, (const char *)entry); 
#line 812
} 
#line 835
template<class T, int dim> __inline cudaError_t 
#line 836
cudaBindSurfaceToArray(const surface< T, dim>  &
#line 837
surf, const cudaArray *
#line 838
array, const cudaChannelFormatDesc &
#line 839
desc) 
#line 841
{ 
#line 842
return cudaBindSurfaceToArray(&surf, array, &desc); 
#line 843
} 
#line 865
template<class T, int dim> __inline cudaError_t 
#line 866
cudaBindSurfaceToArray(const surface< T, dim>  &
#line 867
surf, const cudaArray *
#line 868
array) 
#line 870
{ 
#line 871
cudaChannelFormatDesc desc; 
#line 872
cudaError_t err = cudaGetChannelDesc(&desc, array); 
#line 874
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
#line 875
} 
#line 28 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#pragma pack ( push, 8 )
#line 59 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { struct _iobuf { 
#line 60
char *_ptr; 
#line 61
int _cnt; 
#line 62
char *_base; 
#line 63
int _flag; 
#line 64
int _file; 
#line 65
int _charbuf; 
#line 66
int _bufsiz; 
#line 67
char *_tmpfname; 
#line 68
}; }
#line 69
extern "C" { typedef _iobuf FILE; }
#line 132 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl __iob_func(); } 
#line 148 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { typedef __int64 fpos_t; }
#line 189 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _filbuf(FILE *); } 
#line 190
extern "C" { int __cdecl _flsbuf(int, FILE *); } 
#line 195
extern "C" { FILE *__cdecl _fsopen(const char *, const char *, int); } 
#line 198 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { void __cdecl clearerr(FILE *); } 
#line 200
extern "C" { errno_t __cdecl clearerr_s(FILE *); } 
#line 202 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fclose(FILE *); } 
#line 203
extern "C" { int __cdecl _fcloseall(); } 
#line 208
extern "C" { FILE *__cdecl _fdopen(int, const char *); } 
#line 211 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl feof(FILE *); } 
#line 212
extern "C" { int __cdecl ferror(FILE *); } 
#line 213
extern "C" { int __cdecl fflush(FILE *); } 
#line 214
extern "C" { int __cdecl fgetc(FILE *); } 
#line 215
extern "C" { int __cdecl _fgetchar(); } 
#line 216
extern "C" { int __cdecl fgetpos(FILE *, fpos_t *); } 
#line 217
extern "C" { char *__cdecl fgets(char *, int, FILE *); } 
#line 222
extern "C" { int __cdecl _fileno(FILE *); } 
#line 230 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { char *__cdecl _tempnam(const char *, const char *); } 
#line 236 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _flushall(); } 
#line 237
extern "C" { FILE *__cdecl fopen(const char *, const char *); } 
#line 239
extern "C" { errno_t __cdecl fopen_s(FILE **, const char *, const char *); } 
#line 241 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fprintf(FILE *, const char *, ...); } 
#line 243
extern "C" { int __cdecl fprintf_s(FILE *, const char *, ...); } 
#line 245 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fputc(int, FILE *); } 
#line 246
extern "C" { int __cdecl _fputchar(int); } 
#line 247
extern "C" { int __cdecl fputs(const char *, FILE *); } 
#line 248
extern "C" { size_t __cdecl fread(void *, size_t, size_t, FILE *); } 
#line 250
extern "C" { size_t __cdecl fread_s(void *, size_t, size_t, size_t, FILE *); } 
#line 252 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl freopen(const char *, const char *, FILE *); } 
#line 254
extern "C" { errno_t __cdecl freopen_s(FILE **, const char *, const char *, FILE *); } 
#line 256 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fscanf(FILE *, const char *, ...); } 
#line 257
extern "C" { int __cdecl _fscanf_l(FILE *, const char *, _locale_t, ...); } 
#pragma warning(push)
#pragma warning(disable:6530)
#line 261
extern "C" { int __cdecl fscanf_s(FILE *, const char *, ...); } 
#line 263 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fscanf_s_l(FILE *, const char *, _locale_t, ...); } 
#line 264
extern "C" { int __cdecl fsetpos(FILE *, const fpos_t *); } 
#line 265
extern "C" { int __cdecl fseek(FILE *, long, int); } 
#line 266
extern "C" { long __cdecl ftell(FILE *); } 
#line 268
extern "C" { int __cdecl _fseeki64(FILE *, __int64, int); } 
#line 269
extern "C" { __int64 __cdecl _ftelli64(FILE *); } 
#line 271
extern "C" { size_t __cdecl fwrite(const void *, size_t, size_t, FILE *); } 
#line 272
extern "C" { int __cdecl getc(FILE *); } 
#line 273
extern "C" { int __cdecl getchar(); } 
#line 274
extern "C" { int __cdecl _getmaxstdio(); } 
#line 276
extern "C" { char *__cdecl gets_s(char *, rsize_t); } 
#line 278 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline char * __cdecl gets_s ( char ( & _Buffer ) [ _Size ] ) { return gets_s ( _Buffer, _Size ); }
#line 279
extern "C" { char *__cdecl gets(char *); } 
#line 280
extern "C" { int __cdecl _getw(FILE *); } 
#line 285
extern "C" { int __cdecl _pclose(FILE *); } 
#line 286
extern "C" { FILE *__cdecl _popen(const char *, const char *); } 
#line 287
extern "C" { int __cdecl printf(const char *, ...); } 
#line 289
extern "C" { int __cdecl printf_s(const char *, ...); } 
#line 291 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl putc(int, FILE *); } 
#line 292
extern "C" { int __cdecl putchar(int); } 
#line 293
extern "C" { int __cdecl puts(const char *); } 
#line 294
extern "C" { int __cdecl _putw(int, FILE *); } 
#line 297
extern "C" { int __cdecl remove(const char *); } 
#line 298
extern "C" { int __cdecl rename(const char *, const char *); } 
#line 299
extern "C" { int __cdecl _unlink(const char *); } 
#line 301
extern "C" { int __cdecl unlink(const char *); } 
#line 304 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { void __cdecl rewind(FILE *); } 
#line 305
extern "C" { int __cdecl _rmtmp(); } 
#line 306
extern "C" { int __cdecl scanf(const char *, ...); } 
#line 307
extern "C" { int __cdecl _scanf_l(const char *, _locale_t, ...); } 
#line 309
extern "C" { int __cdecl scanf_s(const char *, ...); } 
#line 311 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scanf_s_l(const char *, _locale_t, ...); } 
#line 312
extern "C" { void __cdecl setbuf(FILE *, char *); } 
#line 313
extern "C" { int __cdecl _setmaxstdio(int); } 
#line 314
extern "C" { unsigned __cdecl _set_output_format(unsigned); } 
#line 315
extern "C" { unsigned __cdecl _get_output_format(); } 
#line 316
extern "C" { int __cdecl setvbuf(FILE *, char *, int, size_t); } 
#line 317
extern "C" { int __cdecl _snprintf_s(char *, size_t, size_t, const char *, ...); } 
#line 318
__pragma( warning(push)) __pragma( warning(disable: 4793)) template < size_t _Size > inline int __cdecl _snprintf_s ( char ( & _Dest ) [ _Size ], size_t _MaxCount, const char * _Format, ... ) { va_list _ArgList; ( __va_start ( & _ArgList, _Format ) ); return _vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _ArgList ); }__pragma( warning(pop)) 
#line 320
extern "C" { int __cdecl sprintf_s(char *, size_t, const char *, ...); } 
#line 322 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
__pragma( warning(push)) __pragma( warning(disable: 4793)) template < size_t _Size > inline int __cdecl sprintf_s ( char ( & _Dest ) [ _Size ], const char * _Format, ... ) { va_list _ArgList; ( __va_start ( & _ArgList, _Format ) ); return vsprintf_s ( _Dest, _Size, _Format, _ArgList ); }__pragma( warning(pop)) 
#line 323
extern "C" { int __cdecl _scprintf(const char *, ...); } 
#line 324
extern "C" { int __cdecl sscanf(const char *, const char *, ...); } 
#line 325
extern "C" { int __cdecl _sscanf_l(const char *, const char *, _locale_t, ...); } 
#line 327
extern "C" { int __cdecl sscanf_s(const char *, const char *, ...); } 
#line 329 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _sscanf_s_l(const char *, const char *, _locale_t, ...); } 
#line 330
extern "C" { int __cdecl _snscanf(const char *, size_t, const char *, ...); } 
#line 331
extern "C" { int __cdecl _snscanf_l(const char *, size_t, const char *, _locale_t, ...); } 
#line 332
extern "C" { int __cdecl _snscanf_s(const char *, size_t, const char *, ...); } 
#line 333
extern "C" { int __cdecl _snscanf_s_l(const char *, size_t, const char *, _locale_t, ...); } 
#line 334
extern "C" { FILE *__cdecl tmpfile(); } 
#line 336
extern "C" { errno_t __cdecl tmpfile_s(FILE **); } 
#line 337
extern "C" { errno_t __cdecl tmpnam_s(char *, rsize_t); } 
#line 339 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline errno_t __cdecl tmpnam_s ( char ( & _Buf ) [ _Size ] ) { return tmpnam_s ( _Buf, _Size ); }
#line 340
extern "C" { char *__cdecl tmpnam(char *); } 
#line 341
extern "C" { int __cdecl ungetc(int, FILE *); } 
#line 342
extern "C" { int __cdecl vfprintf(FILE *, const char *, va_list); } 
#line 344
extern "C" { int __cdecl vfprintf_s(FILE *, const char *, va_list); } 
#line 346 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vprintf(const char *, va_list); } 
#line 348
extern "C" { int __cdecl vprintf_s(const char *, va_list); } 
#line 350 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vsnprintf(char *, size_t, const char *, va_list); } 
#line 352
extern "C" { int __cdecl vsnprintf_s(char *, size_t, size_t, const char *, va_list); } 
#line 354 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnprintf_s(char *, size_t, size_t, const char *, va_list); } 
#line 355
template < size_t _Size > inline int __cdecl _vsnprintf_s ( char ( & _Dest ) [ _Size ], size_t _MaxCount, const char * _Format, va_list _Args ) { return _vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _Args ); }
#pragma warning(push)
#pragma warning(disable:4793)
extern "C" { int __cdecl _snprintf(char *, size_t, const char *, ...); } extern "C" { int __cdecl _vsnprintf(char *, size_t, const char *, va_list); } 
#pragma warning(pop)
#line 361
extern "C" { int __cdecl vsprintf_s(char *, size_t, const char *, va_list); } 
#line 363 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline int __cdecl vsprintf_s ( char ( & _Dest ) [ _Size ], const char * _Format, va_list _Args ) { return vsprintf_s ( _Dest, _Size, _Format, _Args ); }
#pragma warning(push)
#pragma warning(disable:4793)
extern "C" { int __cdecl sprintf(char *, const char *, ...); } extern "C" { int __cdecl vsprintf(char *, const char *, va_list); } 
#pragma warning(pop)
extern "C" { int __cdecl _vscprintf(const char *, va_list); } 
#line 369
extern "C" { int __cdecl _snprintf_c(char *, size_t, const char *, ...); } 
#line 370
extern "C" { int __cdecl _vsnprintf_c(char *, size_t, const char *, va_list); } 
#line 372
extern "C" { int __cdecl _fprintf_p(FILE *, const char *, ...); } 
#line 373
extern "C" { int __cdecl _printf_p(const char *, ...); } 
#line 374
extern "C" { int __cdecl _sprintf_p(char *, size_t, const char *, ...); } 
#line 375
extern "C" { int __cdecl _vfprintf_p(FILE *, const char *, va_list); } 
#line 376
extern "C" { int __cdecl _vprintf_p(const char *, va_list); } 
#line 377
extern "C" { int __cdecl _vsprintf_p(char *, size_t, const char *, va_list); } 
#line 378
extern "C" { int __cdecl _scprintf_p(const char *, ...); } 
#line 379
extern "C" { int __cdecl _vscprintf_p(const char *, va_list); } 
#line 380
extern "C" { int __cdecl _set_printf_count_output(int); } 
#line 381
extern "C" { int __cdecl _get_printf_count_output(); } 
#line 383
extern "C" { int __cdecl _printf_l(const char *, _locale_t, ...); } 
#line 384
extern "C" { int __cdecl _printf_p_l(const char *, _locale_t, ...); } 
#line 385
extern "C" { int __cdecl _printf_s_l(const char *, _locale_t, ...); } 
#line 386
extern "C" { int __cdecl _vprintf_l(const char *, _locale_t, va_list); } 
#line 387
extern "C" { int __cdecl _vprintf_p_l(const char *, _locale_t, va_list); } 
#line 388
extern "C" { int __cdecl _vprintf_s_l(const char *, _locale_t, va_list); } 
#line 390
extern "C" { int __cdecl _fprintf_l(FILE *, const char *, _locale_t, ...); } 
#line 391
extern "C" { int __cdecl _fprintf_p_l(FILE *, const char *, _locale_t, ...); } 
#line 392
extern "C" { int __cdecl _fprintf_s_l(FILE *, const char *, _locale_t, ...); } 
#line 393
extern "C" { int __cdecl _vfprintf_l(FILE *, const char *, _locale_t, va_list); } 
#line 394
extern "C" { int __cdecl _vfprintf_p_l(FILE *, const char *, _locale_t, va_list); } 
#line 395
extern "C" { int __cdecl _vfprintf_s_l(FILE *, const char *, _locale_t, va_list); } 
#line 397
extern "C" { int __cdecl _sprintf_l(char *, const char *, _locale_t, ...); } 
#line 398
extern "C" { int __cdecl _sprintf_p_l(char *, size_t, const char *, _locale_t, ...); } 
#line 399
extern "C" { int __cdecl _sprintf_s_l(char *, size_t, const char *, _locale_t, ...); } 
#line 400
extern "C" { int __cdecl _vsprintf_l(char *, const char *, _locale_t, va_list); } 
#line 401
extern "C" { int __cdecl _vsprintf_p_l(char *, size_t, const char *, _locale_t, va_list); } 
#line 402
extern "C" { int __cdecl _vsprintf_s_l(char *, size_t, const char *, _locale_t, va_list); } 
#line 404
extern "C" { int __cdecl _scprintf_l(const char *, _locale_t, ...); } 
#line 405
extern "C" { int __cdecl _scprintf_p_l(const char *, _locale_t, ...); } 
#line 406
extern "C" { int __cdecl _vscprintf_l(const char *, _locale_t, va_list); } 
#line 407
extern "C" { int __cdecl _vscprintf_p_l(const char *, _locale_t, va_list); } 
#line 409
extern "C" { int __cdecl _snprintf_l(char *, size_t, const char *, _locale_t, ...); } 
#line 410
extern "C" { int __cdecl _snprintf_c_l(char *, size_t, const char *, _locale_t, ...); } 
#line 411
extern "C" { int __cdecl _snprintf_s_l(char *, size_t, size_t, const char *, _locale_t, ...); } 
#line 412
extern "C" { int __cdecl _vsnprintf_l(char *, size_t, const char *, _locale_t, va_list); } 
#line 413
extern "C" { int __cdecl _vsnprintf_c_l(char *, size_t, const char *, _locale_t, va_list); } 
#line 414
extern "C" { int __cdecl _vsnprintf_s_l(char *, size_t, size_t, const char *, _locale_t, va_list); } 
#line 427 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _wfsopen(const __wchar_t *, const __wchar_t *, int); } 
#line 430 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl fgetwc(FILE *); } 
#line 431
extern "C" { wint_t __cdecl _fgetwchar(); } 
#line 432
extern "C" { wint_t __cdecl fputwc(__wchar_t, FILE *); } 
#line 433
extern "C" { wint_t __cdecl _fputwchar(__wchar_t); } 
#line 434
extern "C" { wint_t __cdecl getwc(FILE *); } 
#line 435
extern "C" { inline wint_t __cdecl getwchar(); } 
#line 436
extern "C" { wint_t __cdecl putwc(__wchar_t, FILE *); } 
#line 437
extern "C" { inline wint_t __cdecl putwchar(__wchar_t); } 
#line 438
extern "C" { wint_t __cdecl ungetwc(wint_t, FILE *); } 
#line 440
extern "C" { __wchar_t *__cdecl fgetws(__wchar_t *, int, FILE *); } 
#line 441
extern "C" { int __cdecl fputws(const __wchar_t *, FILE *); } 
#line 442
extern "C" { __wchar_t *__cdecl _getws_s(__wchar_t *, size_t); } 
#line 443
template < size_t _Size > inline wchar_t * __cdecl _getws_s ( wchar_t ( & _String ) [ _Size ] ) { return _getws_s ( _String, _Size ); }
#line 444
extern "C" { __wchar_t *__cdecl _getws(__wchar_t *); } 
#line 445
extern "C" { int __cdecl _putws(const __wchar_t *); } 
#line 447
extern "C" { int __cdecl fwprintf(FILE *, const __wchar_t *, ...); } 
#line 449
extern "C" { int __cdecl fwprintf_s(FILE *, const __wchar_t *, ...); } 
#line 451 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl wprintf(const __wchar_t *, ...); } 
#line 453
extern "C" { int __cdecl wprintf_s(const __wchar_t *, ...); } 
#line 455 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scwprintf(const __wchar_t *, ...); } 
#line 456
extern "C" { int __cdecl vfwprintf(FILE *, const __wchar_t *, va_list); } 
#line 458
extern "C" { int __cdecl vfwprintf_s(FILE *, const __wchar_t *, va_list); } 
#line 460 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vwprintf(const __wchar_t *, va_list); } 
#line 462
extern "C" { int __cdecl vwprintf_s(const __wchar_t *, va_list); } 
#line 466 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl swprintf_s(__wchar_t *, size_t, const __wchar_t *, ...); } 
#line 468 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
__pragma( warning(push)) __pragma( warning(disable: 4793)) template < size_t _Size > inline int __cdecl swprintf_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Format, ... ) { va_list _ArgList; ( __va_start ( & _ArgList, _Format ) ); return vswprintf_s ( _Dest, _Size, _Format, _ArgList ); }__pragma( warning(pop)) 
#line 470
extern "C" { int __cdecl vswprintf_s(__wchar_t *, size_t, const __wchar_t *, va_list); } 
#line 472 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline int __cdecl vswprintf_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Format, va_list _Args ) { return vswprintf_s ( _Dest, _Size, _Format, _Args ); }
#line 474
extern "C" { int __cdecl _swprintf_c(__wchar_t *, size_t, const __wchar_t *, ...); } 
#line 475
extern "C" { int __cdecl _vswprintf_c(__wchar_t *, size_t, const __wchar_t *, va_list); } 
#line 477
extern "C" { int __cdecl _snwprintf_s(__wchar_t *, size_t, size_t, const __wchar_t *, ...); } 
#line 478
__pragma( warning(push)) __pragma( warning(disable: 4793)) template < size_t _Size > inline int __cdecl _snwprintf_s ( wchar_t ( & _Dest ) [ _Size ], size_t _Count, const wchar_t * _Format, ... ) { va_list _ArgList; ( __va_start ( & _ArgList, _Format ) ); return _vsnwprintf_s ( _Dest, _Size, _Count, _Format, _ArgList ); }__pragma( warning(pop)) 
#line 479
extern "C" { int __cdecl _vsnwprintf_s(__wchar_t *, size_t, size_t, const __wchar_t *, va_list); } 
#line 480
template < size_t _Size > inline int __cdecl _vsnwprintf_s ( wchar_t ( & _Dest ) [ _Size ], size_t _Count, const wchar_t * _Format, va_list _Args ) { return _vsnwprintf_s ( _Dest, _Size, _Count, _Format, _Args ); }
#pragma warning(push)
#pragma warning(disable:4793)
extern "C" { int __cdecl _snwprintf(__wchar_t *, size_t, const __wchar_t *, ...); } extern "C" { int __cdecl _vsnwprintf(__wchar_t *, size_t, const __wchar_t *, va_list); } 
#pragma warning(pop)
#line 486
extern "C" { int __cdecl _fwprintf_p(FILE *, const __wchar_t *, ...); } 
#line 487
extern "C" { int __cdecl _wprintf_p(const __wchar_t *, ...); } 
#line 488
extern "C" { int __cdecl _vfwprintf_p(FILE *, const __wchar_t *, va_list); } 
#line 489
extern "C" { int __cdecl _vwprintf_p(const __wchar_t *, va_list); } 
#line 490
extern "C" { int __cdecl _swprintf_p(__wchar_t *, size_t, const __wchar_t *, ...); } 
#line 491
extern "C" { int __cdecl _vswprintf_p(__wchar_t *, size_t, const __wchar_t *, va_list); } 
#line 492
extern "C" { int __cdecl _scwprintf_p(const __wchar_t *, ...); } 
#line 493
extern "C" { int __cdecl _vscwprintf_p(const __wchar_t *, va_list); } 
#line 495
extern "C" { int __cdecl _wprintf_l(const __wchar_t *, _locale_t, ...); } 
#line 496
extern "C" { int __cdecl _wprintf_p_l(const __wchar_t *, _locale_t, ...); } 
#line 497
extern "C" { int __cdecl _wprintf_s_l(const __wchar_t *, _locale_t, ...); } 
#line 498
extern "C" { int __cdecl _vwprintf_l(const __wchar_t *, _locale_t, va_list); } 
#line 499
extern "C" { int __cdecl _vwprintf_p_l(const __wchar_t *, _locale_t, va_list); } 
#line 500
extern "C" { int __cdecl _vwprintf_s_l(const __wchar_t *, _locale_t, va_list); } 
#line 502
extern "C" { int __cdecl _fwprintf_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 503
extern "C" { int __cdecl _fwprintf_p_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 504
extern "C" { int __cdecl _fwprintf_s_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 505
extern "C" { int __cdecl _vfwprintf_l(FILE *, const __wchar_t *, _locale_t, va_list); } 
#line 506
extern "C" { int __cdecl _vfwprintf_p_l(FILE *, const __wchar_t *, _locale_t, va_list); } 
#line 507
extern "C" { int __cdecl _vfwprintf_s_l(FILE *, const __wchar_t *, _locale_t, va_list); } 
#line 509
extern "C" { int __cdecl _swprintf_c_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 510
extern "C" { int __cdecl _swprintf_p_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 511
extern "C" { int __cdecl _swprintf_s_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 512
extern "C" { int __cdecl _vswprintf_c_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 513
extern "C" { int __cdecl _vswprintf_p_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 514
extern "C" { int __cdecl _vswprintf_s_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 516
extern "C" { int __cdecl _scwprintf_l(const __wchar_t *, _locale_t, ...); } 
#line 517
extern "C" { int __cdecl _scwprintf_p_l(const __wchar_t *, _locale_t, ...); } 
#line 518
extern "C" { int __cdecl _vscwprintf_p_l(const __wchar_t *, _locale_t, va_list); } 
#line 520
extern "C" { int __cdecl _snwprintf_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 521
extern "C" { int __cdecl _snwprintf_s_l(__wchar_t *, size_t, size_t, const __wchar_t *, _locale_t, ...); } 
#line 522
extern "C" { int __cdecl _vsnwprintf_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 523
extern "C" { int __cdecl _vsnwprintf_s_l(__wchar_t *, size_t, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 537 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#pragma warning(push)
#pragma warning(disable:4141 4996 4793)
extern "C" { __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl _swprintf(__wchar_t *, const __wchar_t *, ...); } extern "C" { __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl _vswprintf(__wchar_t *, const __wchar_t *, va_list); } 
#line 540
extern "C" { __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl __swprintf_l(__wchar_t *, const __wchar_t *, _locale_t, ...); } extern "C" { __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl __vswprintf_l(__wchar_t *, const __wchar_t *, _locale_t, va_list); } 
#pragma warning(pop)
#line 34 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4793 4412 )
extern "C" { static __inline int swprintf(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, ...) 
#line 37
{ 
#line 38
va_list _Arglist; 
#line 39
int _Ret; 
#line 40
__va_start(&_Arglist, _Format); 
#line 41
_Ret = _vswprintf_c_l(_String, _Count, _Format, 0, _Arglist); 
#line 42
_Arglist = ((va_list)0); 
#line 43
return _Ret; 
#line 44
} } 
#pragma warning( pop )
#line 47
#pragma warning( push )
#pragma warning( disable : 4412 )
extern "C" { static __inline int __cdecl vswprintf(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, va_list _Ap) 
#line 50
{ 
#line 51
return _vswprintf_c_l(_String, _Count, _Format, 0, _Ap); 
#line 52
} } 
#pragma warning( pop )
#line 58 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4793 4412 )
extern "C" { static __inline int _swprintf_l(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, _locale_t _Plocinfo, ...) 
#line 61
{ 
#line 62
va_list _Arglist; 
#line 63
int _Ret; 
#line 64
__va_start(&_Arglist, _Plocinfo); 
#line 65
_Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist); 
#line 66
_Arglist = ((va_list)0); 
#line 67
return _Ret; 
#line 68
} } 
#pragma warning( pop )
#line 71
#pragma warning( push )
#pragma warning( disable : 4412 )
extern "C" { static __inline int __cdecl _vswprintf_l(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, _locale_t _Plocinfo, va_list _Ap) 
#line 74
{ 
#line 75
return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap); 
#line 76
} } 
#pragma warning( pop )
#line 80
#pragma warning( push )
#pragma warning( disable : 4996 )
#line 83
#pragma warning( push )
#pragma warning( disable : 4793 4141 )
__inline __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int swprintf(__wchar_t *_String, const __wchar_t *_Format, ...) 
#line 86
{ 
#line 87
va_list _Arglist; 
#line 88
__va_start(&_Arglist, _Format); 
#line 89
int _Ret = _vswprintf(_String, _Format, _Arglist); 
#line 90
_Arglist = ((va_list)0); 
#line 91
return _Ret; 
#line 92
} 
#pragma warning( pop )
#line 95
#pragma warning( push )
#pragma warning( disable : 4141 )
__inline __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl vswprintf(__wchar_t *_String, const __wchar_t *_Format, va_list _Ap) 
#line 98
{ 
#line 99
return _vswprintf(_String, _Format, _Ap); 
#line 100
} 
#pragma warning( pop )
#line 103
#pragma warning( push )
#pragma warning( disable : 4793 4141 )
__inline __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int _swprintf_l(__wchar_t *_String, const __wchar_t *_Format, _locale_t _Plocinfo, ...) 
#line 106
{ 
#line 107
va_list _Arglist; 
#line 108
__va_start(&_Arglist, _Plocinfo); 
#line 109
int _Ret = __vswprintf_l(_String, _Format, _Plocinfo, _Arglist); 
#line 110
_Arglist = ((va_list)0); 
#line 111
return _Ret; 
#line 112
} 
#pragma warning( pop )
#line 115
#pragma warning( push )
#pragma warning( disable : 4141 )
__inline __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl _vswprintf_l(__wchar_t *_String, const __wchar_t *_Format, _locale_t _Plocinfo, va_list _Ap) 
#line 118
{ 
#line 119
return __vswprintf_l(_String, _Format, _Plocinfo, _Ap); 
#line 120
} 
#pragma warning( pop )
#line 123
#pragma warning( pop )
#line 561 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __wchar_t *__cdecl _wtempnam(const __wchar_t *, const __wchar_t *); } 
#line 567 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vscwprintf(const __wchar_t *, va_list); } 
#line 568
extern "C" { int __cdecl _vscwprintf_l(const __wchar_t *, _locale_t, va_list); } 
#line 569
extern "C" { int __cdecl fwscanf(FILE *, const __wchar_t *, ...); } 
#line 570
extern "C" { int __cdecl _fwscanf_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 572
extern "C" { int __cdecl fwscanf_s(FILE *, const __wchar_t *, ...); } 
#line 574 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fwscanf_s_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 575
extern "C" { int __cdecl swscanf(const __wchar_t *, const __wchar_t *, ...); } 
#line 576
extern "C" { int __cdecl _swscanf_l(const __wchar_t *, const __wchar_t *, _locale_t, ...); } 
#line 578
extern "C" { int __cdecl swscanf_s(const __wchar_t *, const __wchar_t *, ...); } 
#line 580 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _swscanf_s_l(const __wchar_t *, const __wchar_t *, _locale_t, ...); } 
#line 581
extern "C" { int __cdecl _snwscanf(const __wchar_t *, size_t, const __wchar_t *, ...); } 
#line 582
extern "C" { int __cdecl _snwscanf_l(const __wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 583
extern "C" { int __cdecl _snwscanf_s(const __wchar_t *, size_t, const __wchar_t *, ...); } 
#line 584
extern "C" { int __cdecl _snwscanf_s_l(const __wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 585
extern "C" { int __cdecl wscanf(const __wchar_t *, ...); } 
#line 586
extern "C" { int __cdecl _wscanf_l(const __wchar_t *, _locale_t, ...); } 
#line 588
extern "C" { int __cdecl wscanf_s(const __wchar_t *, ...); } 
#line 590 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _wscanf_s_l(const __wchar_t *, _locale_t, ...); } 
#pragma warning(pop)
#line 593
extern "C" { FILE *__cdecl _wfdopen(int, const __wchar_t *); } 
#line 594
extern "C" { FILE *__cdecl _wfopen(const __wchar_t *, const __wchar_t *); } 
#line 595
extern "C" { errno_t __cdecl _wfopen_s(FILE **, const __wchar_t *, const __wchar_t *); } 
#line 596
extern "C" { FILE *__cdecl _wfreopen(const __wchar_t *, const __wchar_t *, FILE *); } 
#line 597
extern "C" { errno_t __cdecl _wfreopen_s(FILE **, const __wchar_t *, const __wchar_t *, FILE *); } 
#line 603
extern "C" { FILE *__cdecl _wpopen(const __wchar_t *, const __wchar_t *); } 
#line 604
extern "C" { int __cdecl _wremove(const __wchar_t *); } 
#line 605
extern "C" { errno_t __cdecl _wtmpnam_s(__wchar_t *, size_t); } 
#line 606
template < size_t _Size > inline errno_t __cdecl _wtmpnam_s ( wchar_t ( & _Buffer ) [ _Size ] ) { return _wtmpnam_s ( _Buffer, _Size ); }
#line 607
extern "C" { __wchar_t *__cdecl _wtmpnam(__wchar_t *); } 
#line 609
extern "C" { wint_t __cdecl _fgetwc_nolock(FILE *); } 
#line 610
extern "C" { wint_t __cdecl _fputwc_nolock(__wchar_t, FILE *); } 
#line 611
extern "C" { wint_t __cdecl _ungetwc_nolock(wint_t, FILE *); } 
#line 619 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { inline wint_t __cdecl getwchar() 
#line 620
{ return fgetwc(&(__iob_func()[0])); } } 
#line 621
extern "C" { inline wint_t __cdecl putwchar(__wchar_t _C) 
#line 622
{ return fputwc(_C, &(__iob_func()[1])); } } 
#line 669 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { void __cdecl _lock_file(FILE *); } 
#line 670
extern "C" { void __cdecl _unlock_file(FILE *); } 
#line 677 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fclose_nolock(FILE *); } 
#line 678
extern "C" { int __cdecl _fflush_nolock(FILE *); } 
#line 679
extern "C" { size_t __cdecl _fread_nolock(void *, size_t, size_t, FILE *); } 
#line 680
extern "C" { size_t __cdecl _fread_nolock_s(void *, size_t, size_t, size_t, FILE *); } 
#line 681
extern "C" { int __cdecl _fseek_nolock(FILE *, long, int); } 
#line 682
extern "C" { long __cdecl _ftell_nolock(FILE *); } 
#line 683
extern "C" { int __cdecl _fseeki64_nolock(FILE *, __int64, int); } 
#line 684
extern "C" { __int64 __cdecl _ftelli64_nolock(FILE *); } 
#line 685
extern "C" { size_t __cdecl _fwrite_nolock(const void *, size_t, size_t, FILE *); } 
#line 686
extern "C" { int __cdecl _ungetc_nolock(int, FILE *); } 
#line 713 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { char *__cdecl tempnam(const char *, const char *); } 
#line 719 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fcloseall(); } 
#line 720
extern "C" { FILE *__cdecl fdopen(int, const char *); } 
#line 721
extern "C" { int __cdecl fgetchar(); } 
#line 722
extern "C" { int __cdecl fileno(FILE *); } 
#line 723
extern "C" { int __cdecl flushall(); } 
#line 724
extern "C" { int __cdecl fputchar(int); } 
#line 725
extern "C" { int __cdecl getw(FILE *); } 
#line 726
extern "C" { int __cdecl putw(int, FILE *); } 
#line 727
extern "C" { int __cdecl rmtmp(); } 
#line 736 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#pragma pack ( pop )
#line 77 "c:\\cuda\\include\\cuPrintf.cuh"
int cuPrintf(const char *); 
#line 78
template<class T1> int cuPrintf(const char *, T1); 
#line 79
template<class T1, class T2> int cuPrintf(const char *, T1, T2); 
#line 80
template<class T1, class T2, class T3> int cuPrintf(const char *, T1, T2, T3); 
#line 81
template<class T1, class T2, class T3, class T4> int cuPrintf(const char *, T1, T2, T3, T4); 
#line 82
template<class T1, class T2, class T3, class T4, class T5> int cuPrintf(const char *, T1, T2, T3, T4, T5); 
#line 83
template<class T1, class T2, class T3, class T4, class T5, class T6> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6); 
#line 84
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6, T7); 
#line 85
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6, T7, T8); 
#line 86
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6, T7, T8, T9); 
#line 87
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10); 
#line 107
void cuPrintfRestrict(int, int); 
#line 135
extern "C" cudaError_t cudaPrintfInit(size_t = (1048576)); 
#line 143
extern "C" void cudaPrintfEnd(); 
#line 160
extern "C" cudaError_t cudaPrintfDisplay(void * = 0, bool = false); 
#line 94 "C:\\CUDA\\include\\cuPrintf.cu"
static const int CUPRINTF_MAX_LEN = 256; 
#line 100
typedef 
#line 97
struct __declspec(align(8)) { 
#line 98
int threadid; 
#line 99
int blockid; 
#line 100
} cuPrintfRestriction; 
#line 110
__loc_sc__(__constant__,,static ) char *globalPrintfBuffer=(char *)"globalPrintfBuffer"; 
#line 111
__loc_sc__(__constant__,,static ) int printfBufferLength; 
#line 112
__loc_sc__(__device__,,static ) cuPrintfRestriction restrictRules; 
#line 113
__loc_sc__(__device__,,static ) volatile char *printfBufferPtr=(volatile char *)"printfBufferPtr"; 
#line 122
typedef 
#line 117
struct __declspec(align(8)) { 
#line 118
unsigned short magic; 
#line 119
unsigned short fmtoffset; 
#line 120
unsigned short blockid; 
#line 121
unsigned short threadid; 
#line 122
} cuPrintfHeader; 
#line 132
typedef 
#line 126
struct __declspec(align(16)) { 
#line 127
unsigned short magic; 
#line 128
unsigned short unused; 
#line 129
unsigned thread_index; 
#line 130
unsigned thread_buf_len; 
#line 131
unsigned offset; 
#line 132
} cuPrintfHeaderSM10; 
#line 160
static char *getNextPrintfBufPtr() 
#line 161
{int volatile ___ = 1;
#line 222 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}
#if 0
#line 161 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 163
if (!(printfBufferPtr)) { 
#line 164
return 0; }  
#line 167
if (((restrictRules.blockid) != (-1)) && ((restrictRules.blockid) != ((blockIdx.x) + ((gridDim.x) * (blockIdx.y))))) { 
#line 168
return 0; }  
#line 169
if (((restrictRules.threadid) != (-1)) && ((restrictRules.threadid) != (((threadIdx.x) + ((blockDim.x) * (threadIdx.y))) + (((blockDim.x) * (blockDim.y)) * (threadIdx.z))))) { 
#line 170
return 0; }  
#line 218 "C:\\CUDA\\include\\cuPrintf.cu"
size_t offset = ((atomicAdd((unsigned *)(&printfBufferPtr), CUPRINTF_MAX_LEN)) - ((size_t)globalPrintfBuffer)); 
#line 219
offset %= printfBufferLength; 
#line 220
return globalPrintfBuffer + offset; 
#line 222 "C:\\CUDA\\include\\cuPrintf.cu"
} 
#endif
#line 232 "C:\\CUDA\\include\\cuPrintf.cu"
static void writePrintfHeader(char *ptr, char *fmtptr) 
#line 233
{int volatile ___ = 1;
#line 243
exit(___);}
#if 0
#line 233
{ 
#line 234
if (ptr) 
#line 235
{ 
#line 236
cuPrintfHeader header; 
#line 237
(header.magic) = ((unsigned short)51217); 
#line 238
(header.fmtoffset) = ((unsigned short)(fmtptr - ptr)); 
#line 239
(header.blockid) = ((blockIdx.x) + ((gridDim.x) * (blockIdx.y))); 
#line 240
(header.threadid) = (((threadIdx.x) + ((blockDim.x) * (threadIdx.y))) + (((blockDim.x) * (blockDim.y)) * (threadIdx.z))); 
#line 241
(*((cuPrintfHeader *)((void *)ptr))) = header; 
#line 242
}  
#line 243
} 
#endif
#line 257 "C:\\CUDA\\include\\cuPrintf.cu"
static char *cuPrintfStrncpy(char *dest, const char *src, int n, char *end) 
#line 258
{int volatile ___ = 1;
#line 290
exit(___);}
#if 0
#line 258
{ 
#line 260
if (((!(dest)) || (!(src))) || (dest >= end)) { 
#line 261
return 0; }  
#line 266
int *lenptr = ((int *)((void *)dest)); 
#line 267
int len = 0; 
#line 268
dest += sizeof(__int64); 
#line 271
while (n--) 
#line 272
{ 
#line 273
if (dest >= end) { 
#line 274
break; }  
#line 276
len++; 
#line 277
(*(dest++)) = (*src); 
#line 278
if ((*(src++)) == ('\000')) { 
#line 279
break; }  
#line 280
}  
#line 283
while ((dest < end) && ((((long)dest) & (sizeof(__int64) - (1))) != (0))) 
#line 284
{ 
#line 285
len++; 
#line 286
(*(dest++)) = (0); 
#line 287
}  
#line 288
(*lenptr) = len; 
#line 289
return (dest < end) ? dest : (0); 
#line 290
} 
#endif
#line 308 "C:\\CUDA\\include\\cuPrintf.cu"
static char *copyArg(char *ptr, const char *arg, char *end) 
#line 309
{int volatile ___ = 1;
#line 319
exit(___);}
#if 0
#line 309
{ 
#line 311
if ((!(ptr)) || (!(arg))) { 
#line 312
return 0; }  
#line 315
if ((ptr = cuPrintfStrncpy(ptr, arg, CUPRINTF_MAX_LEN, end)) != (0)) { 
#line 316
(*ptr) = (0); }  
#line 318
return ptr; 
#line 319
} 
#endif
#line 321 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T> static char *
#line 322
copyArg(char *ptr, T &arg, char *end) 
#line 323
{int volatile ___ = 1;
#line 338
exit(___);}
#if 0
#line 323
{ 
#line 327
if ((!(ptr)) || ((ptr + sizeof(__int64)) >= end)) { 
#line 328
return 0; }  
#line 331
(*((int *)((void *)ptr))) = (sizeof(arg)); 
#line 332
ptr += sizeof(__int64); 
#line 333
(*((T *)((void *)ptr))) = arg; 
#line 334
ptr += sizeof(__int64); 
#line 335
(*ptr) = (0); 
#line 337
return ptr; 
#line 338
} 
#endif
#line 385 "C:\\CUDA\\include\\cuPrintf.cu"
int cuPrintf(const char *fmt) 
#line 386
{int volatile ___ = 1;
#line 390
exit(___);}
#if 0
#line 386
{ 
#line 387
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 389
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 390
} 
#endif
#line 391 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1> int cuPrintf(const char *fmt, T1 arg1) 
#line 392
{int volatile ___ = 1;
#line 398
exit(___);}
#if 0
#line 392
{ 
#line 393
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 395
bufptr = copyArg(bufptr, arg1, end); ; 
#line 397
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 398
} 
#endif
#line 399 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2> int cuPrintf(const char *fmt, T1 arg1, T2 arg2) 
#line 400
{int volatile ___ = 1;
#line 407
exit(___);}
#if 0
#line 400
{ 
#line 401
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 403
bufptr = copyArg(bufptr, arg1, end); ; 
#line 404
bufptr = copyArg(bufptr, arg2, end); ; 
#line 406
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 407
} 
#endif
#line 408 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3) 
#line 409
{int volatile ___ = 1;
#line 417
exit(___);}
#if 0
#line 409
{ 
#line 410
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 412
bufptr = copyArg(bufptr, arg1, end); ; 
#line 413
bufptr = copyArg(bufptr, arg2, end); ; 
#line 414
bufptr = copyArg(bufptr, arg3, end); ; 
#line 416
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 417
} 
#endif
#line 418 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4) 
#line 419
{int volatile ___ = 1;
#line 428
exit(___);}
#if 0
#line 419
{ 
#line 420
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 422
bufptr = copyArg(bufptr, arg1, end); ; 
#line 423
bufptr = copyArg(bufptr, arg2, end); ; 
#line 424
bufptr = copyArg(bufptr, arg3, end); ; 
#line 425
bufptr = copyArg(bufptr, arg4, end); ; 
#line 427
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 428
} 
#endif
#line 429 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) 
#line 430
{int volatile ___ = 1;
#line 440
exit(___);}
#if 0
#line 430
{ 
#line 431
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 433
bufptr = copyArg(bufptr, arg1, end); ; 
#line 434
bufptr = copyArg(bufptr, arg2, end); ; 
#line 435
bufptr = copyArg(bufptr, arg3, end); ; 
#line 436
bufptr = copyArg(bufptr, arg4, end); ; 
#line 437
bufptr = copyArg(bufptr, arg5, end); ; 
#line 439
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 440
} 
#endif
#line 441 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) 
#line 442
{int volatile ___ = 1;
#line 452
exit(___);}
#if 0
#line 442
{ 
#line 443
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 445
bufptr = copyArg(bufptr, arg1, end); ; 
#line 446
bufptr = copyArg(bufptr, arg2, end); ; 
#line 447
bufptr = copyArg(bufptr, arg3, end); ; 
#line 448
bufptr = copyArg(bufptr, arg4, end); ; 
#line 449
bufptr = copyArg(bufptr, arg5, end); ; 
#line 450
bufptr = copyArg(bufptr, arg6, end); ; 
#line 451
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 452
} 
#endif
#line 453 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) 
#line 454
{int volatile ___ = 1;
#line 466
exit(___);}
#if 0
#line 454
{ 
#line 455
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 457
bufptr = copyArg(bufptr, arg1, end); ; 
#line 458
bufptr = copyArg(bufptr, arg2, end); ; 
#line 459
bufptr = copyArg(bufptr, arg3, end); ; 
#line 460
bufptr = copyArg(bufptr, arg4, end); ; 
#line 461
bufptr = copyArg(bufptr, arg5, end); ; 
#line 462
bufptr = copyArg(bufptr, arg6, end); ; 
#line 463
bufptr = copyArg(bufptr, arg7, end); ; 
#line 465
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 466
} 
#endif
#line 467 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) 
#line 468
{int volatile ___ = 1;
#line 481
exit(___);}
#if 0
#line 468
{ 
#line 469
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 471
bufptr = copyArg(bufptr, arg1, end); ; 
#line 472
bufptr = copyArg(bufptr, arg2, end); ; 
#line 473
bufptr = copyArg(bufptr, arg3, end); ; 
#line 474
bufptr = copyArg(bufptr, arg4, end); ; 
#line 475
bufptr = copyArg(bufptr, arg5, end); ; 
#line 476
bufptr = copyArg(bufptr, arg6, end); ; 
#line 477
bufptr = copyArg(bufptr, arg7, end); ; 
#line 478
bufptr = copyArg(bufptr, arg8, end); ; 
#line 480
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 481
} 
#endif
#line 482 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) 
#line 483
{int volatile ___ = 1;
#line 497
exit(___);}
#if 0
#line 483
{ 
#line 484
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 486
bufptr = copyArg(bufptr, arg1, end); ; 
#line 487
bufptr = copyArg(bufptr, arg2, end); ; 
#line 488
bufptr = copyArg(bufptr, arg3, end); ; 
#line 489
bufptr = copyArg(bufptr, arg4, end); ; 
#line 490
bufptr = copyArg(bufptr, arg5, end); ; 
#line 491
bufptr = copyArg(bufptr, arg6, end); ; 
#line 492
bufptr = copyArg(bufptr, arg7, end); ; 
#line 493
bufptr = copyArg(bufptr, arg8, end); ; 
#line 494
bufptr = copyArg(bufptr, arg9, end); ; 
#line 496
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 497
} 
#endif
#line 498 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10) 
#line 499
{int volatile ___ = 1;
#line 514
exit(___);}
#if 0
#line 499
{ 
#line 500
char *start, *end, *bufptr, *fmtstart; if ((start = getNextPrintfBufPtr()) == (0)) { return 0; }  end = (start + CUPRINTF_MAX_LEN); bufptr = (start + sizeof(cuPrintfHeader)); ; 
#line 502
bufptr = copyArg(bufptr, arg1, end); ; 
#line 503
bufptr = copyArg(bufptr, arg2, end); ; 
#line 504
bufptr = copyArg(bufptr, arg3, end); ; 
#line 505
bufptr = copyArg(bufptr, arg4, end); ; 
#line 506
bufptr = copyArg(bufptr, arg5, end); ; 
#line 507
bufptr = copyArg(bufptr, arg6, end); ; 
#line 508
bufptr = copyArg(bufptr, arg7, end); ; 
#line 509
bufptr = copyArg(bufptr, arg8, end); ; 
#line 510
bufptr = copyArg(bufptr, arg9, end); ; 
#line 511
bufptr = copyArg(bufptr, arg10, end); ; 
#line 513
fmtstart = bufptr; end = cuPrintfStrncpy(bufptr, fmt, CUPRINTF_MAX_LEN, end); writePrintfHeader(start, (end) ? fmtstart : (0)); return (end) ? ((int)(end - start)) : 0; ; 
#line 514
} 
#endif
#line 530 "C:\\CUDA\\include\\cuPrintf.cu"
void cuPrintfRestrict(int threadid, int blockid) 
#line 531
{int volatile ___ = 1;
#line 539
exit(___);}
#if 0
#line 531
{ 
#line 532
int thread_count = (((blockDim.x) * (blockDim.y)) * (blockDim.z)); 
#line 533
if (((threadid < thread_count) && (threadid >= 0)) || (threadid == (-1))) { 
#line 534
(restrictRules.threadid) = threadid; }  
#line 536
int block_count = ((gridDim.x) * (gridDim.y)); 
#line 537
if (((blockid < block_count) && (blockid >= 0)) || (blockid == (-1))) { 
#line 538
(restrictRules.blockid) = blockid; }  
#line 539
} 
#endif
#line 546 "C:\\CUDA\\include\\cuPrintf.cu"
static FILE *printf_fp; 
#line 548
static char *printfbuf_start = (0); 
#line 549
static char *printfbuf_device = (0); 
#line 550
static int printfbuf_len = 0; 
#line 564
static int outputPrintfData(char *fmt, char *data) 
#line 565
{ 
#line 567
fmt += sizeof(__int64); 
#line 572
char *p = strchr(fmt, '%'); 
#line 573
while (p != (0)) 
#line 574
{ 
#line 576
(*p) = '\000'; 
#line 577
fputs(fmt, printf_fp); 
#line 578
(*p) = '%'; 
#line 581
char *format = (p++); 
#line 582
p += strcspn(p, "%cdiouxXeEfgGaAnps"); 
#line 583
if ((*p) == ('\000')) 
#line 584
{ 
#line 585
fmt = format; 
#line 586
break; 
#line 587
}  
#line 591
int arglen = (*((int *)data)); 
#line 592
if (arglen > CUPRINTF_MAX_LEN) 
#line 593
{ 
#line 594
fputs("Corrupt printf buffer data - aborting\n", printf_fp); 
#line 595
return 0; 
#line 596
}  
#line 598
data += sizeof(__int64); 
#line 600
char specifier = (*(p++)); 
#line 601
char c = (*p); 
#line 602
(*p) = '\000'; 
#line 603
switch (specifier) 
#line 604
{ 
#line 606
case 'c':  
#line 607
case 'd':  
#line 608
case 'i':  
#line 609
case 'o':  
#line 610
case 'u':  
#line 611
case 'x':  
#line 612
case 'X':  
#line 613
case 'p':  
#line 614
fprintf(printf_fp, format, *((int *)data)); 
#line 615
break; 
#line 618
case 'e':  
#line 619
case 'E':  
#line 620
case 'f':  
#line 621
case 'g':  
#line 622
case 'G':  
#line 623
case 'a':  
#line 624
case 'A':  
#line 625
if (arglen == 4) { 
#line 626
fprintf(printf_fp, format, *((float *)data)); } else { 
#line 628
fprintf(printf_fp, format, *((double *)data)); }  
#line 629
break; 
#line 632
case 's':  
#line 633
fprintf(printf_fp, format, data); 
#line 634
break; 
#line 637
case '%':  
#line 638
fprintf(printf_fp, "%%"); 
#line 639
break; 
#line 642
default:  
#line 643
fprintf(printf_fp, format); 
#line 644
break; 
#line 645
}  
#line 646
data += sizeof(__int64); 
#line 647
(*p) = c; 
#line 648
fmt = p; 
#line 649
p = strchr(fmt, '%'); 
#line 650
}  
#line 653
fputs(fmt, printf_fp); 
#line 654
return 1; 
#line 655
} 
#line 666
static int doPrintfDisplay(int headings, int clear, char *bufstart, char *bufend, char *bufptr, char *endptr) 
#line 667
{ 
#line 670
int printf_count = 0; 
#line 671
char printfbuf_local[(CUPRINTF_MAX_LEN + 1)]; 
#line 672
((printfbuf_local)[CUPRINTF_MAX_LEN]) = '\000'; 
#line 674
while (bufptr != endptr) 
#line 675
{ 
#line 677
if (bufptr == bufend) { 
#line 678
bufptr = bufstart; }  
#line 681
cudaMemcpy(printfbuf_local, bufptr, CUPRINTF_MAX_LEN, cudaMemcpyDeviceToHost); 
#line 685
cuPrintfHeader *hdr = ((cuPrintfHeader *)(printfbuf_local)); 
#line 686
if (((hdr->magic) != ((unsigned short)51217)) || ((hdr->fmtoffset) >= CUPRINTF_MAX_LEN)) 
#line 687
{ 
#line 689
break; 
#line 690
}  
#line 693
if (headings) { 
#line 694
fprintf(printf_fp, "[%d, %d]: ", hdr->blockid, hdr->threadid); }  
#line 695
if ((hdr->fmtoffset) == 0) { 
#line 696
fprintf(printf_fp, "printf buffer overflow\n"); } else { 
#line 697
if (!(outputPrintfData((printfbuf_local) + (hdr->fmtoffset), (printfbuf_local) + sizeof(cuPrintfHeader)))) { 
#line 698
break; }  }  
#line 699
printf_count++; 
#line 702
if (clear) { 
#line 703
cudaMemset(bufptr, 0, CUPRINTF_MAX_LEN); }  
#line 706
bufptr += CUPRINTF_MAX_LEN; 
#line 707
}  
#line 709
return printf_count; 
#line 710
} 
#line 720
extern "C" cudaError_t cudaPrintfInit(size_t bufferLen) 
#line 721
{ 
#line 723
bufferLen = ((bufferLen < (CUPRINTF_MAX_LEN)) ? (CUPRINTF_MAX_LEN) : bufferLen); 
#line 724
if ((bufferLen % (CUPRINTF_MAX_LEN)) > (0)) { 
#line 725
bufferLen += ((CUPRINTF_MAX_LEN) - (bufferLen % (CUPRINTF_MAX_LEN))); }  
#line 726
printfbuf_len = ((int)bufferLen); 
#line 729
if ((cudaMalloc((void **)(&printfbuf_device), printfbuf_len)) != (cudaSuccess)) { 
#line 730
return cudaErrorInitializationError; }  
#line 731
cudaMemset(printfbuf_device, 0, printfbuf_len); 
#line 732
printfbuf_start = printfbuf_device; 
#line 735
cuPrintfRestriction restrict; 
#line 736
(restrict.threadid) = ((restrict.blockid) = (-1)); 
#line 737
cudaMemcpyToSymbol(restrictRules, &restrict, sizeof(restrict)); 
#line 740
cudaMemcpyToSymbol(globalPrintfBuffer, &printfbuf_device, sizeof(char *)); 
#line 741
cudaMemcpyToSymbol(printfBufferPtr, &printfbuf_device, sizeof(char *)); 
#line 742
cudaMemcpyToSymbol(printfBufferLength, &printfbuf_len, sizeof(printfbuf_len)); 
#line 744
return cudaSuccess; 
#line 745
} 
#line 753
extern "C" void cudaPrintfEnd() 
#line 754
{ 
#line 755
if ((!(printfbuf_start)) || (!(printfbuf_device))) { 
#line 756
return; }  
#line 758
cudaFree(printfbuf_device); 
#line 759
printfbuf_start = (printfbuf_device = (0)); 
#line 760
} 
#line 779
extern "C" cudaError_t cudaPrintfDisplay(void *outputFP, bool showThreadID) 
#line 780
{ 
#line 781
printf_fp = ((FILE *)((outputFP == (0)) ? (&(__iob_func()[1])) : outputFP)); 
#line 786
bool sync_printfs = true; 
#line 787
bool clearOnPrint = false; 
#line 790
if (((!(printfbuf_start)) || (!(printfbuf_device))) || (!(printf_fp))) { 
#line 791
return cudaErrorMissingConfiguration; }  
#line 796
unsigned short magic; 
#line 797
cudaMemcpy(&magic, printfbuf_device, sizeof(unsigned short), cudaMemcpyDeviceToHost); 
#line 803
if (magic == 51216) 
#line 804
{ 
#line 805
sync_printfs = true; 
#line 806
clearOnPrint = false; 
#line 807
int blocklen = 0; 
#line 808
char *blockptr = printfbuf_device; 
#line 809
while (blockptr < (printfbuf_device + printfbuf_len)) { 
#line 810
{ 
#line 811
cuPrintfHeaderSM10 hdr; 
#line 812
cudaMemcpy(&hdr, blockptr, sizeof(hdr), cudaMemcpyDeviceToHost); 
#line 815
if ((hdr.thread_buf_len) != (0)) { 
#line 816
blocklen = (hdr.thread_buf_len); }  
#line 819
if ((hdr.magic) != 51216) 
#line 820
{ 
#line 821
if (blocklen == 0) 
#line 822
{ 
#line 823
fprintf(printf_fp, "No printf headers found at all!\n"); 
#line 824
break; 
#line 825
}  
#line 826
blockptr += blocklen; 
#line 827
continue; 
#line 828
}  
#line 831
if ((hdr.offset) > (0)) 
#line 832
{ 
#line 834
if (sync_printfs) { 
#line 835
doPrintfDisplay(showThreadID, clearOnPrint, blockptr + CUPRINTF_MAX_LEN, blockptr + (hdr.thread_buf_len), (blockptr + (hdr.offset)) + CUPRINTF_MAX_LEN, blockptr + (hdr.thread_buf_len)); }  
#line 836
doPrintfDisplay(showThreadID, clearOnPrint, blockptr + CUPRINTF_MAX_LEN, blockptr + (hdr.thread_buf_len), blockptr + CUPRINTF_MAX_LEN, (blockptr + (hdr.offset)) + CUPRINTF_MAX_LEN); 
#line 837
}  
#line 840
blockptr += (hdr.thread_buf_len); 
#line 841
} }  
#line 842
} else { 
#line 844
if (magic == ((unsigned short)51217)) 
#line 845
{ 
#line 847
char *printfbuf_end = (0); 
#line 848
cudaMemcpyFromSymbol(&printfbuf_end, printfBufferPtr, sizeof(char *)); 
#line 851
char *bufptr = (((printfbuf_start - printfbuf_device) % printfbuf_len) + printfbuf_device); 
#line 852
char *endptr = (((printfbuf_end - printfbuf_device) % printfbuf_len) + printfbuf_device); 
#line 856
if (sync_printfs) { 
#line 857
doPrintfDisplay(showThreadID, clearOnPrint, printfbuf_device, printfbuf_device + printfbuf_len, endptr, printfbuf_device + printfbuf_len); }  
#line 858
doPrintfDisplay(showThreadID, clearOnPrint, printfbuf_device, printfbuf_device + printfbuf_len, bufptr, endptr); 
#line 860
printfbuf_start = printfbuf_end; 
#line 861
} else { 
#line 863
; }  }  
#line 867
if (sync_printfs) { 
#line 868
cudaMemset(printfbuf_device, 0, printfbuf_len); }  
#line 870
return cudaSuccess; 
#line 871
} 
#line 85 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { unsigned __cdecl _clearfp(); } 
#pragma warning(push)
#pragma warning(disable: 4141)
extern "C" { unsigned __cdecl _controlfp(unsigned, unsigned); } 
#pragma warning(pop)
extern "C" { void __cdecl _set_controlfp(unsigned, unsigned); } 
#line 91
extern "C" { errno_t __cdecl _controlfp_s(unsigned *, unsigned, unsigned); } 
#line 92
extern "C" { unsigned __cdecl _statusfp(); } 
#line 93
extern "C" { void __cdecl _fpreset(); } 
#line 174 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { unsigned __cdecl _control87(unsigned, unsigned); } 
#line 183 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { extern int *__cdecl __fpecode(); } 
#line 220 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { double __cdecl _scalb(double, long); } 
#line 221
extern "C" { double __cdecl _logb(double); } 
#line 222
extern "C" { double __cdecl _nextafter(double, double); } 
#line 223
extern "C" { int __cdecl _finite(double); } 
#line 224
extern "C" { int __cdecl _isnan(double); } 
#line 225
extern "C" { int __cdecl _fpclass(double); } 
#line 228
extern "C" { float __cdecl _scalbf(float, long); } 
#line 251 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { void __cdecl fpreset(); } 
#line 7 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
static const int L_SIZE = 16; 
#line 8
static const int N_POINTS = (L_SIZE * L_SIZE); 
#line 11
void fillU(void *r_data, void *u_data) ;
#if 0
#line 11
{ 
#line 13
float3 *r = ((float3 *)r_data); 
#line 17
float *u = ((float *)u_data); 
#line 19
int i = (blockIdx.x); 
#line 20
int j = (blockIdx.y); 
#line 22
float r_i[3] = {((r[i]).x), ((r[i]).y), ((r[i]).z)}; 
#line 23
float r_j[3] = {((r[j]).x), ((r[j]).y), ((r[j]).z)}; 
#line 25
float r1 = sqrt((pow(((r_i)[0]) - ((r_j)[0]), 2) + pow(((r_i)[1]) - ((r_j)[1]), 2)) + pow(((r_i)[2]) - ((r_j)[2]), 2)); 
#line 30
int alpha = (threadIdx.x); 
#line 31
int beta = (threadIdx.y); 
#line 33
int blockSize = ((blockDim.x) * (blockDim.y)); 
#line 35
float d_alpha = (((r_i)[alpha]) - ((r_j)[alpha])); 
#line 36
float d_beta = (((r_i)[beta]) - ((r_j)[beta])); 
#line 40
(u[((((blockSize * (gridDim.x)) * i) + (blockSize * j)) + ((blockDim.x) * alpha)) + beta]) = ((fabs(r1) < (1.192092896e-007F)) ? (0) : (((((((3) * d_alpha) / r1) * d_beta) / r1) - ((alpha == beta) ? 1 : 0)) / ((r1 * r1) * r1))); 
#line 47
} 
#endif
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void calc_H(void *h, void *s, void *u) ;
#if 0
#line 52
{ 
#line 55
int i = (threadIdx.x); 
#line 57
float3 *s_data = ((float3 *)s); 
#line 58
float3 *u_data = ((float3 *)u); 
#line 59
float3 *h_data = ((float3 *)h); 
#line 61
int aux; 
#line 62
for (int j = (i + 1), aux = (((i * N_POINTS) * 3) + (j * 3)); j < N_POINTS; (j++), (aux += 3)) { 
#line 64
((h_data[i]).x) += (((((u_data[aux]).x) * ((s_data[j]).x)) + (((u_data[aux]).y) * ((s_data[j]).y))) + (((u_data[aux]).z) * ((s_data[j]).z))); 
#line 66
((h_data[i]).y) += (((((u_data[aux + 1]).x) * ((s_data[j]).x)) + (((u_data[aux + 1]).y) * ((s_data[j]).y))) + (((u_data[aux + 1]).z) * ((s_data[j]).z))); 
#line 68
((h_data[i]).z) += (((((u_data[aux + 2]).x) * ((s_data[j]).x)) + (((u_data[aux + 2]).y) * ((s_data[j]).y))) + (((u_data[aux + 2]).z) * ((s_data[j]).z))); 
#line 70
}  
#line 72
} 
#endif
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void calc_E(void *h, void *s, void *e) ;
#if 0
#line 75
{ 
#line 77
#if 0
extern float 
#line 77
tmp[]; 
#endif
#line 79 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
float3 *h_data = ((float3 *)h); 
#line 80
float3 *s_data = ((float3 *)s); 
#line 81
float *e_data = ((float *)e); 
#line 83
int tid = (threadIdx.x); 
#line 84
int i = (((blockIdx.x) * (blockDim.x)) + (threadIdx.x)); 
#line 86
((tmp)[tid]) = ((((-1) * (((h_data[i]).x) * ((s_data[i]).x))) - (((h_data[i]).y) * ((s_data[i]).y))) - (((h_data[i]).z) * ((s_data[i]).z))); 
#line 88
__syncthreads(); 
#line 90
for (int s = 1; s < (blockDim.x); s *= 2) { 
#line 92
if ((tid % (2 * s)) == 0) { 
#line 93
((tmp)[tid]) += ((tmp)[tid + s]); 
#line 94
}  
#line 95
__syncthreads(); 
#line 96
}  
#line 97
if (tid == 0) { 
#line 98
(e_data[blockIdx.x]) = ((tmp)[0]); }  
#line 100
} 
#endif
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void calc_full_E(void *u, void *s, void *e) ;
#if 0
#line 104
{ 
#line 106
#if 0
extern float 
#line 106
tmp2[]; 
#endif
#line 108 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
float3 *u_data = ((float3 *)u); 
#line 109
float3 *s_data = ((float3 *)s); 
#line 110
float *e_data = ((float *)e); 
#line 112
int tid = (threadIdx.x); 
#line 114
((tmp2)[tid]) = (0); 
#line 115
int aux = 0; 
#line 116
for (int j = 0; j < (N_POINTS * 3); (j += 3), (aux++)) { 
#line 117
if (j == tid) { 
#line 118
continue; }  
#line 119
((tmp2)[tid]) -= ((((((((((((s_data[aux]).x) * ((u_data[((tid * N_POINTS) * 3) + j]).x)) * ((s_data[tid]).x)) - ((((s_data[aux]).y) * ((u_data[((tid * N_POINTS) * 3) + j]).y)) * ((s_data[tid]).x))) - ((((s_data[aux]).z) * ((u_data[((tid * N_POINTS) * 3) + j]).z)) * ((s_data[tid]).x))) - ((((s_data[aux]).x) * ((u_data[((tid * N_POINTS) * 3) + (j + 1)]).x)) * ((s_data[tid]).y))) - ((((s_data[aux]).y) * ((u_data[((tid * N_POINTS) * 3) + (j + 1)]).y)) * ((s_data[tid]).y))) - ((((s_data[aux]).z) * ((u_data[((tid * N_POINTS) * 3) + (j + 1)]).z)) * ((s_data[tid]).y))) - ((((s_data[aux]).x) * ((u_data[((tid * N_POINTS) * 3) + (j + 2)]).x)) * ((s_data[tid]).z))) - ((((s_data[aux]).y) * ((u_data[((tid * N_POINTS) * 3) + (j + 2)]).y)) * ((s_data[tid]).z))) - ((((s_data[aux]).z) * ((u_data[((tid * N_POINTS) * 3) + (j + 2)]).z)) * ((s_data[tid]).z))); 
#line 131
}  
#line 134
__syncthreads(); 
#line 135
for (int s = 1; s < (blockDim.x); s *= 2) { 
#line 137
if ((tid % (2 * s)) == 0) { ((tmp2)[tid]) += ((tmp2)[tid + s]); }  
#line 141
__syncthreads(); 
#line 142
}  
#line 143
if (tid == 0) { 
#line 144
(e_data[1]) = ((tmp2)[0]); }  
#line 147
} 
#endif
#line 6 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
float U[N_POINTS][N_POINTS][3][3]; 
#line 8
void fillR_CPU(float3 *r_cpu) { 
#line 9
int k, j; 
#line 10
for (j = 0; j < L_SIZE; j++) { 
#line 11
for (k = 0; k < L_SIZE; k++) { 
#line 12
((r_cpu[k + (j * L_SIZE)]).x) = ((float)k); 
#line 13
((r_cpu[k + (j * L_SIZE)]).y) = ((float)j); 
#line 14
((r_cpu[k + (j * L_SIZE)]).z) = (0.0F); 
#line 15
}  
#line 16
}  
#line 17
} 
#line 19
void fill_U2(float3 *r_h) { 
#line 20
int m, n, i, j; 
#line 21
for (i = 0; i < N_POINTS; i++) { 
#line 22
for (j = 0; j < N_POINTS; j++) { { 
#line 24
if (i == j) { 
#line 25
continue; 
#line 26
}  
#line 27
float d[3]; 
#line 28
float r1 = (0), r2 = (0), r3 = (0); 
#line 30
((d)[0]) = (((r_h[i]).x) - ((r_h[j]).x)); 
#line 31
r2 += (((d)[0]) * ((d)[0])); 
#line 33
((d)[1]) = (((r_h[i]).y) - ((r_h[j]).y)); 
#line 34
r2 += (((d)[1]) * ((d)[1])); 
#line 36
((d)[2]) = (((r_h[i]).z) - ((r_h[j]).z)); 
#line 37
r2 += (((d)[2]) * ((d)[2])); 
#line 40
r1 = sqrt(r2); 
#line 41
r3 = pow(r1, 3); 
#line 43
for (m = 0; m < 3; m++) { 
#line 44
for (n = 0; n < 3; n++) { 
#line 45
(((((U)[i])[j])[m])[n]) = (((((((3) * ((d)[m])) / r1) * ((d)[n])) / r1) - ((m == n) ? 1 : 0)) / r3); 
#line 46
}  
#line 47
}  
#line 48
} }  
#line 49
}  
#line 50
} 
#line 16 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
int __cdecl main(int argc, char **argv) { 
#line 19
puts("Ola"); 
#line 21
if (argc < 2) { 
#line 22
puts("neoNbody: Usage: neoNbody NumberOfPoints [-d]"); 
#line 23
exit(0); 
#line 24
}  
#line 27
static int N_POINTS = atoi(argv[1]); 
#line 30
if (!(strcmp(argv[2], "-d"))) { 
#line 31
cudaError_t status = ((cudaError_t)0); }  
#line 34
float *u_CPU; 
#line 35
u_CPU = ((float *)malloc((((sizeof(float) * (3)) * (3)) * N_POINTS) * N_POINTS)); 
#line 37
float3 *r_CPU; 
#line 38
r_CPU = ((float3 *)malloc((sizeof(float3) * N_POINTS) * N_POINTS)); 
#line 40
fillR_CPU(r_CPU); 
#line 42
for (int i = 0; i < N_POINTS; i++) { 
#line 43
printf("%f %f %f\n", (r_CPU[i]).x, (r_CPU[i]).y, (r_CPU[i]).z); }  return 0; 
#line 45
} 
#line 1 "naive.cudafe1.stub.c"
#include "naive.cudafe1.stub.c"
