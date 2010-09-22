#line 1 "naive.cudafe1.cpp"
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
#line 1 "C:\\CUDA\\include\\crt/host_runtime.h"






























































#line 64 "C:\\CUDA\\include\\crt/host_runtime.h"



#line 68 "C:\\CUDA\\include\\crt/host_runtime.h"

#line 1 "C:\\CUDA\\include\\builtin_types.h"









































#line 1 "c:\\cuda\\include\\device_types.h"













































enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};

#line 55 "c:\\cuda\\include\\device_types.h"
#line 43 "C:\\CUDA\\include\\builtin_types.h"
#line 1 "c:\\cuda\\include\\driver_types.h"

















































































#line 83 "c:\\cuda\\include\\driver_types.h"











enum cudaError
{
  cudaSuccess                           =      0,   
  cudaErrorMissingConfiguration         =      1,   
  cudaErrorMemoryAllocation             =      2,   
  cudaErrorInitializationError          =      3,   
  cudaErrorLaunchFailure                =      4,   
  cudaErrorPriorLaunchFailure           =      5,   
  cudaErrorLaunchTimeout                =      6,   
  cudaErrorLaunchOutOfResources         =      7,   
  cudaErrorInvalidDeviceFunction        =      8,   
  cudaErrorInvalidConfiguration         =      9,   
  cudaErrorInvalidDevice                =     10,   
  cudaErrorInvalidValue                 =     11,   
  cudaErrorInvalidPitchValue            =     12,   
  cudaErrorInvalidSymbol                =     13,   
  cudaErrorMapBufferObjectFailed        =     14,   
  cudaErrorUnmapBufferObjectFailed      =     15,   
  cudaErrorInvalidHostPointer           =     16,   
  cudaErrorInvalidDevicePointer         =     17,   
  cudaErrorInvalidTexture               =     18,   
  cudaErrorInvalidTextureBinding        =     19,   
  cudaErrorInvalidChannelDescriptor     =     20,   
  cudaErrorInvalidMemcpyDirection       =     21,   
  cudaErrorAddressOfConstant            =     22,   
                                                    
                                                    
                                                    
                                                    
                                                    
  cudaErrorTextureFetchFailed           =     23,   
  cudaErrorTextureNotBound              =     24,   
  cudaErrorSynchronizationError         =     25,   
  cudaErrorInvalidFilterSetting         =     26,   
  cudaErrorInvalidNormSetting           =     27,   
  cudaErrorMixedDeviceExecution         =     28,   
  cudaErrorCudartUnloading              =     29,   
  cudaErrorUnknown                      =     30,   
  cudaErrorNotYetImplemented            =     31,   
  cudaErrorMemoryValueTooLarge          =     32,   
  cudaErrorInvalidResourceHandle        =     33,   
  cudaErrorNotReady                     =     34,   
  cudaErrorInsufficientDriver           =     35,   
  cudaErrorSetOnActiveProcess           =     36,   
  cudaErrorInvalidSurface               =     37,   
  cudaErrorNoDevice                     =     38,   
  cudaErrorECCUncorrectable             =     39,   
  cudaErrorSharedObjectSymbolNotFound   =     40,   
  cudaErrorSharedObjectInitFailed       =     41,   
  cudaErrorUnsupportedLimit             =     42,   
  cudaErrorDuplicateVariableName        =     43,   
  cudaErrorDuplicateTextureName         =     44,   
  cudaErrorDuplicateSurfaceName         =     45,   
  cudaErrorDevicesUnavailable           =     46,   
  cudaErrorStartupFailure               =   0x7f,   
  cudaErrorApiFailureBase               =  10000    
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned           =   0,      
  cudaChannelFormatKindUnsigned         =   1,      
  cudaChannelFormatKindFloat            =   2,      
  cudaChannelFormatKindNone             =   3       
};





struct cudaChannelFormatDesc
{
  int                        x; 
  int                        y; 
  int                        z; 
  int                        w; 
  enum cudaChannelFormatKind f; 
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost          =   0,      
  cudaMemcpyHostToDevice        =   1,      
  cudaMemcpyDeviceToHost        =   2,      
  cudaMemcpyDeviceToDevice      =   3       
};






struct cudaPitchedPtr
{
  void   *ptr;      
  size_t  pitch;    
  size_t  xsize;    
  size_t  ysize;    
};






struct cudaExtent
{
  size_t width;     
  size_t height;    
  size_t depth;     
};






struct cudaPos
{
  size_t x;     
  size_t y;     
  size_t z;     
};





struct cudaMemcpy3DParms
{
  struct cudaArray      *srcArray;  
  struct cudaPos         srcPos;    
  struct cudaPitchedPtr  srcPtr;    

  struct cudaArray      *dstArray;  
  struct cudaPos         dstPos;    
  struct cudaPitchedPtr  dstPtr;    

  struct cudaExtent      extent;    
  enum cudaMemcpyKind    kind;      
};





struct cudaGraphicsResource; 




 
enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone  = 0   
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone         = 0,  
  cudaGraphicsMapFlagsReadOnly     = 1,  
  cudaGraphicsMapFlagsWriteDiscard = 2   
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00, 
  cudaGraphicsCubeFaceNegativeX = 0x01, 
  cudaGraphicsCubeFacePositiveY = 0x02, 
  cudaGraphicsCubeFaceNegativeY = 0x03, 
  cudaGraphicsCubeFacePositiveZ = 0x04, 
  cudaGraphicsCubeFaceNegativeZ = 0x05  
};





struct cudaFuncAttributes
{
   size_t sharedSizeBytes;  
   size_t constSizeBytes;   
   size_t localSizeBytes;   
   int maxThreadsPerBlock;  
   int numRegs;             
   




   int ptxVersion;
   




   int binaryVersion;
   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone   = 0,    
  cudaFuncCachePreferShared = 1,    
  cudaFuncCachePreferL1     = 2     
};





enum cudaComputeMode
{
  cudaComputeModeDefault    =   0,  
  cudaComputeModeExclusive  =   1,  
  cudaComputeModeProhibited =   2   
};





enum cudaLimit
{
    cudaLimitStackSize      = 0x00, 
    cudaLimitPrintfFifoSize = 0x01  
};





struct cudaDeviceProp
{
  char   name[256];                 
  size_t totalGlobalMem;            
  size_t sharedMemPerBlock;         
  int    regsPerBlock;              
  int    warpSize;                  
  size_t memPitch;                  
  int    maxThreadsPerBlock;        
  int    maxThreadsDim[3];          
  int    maxGridSize[3];            
  int    clockRate;                 
  size_t totalConstMem;             
  int    major;                     
  int    minor;                     
  size_t textureAlignment;          
  int    deviceOverlap;             
  int    multiProcessorCount;       
  int    kernelExecTimeoutEnabled;  
  int    integrated;                
  int    canMapHostMemory;          
  int    computeMode;               
  int    maxTexture1D;              
  int    maxTexture2D[2];           
  int    maxTexture3D[3];           
  int    maxTexture2DArray[3];      
  size_t surfaceAlignment;          
  int    concurrentKernels;         
  int    ECCEnabled;                
  int    pciBusID;                  
  int    pciDeviceID;               
  int    __cudaReserved[22];
};










































typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct CUuuid_st cudaUUID_t;


 

#line 450 "c:\\cuda\\include\\driver_types.h"
#line 44 "C:\\CUDA\\include\\builtin_types.h"
#line 1 "c:\\cuda\\include\\surface_types.h"












































#line 1 "c:\\cuda\\include\\driver_types.h"
































































































































































































































































































































































































































































#line 450 "c:\\cuda\\include\\driver_types.h"
#line 46 "c:\\cuda\\include\\surface_types.h"








enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};


enum cudaSurfaceFormatMode
{
  cudaFormatModeForced,
  cudaFormatModeAuto
};


struct surfaceReference
{
  struct cudaChannelFormatDesc channelDesc;
};

#line 75 "c:\\cuda\\include\\surface_types.h"
#line 45 "C:\\CUDA\\include\\builtin_types.h"
#line 1 "c:\\cuda\\include\\texture_types.h"












































#line 1 "c:\\cuda\\include\\driver_types.h"
































































































































































































































































































































































































































































#line 450 "c:\\cuda\\include\\driver_types.h"
#line 46 "c:\\cuda\\include\\texture_types.h"








enum cudaTextureAddressMode
{
  cudaAddressModeWrap,
  cudaAddressModeClamp,
  cudaAddressModeMirror
};


enum cudaTextureFilterMode
{
  cudaFilterModePoint,
  cudaFilterModeLinear
};


enum cudaTextureReadMode
{
  cudaReadModeElementType,
  cudaReadModeNormalizedFloat
};


struct textureReference
{
  int                          normalized;
  enum cudaTextureFilterMode   filterMode;
  enum cudaTextureAddressMode  addressMode[3];
  struct cudaChannelFormatDesc channelDesc;
  int                          __cudaReserved[16];
};

#line 86 "c:\\cuda\\include\\texture_types.h"
#line 46 "C:\\CUDA\\include\\builtin_types.h"
#line 1 "c:\\cuda\\include\\vector_types.h"












































#line 1 "c:\\cuda\\include\\builtin_types.h"









































#line 1 "c:\\cuda\\include\\device_types.h"





















































#line 55 "c:\\cuda\\include\\device_types.h"
#line 43 "c:\\cuda\\include\\builtin_types.h"
#line 1 "c:\\cuda\\include\\driver_types.h"
































































































































































































































































































































































































































































#line 450 "c:\\cuda\\include\\driver_types.h"
#line 44 "c:\\cuda\\include\\builtin_types.h"
#line 1 "c:\\cuda\\include\\surface_types.h"









































































#line 75 "c:\\cuda\\include\\surface_types.h"
#line 45 "c:\\cuda\\include\\builtin_types.h"
#line 1 "c:\\cuda\\include\\texture_types.h"




















































































#line 86 "c:\\cuda\\include\\texture_types.h"
#line 46 "c:\\cuda\\include\\builtin_types.h"
#line 1 "c:\\cuda\\include\\vector_types.h"



































































































































































































































































































































































































































































































#line 485 "c:\\cuda\\include\\vector_types.h"
#line 47 "c:\\cuda\\include\\builtin_types.h"
#line 46 "c:\\cuda\\include\\vector_types.h"
#line 1 "c:\\cuda\\include\\host_defines.h"










































#line 44 "c:\\cuda\\include\\host_defines.h"




















#line 65 "c:\\cuda\\include\\host_defines.h"










#line 76 "c:\\cuda\\include\\host_defines.h"
























#line 101 "c:\\cuda\\include\\host_defines.h"










#line 112 "c:\\cuda\\include\\host_defines.h"











#line 124 "c:\\cuda\\include\\host_defines.h"










#line 136 "c:\\cuda\\include\\host_defines.h"












#line 149 "c:\\cuda\\include\\host_defines.h"
#line 47 "c:\\cuda\\include\\vector_types.h"

















#line 66 "c:\\cuda\\include\\vector_types.h"






#line 73 "c:\\cuda\\include\\vector_types.h"


struct char1
{
  signed char x;
};


struct uchar1 
{
  unsigned char x;
};


struct __declspec(align(2)) char2
{
  signed char x, y;
};


struct __declspec(align(2)) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __declspec(align(4)) char4
{
  signed char x, y, z, w;
};


struct __declspec(align(4)) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __declspec(align(4)) short2
{
  short x, y;
};


struct __declspec(align(4)) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __declspec(align(8)) short4 { short x; short y; short z; short w; };


struct __declspec(align(8)) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __declspec(align(8)) int2 { int x; int y; };


struct __declspec(align(8)) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __declspec(align(16)) int4
{
  int x, y, z, w;
};


struct __declspec(align(16)) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};




struct __declspec(align(8)) long2 { long int x; long int y; };


struct __declspec(align(8)) ulong2 { unsigned long int x; unsigned long int y; };















#line 241 "c:\\cuda\\include\\vector_types.h"


struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __declspec(align(16)) long4
{
  long int x, y, z, w;
};


struct __declspec(align(16)) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __declspec(align(8)) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __declspec(align(16)) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __declspec(align(16)) longlong2
{
  long long int x, y;
};


struct __declspec(align(16)) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __declspec(align(16)) longlong4
{
  long long int x, y, z ,w;
};


struct __declspec(align(16)) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __declspec(align(16)) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __declspec(align(16)) double4
{
  double x, y, z, w;
};








typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;








struct dim3
{
    unsigned int x, y, z;

      dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
      dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
      operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }
#line 477 "c:\\cuda\\include\\vector_types.h"
};


typedef struct dim3 dim3;



#line 485 "c:\\cuda\\include\\vector_types.h"
#line 47 "c:\\cuda\\include\\builtin_types.h"
#line 70 "C:\\CUDA\\include\\crt/host_runtime.h"
#line 1 "c:\\cuda\\include\\crt\\storage_class.h"










































#line 44 "c:\\cuda\\include\\crt\\storage_class.h"






#line 51 "c:\\cuda\\include\\crt\\storage_class.h"



#line 55 "c:\\cuda\\include\\crt\\storage_class.h"



#line 59 "c:\\cuda\\include\\crt\\storage_class.h"



#line 63 "c:\\cuda\\include\\crt\\storage_class.h"



#line 67 "c:\\cuda\\include\\crt\\storage_class.h"



#line 71 "c:\\cuda\\include\\crt\\storage_class.h"



#line 75 "c:\\cuda\\include\\crt\\storage_class.h"



#line 79 "c:\\cuda\\include\\crt\\storage_class.h"



#line 83 "c:\\cuda\\include\\crt\\storage_class.h"



#line 87 "c:\\cuda\\include\\crt\\storage_class.h"



#line 91 "c:\\cuda\\include\\crt\\storage_class.h"



#line 95 "c:\\cuda\\include\\crt\\storage_class.h"



#line 99 "c:\\cuda\\include\\crt\\storage_class.h"



#line 103 "c:\\cuda\\include\\crt\\storage_class.h"



#line 107 "c:\\cuda\\include\\crt\\storage_class.h"



#line 111 "c:\\cuda\\include\\crt\\storage_class.h"



#line 115 "c:\\cuda\\include\\crt\\storage_class.h"



#line 119 "c:\\cuda\\include\\crt\\storage_class.h"



#line 123 "c:\\cuda\\include\\crt\\storage_class.h"



#line 127 "c:\\cuda\\include\\crt\\storage_class.h"



#line 131 "c:\\cuda\\include\\crt\\storage_class.h"



#line 135 "c:\\cuda\\include\\crt\\storage_class.h"



#line 139 "c:\\cuda\\include\\crt\\storage_class.h"



#line 143 "c:\\cuda\\include\\crt\\storage_class.h"



#line 147 "c:\\cuda\\include\\crt\\storage_class.h"

#line 149 "c:\\cuda\\include\\crt\\storage_class.h"
#line 71 "C:\\CUDA\\include\\crt/host_runtime.h"












































































































#line 180 "C:\\CUDA\\include\\crt/host_runtime.h"
#line 490 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#line 497 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef size_t rsize_t; }
#line 504 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef __int64 intptr_t; }
#line 522 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef __int64 ptrdiff_t; }
#line 535 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef unsigned short wint_t; }
#line 536 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
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
#line 2038 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
struct threadmbcinfostruct; 
#line 2039 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef threadlocaleinfostruct *pthreadlocinfo; }
#line 2040 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef threadmbcinfostruct *pthreadmbcinfo; }
#line 2041 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
struct __lc_time_data; 
#line 2047 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef 
#line 2043 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
struct localeinfo_struct { 
#line 2045 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
pthreadlocinfo locinfo; 
#line 2046 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
pthreadmbcinfo mbcinfo; 
#line 2047 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
} _locale_tstruct, *_locale_t; }
#line 2054 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef 
#line 2050 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
struct tagLC_ID { 
#line 2051 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
unsigned short wLanguage; 
#line 2052 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
unsigned short wCountry; 
#line 2053 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
unsigned short wCodePage; 
#line 2054 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
} LC_ID, *LPLC_ID; }
#line 2083 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef 
#line 2059 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
struct threadlocaleinfostruct { 
#line 2060 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int refcount; 
#line 2061 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
unsigned lc_codepage; 
#line 2062 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
unsigned lc_collate_cp; 
#line 2063 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
unsigned long lc_handle[6]; 
#line 2064 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
LC_ID lc_id[6]; 
#line 2065 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
struct { 
#line 2066 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
char *locale; 
#line 2067 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
__wchar_t *wlocale; 
#line 2068 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int *refcount; 
#line 2069 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int *wrefcount; 
#line 2070 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
} lc_category[6]; 
#line 2071 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int lc_clike; 
#line 2072 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int mb_cur_max; 
#line 2073 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int *lconv_intl_refcount; 
#line 2074 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int *lconv_num_refcount; 
#line 2075 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int *lconv_mon_refcount; 
#line 2076 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
struct lconv *lconv; 
#line 2077 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
int *ctype1_refcount; 
#line 2078 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
unsigned short *ctype1; 
#line 2079 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
const unsigned short *pctype; 
#line 2080 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
const unsigned char *pclmap; 
#line 2081 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
const unsigned char *pcumap; 
#line 2082 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
__lc_time_data *lc_time_curr; 
#line 2083 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
} threadlocinfo; }
#line 2121 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#pragma pack ( pop )
#line 46 "c:\\cuda\\include\\device_types.h"













#line 60 "c:\\cuda\\include\\device_types.h"
#line 41 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
extern "C" { extern int *__cdecl _errno(); } 
#line 44 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
extern "C" { errno_t __cdecl _set_errno(int); } 
#line 45 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
extern "C" { errno_t __cdecl _get_errno(int *); } 
#line 68 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
extern "C" { extern unsigned long __cdecl __threadid(); } 
#line 70 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
extern "C" { extern uintptr_t __cdecl __threadhandle(); } 
#line 94 "c:\\cuda\\include\\driver_types.h"







































































































#line 198 "c:\\cuda\\include\\driver_types.h"
#line 156 "c:\\cuda\\include\\driver_types.h"













#line 170 "c:\\cuda\\include\\driver_types.h"
#line 168 "c:\\cuda\\include\\driver_types.h"















#line 184 "c:\\cuda\\include\\driver_types.h"
#line 181 "c:\\cuda\\include\\driver_types.h"


#line 184 "c:\\cuda\\include\\driver_types.h"
#line 187 "c:\\cuda\\include\\driver_types.h"













#line 201 "c:\\cuda\\include\\driver_types.h"
#line 200 "c:\\cuda\\include\\driver_types.h"













#line 214 "c:\\cuda\\include\\driver_types.h"
#line 213 "c:\\cuda\\include\\driver_types.h"











#line 225 "c:\\cuda\\include\\driver_types.h"
#line 225 "c:\\cuda\\include\\driver_types.h"











#line 237 "c:\\cuda\\include\\driver_types.h"
#line 236 "c:\\cuda\\include\\driver_types.h"





















#line 258 "c:\\cuda\\include\\driver_types.h"
#line 254 "c:\\cuda\\include\\driver_types.h"


#line 257 "c:\\cuda\\include\\driver_types.h"
#line 260 "c:\\cuda\\include\\driver_types.h"







#line 268 "c:\\cuda\\include\\driver_types.h"
#line 269 "c:\\cuda\\include\\driver_types.h"











#line 281 "c:\\cuda\\include\\driver_types.h"
#line 280 "c:\\cuda\\include\\driver_types.h"

















#line 298 "c:\\cuda\\include\\driver_types.h"
#line 293 "c:\\cuda\\include\\driver_types.h"





















#line 315 "c:\\cuda\\include\\driver_types.h"
#line 319 "c:\\cuda\\include\\driver_types.h"











#line 331 "c:\\cuda\\include\\driver_types.h"
#line 330 "c:\\cuda\\include\\driver_types.h"











#line 342 "c:\\cuda\\include\\driver_types.h"
#line 341 "c:\\cuda\\include\\driver_types.h"









#line 351 "c:\\cuda\\include\\driver_types.h"
#line 351 "c:\\cuda\\include\\driver_types.h"

































































#line 417 "c:\\cuda\\include\\driver_types.h"
#line 426 "c:\\cuda\\include\\driver_types.h"




#line 431 "c:\\cuda\\include\\driver_types.h"
#line 432 "c:\\cuda\\include\\driver_types.h"




#line 437 "c:\\cuda\\include\\driver_types.h"
#line 438 "c:\\cuda\\include\\driver_types.h"




#line 443 "c:\\cuda\\include\\driver_types.h"
#line 444 "c:\\cuda\\include\\driver_types.h"




#line 449 "c:\\cuda\\include\\driver_types.h"
#line 54 "c:\\cuda\\include\\surface_types.h"











#line 66 "c:\\cuda\\include\\surface_types.h"
#line 62 "c:\\cuda\\include\\surface_types.h"









#line 72 "c:\\cuda\\include\\surface_types.h"
#line 69 "c:\\cuda\\include\\surface_types.h"







#line 77 "c:\\cuda\\include\\surface_types.h"
#line 54 "c:\\cuda\\include\\texture_types.h"











#line 66 "c:\\cuda\\include\\texture_types.h"
#line 62 "c:\\cuda\\include\\texture_types.h"









#line 72 "c:\\cuda\\include\\texture_types.h"
#line 69 "c:\\cuda\\include\\texture_types.h"









#line 79 "c:\\cuda\\include\\texture_types.h"
#line 76 "c:\\cuda\\include\\texture_types.h"















#line 92 "c:\\cuda\\include\\texture_types.h"
#line 75 "c:\\cuda\\include\\vector_types.h"







#line 83 "c:\\cuda\\include\\vector_types.h"
#line 81 "c:\\cuda\\include\\vector_types.h"







#line 89 "c:\\cuda\\include\\vector_types.h"
#line 87 "c:\\cuda\\include\\vector_types.h"







#line 95 "c:\\cuda\\include\\vector_types.h"
#line 93 "c:\\cuda\\include\\vector_types.h"







#line 101 "c:\\cuda\\include\\vector_types.h"
#line 99 "c:\\cuda\\include\\vector_types.h"







#line 107 "c:\\cuda\\include\\vector_types.h"
#line 105 "c:\\cuda\\include\\vector_types.h"







#line 113 "c:\\cuda\\include\\vector_types.h"
#line 111 "c:\\cuda\\include\\vector_types.h"







#line 119 "c:\\cuda\\include\\vector_types.h"
#line 117 "c:\\cuda\\include\\vector_types.h"







#line 125 "c:\\cuda\\include\\vector_types.h"
#line 123 "c:\\cuda\\include\\vector_types.h"







#line 131 "c:\\cuda\\include\\vector_types.h"
#line 129 "c:\\cuda\\include\\vector_types.h"







#line 137 "c:\\cuda\\include\\vector_types.h"
#line 135 "c:\\cuda\\include\\vector_types.h"







#line 143 "c:\\cuda\\include\\vector_types.h"
#line 141 "c:\\cuda\\include\\vector_types.h"







#line 149 "c:\\cuda\\include\\vector_types.h"
#line 147 "c:\\cuda\\include\\vector_types.h"







#line 155 "c:\\cuda\\include\\vector_types.h"
#line 153 "c:\\cuda\\include\\vector_types.h"







#line 161 "c:\\cuda\\include\\vector_types.h"
#line 159 "c:\\cuda\\include\\vector_types.h"



#line 163 "c:\\cuda\\include\\vector_types.h"
#line 162 "c:\\cuda\\include\\vector_types.h"



#line 166 "c:\\cuda\\include\\vector_types.h"
#line 165 "c:\\cuda\\include\\vector_types.h"







#line 173 "c:\\cuda\\include\\vector_types.h"
#line 171 "c:\\cuda\\include\\vector_types.h"







#line 179 "c:\\cuda\\include\\vector_types.h"
#line 177 "c:\\cuda\\include\\vector_types.h"



#line 181 "c:\\cuda\\include\\vector_types.h"
#line 180 "c:\\cuda\\include\\vector_types.h"



#line 184 "c:\\cuda\\include\\vector_types.h"
#line 183 "c:\\cuda\\include\\vector_types.h"







#line 191 "c:\\cuda\\include\\vector_types.h"
#line 189 "c:\\cuda\\include\\vector_types.h"







#line 197 "c:\\cuda\\include\\vector_types.h"
#line 195 "c:\\cuda\\include\\vector_types.h"







#line 203 "c:\\cuda\\include\\vector_types.h"
#line 201 "c:\\cuda\\include\\vector_types.h"







#line 209 "c:\\cuda\\include\\vector_types.h"
#line 207 "c:\\cuda\\include\\vector_types.h"







#line 215 "c:\\cuda\\include\\vector_types.h"
#line 213 "c:\\cuda\\include\\vector_types.h"







#line 221 "c:\\cuda\\include\\vector_types.h"
#line 221 "c:\\cuda\\include\\vector_types.h"



#line 225 "c:\\cuda\\include\\vector_types.h"
#line 224 "c:\\cuda\\include\\vector_types.h"



#line 228 "c:\\cuda\\include\\vector_types.h"
#line 243 "c:\\cuda\\include\\vector_types.h"







#line 251 "c:\\cuda\\include\\vector_types.h"
#line 249 "c:\\cuda\\include\\vector_types.h"







#line 257 "c:\\cuda\\include\\vector_types.h"
#line 255 "c:\\cuda\\include\\vector_types.h"







#line 263 "c:\\cuda\\include\\vector_types.h"
#line 261 "c:\\cuda\\include\\vector_types.h"







#line 269 "c:\\cuda\\include\\vector_types.h"
#line 267 "c:\\cuda\\include\\vector_types.h"







#line 275 "c:\\cuda\\include\\vector_types.h"
#line 273 "c:\\cuda\\include\\vector_types.h"



#line 277 "c:\\cuda\\include\\vector_types.h"
#line 276 "c:\\cuda\\include\\vector_types.h"







#line 284 "c:\\cuda\\include\\vector_types.h"
#line 282 "c:\\cuda\\include\\vector_types.h"







#line 290 "c:\\cuda\\include\\vector_types.h"
#line 288 "c:\\cuda\\include\\vector_types.h"







#line 296 "c:\\cuda\\include\\vector_types.h"
#line 294 "c:\\cuda\\include\\vector_types.h"







#line 302 "c:\\cuda\\include\\vector_types.h"
#line 300 "c:\\cuda\\include\\vector_types.h"







#line 308 "c:\\cuda\\include\\vector_types.h"
#line 306 "c:\\cuda\\include\\vector_types.h"







#line 314 "c:\\cuda\\include\\vector_types.h"
#line 312 "c:\\cuda\\include\\vector_types.h"







#line 320 "c:\\cuda\\include\\vector_types.h"
#line 318 "c:\\cuda\\include\\vector_types.h"







#line 326 "c:\\cuda\\include\\vector_types.h"
#line 324 "c:\\cuda\\include\\vector_types.h"







#line 332 "c:\\cuda\\include\\vector_types.h"
#line 330 "c:\\cuda\\include\\vector_types.h"







#line 338 "c:\\cuda\\include\\vector_types.h"
#line 336 "c:\\cuda\\include\\vector_types.h"







#line 344 "c:\\cuda\\include\\vector_types.h"
#line 342 "c:\\cuda\\include\\vector_types.h"







#line 350 "c:\\cuda\\include\\vector_types.h"
#line 348 "c:\\cuda\\include\\vector_types.h"







#line 356 "c:\\cuda\\include\\vector_types.h"
#line 354 "c:\\cuda\\include\\vector_types.h"







#line 362 "c:\\cuda\\include\\vector_types.h"
#line 366 "c:\\cuda\\include\\vector_types.h"




#line 371 "c:\\cuda\\include\\vector_types.h"
#line 368 "c:\\cuda\\include\\vector_types.h"




#line 373 "c:\\cuda\\include\\vector_types.h"
#line 370 "c:\\cuda\\include\\vector_types.h"




#line 375 "c:\\cuda\\include\\vector_types.h"
#line 372 "c:\\cuda\\include\\vector_types.h"




#line 377 "c:\\cuda\\include\\vector_types.h"
#line 374 "c:\\cuda\\include\\vector_types.h"




#line 379 "c:\\cuda\\include\\vector_types.h"
#line 376 "c:\\cuda\\include\\vector_types.h"




#line 381 "c:\\cuda\\include\\vector_types.h"
#line 378 "c:\\cuda\\include\\vector_types.h"




#line 383 "c:\\cuda\\include\\vector_types.h"
#line 380 "c:\\cuda\\include\\vector_types.h"




#line 385 "c:\\cuda\\include\\vector_types.h"
#line 382 "c:\\cuda\\include\\vector_types.h"




#line 387 "c:\\cuda\\include\\vector_types.h"
#line 384 "c:\\cuda\\include\\vector_types.h"




#line 389 "c:\\cuda\\include\\vector_types.h"
#line 386 "c:\\cuda\\include\\vector_types.h"




#line 391 "c:\\cuda\\include\\vector_types.h"
#line 388 "c:\\cuda\\include\\vector_types.h"




#line 393 "c:\\cuda\\include\\vector_types.h"
#line 390 "c:\\cuda\\include\\vector_types.h"




#line 395 "c:\\cuda\\include\\vector_types.h"
#line 392 "c:\\cuda\\include\\vector_types.h"




#line 397 "c:\\cuda\\include\\vector_types.h"
#line 394 "c:\\cuda\\include\\vector_types.h"




#line 399 "c:\\cuda\\include\\vector_types.h"
#line 396 "c:\\cuda\\include\\vector_types.h"




#line 401 "c:\\cuda\\include\\vector_types.h"
#line 398 "c:\\cuda\\include\\vector_types.h"




#line 403 "c:\\cuda\\include\\vector_types.h"
#line 400 "c:\\cuda\\include\\vector_types.h"




#line 405 "c:\\cuda\\include\\vector_types.h"
#line 402 "c:\\cuda\\include\\vector_types.h"




#line 407 "c:\\cuda\\include\\vector_types.h"
#line 404 "c:\\cuda\\include\\vector_types.h"




#line 409 "c:\\cuda\\include\\vector_types.h"
#line 406 "c:\\cuda\\include\\vector_types.h"




#line 411 "c:\\cuda\\include\\vector_types.h"
#line 408 "c:\\cuda\\include\\vector_types.h"




#line 413 "c:\\cuda\\include\\vector_types.h"
#line 410 "c:\\cuda\\include\\vector_types.h"




#line 415 "c:\\cuda\\include\\vector_types.h"
#line 412 "c:\\cuda\\include\\vector_types.h"




#line 417 "c:\\cuda\\include\\vector_types.h"
#line 414 "c:\\cuda\\include\\vector_types.h"




#line 419 "c:\\cuda\\include\\vector_types.h"
#line 416 "c:\\cuda\\include\\vector_types.h"




#line 421 "c:\\cuda\\include\\vector_types.h"
#line 418 "c:\\cuda\\include\\vector_types.h"




#line 423 "c:\\cuda\\include\\vector_types.h"
#line 420 "c:\\cuda\\include\\vector_types.h"




#line 425 "c:\\cuda\\include\\vector_types.h"
#line 422 "c:\\cuda\\include\\vector_types.h"




#line 427 "c:\\cuda\\include\\vector_types.h"
#line 424 "c:\\cuda\\include\\vector_types.h"




#line 429 "c:\\cuda\\include\\vector_types.h"
#line 426 "c:\\cuda\\include\\vector_types.h"




#line 431 "c:\\cuda\\include\\vector_types.h"
#line 428 "c:\\cuda\\include\\vector_types.h"




#line 433 "c:\\cuda\\include\\vector_types.h"
#line 430 "c:\\cuda\\include\\vector_types.h"




#line 435 "c:\\cuda\\include\\vector_types.h"
#line 432 "c:\\cuda\\include\\vector_types.h"




#line 437 "c:\\cuda\\include\\vector_types.h"
#line 434 "c:\\cuda\\include\\vector_types.h"




#line 439 "c:\\cuda\\include\\vector_types.h"
#line 436 "c:\\cuda\\include\\vector_types.h"




#line 441 "c:\\cuda\\include\\vector_types.h"
#line 438 "c:\\cuda\\include\\vector_types.h"




#line 443 "c:\\cuda\\include\\vector_types.h"
#line 440 "c:\\cuda\\include\\vector_types.h"




#line 445 "c:\\cuda\\include\\vector_types.h"
#line 442 "c:\\cuda\\include\\vector_types.h"




#line 447 "c:\\cuda\\include\\vector_types.h"
#line 444 "c:\\cuda\\include\\vector_types.h"




#line 449 "c:\\cuda\\include\\vector_types.h"
#line 446 "c:\\cuda\\include\\vector_types.h"




#line 451 "c:\\cuda\\include\\vector_types.h"
#line 448 "c:\\cuda\\include\\vector_types.h"




#line 453 "c:\\cuda\\include\\vector_types.h"
#line 450 "c:\\cuda\\include\\vector_types.h"




#line 455 "c:\\cuda\\include\\vector_types.h"
#line 452 "c:\\cuda\\include\\vector_types.h"




#line 457 "c:\\cuda\\include\\vector_types.h"
#line 454 "c:\\cuda\\include\\vector_types.h"




#line 459 "c:\\cuda\\include\\vector_types.h"
#line 456 "c:\\cuda\\include\\vector_types.h"




#line 461 "c:\\cuda\\include\\vector_types.h"
#line 458 "c:\\cuda\\include\\vector_types.h"




#line 463 "c:\\cuda\\include\\vector_types.h"
#line 460 "c:\\cuda\\include\\vector_types.h"




#line 465 "c:\\cuda\\include\\vector_types.h"
#line 469 "c:\\cuda\\include\\vector_types.h"







#line 477 "c:\\cuda\\include\\vector_types.h"
#line 480 "c:\\cuda\\include\\vector_types.h"




#line 485 "c:\\cuda\\include\\vector_types.h"
#line 89 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMalloc3D(cudaPitchedPtr *, cudaExtent); } 
#line 90 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0)); } 
#line 91 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemset3D(cudaPitchedPtr, int, cudaExtent); } 
#line 92 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy3D(const cudaMemcpy3DParms *); } 
#line 93 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0); } 
#line 101 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMalloc(void **, size_t); } 
#line 102 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMallocHost(void **, size_t); } 
#line 103 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMallocPitch(void **, size_t *, size_t, size_t); } 
#line 104 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0)); } 
#line 105 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaFree(void *); } 
#line 106 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaFreeHost(void *); } 
#line 107 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaFreeArray(cudaArray *); } 
#line 109 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaHostAlloc(void **, size_t, unsigned); } 
#line 110 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaHostGetDevicePointer(void **, void *, unsigned); } 
#line 111 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaHostGetFlags(unsigned *, void *); } 
#line 119 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemGetInfo(size_t *, size_t *); } 
#line 120 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind); } 
#line 121 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind); } 
#line 122 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind); } 
#line 123 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); } 
#line 124 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); } 
#line 125 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); } 
#line 126 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind); } 
#line 127 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); } 
#line 128 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice); } 
#line 129 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost); } 
#line 137 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 138 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 139 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 140 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 141 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 142 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 143 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 144 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); } 
#line 152 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemset(void *, int, size_t); } 
#line 153 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaMemset2D(void *, size_t, int, size_t, size_t); } 
#line 161 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetSymbolAddress(void **, const char *); } 
#line 162 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetSymbolSize(size_t *, const char *); } 
#line 170 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetDeviceCount(int *); } 
#line 171 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetDeviceProperties(cudaDeviceProp *, int); } 
#line 172 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaChooseDevice(int *, const cudaDeviceProp *); } 
#line 173 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaSetDevice(int); } 
#line 174 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetDevice(int *); } 
#line 175 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaSetValidDevices(int *, int); } 
#line 176 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaSetDeviceFlags(int); } 
#line 184 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (4294967295U)); } 
#line 185 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t); } 
#line 186 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *); } 
#line 187 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaUnbindTexture(const textureReference *); } 
#line 188 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetTextureAlignmentOffset(size_t *, const textureReference *); } 
#line 189 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetTextureReference(const textureReference **, const char *); } 
#line 197 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *); } 
#line 198 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetSurfaceAlignmentOffset(size_t *, const surfaceReference *); } 
#line 199 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetSurfaceReference(const surfaceReference **, const char *); } 
#line 207 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *); } 
#line 208 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaChannelFormatDesc __stdcall cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind); } 
#line 216 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetLastError(); } 
#line 217 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaPeekAtLastError(); } 
#line 218 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern const char *__stdcall cudaGetErrorString(cudaError_t); } 
#line 226 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0); } 
#line 227 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaSetupArgument(const void *, size_t, size_t); } 
#line 228 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaFuncSetCacheConfig(const char *, cudaFuncCache); } 
#line 229 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaLaunch(const char *); } 
#line 230 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes *, const char *); } 
#line 238 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaStreamCreate(cudaStream_t *); } 
#line 239 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t); } 
#line 240 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaStreamSynchronize(cudaStream_t); } 
#line 241 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaStreamQuery(cudaStream_t); } 
#line 249 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaEventCreate(cudaEvent_t *); } 
#line 250 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t *, int); } 
#line 251 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t, cudaStream_t = 0); } 
#line 252 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaEventQuery(cudaEvent_t); } 
#line 253 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaEventSynchronize(cudaEvent_t); } 
#line 254 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t); } 
#line 255 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t); } 
#line 263 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaSetDoubleForDevice(double *); } 
#line 264 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaSetDoubleForHost(double *); } 
#line 272 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaThreadExit(); } 
#line 273 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaThreadSynchronize(); } 
#line 274 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaThreadSetLimit(cudaLimit, size_t); } 
#line 275 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaThreadGetLimit(size_t *, cudaLimit); } 
#line 283 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaDriverGetVersion(int *); } 
#line 284 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaRuntimeGetVersion(int *); } 
#line 285 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGetExportTable(const void **, const cudaUUID_t *); } 
#line 294 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGraphicsUnregisterResource(cudaGraphicsResource *); } 
#line 295 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGraphicsResourceSetMapFlags(cudaGraphicsResource *, unsigned); } 
#line 296 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGraphicsMapResources(int, cudaGraphicsResource **, cudaStream_t = 0); } 
#line 297 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGraphicsUnmapResources(int, cudaGraphicsResource **, cudaStream_t = 0); } 
#line 298 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource *); } 
#line 299 "c:\\cuda\\include\\cuda_runtime_api.h"
extern "C" { extern cudaError_t __stdcall cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource *, unsigned, unsigned); } 
#line 93 "c:\\cuda\\include\\channel_descriptor.h"
template<class T> __inline cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 94 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 95 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 96 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 98 "c:\\cuda\\include\\channel_descriptor.h"
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
#line 99 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 100 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8); 
#line 102 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 103 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 105 "c:\\cuda\\include\\channel_descriptor.h"
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
#line 106 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 107 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8); 
#line 109 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 110 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 112 "c:\\cuda\\include\\channel_descriptor.h"
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
#line 113 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 114 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8); 
#line 116 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 117 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 119 "c:\\cuda\\include\\channel_descriptor.h"
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
#line 120 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 121 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8); 
#line 123 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 124 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 126 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
#line 127 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 128 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(char)) * 8); 
#line 133 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 135 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 137 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
#line 138 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 139 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8); 
#line 141 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 142 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 144 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
#line 145 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 146 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8); 
#line 148 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 149 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 151 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
#line 152 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 153 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8); 
#line 155 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 156 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 158 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
#line 159 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 160 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8); 
#line 162 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 163 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 165 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
#line 166 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 167 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8); 
#line 169 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 170 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 172 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
#line 173 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 174 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8); 
#line 176 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 177 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 179 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
#line 180 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 181 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8); 
#line 183 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 184 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 186 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
#line 187 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 188 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8); 
#line 190 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 191 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 193 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
#line 194 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 195 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(short)) * 8); 
#line 197 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 198 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 200 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
#line 201 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 202 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8); 
#line 204 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 205 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 207 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
#line 208 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 209 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(short)) * 8); 
#line 211 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 212 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 214 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
#line 215 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 216 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8); 
#line 218 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 219 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 221 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
#line 222 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 223 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(short)) * 8); 
#line 225 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 226 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 228 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
#line 229 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 230 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8); 
#line 232 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 233 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 235 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
#line 236 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 237 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(short)) * 8); 
#line 239 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 240 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 242 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
#line 243 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 244 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8); 
#line 246 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 247 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 249 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
#line 250 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 251 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(int)) * 8); 
#line 253 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 254 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 256 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
#line 257 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 258 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8); 
#line 260 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 261 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 263 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
#line 264 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 265 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(int)) * 8); 
#line 267 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 268 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 270 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
#line 271 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 272 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8); 
#line 274 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 275 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 277 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
#line 278 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 279 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(int)) * 8); 
#line 281 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 282 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 284 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
#line 285 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 286 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8); 
#line 288 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 289 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 291 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
#line 292 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 293 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(int)) * 8); 
#line 295 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 296 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 298 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
#line 299 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 300 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8); 
#line 302 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 303 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 307 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
#line 308 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 309 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(long)) * 8); 
#line 311 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 312 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 314 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
#line 315 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 316 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned long)) * 8); 
#line 318 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 319 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 321 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
#line 322 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 323 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(long)) * 8); 
#line 325 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 326 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 328 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
#line 329 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 330 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned long)) * 8); 
#line 332 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 333 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 335 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
#line 336 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 337 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(long)) * 8); 
#line 339 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 340 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 342 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
#line 343 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 344 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned long)) * 8); 
#line 346 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 347 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 349 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
#line 350 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 351 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(long)) * 8); 
#line 353 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 354 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 356 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
#line 357 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 358 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(unsigned long)) * 8); 
#line 360 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 361 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 365 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
#line 366 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 367 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(float)) * 8); 
#line 369 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 370 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 372 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
#line 373 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 374 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(float)) * 8); 
#line 376 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 377 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 379 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
#line 380 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 381 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(float)) * 8); 
#line 383 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 384 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 386 "c:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
#line 387 "c:\\cuda\\include\\channel_descriptor.h"
{ 
#line 388 "c:\\cuda\\include\\channel_descriptor.h"
int e = (((int)sizeof(float)) * 8); 
#line 390 "c:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 391 "c:\\cuda\\include\\channel_descriptor.h"
} 
#line 55 "c:\\cuda\\include\\driver_functions.h"
static __inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
#line 56 "c:\\cuda\\include\\driver_functions.h"
{ 
#line 57 "c:\\cuda\\include\\driver_functions.h"
cudaPitchedPtr s; 
#line 59 "c:\\cuda\\include\\driver_functions.h"
(s.ptr) = d; 
#line 60 "c:\\cuda\\include\\driver_functions.h"
(s.pitch) = p; 
#line 61 "c:\\cuda\\include\\driver_functions.h"
(s.xsize) = xsz; 
#line 62 "c:\\cuda\\include\\driver_functions.h"
(s.ysize) = ysz; 
#line 64 "c:\\cuda\\include\\driver_functions.h"
return s; 
#line 65 "c:\\cuda\\include\\driver_functions.h"
} 
#line 67 "c:\\cuda\\include\\driver_functions.h"
static __inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
#line 68 "c:\\cuda\\include\\driver_functions.h"
{ 
#line 69 "c:\\cuda\\include\\driver_functions.h"
cudaPos p; 
#line 71 "c:\\cuda\\include\\driver_functions.h"
(p.x) = x; 
#line 72 "c:\\cuda\\include\\driver_functions.h"
(p.y) = y; 
#line 73 "c:\\cuda\\include\\driver_functions.h"
(p.z) = z; 
#line 75 "c:\\cuda\\include\\driver_functions.h"
return p; 
#line 76 "c:\\cuda\\include\\driver_functions.h"
} 
#line 78 "c:\\cuda\\include\\driver_functions.h"
static __inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
#line 79 "c:\\cuda\\include\\driver_functions.h"
{ 
#line 80 "c:\\cuda\\include\\driver_functions.h"
cudaExtent e; 
#line 82 "c:\\cuda\\include\\driver_functions.h"
(e.width) = w; 
#line 83 "c:\\cuda\\include\\driver_functions.h"
(e.height) = h; 
#line 84 "c:\\cuda\\include\\driver_functions.h"
(e.depth) = d; 
#line 86 "c:\\cuda\\include\\driver_functions.h"
return e; 
#line 87 "c:\\cuda\\include\\driver_functions.h"
} 
#line 55 "c:\\cuda\\include\\vector_functions.h"
static __inline char1 make_char1(signed char x) 
#line 56 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 57 "c:\\cuda\\include\\vector_functions.h"
char1 t; (t.x) = x; return t; 
#line 58 "c:\\cuda\\include\\vector_functions.h"
} 
#line 60 "c:\\cuda\\include\\vector_functions.h"
static __inline uchar1 make_uchar1(unsigned char x) 
#line 61 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 62 "c:\\cuda\\include\\vector_functions.h"
uchar1 t; (t.x) = x; return t; 
#line 63 "c:\\cuda\\include\\vector_functions.h"
} 
#line 65 "c:\\cuda\\include\\vector_functions.h"
static __inline char2 make_char2(signed char x, signed char y) 
#line 66 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 67 "c:\\cuda\\include\\vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t; 
#line 68 "c:\\cuda\\include\\vector_functions.h"
} 
#line 70 "c:\\cuda\\include\\vector_functions.h"
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
#line 71 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 72 "c:\\cuda\\include\\vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t; 
#line 73 "c:\\cuda\\include\\vector_functions.h"
} 
#line 75 "c:\\cuda\\include\\vector_functions.h"
static __inline char3 make_char3(signed char x, signed char y, signed char z) 
#line 76 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 77 "c:\\cuda\\include\\vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 78 "c:\\cuda\\include\\vector_functions.h"
} 
#line 80 "c:\\cuda\\include\\vector_functions.h"
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
#line 81 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 82 "c:\\cuda\\include\\vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 83 "c:\\cuda\\include\\vector_functions.h"
} 
#line 85 "c:\\cuda\\include\\vector_functions.h"
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
#line 86 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 87 "c:\\cuda\\include\\vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 88 "c:\\cuda\\include\\vector_functions.h"
} 
#line 90 "c:\\cuda\\include\\vector_functions.h"
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
#line 91 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 92 "c:\\cuda\\include\\vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 93 "c:\\cuda\\include\\vector_functions.h"
} 
#line 95 "c:\\cuda\\include\\vector_functions.h"
static __inline short1 make_short1(short x) 
#line 96 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 97 "c:\\cuda\\include\\vector_functions.h"
short1 t; (t.x) = x; return t; 
#line 98 "c:\\cuda\\include\\vector_functions.h"
} 
#line 100 "c:\\cuda\\include\\vector_functions.h"
static __inline ushort1 make_ushort1(unsigned short x) 
#line 101 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 102 "c:\\cuda\\include\\vector_functions.h"
ushort1 t; (t.x) = x; return t; 
#line 103 "c:\\cuda\\include\\vector_functions.h"
} 
#line 105 "c:\\cuda\\include\\vector_functions.h"
static __inline short2 make_short2(short x, short y) 
#line 106 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 107 "c:\\cuda\\include\\vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t; 
#line 108 "c:\\cuda\\include\\vector_functions.h"
} 
#line 110 "c:\\cuda\\include\\vector_functions.h"
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
#line 111 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 112 "c:\\cuda\\include\\vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t; 
#line 113 "c:\\cuda\\include\\vector_functions.h"
} 
#line 115 "c:\\cuda\\include\\vector_functions.h"
static __inline short3 make_short3(short x, short y, short z) 
#line 116 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 117 "c:\\cuda\\include\\vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 118 "c:\\cuda\\include\\vector_functions.h"
} 
#line 120 "c:\\cuda\\include\\vector_functions.h"
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
#line 121 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 122 "c:\\cuda\\include\\vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 123 "c:\\cuda\\include\\vector_functions.h"
} 
#line 125 "c:\\cuda\\include\\vector_functions.h"
static __inline short4 make_short4(short x, short y, short z, short w) 
#line 126 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 127 "c:\\cuda\\include\\vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 128 "c:\\cuda\\include\\vector_functions.h"
} 
#line 130 "c:\\cuda\\include\\vector_functions.h"
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
#line 131 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 132 "c:\\cuda\\include\\vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 133 "c:\\cuda\\include\\vector_functions.h"
} 
#line 135 "c:\\cuda\\include\\vector_functions.h"
static __inline int1 make_int1(int x) 
#line 136 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 137 "c:\\cuda\\include\\vector_functions.h"
int1 t; (t.x) = x; return t; 
#line 138 "c:\\cuda\\include\\vector_functions.h"
} 
#line 140 "c:\\cuda\\include\\vector_functions.h"
static __inline uint1 make_uint1(unsigned x) 
#line 141 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 142 "c:\\cuda\\include\\vector_functions.h"
uint1 t; (t.x) = x; return t; 
#line 143 "c:\\cuda\\include\\vector_functions.h"
} 
#line 145 "c:\\cuda\\include\\vector_functions.h"
static __inline int2 make_int2(int x, int y) 
#line 146 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 147 "c:\\cuda\\include\\vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t; 
#line 148 "c:\\cuda\\include\\vector_functions.h"
} 
#line 150 "c:\\cuda\\include\\vector_functions.h"
static __inline uint2 make_uint2(unsigned x, unsigned y) 
#line 151 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 152 "c:\\cuda\\include\\vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t; 
#line 153 "c:\\cuda\\include\\vector_functions.h"
} 
#line 155 "c:\\cuda\\include\\vector_functions.h"
static __inline int3 make_int3(int x, int y, int z) 
#line 156 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 157 "c:\\cuda\\include\\vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 158 "c:\\cuda\\include\\vector_functions.h"
} 
#line 160 "c:\\cuda\\include\\vector_functions.h"
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
#line 161 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 162 "c:\\cuda\\include\\vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 163 "c:\\cuda\\include\\vector_functions.h"
} 
#line 165 "c:\\cuda\\include\\vector_functions.h"
static __inline int4 make_int4(int x, int y, int z, int w) 
#line 166 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 167 "c:\\cuda\\include\\vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 168 "c:\\cuda\\include\\vector_functions.h"
} 
#line 170 "c:\\cuda\\include\\vector_functions.h"
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
#line 171 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 172 "c:\\cuda\\include\\vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 173 "c:\\cuda\\include\\vector_functions.h"
} 
#line 175 "c:\\cuda\\include\\vector_functions.h"
static __inline long1 make_long1(long x) 
#line 176 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 177 "c:\\cuda\\include\\vector_functions.h"
long1 t; (t.x) = x; return t; 
#line 178 "c:\\cuda\\include\\vector_functions.h"
} 
#line 180 "c:\\cuda\\include\\vector_functions.h"
static __inline ulong1 make_ulong1(unsigned long x) 
#line 181 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 182 "c:\\cuda\\include\\vector_functions.h"
ulong1 t; (t.x) = x; return t; 
#line 183 "c:\\cuda\\include\\vector_functions.h"
} 
#line 185 "c:\\cuda\\include\\vector_functions.h"
static __inline long2 make_long2(long x, long y) 
#line 186 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 187 "c:\\cuda\\include\\vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t; 
#line 188 "c:\\cuda\\include\\vector_functions.h"
} 
#line 190 "c:\\cuda\\include\\vector_functions.h"
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
#line 191 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 192 "c:\\cuda\\include\\vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t; 
#line 193 "c:\\cuda\\include\\vector_functions.h"
} 
#line 195 "c:\\cuda\\include\\vector_functions.h"
static __inline long3 make_long3(long x, long y, long z) 
#line 196 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 197 "c:\\cuda\\include\\vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 198 "c:\\cuda\\include\\vector_functions.h"
} 
#line 200 "c:\\cuda\\include\\vector_functions.h"
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
#line 201 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 202 "c:\\cuda\\include\\vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 203 "c:\\cuda\\include\\vector_functions.h"
} 
#line 205 "c:\\cuda\\include\\vector_functions.h"
static __inline long4 make_long4(long x, long y, long z, long w) 
#line 206 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 207 "c:\\cuda\\include\\vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 208 "c:\\cuda\\include\\vector_functions.h"
} 
#line 210 "c:\\cuda\\include\\vector_functions.h"
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
#line 211 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 212 "c:\\cuda\\include\\vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 213 "c:\\cuda\\include\\vector_functions.h"
} 
#line 215 "c:\\cuda\\include\\vector_functions.h"
static __inline float1 make_float1(float x) 
#line 216 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 217 "c:\\cuda\\include\\vector_functions.h"
float1 t; (t.x) = x; return t; 
#line 218 "c:\\cuda\\include\\vector_functions.h"
} 
#line 220 "c:\\cuda\\include\\vector_functions.h"
static __inline float2 make_float2(float x, float y) 
#line 221 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 222 "c:\\cuda\\include\\vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t; 
#line 223 "c:\\cuda\\include\\vector_functions.h"
} 
#line 225 "c:\\cuda\\include\\vector_functions.h"
static __inline float3 make_float3(float x, float y, float z) 
#line 226 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 227 "c:\\cuda\\include\\vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 228 "c:\\cuda\\include\\vector_functions.h"
} 
#line 230 "c:\\cuda\\include\\vector_functions.h"
static __inline float4 make_float4(float x, float y, float z, float w) 
#line 231 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 232 "c:\\cuda\\include\\vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 233 "c:\\cuda\\include\\vector_functions.h"
} 
#line 235 "c:\\cuda\\include\\vector_functions.h"
static __inline longlong1 make_longlong1(__int64 x) 
#line 236 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 237 "c:\\cuda\\include\\vector_functions.h"
longlong1 t; (t.x) = x; return t; 
#line 238 "c:\\cuda\\include\\vector_functions.h"
} 
#line 240 "c:\\cuda\\include\\vector_functions.h"
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x) 
#line 241 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 242 "c:\\cuda\\include\\vector_functions.h"
ulonglong1 t; (t.x) = x; return t; 
#line 243 "c:\\cuda\\include\\vector_functions.h"
} 
#line 245 "c:\\cuda\\include\\vector_functions.h"
static __inline longlong2 make_longlong2(__int64 x, __int64 y) 
#line 246 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 247 "c:\\cuda\\include\\vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t; 
#line 248 "c:\\cuda\\include\\vector_functions.h"
} 
#line 250 "c:\\cuda\\include\\vector_functions.h"
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y) 
#line 251 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 252 "c:\\cuda\\include\\vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
#line 253 "c:\\cuda\\include\\vector_functions.h"
} 
#line 255 "c:\\cuda\\include\\vector_functions.h"
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z) 
#line 256 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 257 "c:\\cuda\\include\\vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 258 "c:\\cuda\\include\\vector_functions.h"
} 
#line 260 "c:\\cuda\\include\\vector_functions.h"
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z) 
#line 261 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 262 "c:\\cuda\\include\\vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 263 "c:\\cuda\\include\\vector_functions.h"
} 
#line 265 "c:\\cuda\\include\\vector_functions.h"
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w) 
#line 266 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 267 "c:\\cuda\\include\\vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 268 "c:\\cuda\\include\\vector_functions.h"
} 
#line 270 "c:\\cuda\\include\\vector_functions.h"
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w) 
#line 271 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 272 "c:\\cuda\\include\\vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 273 "c:\\cuda\\include\\vector_functions.h"
} 
#line 275 "c:\\cuda\\include\\vector_functions.h"
static __inline double1 make_double1(double x) 
#line 276 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 277 "c:\\cuda\\include\\vector_functions.h"
double1 t; (t.x) = x; return t; 
#line 278 "c:\\cuda\\include\\vector_functions.h"
} 
#line 280 "c:\\cuda\\include\\vector_functions.h"
static __inline double2 make_double2(double x, double y) 
#line 281 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 282 "c:\\cuda\\include\\vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t; 
#line 283 "c:\\cuda\\include\\vector_functions.h"
} 
#line 285 "c:\\cuda\\include\\vector_functions.h"
static __inline double3 make_double3(double x, double y, double z) 
#line 286 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 287 "c:\\cuda\\include\\vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 288 "c:\\cuda\\include\\vector_functions.h"
} 
#line 290 "c:\\cuda\\include\\vector_functions.h"
static __inline double4 make_double4(double x, double y, double z, double w) 
#line 291 "c:\\cuda\\include\\vector_functions.h"
{ 
#line 292 "c:\\cuda\\include\\vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 293 "c:\\cuda\\include\\vector_functions.h"
} 
#line 48 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { void *__cdecl _memccpy(void *, const void *, int, size_t); } 
#line 49 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const void *__cdecl memchr(const void *, int, size_t); } 
#line 50 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _memicmp(const void *, const void *, size_t); } 
#line 51 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _memicmp_l(const void *, const void *, size_t, _locale_t); } 
#line 52 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl memcmp(const void *, const void *, size_t); } 
#line 53 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { void *__cdecl memcpy(void *, const void *, size_t); } 
#line 55 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl memcpy_s(void *, rsize_t, const void *, rsize_t); } 
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { void *__cdecl memset(void *, int, size_t); } 
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { void *__cdecl memccpy(void *, const void *, int, size_t); } 
#line 62 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl memicmp(const void *, const void *, size_t); } 
#line 67 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strset_s(char *, size_t, int); } 
#line 68 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Dest ) [ _Size ], int _Value ) { return _strset_s ( _Dest, _Size, _Value ); }
#line 69 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strset(char *, int); } 
#line 71 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl strcpy_s(char *, rsize_t, const char *); } 
#line 73 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Dest ) [ _Size ], const char * _Source ) { return strcpy_s ( _Dest, _Size, _Source ); }
#line 74 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strcpy(char *, const char *); } 
#line 76 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl strcat_s(char *, rsize_t, const char *); } 
#line 78 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Dest ) [ _Size ], const char * _Source ) { return strcat_s ( _Dest, _Size, _Source ); }
#line 79 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strcat(char *, const char *); } 
#line 80 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl strcmp(const char *, const char *); } 
#line 81 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl strlen(const char *); } 
#line 82 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl strnlen(const char *, size_t); } 
#line 84 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { static __inline size_t __cdecl strnlen_s(const char *_Str, size_t _MaxCount) 
#line 85 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ 
#line 86 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
return (_Str == (0)) ? (0) : strnlen(_Str, _MaxCount); 
#line 87 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
} } 
#line 90 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl memmove_s(void *, rsize_t, const void *, rsize_t); } 
#line 96 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { void *__cdecl memmove(void *, const void *, size_t); } 
#line 104 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strdup(const char *); } 
#line 110 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const char *__cdecl strchr(const char *, int); } 
#line 111 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _stricmp(const char *, const char *); } 
#line 112 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strcmpi(const char *, const char *); } 
#line 113 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _stricmp_l(const char *, const char *, _locale_t); } 
#line 114 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl strcoll(const char *, const char *); } 
#line 115 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strcoll_l(const char *, const char *, _locale_t); } 
#line 116 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _stricoll(const char *, const char *); } 
#line 117 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _stricoll_l(const char *, const char *, _locale_t); } 
#line 118 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strncoll(const char *, const char *, size_t); } 
#line 119 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strncoll_l(const char *, const char *, size_t, _locale_t); } 
#line 120 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strnicoll(const char *, const char *, size_t); } 
#line 121 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strnicoll_l(const char *, const char *, size_t, _locale_t); } 
#line 122 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl strcspn(const char *, const char *); } 
#line 123 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strerror(const char *); } 
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strerror_s(char *, size_t, const char *); } 
#line 125 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], const char * _ErrorMessage ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 126 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strerror(int); } 
#line 128 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl strerror_s(char *, size_t, int); } 
#line 130 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 131 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strlwr_s(char *, size_t); } 
#line 132 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) { return _strlwr_s ( _String, _Size ); }
#line 133 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strlwr(char *); } 
#line 134 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strlwr_s_l(char *, size_t, _locale_t); } 
#line 135 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) { return _strlwr_s_l ( _String, _Size, _Locale ); }
#line 136 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strlwr_l(char *, _locale_t); } 
#line 138 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl strncat_s(char *, rsize_t, const char *, rsize_t); } 
#line 140 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Dest ) [ _Size ], const char * _Source, size_t _Count ) { return strncat_s ( _Dest, _Size, _Source, _Count ); }
#pragma warning(push)
#pragma warning(disable:6059)
#line 144 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strncat(char *, const char *, size_t); } 
#pragma warning(pop)
#line 149 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl strncmp(const char *, const char *, size_t); } 
#line 151 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strnicmp(const char *, const char *, size_t); } 
#line 152 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _strnicmp_l(const char *, const char *, size_t, _locale_t); } 
#line 154 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl strncpy_s(char *, rsize_t, const char *, rsize_t); } 
#line 156 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Dest ) [ _Size ], const char * _Source, size_t _Count ) { return strncpy_s ( _Dest, _Size, _Source, _Count ); }
#line 157 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strncpy(char *, const char *, size_t); } 
#line 158 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strnset_s(char *, size_t, int, size_t); } 
#line 159 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Dest ) [ _Size ], int _Val, size_t _Count ) { return _strnset_s ( _Dest, _Size, _Val, _Count ); }
#line 160 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strnset(char *, int, size_t); } 
#line 161 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const char *__cdecl strpbrk(const char *, const char *); } 
#line 162 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const char *__cdecl strrchr(const char *, int); } 
#line 163 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strrev(char *); } 
#line 164 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl strspn(const char *, const char *); } 
#line 165 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const char *__cdecl strstr(const char *, const char *); } 
#line 166 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strtok(char *, const char *); } 
#line 168 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strtok_s(char *, const char *, char **); } 
#line 170 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strupr_s(char *, size_t); } 
#line 171 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) { return _strupr_s ( _String, _Size ); }
#line 172 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strupr(char *); } 
#line 173 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _strupr_s_l(char *, size_t, _locale_t); } 
#line 174 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) { return _strupr_s_l ( _String, _Size, _Locale ); }
#line 175 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl _strupr_l(char *, _locale_t); } 
#line 176 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl strxfrm(char *, const char *, size_t); } 
#line 177 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl _strxfrm_l(char *, const char *, size_t, _locale_t); } 
#line 183 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline char *__cdecl strchr(char *_Str, int _Ch) 
#line 184 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (char *)strchr((const char *)_Str, _Ch); } 
#line 185 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline char *__cdecl strpbrk(char *_Str, const char *_Control) 
#line 186 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (char *)strpbrk((const char *)_Str, _Control); } 
#line 187 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline char *__cdecl strrchr(char *_Str, int _Ch) 
#line 188 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (char *)strrchr((const char *)_Str, _Ch); } 
#line 189 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline char *__cdecl strstr(char *_Str, const char *_SubStr) 
#line 190 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (char *)strstr((const char *)_Str, _SubStr); } 
#line 194 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline void *__cdecl memchr(void *_Pv, int _C, size_t _N) 
#line 195 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (void *)memchr((const void *)_Pv, _C, _N); } 
#line 207 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strdup(const char *); } 
#line 214 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl strcmpi(const char *, const char *); } 
#line 215 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl stricmp(const char *, const char *); } 
#line 216 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strlwr(char *); } 
#line 217 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl strnicmp(const char *, const char *, size_t); } 
#line 218 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strnset(char *, int, size_t); } 
#line 219 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strrev(char *); } 
#line 220 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strset(char *, int); } 
#line 221 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { char *__cdecl strupr(char *); } 
#line 235 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcsdup(const __wchar_t *); } 
#line 242 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl wcscat_s(__wchar_t *, rsize_t, const __wchar_t *); } 
#line 244 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source ) { return wcscat_s ( _Dest, _Size, _Source ); }
#line 245 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcscat(__wchar_t *, const __wchar_t *); } 
#line 246 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const __wchar_t *__cdecl wcschr(const __wchar_t *, __wchar_t); } 
#line 247 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl wcscmp(const __wchar_t *, const __wchar_t *); } 
#line 249 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl wcscpy_s(__wchar_t *, rsize_t, const __wchar_t *); } 
#line 251 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source ) { return wcscpy_s ( _Dest, _Size, _Source ); }
#line 252 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcscpy(__wchar_t *, const __wchar_t *); } 
#line 253 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl wcscspn(const __wchar_t *, const __wchar_t *); } 
#line 254 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl wcslen(const __wchar_t *); } 
#line 255 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl wcsnlen(const __wchar_t *, size_t); } 
#line 257 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { static __inline size_t __cdecl wcsnlen_s(const __wchar_t *_Src, size_t _MaxCount) 
#line 258 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ 
#line 259 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
return (_Src == (0)) ? (0) : wcsnlen(_Src, _MaxCount); 
#line 260 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
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
#line 272 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl wcsncpy_s(__wchar_t *, rsize_t, const __wchar_t *, rsize_t); } 
#line 274 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _Count ) { return wcsncpy_s ( _Dest, _Size, _Source, _Count ); }
#line 275 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcsncpy(__wchar_t *, const __wchar_t *, size_t); } 
#line 276 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const __wchar_t *__cdecl wcspbrk(const __wchar_t *, const __wchar_t *); } 
#line 277 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const __wchar_t *__cdecl wcsrchr(const __wchar_t *, __wchar_t); } 
#line 278 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl wcsspn(const __wchar_t *, const __wchar_t *); } 
#line 279 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { const __wchar_t *__cdecl wcsstr(const __wchar_t *, const __wchar_t *); } 
#line 280 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcstok(__wchar_t *, const __wchar_t *); } 
#line 282 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcstok_s(__wchar_t *, const __wchar_t *, __wchar_t **); } 
#line 284 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcserror(int); } 
#line 285 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _wcserror_s(__wchar_t *, size_t, int); } 
#line 286 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) { return _wcserror_s ( _Buffer, _Size, _Error ); }
#line 287 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl __wcserror(const __wchar_t *); } 
#line 288 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl __wcserror_s(__wchar_t *, size_t, const __wchar_t *); } 
#line 289 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], const wchar_t * _ErrorMessage ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 291 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsicmp(const __wchar_t *, const __wchar_t *); } 
#line 292 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsicmp_l(const __wchar_t *, const __wchar_t *, _locale_t); } 
#line 293 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsnicmp(const __wchar_t *, const __wchar_t *, size_t); } 
#line 294 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsnicmp_l(const __wchar_t *, const __wchar_t *, size_t, _locale_t); } 
#line 295 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _wcsnset_s(__wchar_t *, size_t, __wchar_t, size_t); } 
#line 296 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Dst ) [ _Size ], wchar_t _Val, size_t _MaxCount ) { return _wcsnset_s ( _Dst, _Size, _Val, _MaxCount ); }
#line 297 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcsnset(__wchar_t *, __wchar_t, size_t); } 
#line 298 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcsrev(__wchar_t *); } 
#line 299 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _wcsset_s(__wchar_t *, size_t, __wchar_t); } 
#line 300 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _Str ) [ _Size ], wchar_t _Val ) { return _wcsset_s ( _Str, _Size, _Val ); }
#line 301 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcsset(__wchar_t *, __wchar_t); } 
#line 303 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _wcslwr_s(__wchar_t *, size_t); } 
#line 304 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) { return _wcslwr_s ( _String, _Size ); }
#line 305 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcslwr(__wchar_t *); } 
#line 306 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _wcslwr_s_l(__wchar_t *, size_t, _locale_t); } 
#line 307 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }
#line 308 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcslwr_l(__wchar_t *, _locale_t); } 
#line 309 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _wcsupr_s(__wchar_t *, size_t); } 
#line 310 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) { return _wcsupr_s ( _String, _Size ); }
#line 311 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcsupr(__wchar_t *); } 
#line 312 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { errno_t __cdecl _wcsupr_s_l(__wchar_t *, size_t, _locale_t); } 
#line 313 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }
#line 314 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl _wcsupr_l(__wchar_t *, _locale_t); } 
#line 315 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl wcsxfrm(__wchar_t *, const __wchar_t *, size_t); } 
#line 316 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { size_t __cdecl _wcsxfrm_l(__wchar_t *, const __wchar_t *, size_t, _locale_t); } 
#line 317 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl wcscoll(const __wchar_t *, const __wchar_t *); } 
#line 318 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcscoll_l(const __wchar_t *, const __wchar_t *, _locale_t); } 
#line 319 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsicoll(const __wchar_t *, const __wchar_t *); } 
#line 320 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsicoll_l(const __wchar_t *, const __wchar_t *, _locale_t); } 
#line 321 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsncoll(const __wchar_t *, const __wchar_t *, size_t); } 
#line 322 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsncoll_l(const __wchar_t *, const __wchar_t *, size_t, _locale_t); } 
#line 323 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsnicoll(const __wchar_t *, const __wchar_t *, size_t); } 
#line 324 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl _wcsnicoll_l(const __wchar_t *, const __wchar_t *, size_t, _locale_t); } 
#line 330 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline __wchar_t *__cdecl wcschr(__wchar_t *_Str, __wchar_t _Ch) 
#line 331 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (__wchar_t *)wcschr((const __wchar_t *)_Str, _Ch); } 
#line 332 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_Str, const __wchar_t *_Control) 
#line 333 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (__wchar_t *)wcspbrk((const __wchar_t *)_Str, _Control); } 
#line 334 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_Str, __wchar_t _Ch) 
#line 335 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (__wchar_t *)wcsrchr((const __wchar_t *)_Str, _Ch); } 
#line 336 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
inline __wchar_t *__cdecl wcsstr(__wchar_t *_Str, const __wchar_t *_SubStr) 
#line 337 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
{ return (__wchar_t *)wcsstr((const __wchar_t *)_Str, _SubStr); } 
#line 349 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcsdup(const __wchar_t *); } 
#line 359 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl wcsicmp(const __wchar_t *, const __wchar_t *); } 
#line 360 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl wcsnicmp(const __wchar_t *, const __wchar_t *, size_t); } 
#line 361 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcsnset(__wchar_t *, __wchar_t, size_t); } 
#line 362 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcsrev(__wchar_t *); } 
#line 363 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcsset(__wchar_t *, __wchar_t); } 
#line 364 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcslwr(__wchar_t *); } 
#line 365 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { __wchar_t *__cdecl wcsupr(__wchar_t *); } 
#line 366 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\string.h"
extern "C" { int __cdecl wcsicoll(const __wchar_t *, const __wchar_t *); } 
#line 35 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
#pragma pack ( push, 8 )
#line 93 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { typedef long clock_t; }
#line 117 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { struct tm { 
#line 118 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_sec; 
#line 119 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_min; 
#line 120 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_hour; 
#line 121 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_mday; 
#line 122 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_mon; 
#line 123 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_year; 
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_wday; 
#line 125 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_yday; 
#line 126 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
int tm_isdst; 
#line 127 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
}; }
#line 142 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { int *__cdecl __daylight(); } 
#line 146 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { long *__cdecl __dstbias(); } 
#line 150 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { long *__cdecl __timezone(); } 
#line 154 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { char **__cdecl __tzname(); } 
#line 157 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _get_daylight(int *); } 
#line 158 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _get_dstbias(long *); } 
#line 159 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _get_timezone(long *); } 
#line 160 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _get_tzname(size_t *, char *, size_t, int); } 
#line 164 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { char *__cdecl asctime(const tm *); } 
#line 166 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl asctime_s(char *, size_t, const tm *); } 
#line 168 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl asctime_s ( char ( & _Buffer ) [ _Size ], const struct tm * _Time ) { return asctime_s ( _Buffer, _Size, _Time ); }
#line 170 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { char *__cdecl _ctime32(const __time32_t *); } 
#line 171 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _ctime32_s(char *, size_t, const __time32_t *); } 
#line 172 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _ctime32_s ( char ( & _Buffer ) [ _Size ], const __time32_t * _Time ) { return _ctime32_s ( _Buffer, _Size, _Time ); }
#line 174 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { clock_t __cdecl clock(); } 
#line 175 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { double __cdecl _difftime32(__time32_t, __time32_t); } 
#line 177 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { tm *__cdecl _gmtime32(const __time32_t *); } 
#line 178 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _gmtime32_s(tm *, const __time32_t *); } 
#line 180 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { tm *__cdecl _localtime32(const __time32_t *); } 
#line 181 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _localtime32_s(tm *, const __time32_t *); } 
#line 183 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { size_t __cdecl strftime(char *, size_t, const char *, const tm *); } 
#line 184 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { size_t __cdecl _strftime_l(char *, size_t, const char *, const tm *, _locale_t); } 
#line 186 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _strdate_s(char *, size_t); } 
#line 187 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _strdate_s ( char ( & _Buffer ) [ _Size ] ) { return _strdate_s ( _Buffer, _Size ); }
#line 188 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { char *__cdecl _strdate(char *); } 
#line 190 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _strtime_s(char *, size_t); } 
#line 191 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _strtime_s ( char ( & _Buffer ) [ _Size ] ) { return _strtime_s ( _Buffer, _Size ); }
#line 192 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { char *__cdecl _strtime(char *); } 
#line 194 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __time32_t __cdecl _time32(__time32_t *); } 
#line 195 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __time32_t __cdecl _mktime32(tm *); } 
#line 196 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __time32_t __cdecl _mkgmtime32(tm *); } 
#line 201 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { void __cdecl _tzset(); } 
#line 204 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { double __cdecl _difftime64(__time64_t, __time64_t); } 
#line 205 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { char *__cdecl _ctime64(const __time64_t *); } 
#line 206 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _ctime64_s(char *, size_t, const __time64_t *); } 
#line 207 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _ctime64_s ( char ( & _Buffer ) [ _Size ], const __time64_t * _Time ) { return _ctime64_s ( _Buffer, _Size, _Time ); }
#line 209 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { tm *__cdecl _gmtime64(const __time64_t *); } 
#line 210 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _gmtime64_s(tm *, const __time64_t *); } 
#line 212 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { tm *__cdecl _localtime64(const __time64_t *); } 
#line 213 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _localtime64_s(tm *, const __time64_t *); } 
#line 215 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __time64_t __cdecl _mktime64(tm *); } 
#line 216 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __time64_t __cdecl _mkgmtime64(tm *); } 
#line 217 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __time64_t __cdecl _time64(__time64_t *); } 
#line 220 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetLocalTime instead. See online help for details.")) unsigned __cdecl _getsystime(tm *); } 
#line 221 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetLocalTime instead. See online help for details.")) unsigned __cdecl _setsystime(tm *, unsigned); } 
#line 233 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __wchar_t *__cdecl _wasctime(const tm *); } 
#line 234 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _wasctime_s(__wchar_t *, size_t, const tm *); } 
#line 235 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _wasctime_s ( wchar_t ( & _Buffer ) [ _Size ], const struct tm * _Time ) { return _wasctime_s ( _Buffer, _Size, _Time ); }
#line 237 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __wchar_t *__cdecl _wctime32(const __time32_t *); } 
#line 238 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _wctime32_s(__wchar_t *, size_t, const __time32_t *); } 
#line 239 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _wctime32_s ( wchar_t ( & _Buffer ) [ _Size ], const __time32_t * _Time ) { return _wctime32_s ( _Buffer, _Size, _Time ); }
#line 241 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { size_t __cdecl wcsftime(__wchar_t *, size_t, const __wchar_t *, const tm *); } 
#line 242 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { size_t __cdecl _wcsftime_l(__wchar_t *, size_t, const __wchar_t *, const tm *, _locale_t); } 
#line 244 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _wstrdate_s(__wchar_t *, size_t); } 
#line 245 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( wchar_t ( & _Buffer ) [ _Size ] ) { return _wstrdate_s ( _Buffer, _Size ); }
#line 246 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __wchar_t *__cdecl _wstrdate(__wchar_t *); } 
#line 248 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _wstrtime_s(__wchar_t *, size_t); } 
#line 249 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( wchar_t ( & _Buffer ) [ _Size ] ) { return _wstrtime_s ( _Buffer, _Size ); }
#line 250 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __wchar_t *__cdecl _wstrtime(__wchar_t *); } 
#line 252 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { __wchar_t *__cdecl _wctime64(const __time64_t *); } 
#line 253 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { errno_t __cdecl _wctime64_s(__wchar_t *, size_t, const __time64_t *); } 
#line 254 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
template < size_t _Size > inline errno_t __cdecl _wctime64_s ( wchar_t ( & _Buffer ) [ _Size ], const __time64_t * _Time ) { return _wctime64_s ( _Buffer, _Size, _Time ); }
#line 29 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
#pragma warning(push)
#pragma warning(disable:4996)
#line 46 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
extern "C" { static __inline __wchar_t *__cdecl _wctime(const time_t *_Time) 
#line 47 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
{ 
#pragma warning( push )
#pragma warning( disable : 4996 )
return _wctime64(_Time); 
#pragma warning( pop )
} } 
#line 54 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
extern "C" { static __inline errno_t __cdecl _wctime_s(__wchar_t *_Buffer, size_t _SizeInWords, const time_t *_Time) 
#line 55 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
{ 
#line 56 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
} } 
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
#pragma warning(pop)
#line 84 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline double __cdecl difftime(time_t _Time1, time_t _Time2) 
#line 85 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#line 86 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
return _difftime64(_Time1, _Time2); 
#line 87 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
} } 
#line 88 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline char *__cdecl ctime(const time_t *_Time) 
#line 89 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#pragma warning( push )
#pragma warning( disable : 4996 )
return _ctime64(_Time); 
#pragma warning( pop )
} } 
#line 96 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline errno_t __cdecl ctime_s(char *_Buffer, size_t _SizeInBytes, const time_t *_Time) 
#line 97 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#line 98 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
return _ctime64_s(_Buffer, _SizeInBytes, _Time); 
#line 99 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
} } 
#line 101 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline tm *__cdecl gmtime(const time_t *_Time) 
#line 102 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#pragma warning( push )
#pragma warning( disable : 4996 )
return _gmtime64(_Time); 
#pragma warning( pop )
} } 
#line 109 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline errno_t __cdecl gmtime_s(tm *_Tm, const time_t *_Time) 
#line 110 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#line 111 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
return _gmtime64_s(_Tm, _Time); 
#line 112 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
} } 
#line 114 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline tm *__cdecl localtime(const time_t *_Time) 
#line 115 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#pragma warning( push )
#pragma warning( disable : 4996 )
return _localtime64(_Time); 
#pragma warning( pop )
} } 
#line 121 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline errno_t __cdecl localtime_s(tm *_Tm, const time_t *_Time) 
#line 122 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#line 123 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
return _localtime64_s(_Tm, _Time); 
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
} } 
#line 125 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline time_t __cdecl mktime(tm *_Tm) 
#line 126 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#line 127 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
return _mktime64(_Tm); 
#line 128 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
} } 
#line 129 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline time_t __cdecl _mkgmtime(tm *_Tm) 
#line 130 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#line 131 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
return _mkgmtime64(_Tm); 
#line 132 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
} } 
#line 133 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
extern "C" { static __inline time_t __cdecl time(time_t *_Time) 
#line 134 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
{ 
#line 135 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
return _time64(_Time); 
#line 136 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.inl"
} } 
#line 279 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" int daylight; 
#line 280 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" long timezone; 
#line 281 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" char *tzname[2]; 
#line 284 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
extern "C" { void __cdecl tzset(); } 
#line 294 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
#pragma pack ( pop )
#line 57 "c:\\cuda\\include\\common_functions.h"
extern "C" { extern clock_t __cdecl clock(); } 
#line 59 "c:\\cuda\\include\\common_functions.h"
extern "C" { extern void *__cdecl memset(void *, int, size_t); } 
#line 61 "c:\\cuda\\include\\common_functions.h"
extern "C" { extern void *__cdecl memcpy(void *, const void *, size_t); } 
#line 66 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __cdecl abs(int); } 
#line 68 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern long __cdecl labs(long); } 
#line 70 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern __int64 llabs(__int64); } 
#line 72 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl fabs(double); } 
#line 74 "c:\\cuda\\include\\math_functions.h"
extern "C" { inline float fabsf(float); } 
#line 77 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int min(int, int); } 
#line 79 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern unsigned umin(unsigned, unsigned); } 
#line 81 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern __int64 llmin(__int64, __int64); } 
#line 83 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern unsigned __int64 ullmin(unsigned __int64, unsigned __int64); } 
#line 85 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float fminf(float, float); } 
#line 87 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double fmin(double, double); } 
#line 90 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int max(int, int); } 
#line 92 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern unsigned umax(unsigned, unsigned); } 
#line 94 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern __int64 llmax(__int64, __int64); } 
#line 96 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern unsigned __int64 ullmax(unsigned __int64, unsigned __int64); } 
#line 98 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float fmaxf(float, float); } 
#line 100 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double fmax(double, double); } 
#line 103 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl sin(double); } 
#line 105 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float sinf(float); } 
#line 108 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl cos(double); } 
#line 110 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float cosf(float); } 
#line 113 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern void sincos(double, double *, double *); } 
#line 115 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern void sincosf(float, float *, float *); } 
#line 118 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl tan(double); } 
#line 120 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float tanf(float); } 
#line 123 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl sqrt(double); } 
#line 125 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float sqrtf(float); } 
#line 128 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double rsqrt(double); } 
#line 130 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float rsqrtf(float); } 
#line 133 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double exp2(double); } 
#line 135 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float exp2f(float); } 
#line 138 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double exp10(double); } 
#line 140 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float exp10f(float); } 
#line 143 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double expm1(double); } 
#line 145 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float expm1f(float); } 
#line 148 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double log2(double); } 
#line 150 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float log2f(float); } 
#line 153 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl log10(double); } 
#line 155 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float log10f(float); } 
#line 158 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl log(double); } 
#line 160 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float logf(float); } 
#line 163 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double log1p(double); } 
#line 165 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float log1pf(float); } 
#line 168 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl floor(double); } 
#line 170 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float floorf(float); } 
#line 173 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl exp(double); } 
#line 175 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float expf(float); } 
#line 178 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl cosh(double); } 
#line 180 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float coshf(float); } 
#line 183 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl sinh(double); } 
#line 185 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float sinhf(float); } 
#line 188 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl tanh(double); } 
#line 190 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float tanhf(float); } 
#line 193 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double acosh(double); } 
#line 195 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float acoshf(float); } 
#line 198 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double asinh(double); } 
#line 200 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float asinhf(float); } 
#line 203 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double atanh(double); } 
#line 205 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float atanhf(float); } 
#line 208 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl ldexp(double, int); } 
#line 210 "c:\\cuda\\include\\math_functions.h"
extern "C" { inline float ldexpf(float, int); } 
#line 213 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double logb(double); } 
#line 215 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float logbf(float); } 
#line 218 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int ilogb(double); } 
#line 220 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int ilogbf(float); } 
#line 223 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double scalbn(double, int); } 
#line 225 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float scalbnf(float, int); } 
#line 228 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double scalbln(double, long); } 
#line 230 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float scalblnf(float, long); } 
#line 233 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl frexp(double, int *); } 
#line 235 "c:\\cuda\\include\\math_functions.h"
extern "C" { inline float frexpf(float, int *); } 
#line 238 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double round(double); } 
#line 240 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float roundf(float); } 
#line 243 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern long lround(double); } 
#line 245 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern long lroundf(float); } 
#line 248 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern __int64 llround(double); } 
#line 250 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern __int64 llroundf(float); } 
#line 253 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double rint(double); } 
#line 255 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float rintf(float); } 
#line 258 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern long lrint(double); } 
#line 260 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern long lrintf(float); } 
#line 263 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern __int64 llrint(double); } 
#line 265 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern __int64 llrintf(float); } 
#line 268 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double nearbyint(double); } 
#line 270 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float nearbyintf(float); } 
#line 273 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl ceil(double); } 
#line 275 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float ceilf(float); } 
#line 278 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double trunc(double); } 
#line 280 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float truncf(float); } 
#line 283 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double fdim(double, double); } 
#line 285 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float fdimf(float, float); } 
#line 288 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl atan2(double, double); } 
#line 290 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float atan2f(float, float); } 
#line 293 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl atan(double); } 
#line 295 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float atanf(float); } 
#line 298 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl asin(double); } 
#line 300 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float asinf(float); } 
#line 303 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl acos(double); } 
#line 305 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float acosf(float); } 
#line 308 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl hypot(double, double); } 
#line 310 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float hypotf(float, float); } 
#line 313 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double cbrt(double); } 
#line 315 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float cbrtf(float); } 
#line 318 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double rcbrt(double); } 
#line 320 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float rcbrtf(float); } 
#line 323 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double sinpi(double); } 
#line 325 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float sinpif(float); } 
#line 328 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl pow(double, double); } 
#line 330 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float powf(float, float); } 
#line 333 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl modf(double, double *); } 
#line 335 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float modff(float, float *); } 
#line 338 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double __cdecl fmod(double, double); } 
#line 340 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float fmodf(float, float); } 
#line 343 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double remainder(double, double); } 
#line 345 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float remainderf(float, float); } 
#line 348 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double remquo(double, double, int *); } 
#line 350 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float remquof(float, float, int *); } 
#line 353 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double erf(double); } 
#line 355 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float erff(float); } 
#line 358 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double erfinv(double); } 
#line 360 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float erfinvf(float); } 
#line 363 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double erfc(double); } 
#line 365 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float erfcf(float); } 
#line 368 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double erfcinv(double); } 
#line 370 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float erfcinvf(float); } 
#line 373 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double lgamma(double); } 
#line 375 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float lgammaf(float); } 
#line 378 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double tgamma(double); } 
#line 380 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float tgammaf(float); } 
#line 383 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double copysign(double, double); } 
#line 385 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float copysignf(float, float); } 
#line 388 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double nextafter(double, double); } 
#line 390 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float nextafterf(float, float); } 
#line 393 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double nan(const char *); } 
#line 395 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float nanf(const char *); } 
#line 398 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __isinf(double); } 
#line 400 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __isinff(float); } 
#line 403 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __isnan(double); } 
#line 405 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __isnanf(float); } 
#line 419 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __finite(double); } 
#line 421 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __finitef(float); } 
#line 423 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __signbit(double); } 
#line 428 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern int __signbitf(float); } 
#line 431 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern double fma(double, double, double); } 
#line 433 "c:\\cuda\\include\\math_functions.h"
extern "C" { extern float fmaf(float, float, float); } 
#line 25 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
#pragma pack ( push, 8 )
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { struct _exception { 
#line 40 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
int type; 
#line 41 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
char *name; 
#line 42 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
double arg1; 
#line 43 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
double arg2; 
#line 44 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
double retval; 
#line 45 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}; }
#line 56 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { struct _complex { 
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
double x, y; 
#line 58 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}; }
#line 90 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" double _HUGE; 
#line 103 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { int __cdecl abs(int); } 
#line 104 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { long __cdecl labs(long); } 
#line 107 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl acos(double); } 
#line 108 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl asin(double); } 
#line 109 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl atan(double); } 
#line 110 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl atan2(double, double); } 
#line 112 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _copysign(double, double); } 
#line 113 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _chgsign(double); } 
#line 116 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl cos(double); } 
#line 117 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl cosh(double); } 
#line 118 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl exp(double); } 
#line 119 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl fabs(double); } 
#line 120 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl fmod(double, double); } 
#line 121 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl log(double); } 
#line 122 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl log10(double); } 
#line 123 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl pow(double, double); } 
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl sin(double); } 
#line 125 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl sinh(double); } 
#line 126 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl tan(double); } 
#line 127 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl tanh(double); } 
#line 128 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl sqrt(double); } 
#line 131 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl atof(const char *); } 
#line 132 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _atof_l(const char *, _locale_t); } 
#line 135 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _cabs(_complex); } 
#line 136 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl ceil(double); } 
#line 137 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl floor(double); } 
#line 138 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl frexp(double, int *); } 
#line 139 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _hypot(double, double); } 
#line 140 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _j0(double); } 
#line 141 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _j1(double); } 
#line 142 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _jn(int, double); } 
#line 143 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl ldexp(double, int); } 
#line 149 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { int __cdecl _matherr(_exception *); } 
#line 152 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl modf(double, double *); } 
#line 154 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _y0(double); } 
#line 155 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _y1(double); } 
#line 156 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl _yn(int, double); } 
#line 212 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl acosf(float); } 
#line 213 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl asinf(float); } 
#line 214 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl atanf(float); } 
#line 215 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl atan2f(float, float); } 
#line 216 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl cosf(float); } 
#line 217 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl sinf(float); } 
#line 218 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl tanf(float); } 
#line 221 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl coshf(float); } 
#line 222 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl sinhf(float); } 
#line 223 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl tanhf(float); } 
#line 226 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl expf(float); } 
#line 227 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl logf(float); } 
#line 228 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl log10f(float); } 
#line 229 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl modff(float, float *); } 
#line 232 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl powf(float, float); } 
#line 233 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl sqrtf(float); } 
#line 236 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl ceilf(float); } 
#line 237 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl floorf(float); } 
#line 238 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl fmodf(float, float); } 
#line 240 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl _hypotf(float, float); } 
#line 242 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl _copysignf(float, float); } 
#line 243 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl _chgsignf(float); } 
#line 244 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl _logbf(float); } 
#line 245 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { float __cdecl _nextafterf(float, float); } 
#line 246 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { int __cdecl _finitef(float); } 
#line 247 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { int __cdecl _isnanf(float); } 
#line 248 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { int __cdecl _fpclassf(float); } 
#line 317 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double acosl(long double _X) 
#line 318 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return acos((double)_X); } } 
#line 319 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double asinl(long double _X) 
#line 320 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return asin((double)_X); } } 
#line 321 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double atanl(long double _X) 
#line 322 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return atan((double)_X); } } 
#line 323 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double atan2l(long double _Y, long double _X) 
#line 324 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return atan2((double)_Y, (double)_X); } } 
#line 325 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double ceill(long double _X) 
#line 326 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return ceil((double)_X); } } 
#line 327 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double cosl(long double _X) 
#line 328 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return cos((double)_X); } } 
#line 329 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double coshl(long double _X) 
#line 330 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return cosh((double)_X); } } 
#line 331 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double expl(long double _X) 
#line 332 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return exp((double)_X); } } 
#line 333 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double fabsl(long double _X) 
#line 334 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fabs((double)_X); } } 
#line 335 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double floorl(long double _X) 
#line 336 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return floor((double)_X); } } 
#line 337 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double fmodl(long double _X, long double _Y) 
#line 338 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fmod((double)_X, (double)_Y); } } 
#line 339 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double frexpl(long double _X, int *_Y) 
#line 340 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return frexp((double)_X, _Y); } } 
#line 341 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double ldexpl(long double _X, int _Y) 
#line 342 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return ldexp((double)_X, _Y); } } 
#line 343 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double logl(long double _X) 
#line 344 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return log((double)_X); } } 
#line 345 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double log10l(long double _X) 
#line 346 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return log10((double)_X); } } 
#line 347 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double modfl(long double _X, long double *_Y) 
#line 348 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ double _Di, _Df = modf((double)_X, &_Di); 
#line 349 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
(*_Y) = ((long double)_Di); 
#line 350 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
return _Df; } } 
#line 351 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double powl(long double _X, long double _Y) 
#line 352 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return pow((double)_X, (double)_Y); } } 
#line 353 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double sinl(long double _X) 
#line 354 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sin((double)_X); } } 
#line 355 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double sinhl(long double _X) 
#line 356 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sinh((double)_X); } } 
#line 357 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double sqrtl(long double _X) 
#line 358 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sqrt((double)_X); } } 
#line 360 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double tanl(long double _X) 
#line 361 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return tan((double)_X); } } 
#line 366 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double tanhl(long double _X) 
#line 367 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return tanh((double)_X); } } 
#line 369 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double _chgsignl(long double _Number) 
#line 370 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ 
#line 371 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
return _chgsign(static_cast< double>(_Number)); 
#line 372 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
} } 
#line 374 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline long double _copysignl(long double _Number, long double _Sign) 
#line 375 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ 
#line 376 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
return _copysign(static_cast< double>(_Number), static_cast< double>(_Sign)); 
#line 377 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
} } 
#line 379 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline float frexpf(float _X, int *_Y) 
#line 380 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return (float)frexp((double)_X, _Y); } } 
#line 383 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline float fabsf(float _X) 
#line 384 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return (float)fabs((double)_X); } } 
#line 385 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { inline float ldexpf(float _X, int _Y) 
#line 386 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return (float)ldexp((double)_X, _Y); } } 
#line 449 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" double HUGE; 
#line 454 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl cabs(_complex); } 
#line 455 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl hypot(double, double); } 
#line 456 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl j0(double); } 
#line 457 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl j1(double); } 
#line 458 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl jn(int, double); } 
#line 459 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl y0(double); } 
#line 460 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
extern "C" { double __cdecl y1(double); } 
#line 461 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
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
#line 485 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long __cdecl abs(long _X) 
#line 486 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return labs(_X); } 
#line 487 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline double __cdecl abs(double _X) 
#line 488 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fabs(_X); } 
#line 489 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline double __cdecl pow(double _X, int _Y) 
#line 490 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return _Pow_int(_X, _Y); } 
#line 491 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl abs(float _X) 
#line 492 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fabsf(_X); } 
#line 493 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl acos(float _X) 
#line 494 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return acosf(_X); } 
#line 495 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl asin(float _X) 
#line 496 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return asinf(_X); } 
#line 497 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl atan(float _X) 
#line 498 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return atanf(_X); } 
#line 499 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl atan2(float _Y, float _X) 
#line 500 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return atan2f(_Y, _X); } 
#line 501 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl ceil(float _X) 
#line 502 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return ceilf(_X); } 
#line 503 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl cos(float _X) 
#line 504 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return cosf(_X); } 
#line 505 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl cosh(float _X) 
#line 506 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return coshf(_X); } 
#line 507 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl exp(float _X) 
#line 508 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return expf(_X); } 
#line 509 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl fabs(float _X) 
#line 510 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fabsf(_X); } 
#line 511 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl floor(float _X) 
#line 512 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return floorf(_X); } 
#line 513 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl fmod(float _X, float _Y) 
#line 514 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fmodf(_X, _Y); } 
#line 515 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl frexp(float _X, int *_Y) 
#line 516 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return frexpf(_X, _Y); } 
#line 517 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl ldexp(float _X, int _Y) 
#line 518 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return ldexpf(_X, _Y); } 
#line 519 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl log(float _X) 
#line 520 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return logf(_X); } 
#line 521 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl log10(float _X) 
#line 522 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return log10f(_X); } 
#line 523 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl modf(float _X, float *_Y) 
#line 524 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return modff(_X, _Y); } 
#line 525 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl pow(float _X, float _Y) 
#line 526 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return powf(_X, _Y); } 
#line 527 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl pow(float _X, int _Y) 
#line 528 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return _Pow_int(_X, _Y); } 
#line 529 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl sin(float _X) 
#line 530 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sinf(_X); } 
#line 531 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl sinh(float _X) 
#line 532 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sinhf(_X); } 
#line 533 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl sqrt(float _X) 
#line 534 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sqrtf(_X); } 
#line 535 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl tan(float _X) 
#line 536 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return tanf(_X); } 
#line 537 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline float __cdecl tanh(float _X) 
#line 538 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return tanhf(_X); } 
#line 539 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl abs(long double _X) 
#line 540 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fabsl(_X); } 
#line 541 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl acos(long double _X) 
#line 542 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return acosl(_X); } 
#line 543 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl asin(long double _X) 
#line 544 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return asinl(_X); } 
#line 545 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl atan(long double _X) 
#line 546 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return atanl(_X); } 
#line 547 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl atan2(long double _Y, long double _X) 
#line 548 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return atan2l(_Y, _X); } 
#line 549 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl ceil(long double _X) 
#line 550 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return ceill(_X); } 
#line 551 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl cos(long double _X) 
#line 552 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return cosl(_X); } 
#line 553 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl cosh(long double _X) 
#line 554 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return coshl(_X); } 
#line 555 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl exp(long double _X) 
#line 556 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return expl(_X); } 
#line 557 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl fabs(long double _X) 
#line 558 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fabsl(_X); } 
#line 559 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl floor(long double _X) 
#line 560 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return floorl(_X); } 
#line 561 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl fmod(long double _X, long double _Y) 
#line 562 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return fmodl(_X, _Y); } 
#line 563 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl frexp(long double _X, int *_Y) 
#line 564 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return frexpl(_X, _Y); } 
#line 565 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl ldexp(long double _X, int _Y) 
#line 566 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return ldexpl(_X, _Y); } 
#line 567 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl log(long double _X) 
#line 568 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return logl(_X); } 
#line 569 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl log10(long double _X) 
#line 570 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return log10l(_X); } 
#line 571 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl modf(long double _X, long double *_Y) 
#line 572 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return modfl(_X, _Y); } 
#line 573 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl pow(long double _X, long double _Y) 
#line 574 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return powl(_X, _Y); } 
#line 575 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl pow(long double _X, int _Y) 
#line 576 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return _Pow_int(_X, _Y); } 
#line 577 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl sin(long double _X) 
#line 578 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sinl(_X); } 
#line 579 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl sinh(long double _X) 
#line 580 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sinhl(_X); } 
#line 581 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl sqrt(long double _X) 
#line 582 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return sqrtl(_X); } 
#line 583 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl tan(long double _X) 
#line 584 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return tanl(_X); } 
#line 585 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
inline long double __cdecl tanh(long double _X) 
#line 586 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{ return tanhl(_X); } 
#line 592 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
#pragma pack ( pop )
#line 31 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma pack ( push, 8 )
#line 56 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef int (__cdecl *_onexit_t)(void); }
#line 82 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 79 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
struct _div_t { 
#line 80 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
int quot; 
#line 81 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
int rem; 
#line 82 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
} div_t; }
#line 87 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 84 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
struct _ldiv_t { 
#line 85 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
long quot; 
#line 86 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
long rem; 
#line 87 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
} ldiv_t; }
#line 101 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma pack ( 4 )
#line 104 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 102 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
struct { 
#line 103 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
unsigned char ld[10]; 
#line 104 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
} _LDOUBLE; }
#pragma pack ( )
#line 123 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 121 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
struct { 
#line 122 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
double x; 
#line 123 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
} _CRT_DOUBLE; }
#line 127 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 125 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
struct { 
#line 126 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
float f; 
#line 127 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
} _CRT_FLOAT; }
#line 138 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 133 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
struct { 
#line 137 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
long double x; 
#line 138 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
} _LONGDOUBLE; }
#line 142 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma pack ( 4 )
#line 145 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef 
#line 143 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
struct { 
#line 144 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
unsigned char ld12[12]; 
#line 145 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
} _LDBL12; }
#pragma pack ( )
#line 166 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" int __mb_cur_max; 
#line 171 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl ___mb_cur_max_func(); } 
#line 172 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl ___mb_cur_max_l_func(_locale_t); } 
#line 211 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef void (__cdecl *_purecall_handler)(void); }
#line 214 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { _purecall_handler __cdecl _set_purecall_handler(_purecall_handler); } 
#line 215 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { _purecall_handler __cdecl _get_purecall_handler(); } 
#line 239 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); }
#line 242 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler); } 
#line 243 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); } 
#line 274 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long *__cdecl __doserrno(); } 
#line 277 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _set_doserrno(unsigned long); } 
#line 278 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _get_doserrno(unsigned long *); } 
#line 281 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char **__cdecl __sys_errlist(); } 
#line 284 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int *__cdecl __sys_nerr(); } 
#line 301 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" int __argc; 
#line 302 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" char **__argv; 
#line 303 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" __wchar_t **__wargv; 
#line 317 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" char **_environ; 
#line 318 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" __wchar_t **_wenviron; 
#line 321 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" char *_pgmptr; 
#line 322 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" __wchar_t *_wpgmptr; 
#line 339 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _get_pgmptr(char **); } 
#line 340 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _get_wpgmptr(__wchar_t **); } 
#line 344 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" int _fmode; 
#line 350 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _set_fmode(int); } 
#line 351 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _get_fmode(int *); } 
#line 360 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template<class _CountofType, size_t _SizeOfArray> char (*__countof_helper(__unaligned _CountofType (&)[_SizeOfArray]))[_SizeOfArray]; 
#line 371 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noreturn ) void __cdecl exit(int); } 
#line 372 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noreturn ) void __cdecl _exit(int); } 
#line 373 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl abort(); } 
#line 376 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __cdecl _set_abort_behavior(unsigned, unsigned); } 
#line 384 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _abs64(__int64); } 
#line 412 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl atexit(void (__cdecl *)(void)); } 
#line 419 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl atoi(const char *); } 
#line 420 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _atoi_l(const char *, _locale_t); } 
#line 421 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { long __cdecl atol(const char *); } 
#line 422 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { long __cdecl _atol_l(const char *, _locale_t); } 
#line 426 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void *__cdecl bsearch_s(const void *, const void *, rsize_t, rsize_t, int (__cdecl *)(void *, const void *, const void *), void *); } 
#line 430 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void *__cdecl bsearch(const void *, const void *, size_t, size_t, int (__cdecl *)(const void *, const void *)); } 
#line 435 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl qsort_s(void *, rsize_t, rsize_t, int (__cdecl *)(void *, const void *, const void *), void *); } 
#line 439 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl qsort(void *, size_t, size_t, int (__cdecl *)(const void *, const void *)); } 
#line 443 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned short __cdecl _byteswap_ushort(unsigned short); } 
#line 444 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long __cdecl _byteswap_ulong(unsigned long); } 
#line 445 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64); } 
#line 446 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { div_t __cdecl div(int, int); } 
#line 447 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl getenv(const char *); } 
#line 449 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl getenv_s(size_t *, char *, rsize_t, const char *); } 
#line 451 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl getenv_s ( size_t * _ReturnSize, char ( & _Dest ) [ _Size ], const char * _VarName ) { return getenv_s ( _ReturnSize, _Dest, _Size, _VarName ); }
#line 457 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _dupenv_s(char **, size_t *, const char *); } 
#line 463 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _itoa_s(int, char *, size_t, int); } 
#line 464 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _itoa_s ( int _Value, char ( & _Dest ) [ _Size ], int _Radix ) { return _itoa_s ( _Value, _Dest, _Size, _Radix ); }
#line 465 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _itoa(int, char *, int); } 
#line 466 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _i64toa_s(__int64, char *, size_t, int); } 
#line 467 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _i64toa(__int64, char *, int); } 
#line 468 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ui64toa_s(unsigned __int64, char *, size_t, int); } 
#line 469 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _ui64toa(unsigned __int64, char *, int); } 
#line 470 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _atoi64(const char *); } 
#line 471 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _atoi64_l(const char *, _locale_t); } 
#line 472 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _strtoi64(const char *, char **, int); } 
#line 473 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _strtoi64_l(const char *, char **, int, _locale_t); } 
#line 474 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __int64 __cdecl _strtoui64(const char *, char **, int); } 
#line 475 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __int64 __cdecl _strtoui64_l(const char *, char **, int, _locale_t); } 
#line 476 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { ldiv_t __cdecl ldiv(long, long); } 
#line 480 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
inline ldiv_t div(long _A1, long _A2) 
#line 481 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
{ 
#line 482 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
return ldiv(_A1, _A2); 
#line 483 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
} 
#line 486 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ltoa_s(long, char *, size_t, int); } 
#line 487 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _ltoa_s ( long _Value, char ( & _Dest ) [ _Size ], int _Radix ) { return _ltoa_s ( _Value, _Dest, _Size, _Radix ); }
#line 488 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _ltoa(long, char *, int); } 
#line 489 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl mblen(const char *, size_t); } 
#line 490 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _mblen_l(const char *, size_t, _locale_t); } 
#line 491 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl _mbstrlen(const char *); } 
#line 492 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl _mbstrlen_l(const char *, _locale_t); } 
#line 493 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl _mbstrnlen(const char *, size_t); } 
#line 494 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl _mbstrnlen_l(const char *, size_t, _locale_t); } 
#line 495 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl mbtowc(__wchar_t *, const char *, size_t); } 
#line 496 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _mbtowc_l(__wchar_t *, const char *, size_t, _locale_t); } 
#line 497 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl mbstowcs_s(size_t *, __wchar_t *, size_t, const char *, size_t); } 
#line 498 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], const char * _Source, size_t _MaxCount ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
#line 499 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl mbstowcs(__wchar_t *, const char *, size_t); } 
#line 501 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _mbstowcs_s_l(size_t *, __wchar_t *, size_t, const char *, size_t, _locale_t); } 
#line 502 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], const char * _Source, size_t _MaxCount, _locale_t _Locale ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
#line 503 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl _mbstowcs_l(__wchar_t *, const char *, size_t, _locale_t); } 
#line 505 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl rand(); } 
#line 510 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _set_error_mode(int); } 
#line 512 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl srand(unsigned); } 
#line 513 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { double __cdecl strtod(const char *, char **); } 
#line 514 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { double __cdecl _strtod_l(const char *, char **, _locale_t); } 
#line 515 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { long __cdecl strtol(const char *, char **, int); } 
#line 516 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { long __cdecl _strtol_l(const char *, char **, int, _locale_t); } 
#line 517 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long __cdecl strtoul(const char *, char **, int); } 
#line 518 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long __cdecl _strtoul_l(const char *, char **, int, _locale_t); } 
#line 521 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl system(const char *); } 
#line 523 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ultoa_s(unsigned long, char *, size_t, int); } 
#line 524 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _ultoa_s ( unsigned long _Value, char ( & _Dest ) [ _Size ], int _Radix ) { return _ultoa_s ( _Value, _Dest, _Size, _Radix ); }
#line 525 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _ultoa(unsigned long, char *, int); } 
#line 526 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl wctomb(char *, __wchar_t); } 
#line 527 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _wctomb_l(char *, __wchar_t, _locale_t); } 
#line 529 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl wctomb_s(int *, char *, rsize_t, __wchar_t); } 
#line 531 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wctomb_s_l(int *, char *, size_t, __wchar_t, _locale_t); } 
#line 532 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl wcstombs_s(size_t *, char *, size_t, const __wchar_t *, size_t); } 
#line 533 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl wcstombs_s ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _MaxCount ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
#line 534 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl wcstombs(char *, const __wchar_t *, size_t); } 
#line 535 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wcstombs_s_l(size_t *, char *, size_t, const __wchar_t *, size_t, _locale_t); } 
#line 536 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
#line 537 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl _wcstombs_l(char *, const __wchar_t *, size_t, _locale_t); } 
#line 599 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl calloc(size_t, size_t); } 
#line 600 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias ) void __cdecl free(void *); } 
#line 601 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl malloc(size_t); } 
#line 602 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl realloc(void *, size_t); } 
#line 603 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl _recalloc(void *, size_t, size_t); } 
#line 604 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias ) void __cdecl _aligned_free(void *); } 
#line 605 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_malloc(size_t, size_t); } 
#line 606 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_offset_malloc(size_t, size_t, size_t); } 
#line 607 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_realloc(void *, size_t, size_t); } 
#line 608 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_recalloc(void *, size_t, size_t, size_t); } 
#line 609 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_offset_realloc(void *, size_t, size_t, size_t); } 
#line 610 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec( noalias restrict ) void *__cdecl _aligned_offset_recalloc(void *, size_t, size_t, size_t, size_t); } 
#line 611 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { size_t __cdecl _aligned_msize(void *, size_t, size_t); } 
#line 638 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _itow_s(int, __wchar_t *, size_t, int); } 
#line 639 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) { return _itow_s ( _Value, _Dest, _Size, _Radix ); }
#line 640 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __wchar_t *__cdecl _itow(int, __wchar_t *, int); } 
#line 641 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ltow_s(long, __wchar_t *, size_t, int); } 
#line 642 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) { return _ltow_s ( _Value, _Dest, _Size, _Radix ); }
#line 643 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __wchar_t *__cdecl _ltow(long, __wchar_t *, int); } 
#line 644 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ultow_s(unsigned long, __wchar_t *, size_t, int); } 
#line 645 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) { return _ultow_s ( _Value, _Dest, _Size, _Radix ); }
#line 646 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __wchar_t *__cdecl _ultow(unsigned long, __wchar_t *, int); } 
#line 647 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { double __cdecl wcstod(const __wchar_t *, __wchar_t **); } 
#line 648 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { double __cdecl _wcstod_l(const __wchar_t *, __wchar_t **, _locale_t); } 
#line 649 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { long __cdecl wcstol(const __wchar_t *, __wchar_t **, int); } 
#line 650 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { long __cdecl _wcstol_l(const __wchar_t *, __wchar_t **, int, _locale_t); } 
#line 651 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long __cdecl wcstoul(const __wchar_t *, __wchar_t **, int); } 
#line 652 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long __cdecl _wcstoul_l(const __wchar_t *, __wchar_t **, int, _locale_t); } 
#line 653 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __wchar_t *__cdecl _wgetenv(const __wchar_t *); } 
#line 654 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wgetenv_s(size_t *, __wchar_t *, size_t, const __wchar_t *); } 
#line 655 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _ReturnSize, wchar_t ( & _Dest ) [ _Size ], const wchar_t * _VarName ) { return _wgetenv_s ( _ReturnSize, _Dest, _Size, _VarName ); }
#line 662 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wdupenv_s(__wchar_t **, size_t *, const __wchar_t *); } 
#line 670 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _wsystem(const __wchar_t *); } 
#line 672 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { double __cdecl _wtof(const __wchar_t *); } 
#line 673 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { double __cdecl _wtof_l(const __wchar_t *, _locale_t); } 
#line 674 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _wtoi(const __wchar_t *); } 
#line 675 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _wtoi_l(const __wchar_t *, _locale_t); } 
#line 676 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { long __cdecl _wtol(const __wchar_t *); } 
#line 677 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { long __cdecl _wtol_l(const __wchar_t *, _locale_t); } 
#line 679 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _i64tow_s(__int64, __wchar_t *, size_t, int); } 
#line 680 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __wchar_t *__cdecl _i64tow(__int64, __wchar_t *, int); } 
#line 681 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ui64tow_s(unsigned __int64, __wchar_t *, size_t, int); } 
#line 682 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __wchar_t *__cdecl _ui64tow(unsigned __int64, __wchar_t *, int); } 
#line 683 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _wtoi64(const __wchar_t *); } 
#line 684 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _wtoi64_l(const __wchar_t *, _locale_t); } 
#line 685 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _wcstoi64(const __wchar_t *, __wchar_t **, int); } 
#line 686 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __int64 __cdecl _wcstoi64_l(const __wchar_t *, __wchar_t **, int, _locale_t); } 
#line 687 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __int64 __cdecl _wcstoui64(const __wchar_t *, __wchar_t **, int); } 
#line 688 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t *, __wchar_t **, int, _locale_t); } 
#line 708 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _fullpath(char *, const char *, size_t); } 
#line 716 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _ecvt_s(char *, size_t, double, int, int *, int *); } 
#line 717 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Dest ) [ _Size ], double _Value, int _NumOfDigits, int * _PtDec, int * _PtSign ) { return _ecvt_s ( _Dest, _Size, _Value, _NumOfDigits, _PtDec, _PtSign ); }
#line 718 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _ecvt(double, int, int *, int *); } 
#line 719 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _fcvt_s(char *, size_t, double, int, int *, int *); } 
#line 720 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Dest ) [ _Size ], double _Value, int _NumOfDigits, int * _PtDec, int * _PtSign ) { return _fcvt_s ( _Dest, _Size, _Value, _NumOfDigits, _PtDec, _PtSign ); }
#line 721 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _fcvt(double, int, int *, int *); } 
#line 722 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _gcvt_s(char *, size_t, double, int); } 
#line 723 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Dest ) [ _Size ], double _Value, int _NumOfDigits ) { return _gcvt_s ( _Dest, _Size, _Value, _NumOfDigits ); }
#line 724 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl _gcvt(double, int, char *); } 
#line 726 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _atodbl(_CRT_DOUBLE *, char *); } 
#line 727 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _atoldbl(_LDOUBLE *, char *); } 
#line 728 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _atoflt(_CRT_FLOAT *, char *); } 
#line 729 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _atodbl_l(_CRT_DOUBLE *, char *, _locale_t); } 
#line 730 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _atoldbl_l(_LDOUBLE *, char *, _locale_t); } 
#line 731 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _atoflt_l(_CRT_FLOAT *, char *, _locale_t); } 
#line 732 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long __cdecl _lrotl(unsigned long, int); } 
#line 733 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned long __cdecl _lrotr(unsigned long, int); } 
#line 734 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _makepath_s(char *, size_t, const char *, const char *, const char *, const char *); } 
#line 736 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Path ) [ _Size ], const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext ) { return _makepath_s ( _Path, _Size, _Drive, _Dir, _Filename, _Ext ); }
#line 737 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl _makepath(char *, const char *, const char *, const char *, const char *); } 
#line 764 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { _onexit_t __cdecl _onexit(_onexit_t); } 
#line 769 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl perror(const char *); } 
#line 772 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma warning (push)
#pragma warning (disable:6540)
extern "C" { int __cdecl _putenv(const char *); } 
#line 775 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _putenv_s(const char *, const char *); } 
#line 776 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __cdecl _rotl(unsigned, int); } 
#line 777 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __int64 __cdecl _rotl64(unsigned __int64, int); } 
#line 778 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __cdecl _rotr(unsigned, int); } 
#line 779 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { unsigned __int64 __cdecl _rotr64(unsigned __int64, int); } 
#pragma warning (pop)
#line 782 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _searchenv_s(const char *, const char *, char *, size_t); } 
#line 783 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _searchenv_s ( const char * _Filename, const char * _EnvVar, char ( & _ResultPath ) [ _Size ] ) { return _searchenv_s ( _Filename, _EnvVar, _ResultPath, _Size ); }
#line 784 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl _searchenv(const char *, const char *, char *); } 
#line 786 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl _splitpath(const char *, char *, char *, char *, char *); } 
#line 787 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _splitpath_s(const char *, char *, size_t, char *, size_t, char *, size_t, char *, size_t); } 
#line 792 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( const char * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 794 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl _swab(char *, char *, int); } 
#line 805 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __wchar_t *__cdecl _wfullpath(__wchar_t *, const __wchar_t *, size_t); } 
#line 811 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wmakepath_s(__wchar_t *, size_t, const __wchar_t *, const __wchar_t *, const __wchar_t *, const __wchar_t *); } 
#line 813 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _ResultPath ) [ _Size ], const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext ) { return _wmakepath_s ( _ResultPath, _Size, _Drive, _Dir, _Filename, _Ext ); }
#line 814 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl _wmakepath(__wchar_t *, const __wchar_t *, const __wchar_t *, const __wchar_t *, const __wchar_t *); } 
#line 817 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl _wperror(const __wchar_t *); } 
#line 819 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl _wputenv(const __wchar_t *); } 
#line 820 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wputenv_s(const __wchar_t *, const __wchar_t *); } 
#line 821 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wsearchenv_s(const __wchar_t *, const __wchar_t *, __wchar_t *, size_t); } 
#line 822 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( const wchar_t * _Filename, const wchar_t * _EnvVar, wchar_t ( & _ResultPath ) [ _Size ] ) { return _wsearchenv_s ( _Filename, _EnvVar, _ResultPath, _Size ); }
#line 823 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl _wsearchenv(const __wchar_t *, const __wchar_t *, __wchar_t *); } 
#line 824 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl _wsplitpath(const __wchar_t *, __wchar_t *, __wchar_t *, __wchar_t *, __wchar_t *); } 
#line 825 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { errno_t __cdecl _wsplitpath_s(const __wchar_t *, __wchar_t *, size_t, __wchar_t *, size_t, __wchar_t *, size_t, __wchar_t *, size_t); } 
#line 830 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( const wchar_t * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 836 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode instead. See online help for details.")) void __cdecl _seterrormode(int); } 
#line 837 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. See online help for details.")) void __cdecl _beep(unsigned, unsigned); } 
#line 838 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. See online help for details.")) void __cdecl _sleep(unsigned long); } 
#line 857 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4141)
extern "C" { char *__cdecl ecvt(double, int, int *, int *); } 
#line 860 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl fcvt(double, int, int *, int *); } 
#line 861 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl gcvt(double, int, char *); } 
#line 862 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl itoa(int, char *, int); } 
#line 863 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { char *__cdecl ltoa(long, char *, int); } 
#line 864 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { int __cdecl putenv(const char *); } 
#line 865 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
extern "C" { void __cdecl swab(char *, char *, int); } 
#line 866 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
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
#line 529 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
typedef bool _Bool; 
#line 530 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
}
#line 546 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
typedef __int64 _Longlong; 
#line 547 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
typedef unsigned __int64 _ULonglong; 
#line 569 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
namespace std { 
#line 573 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
#pragma warning(push)
#pragma warning(disable:4412)
class _Lockit { 
#line 595 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
public: explicit __thiscall _Lockit(); 
#line 596 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
explicit __thiscall _Lockit(int); 
#line 597 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
__thiscall ~_Lockit(); 
#line 600 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Lockit_ctor(int); 
#line 601 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Lockit_dtor(int); 
#line 604 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
private: static void __cdecl _Lockit_ctor(_Lockit *); 
#line 605 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Lockit_ctor(_Lockit *, int); 
#line 606 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Lockit_dtor(_Lockit *); 
#line 608 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
_Lockit(const _Lockit &); 
#line 609 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
_Lockit &operator=(const _Lockit &); 
#line 611 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
int _Locktype; 
#line 628 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
}; 
#line 722 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
class _Mutex { 
#line 746 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
public: __thiscall _Mutex(); 
#line 747 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
__thiscall ~_Mutex(); 
#line 748 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
void __thiscall _Lock(); 
#line 749 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
void __thiscall _Unlock(); 
#line 753 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
private: static void __cdecl _Mutex_ctor(_Mutex *); 
#line 754 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Mutex_dtor(_Mutex *); 
#line 755 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Mutex_Lock(_Mutex *); 
#line 756 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Mutex_Unlock(_Mutex *); 
#line 758 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
_Mutex(const _Mutex &); 
#line 759 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
_Mutex &operator=(const _Mutex &); 
#line 760 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
void *_Mtx; 
#line 772 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
}; 
#line 774 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
class _Init_locks { 
#line 790 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
public: __thiscall _Init_locks(); 
#line 791 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
__thiscall ~_Init_locks(); 
#line 795 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
private: static void __cdecl _Init_locks_ctor(_Init_locks *); 
#line 796 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
static void __cdecl _Init_locks_dtor(_Init_locks *); 
#line 808 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
}; 
#pragma warning(pop)
}
#line 819 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
void __cdecl _Atexit(void (__cdecl *)(void)); 
#line 821 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
typedef int _Mbstatet; 
#line 830 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
#pragma pack ( pop )
#line 20 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
namespace std { 
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::acosf;using ::asinf;
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::atanf;using ::atan2f;using ::ceilf;
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::cosf;using ::coshf;using ::expf;
#line 24 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::fabsf;using ::floorf;using ::fmodf;
#line 25 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::frexpf;using ::ldexpf;using ::logf;
#line 26 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::log10f;using ::modff;using ::powf;
#line 27 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::sinf;using ::sinhf;using ::sqrtf;
#line 28 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::tanf;using ::tanhf;
#line 30 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::acosl;using ::asinl;
#line 31 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::atanl;using ::atan2l;using ::ceill;
#line 32 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::cosl;using ::coshl;using ::expl;
#line 33 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::fabsl;using ::floorl;using ::fmodl;
#line 34 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::frexpl;using ::ldexpl;using ::logl;
#line 35 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::log10l;using ::modfl;using ::powl;
#line 36 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::sinl;using ::sinhl;using ::sqrtl;
#line 37 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::tanl;using ::tanhl;
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::abs;
#line 41 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::acos;using ::asin;
#line 42 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::atan;using ::atan2;using ::ceil;
#line 43 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::cos;using ::cosh;using ::exp;
#line 44 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::fabs;using ::floor;using ::fmod;
#line 45 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::frexp;using ::ldexp;using ::log;
#line 46 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::log10;using ::modf;using ::pow;
#line 47 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::sin;using ::sinh;using ::sqrt;
#line 48 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
using ::tan;using ::tanh;
#line 51 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cmath"
}
#line 19 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
namespace std { 
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::size_t;using ::div_t;using ::ldiv_t;
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::abort;using ::atexit;
#line 24 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::atof;using ::atoi;using ::atol;
#line 25 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::bsearch;using ::calloc;using ::div;
#line 26 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::exit;using ::free;using ::getenv;
#line 27 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::labs;using ::ldiv;using ::malloc;
#line 28 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::mblen;using ::mbstowcs;using ::mbtowc;
#line 29 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::qsort;using ::rand;using ::realloc;
#line 30 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::srand;using ::strtod;using ::strtol;
#line 31 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::strtoul;using ::system;
#line 32 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
using ::wcstombs;using ::wctomb;
#line 35 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\cstdlib"
}
#line 534 "c:\\cuda\\include\\math_functions.h"
static __inline __int64 abs(__int64 a) 
#line 535 "c:\\cuda\\include\\math_functions.h"
{ 
#line 536 "c:\\cuda\\include\\math_functions.h"
return llabs(a); 
#line 537 "c:\\cuda\\include\\math_functions.h"
} 
#line 539 "c:\\cuda\\include\\math_functions.h"
static __inline int signbit(double a) 
#line 540 "c:\\cuda\\include\\math_functions.h"
{ 
#line 541 "c:\\cuda\\include\\math_functions.h"
return __signbit(a); 
#line 542 "c:\\cuda\\include\\math_functions.h"
} 
#line 544 "c:\\cuda\\include\\math_functions.h"
static __inline int signbit(float a) 
#line 545 "c:\\cuda\\include\\math_functions.h"
{ 
#line 546 "c:\\cuda\\include\\math_functions.h"
return __signbitf(a); 
#line 547 "c:\\cuda\\include\\math_functions.h"
} 
#line 549 "c:\\cuda\\include\\math_functions.h"
static __inline int isinf(double a) 
#line 550 "c:\\cuda\\include\\math_functions.h"
{ 
#line 551 "c:\\cuda\\include\\math_functions.h"
return __isinf(a); 
#line 552 "c:\\cuda\\include\\math_functions.h"
} 
#line 554 "c:\\cuda\\include\\math_functions.h"
static __inline int isinf(float a) 
#line 555 "c:\\cuda\\include\\math_functions.h"
{ 
#line 556 "c:\\cuda\\include\\math_functions.h"
return __isinff(a); 
#line 557 "c:\\cuda\\include\\math_functions.h"
} 
#line 559 "c:\\cuda\\include\\math_functions.h"
static __inline int isnan(double a) 
#line 560 "c:\\cuda\\include\\math_functions.h"
{ 
#line 561 "c:\\cuda\\include\\math_functions.h"
return __isnan(a); 
#line 562 "c:\\cuda\\include\\math_functions.h"
} 
#line 564 "c:\\cuda\\include\\math_functions.h"
static __inline int isnan(float a) 
#line 565 "c:\\cuda\\include\\math_functions.h"
{ 
#line 566 "c:\\cuda\\include\\math_functions.h"
return __isnanf(a); 
#line 567 "c:\\cuda\\include\\math_functions.h"
} 
#line 569 "c:\\cuda\\include\\math_functions.h"
static __inline int isfinite(double a) 
#line 570 "c:\\cuda\\include\\math_functions.h"
{ 
#line 571 "c:\\cuda\\include\\math_functions.h"
return __finite(a); 
#line 572 "c:\\cuda\\include\\math_functions.h"
} 
#line 574 "c:\\cuda\\include\\math_functions.h"
static __inline int isfinite(float a) 
#line 575 "c:\\cuda\\include\\math_functions.h"
{ 
#line 576 "c:\\cuda\\include\\math_functions.h"
return __finitef(a); 
#line 577 "c:\\cuda\\include\\math_functions.h"
} 
#line 579 "c:\\cuda\\include\\math_functions.h"
template<class T> inline T _Pow_int(T, int); 
#line 587 "c:\\cuda\\include\\math_functions.h"
inline long __cdecl abs(long); 
#line 588 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl abs(float); 
#line 589 "c:\\cuda\\include\\math_functions.h"
inline double __cdecl abs(double); 
#line 590 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl fabs(float); 
#line 591 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl ceil(float); 
#line 592 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl floor(float); 
#line 593 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl sqrt(float); 
#line 594 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl pow(float, float); 
#line 595 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl pow(float, int); 
#line 596 "c:\\cuda\\include\\math_functions.h"
inline double __cdecl pow(double, int); 
#line 597 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl log(float); 
#line 598 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl log10(float); 
#line 599 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl fmod(float, float); 
#line 600 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl modf(float, float *); 
#line 601 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl exp(float); 
#line 602 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl frexp(float, int *); 
#line 603 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl ldexp(float, int); 
#line 604 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl asin(float); 
#line 605 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl sin(float); 
#line 606 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl sinh(float); 
#line 607 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl acos(float); 
#line 608 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl cos(float); 
#line 609 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl cosh(float); 
#line 610 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl atan(float); 
#line 611 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl atan2(float, float); 
#line 612 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl tan(float); 
#line 613 "c:\\cuda\\include\\math_functions.h"
inline float __cdecl tanh(float); 
#line 619 "c:\\cuda\\include\\math_functions.h"
static __inline float logb(float a) 
#line 620 "c:\\cuda\\include\\math_functions.h"
{ 
#line 621 "c:\\cuda\\include\\math_functions.h"
return logbf(a); 
#line 622 "c:\\cuda\\include\\math_functions.h"
} 
#line 624 "c:\\cuda\\include\\math_functions.h"
static __inline int ilogb(float a) 
#line 625 "c:\\cuda\\include\\math_functions.h"
{ 
#line 626 "c:\\cuda\\include\\math_functions.h"
return ilogbf(a); 
#line 627 "c:\\cuda\\include\\math_functions.h"
} 
#line 629 "c:\\cuda\\include\\math_functions.h"
static __inline float scalbn(float a, int b) 
#line 630 "c:\\cuda\\include\\math_functions.h"
{ 
#line 631 "c:\\cuda\\include\\math_functions.h"
return scalbnf(a, b); 
#line 632 "c:\\cuda\\include\\math_functions.h"
} 
#line 634 "c:\\cuda\\include\\math_functions.h"
static __inline float scalbln(float a, long b) 
#line 635 "c:\\cuda\\include\\math_functions.h"
{ 
#line 636 "c:\\cuda\\include\\math_functions.h"
return scalblnf(a, b); 
#line 637 "c:\\cuda\\include\\math_functions.h"
} 
#line 639 "c:\\cuda\\include\\math_functions.h"
static __inline float exp2(float a) 
#line 640 "c:\\cuda\\include\\math_functions.h"
{ 
#line 641 "c:\\cuda\\include\\math_functions.h"
return exp2f(a); 
#line 642 "c:\\cuda\\include\\math_functions.h"
} 
#line 644 "c:\\cuda\\include\\math_functions.h"
static __inline float exp10(float a) 
#line 645 "c:\\cuda\\include\\math_functions.h"
{ 
#line 646 "c:\\cuda\\include\\math_functions.h"
return exp10f(a); 
#line 647 "c:\\cuda\\include\\math_functions.h"
} 
#line 649 "c:\\cuda\\include\\math_functions.h"
static __inline float expm1(float a) 
#line 650 "c:\\cuda\\include\\math_functions.h"
{ 
#line 651 "c:\\cuda\\include\\math_functions.h"
return expm1f(a); 
#line 652 "c:\\cuda\\include\\math_functions.h"
} 
#line 654 "c:\\cuda\\include\\math_functions.h"
static __inline float log2(float a) 
#line 655 "c:\\cuda\\include\\math_functions.h"
{ 
#line 656 "c:\\cuda\\include\\math_functions.h"
return log2f(a); 
#line 657 "c:\\cuda\\include\\math_functions.h"
} 
#line 659 "c:\\cuda\\include\\math_functions.h"
static __inline float log1p(float a) 
#line 660 "c:\\cuda\\include\\math_functions.h"
{ 
#line 661 "c:\\cuda\\include\\math_functions.h"
return log1pf(a); 
#line 662 "c:\\cuda\\include\\math_functions.h"
} 
#line 664 "c:\\cuda\\include\\math_functions.h"
static __inline float rsqrt(float a) 
#line 665 "c:\\cuda\\include\\math_functions.h"
{ 
#line 666 "c:\\cuda\\include\\math_functions.h"
return rsqrtf(a); 
#line 667 "c:\\cuda\\include\\math_functions.h"
} 
#line 669 "c:\\cuda\\include\\math_functions.h"
static __inline float acosh(float a) 
#line 670 "c:\\cuda\\include\\math_functions.h"
{ 
#line 671 "c:\\cuda\\include\\math_functions.h"
return acoshf(a); 
#line 672 "c:\\cuda\\include\\math_functions.h"
} 
#line 674 "c:\\cuda\\include\\math_functions.h"
static __inline float asinh(float a) 
#line 675 "c:\\cuda\\include\\math_functions.h"
{ 
#line 676 "c:\\cuda\\include\\math_functions.h"
return asinhf(a); 
#line 677 "c:\\cuda\\include\\math_functions.h"
} 
#line 679 "c:\\cuda\\include\\math_functions.h"
static __inline float atanh(float a) 
#line 680 "c:\\cuda\\include\\math_functions.h"
{ 
#line 681 "c:\\cuda\\include\\math_functions.h"
return atanhf(a); 
#line 682 "c:\\cuda\\include\\math_functions.h"
} 
#line 684 "c:\\cuda\\include\\math_functions.h"
static __inline float hypot(float a, float b) 
#line 685 "c:\\cuda\\include\\math_functions.h"
{ 
#line 686 "c:\\cuda\\include\\math_functions.h"
return hypotf(a, b); 
#line 687 "c:\\cuda\\include\\math_functions.h"
} 
#line 689 "c:\\cuda\\include\\math_functions.h"
static __inline float cbrt(float a) 
#line 690 "c:\\cuda\\include\\math_functions.h"
{ 
#line 691 "c:\\cuda\\include\\math_functions.h"
return cbrtf(a); 
#line 692 "c:\\cuda\\include\\math_functions.h"
} 
#line 694 "c:\\cuda\\include\\math_functions.h"
static __inline float rcbrt(float a) 
#line 695 "c:\\cuda\\include\\math_functions.h"
{ 
#line 696 "c:\\cuda\\include\\math_functions.h"
return rcbrtf(a); 
#line 697 "c:\\cuda\\include\\math_functions.h"
} 
#line 699 "c:\\cuda\\include\\math_functions.h"
static __inline float sinpi(float a) 
#line 700 "c:\\cuda\\include\\math_functions.h"
{ 
#line 701 "c:\\cuda\\include\\math_functions.h"
return sinpif(a); 
#line 702 "c:\\cuda\\include\\math_functions.h"
} 
#line 704 "c:\\cuda\\include\\math_functions.h"
static __inline void sincos(float a, float *sptr, float *cptr) 
#line 705 "c:\\cuda\\include\\math_functions.h"
{ 
#line 706 "c:\\cuda\\include\\math_functions.h"
sincosf(a, sptr, cptr); 
#line 707 "c:\\cuda\\include\\math_functions.h"
} 
#line 709 "c:\\cuda\\include\\math_functions.h"
static __inline float erf(float a) 
#line 710 "c:\\cuda\\include\\math_functions.h"
{ 
#line 711 "c:\\cuda\\include\\math_functions.h"
return erff(a); 
#line 712 "c:\\cuda\\include\\math_functions.h"
} 
#line 714 "c:\\cuda\\include\\math_functions.h"
static __inline float erfinv(float a) 
#line 715 "c:\\cuda\\include\\math_functions.h"
{ 
#line 716 "c:\\cuda\\include\\math_functions.h"
return erfinvf(a); 
#line 717 "c:\\cuda\\include\\math_functions.h"
} 
#line 719 "c:\\cuda\\include\\math_functions.h"
static __inline float erfc(float a) 
#line 720 "c:\\cuda\\include\\math_functions.h"
{ 
#line 721 "c:\\cuda\\include\\math_functions.h"
return erfcf(a); 
#line 722 "c:\\cuda\\include\\math_functions.h"
} 
#line 724 "c:\\cuda\\include\\math_functions.h"
static __inline float erfcinv(float a) 
#line 725 "c:\\cuda\\include\\math_functions.h"
{ 
#line 726 "c:\\cuda\\include\\math_functions.h"
return erfcinvf(a); 
#line 727 "c:\\cuda\\include\\math_functions.h"
} 
#line 729 "c:\\cuda\\include\\math_functions.h"
static __inline float lgamma(float a) 
#line 730 "c:\\cuda\\include\\math_functions.h"
{ 
#line 731 "c:\\cuda\\include\\math_functions.h"
return lgammaf(a); 
#line 732 "c:\\cuda\\include\\math_functions.h"
} 
#line 734 "c:\\cuda\\include\\math_functions.h"
static __inline float tgamma(float a) 
#line 735 "c:\\cuda\\include\\math_functions.h"
{ 
#line 736 "c:\\cuda\\include\\math_functions.h"
return tgammaf(a); 
#line 737 "c:\\cuda\\include\\math_functions.h"
} 
#line 739 "c:\\cuda\\include\\math_functions.h"
static __inline float copysign(float a, float b) 
#line 740 "c:\\cuda\\include\\math_functions.h"
{ 
#line 741 "c:\\cuda\\include\\math_functions.h"
return copysignf(a, b); 
#line 742 "c:\\cuda\\include\\math_functions.h"
} 
#line 744 "c:\\cuda\\include\\math_functions.h"
static __inline double copysign(double a, float b) 
#line 745 "c:\\cuda\\include\\math_functions.h"
{ 
#line 746 "c:\\cuda\\include\\math_functions.h"
return copysign(a, (double)b); 
#line 747 "c:\\cuda\\include\\math_functions.h"
} 
#line 749 "c:\\cuda\\include\\math_functions.h"
static __inline float copysign(float a, double b) 
#line 750 "c:\\cuda\\include\\math_functions.h"
{ 
#line 751 "c:\\cuda\\include\\math_functions.h"
return copysignf(a, (float)b); 
#line 752 "c:\\cuda\\include\\math_functions.h"
} 
#line 754 "c:\\cuda\\include\\math_functions.h"
static __inline float nextafter(float a, float b) 
#line 755 "c:\\cuda\\include\\math_functions.h"
{ 
#line 756 "c:\\cuda\\include\\math_functions.h"
return nextafterf(a, b); 
#line 757 "c:\\cuda\\include\\math_functions.h"
} 
#line 759 "c:\\cuda\\include\\math_functions.h"
static __inline float remainder(float a, float b) 
#line 760 "c:\\cuda\\include\\math_functions.h"
{ 
#line 761 "c:\\cuda\\include\\math_functions.h"
return remainderf(a, b); 
#line 762 "c:\\cuda\\include\\math_functions.h"
} 
#line 764 "c:\\cuda\\include\\math_functions.h"
static __inline float remquo(float a, float b, int *quo) 
#line 765 "c:\\cuda\\include\\math_functions.h"
{ 
#line 766 "c:\\cuda\\include\\math_functions.h"
return remquof(a, b, quo); 
#line 767 "c:\\cuda\\include\\math_functions.h"
} 
#line 769 "c:\\cuda\\include\\math_functions.h"
static __inline float round(float a) 
#line 770 "c:\\cuda\\include\\math_functions.h"
{ 
#line 771 "c:\\cuda\\include\\math_functions.h"
return roundf(a); 
#line 772 "c:\\cuda\\include\\math_functions.h"
} 
#line 774 "c:\\cuda\\include\\math_functions.h"
static __inline long lround(float a) 
#line 775 "c:\\cuda\\include\\math_functions.h"
{ 
#line 776 "c:\\cuda\\include\\math_functions.h"
return lroundf(a); 
#line 777 "c:\\cuda\\include\\math_functions.h"
} 
#line 779 "c:\\cuda\\include\\math_functions.h"
static __inline __int64 llround(float a) 
#line 780 "c:\\cuda\\include\\math_functions.h"
{ 
#line 781 "c:\\cuda\\include\\math_functions.h"
return llroundf(a); 
#line 782 "c:\\cuda\\include\\math_functions.h"
} 
#line 784 "c:\\cuda\\include\\math_functions.h"
static __inline float trunc(float a) 
#line 785 "c:\\cuda\\include\\math_functions.h"
{ 
#line 786 "c:\\cuda\\include\\math_functions.h"
return truncf(a); 
#line 787 "c:\\cuda\\include\\math_functions.h"
} 
#line 789 "c:\\cuda\\include\\math_functions.h"
static __inline float rint(float a) 
#line 790 "c:\\cuda\\include\\math_functions.h"
{ 
#line 791 "c:\\cuda\\include\\math_functions.h"
return rintf(a); 
#line 792 "c:\\cuda\\include\\math_functions.h"
} 
#line 794 "c:\\cuda\\include\\math_functions.h"
static __inline long lrint(float a) 
#line 795 "c:\\cuda\\include\\math_functions.h"
{ 
#line 796 "c:\\cuda\\include\\math_functions.h"
return lrintf(a); 
#line 797 "c:\\cuda\\include\\math_functions.h"
} 
#line 799 "c:\\cuda\\include\\math_functions.h"
static __inline __int64 llrint(float a) 
#line 800 "c:\\cuda\\include\\math_functions.h"
{ 
#line 801 "c:\\cuda\\include\\math_functions.h"
return llrintf(a); 
#line 802 "c:\\cuda\\include\\math_functions.h"
} 
#line 804 "c:\\cuda\\include\\math_functions.h"
static __inline float nearbyint(float a) 
#line 805 "c:\\cuda\\include\\math_functions.h"
{ 
#line 806 "c:\\cuda\\include\\math_functions.h"
return nearbyintf(a); 
#line 807 "c:\\cuda\\include\\math_functions.h"
} 
#line 809 "c:\\cuda\\include\\math_functions.h"
static __inline float fdim(float a, float b) 
#line 810 "c:\\cuda\\include\\math_functions.h"
{ 
#line 811 "c:\\cuda\\include\\math_functions.h"
return fdimf(a, b); 
#line 812 "c:\\cuda\\include\\math_functions.h"
} 
#line 814 "c:\\cuda\\include\\math_functions.h"
static __inline float fma(float a, float b, float c) 
#line 815 "c:\\cuda\\include\\math_functions.h"
{ 
#line 816 "c:\\cuda\\include\\math_functions.h"
return fmaf(a, b, c); 
#line 817 "c:\\cuda\\include\\math_functions.h"
} 
#line 819 "c:\\cuda\\include\\math_functions.h"
static __inline float fmax(float a, float b) 
#line 820 "c:\\cuda\\include\\math_functions.h"
{ 
#line 821 "c:\\cuda\\include\\math_functions.h"
return fmaxf(a, b); 
#line 822 "c:\\cuda\\include\\math_functions.h"
} 
#line 824 "c:\\cuda\\include\\math_functions.h"
static __inline float fmin(float a, float b) 
#line 825 "c:\\cuda\\include\\math_functions.h"
{ 
#line 826 "c:\\cuda\\include\\math_functions.h"
return fminf(a, b); 
#line 827 "c:\\cuda\\include\\math_functions.h"
} 
#line 829 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned min(unsigned a, unsigned b) 
#line 830 "c:\\cuda\\include\\math_functions.h"
{ 
#line 831 "c:\\cuda\\include\\math_functions.h"
return umin(a, b); 
#line 832 "c:\\cuda\\include\\math_functions.h"
} 
#line 834 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned min(int a, unsigned b) 
#line 835 "c:\\cuda\\include\\math_functions.h"
{ 
#line 836 "c:\\cuda\\include\\math_functions.h"
return umin((unsigned)a, b); 
#line 837 "c:\\cuda\\include\\math_functions.h"
} 
#line 839 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned min(unsigned a, int b) 
#line 840 "c:\\cuda\\include\\math_functions.h"
{ 
#line 841 "c:\\cuda\\include\\math_functions.h"
return umin(a, (unsigned)b); 
#line 842 "c:\\cuda\\include\\math_functions.h"
} 
#line 844 "c:\\cuda\\include\\math_functions.h"
static __inline __int64 min(__int64 a, __int64 b) 
#line 845 "c:\\cuda\\include\\math_functions.h"
{ 
#line 846 "c:\\cuda\\include\\math_functions.h"
return llmin(a, b); 
#line 847 "c:\\cuda\\include\\math_functions.h"
} 
#line 849 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned __int64 min(unsigned __int64 a, unsigned __int64 b) 
#line 850 "c:\\cuda\\include\\math_functions.h"
{ 
#line 851 "c:\\cuda\\include\\math_functions.h"
return ullmin(a, b); 
#line 852 "c:\\cuda\\include\\math_functions.h"
} 
#line 854 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned __int64 min(__int64 a, unsigned __int64 b) 
#line 855 "c:\\cuda\\include\\math_functions.h"
{ 
#line 856 "c:\\cuda\\include\\math_functions.h"
return ullmin((unsigned __int64)a, b); 
#line 857 "c:\\cuda\\include\\math_functions.h"
} 
#line 859 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned __int64 min(unsigned __int64 a, __int64 b) 
#line 860 "c:\\cuda\\include\\math_functions.h"
{ 
#line 861 "c:\\cuda\\include\\math_functions.h"
return ullmin(a, (unsigned __int64)b); 
#line 862 "c:\\cuda\\include\\math_functions.h"
} 
#line 864 "c:\\cuda\\include\\math_functions.h"
static __inline float min(float a, float b) 
#line 865 "c:\\cuda\\include\\math_functions.h"
{ 
#line 866 "c:\\cuda\\include\\math_functions.h"
return fminf(a, b); 
#line 867 "c:\\cuda\\include\\math_functions.h"
} 
#line 869 "c:\\cuda\\include\\math_functions.h"
static __inline double min(double a, double b) 
#line 870 "c:\\cuda\\include\\math_functions.h"
{ 
#line 871 "c:\\cuda\\include\\math_functions.h"
return fmin(a, b); 
#line 872 "c:\\cuda\\include\\math_functions.h"
} 
#line 874 "c:\\cuda\\include\\math_functions.h"
static __inline double min(float a, double b) 
#line 875 "c:\\cuda\\include\\math_functions.h"
{ 
#line 876 "c:\\cuda\\include\\math_functions.h"
return fmin((double)a, b); 
#line 877 "c:\\cuda\\include\\math_functions.h"
} 
#line 879 "c:\\cuda\\include\\math_functions.h"
static __inline double min(double a, float b) 
#line 880 "c:\\cuda\\include\\math_functions.h"
{ 
#line 881 "c:\\cuda\\include\\math_functions.h"
return fmin(a, (double)b); 
#line 882 "c:\\cuda\\include\\math_functions.h"
} 
#line 884 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned max(unsigned a, unsigned b) 
#line 885 "c:\\cuda\\include\\math_functions.h"
{ 
#line 886 "c:\\cuda\\include\\math_functions.h"
return umax(a, b); 
#line 887 "c:\\cuda\\include\\math_functions.h"
} 
#line 889 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned max(int a, unsigned b) 
#line 890 "c:\\cuda\\include\\math_functions.h"
{ 
#line 891 "c:\\cuda\\include\\math_functions.h"
return umax((unsigned)a, b); 
#line 892 "c:\\cuda\\include\\math_functions.h"
} 
#line 894 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned max(unsigned a, int b) 
#line 895 "c:\\cuda\\include\\math_functions.h"
{ 
#line 896 "c:\\cuda\\include\\math_functions.h"
return umax(a, (unsigned)b); 
#line 897 "c:\\cuda\\include\\math_functions.h"
} 
#line 899 "c:\\cuda\\include\\math_functions.h"
static __inline __int64 max(__int64 a, __int64 b) 
#line 900 "c:\\cuda\\include\\math_functions.h"
{ 
#line 901 "c:\\cuda\\include\\math_functions.h"
return llmax(a, b); 
#line 902 "c:\\cuda\\include\\math_functions.h"
} 
#line 904 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned __int64 max(unsigned __int64 a, unsigned __int64 b) 
#line 905 "c:\\cuda\\include\\math_functions.h"
{ 
#line 906 "c:\\cuda\\include\\math_functions.h"
return ullmax(a, b); 
#line 907 "c:\\cuda\\include\\math_functions.h"
} 
#line 909 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned __int64 max(__int64 a, unsigned __int64 b) 
#line 910 "c:\\cuda\\include\\math_functions.h"
{ 
#line 911 "c:\\cuda\\include\\math_functions.h"
return ullmax((unsigned __int64)a, b); 
#line 912 "c:\\cuda\\include\\math_functions.h"
} 
#line 914 "c:\\cuda\\include\\math_functions.h"
static __inline unsigned __int64 max(unsigned __int64 a, __int64 b) 
#line 915 "c:\\cuda\\include\\math_functions.h"
{ 
#line 916 "c:\\cuda\\include\\math_functions.h"
return ullmax(a, (unsigned __int64)b); 
#line 917 "c:\\cuda\\include\\math_functions.h"
} 
#line 919 "c:\\cuda\\include\\math_functions.h"
static __inline float max(float a, float b) 
#line 920 "c:\\cuda\\include\\math_functions.h"
{ 
#line 921 "c:\\cuda\\include\\math_functions.h"
return fmaxf(a, b); 
#line 922 "c:\\cuda\\include\\math_functions.h"
} 
#line 924 "c:\\cuda\\include\\math_functions.h"
static __inline double max(double a, double b) 
#line 925 "c:\\cuda\\include\\math_functions.h"
{ 
#line 926 "c:\\cuda\\include\\math_functions.h"
return fmax(a, b); 
#line 927 "c:\\cuda\\include\\math_functions.h"
} 
#line 929 "c:\\cuda\\include\\math_functions.h"
static __inline double max(float a, double b) 
#line 930 "c:\\cuda\\include\\math_functions.h"
{ 
#line 931 "c:\\cuda\\include\\math_functions.h"
return fmax((double)a, b); 
#line 932 "c:\\cuda\\include\\math_functions.h"
} 
#line 934 "c:\\cuda\\include\\math_functions.h"
static __inline double max(double a, float b) 
#line 935 "c:\\cuda\\include\\math_functions.h"
{ 
#line 936 "c:\\cuda\\include\\math_functions.h"
return fmax(a, (double)b); 
#line 937 "c:\\cuda\\include\\math_functions.h"
} 
#line 60 "c:\\cuda\\include\\cuda_surface_types.h"
template<class T, int dim = 1> 
#line 61 "c:\\cuda\\include\\cuda_surface_types.h"
struct surface : public surfaceReference { 
#line 63 "c:\\cuda\\include\\cuda_surface_types.h"
surface() 
#line 64 "c:\\cuda\\include\\cuda_surface_types.h"
{ 
#line 65 "c:\\cuda\\include\\cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 66 "c:\\cuda\\include\\cuda_surface_types.h"
} 
#line 68 "c:\\cuda\\include\\cuda_surface_types.h"
surface(cudaChannelFormatDesc desc) 
#line 69 "c:\\cuda\\include\\cuda_surface_types.h"
{ 
#line 70 "c:\\cuda\\include\\cuda_surface_types.h"
(channelDesc) = desc; 
#line 71 "c:\\cuda\\include\\cuda_surface_types.h"
} 
#line 72 "c:\\cuda\\include\\cuda_surface_types.h"
}; 
#line 75 "c:\\cuda\\include\\cuda_surface_types.h"
template<int dim> 
#line 76 "c:\\cuda\\include\\cuda_surface_types.h"
struct surface< void, dim>  : public surfaceReference { 
#line 78 "c:\\cuda\\include\\cuda_surface_types.h"
surface() 
#line 79 "c:\\cuda\\include\\cuda_surface_types.h"
{ 
#line 80 "c:\\cuda\\include\\cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> (); 
#line 81 "c:\\cuda\\include\\cuda_surface_types.h"
} 
#line 82 "c:\\cuda\\include\\cuda_surface_types.h"
}; 
#line 60 "c:\\cuda\\include\\cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
#line 61 "c:\\cuda\\include\\cuda_texture_types.h"
struct texture : public textureReference { 
#line 63 "c:\\cuda\\include\\cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode 
#line 64 "c:\\cuda\\include\\cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode 
#line 65 "c:\\cuda\\include\\cuda_texture_types.h"
aMode = cudaAddressModeClamp) 
#line 66 "c:\\cuda\\include\\cuda_texture_types.h"
{ 
#line 67 "c:\\cuda\\include\\cuda_texture_types.h"
(normalized) = norm; 
#line 68 "c:\\cuda\\include\\cuda_texture_types.h"
(filterMode) = fMode; 
#line 69 "c:\\cuda\\include\\cuda_texture_types.h"
((addressMode)[0]) = aMode; 
#line 70 "c:\\cuda\\include\\cuda_texture_types.h"
((addressMode)[1]) = aMode; 
#line 71 "c:\\cuda\\include\\cuda_texture_types.h"
((addressMode)[2]) = aMode; 
#line 72 "c:\\cuda\\include\\cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 73 "c:\\cuda\\include\\cuda_texture_types.h"
} 
#line 75 "c:\\cuda\\include\\cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode 
#line 76 "c:\\cuda\\include\\cuda_texture_types.h"
fMode, cudaTextureAddressMode 
#line 77 "c:\\cuda\\include\\cuda_texture_types.h"
aMode, cudaChannelFormatDesc 
#line 78 "c:\\cuda\\include\\cuda_texture_types.h"
desc) 
#line 79 "c:\\cuda\\include\\cuda_texture_types.h"
{ 
#line 80 "c:\\cuda\\include\\cuda_texture_types.h"
(normalized) = norm; 
#line 81 "c:\\cuda\\include\\cuda_texture_types.h"
(filterMode) = fMode; 
#line 82 "c:\\cuda\\include\\cuda_texture_types.h"
((addressMode)[0]) = aMode; 
#line 83 "c:\\cuda\\include\\cuda_texture_types.h"
((addressMode)[1]) = aMode; 
#line 84 "c:\\cuda\\include\\cuda_texture_types.h"
((addressMode)[2]) = aMode; 
#line 85 "c:\\cuda\\include\\cuda_texture_types.h"
(channelDesc) = desc; 
#line 86 "c:\\cuda\\include\\cuda_texture_types.h"
} 
#line 87 "c:\\cuda\\include\\cuda_texture_types.h"
}; 
#line 329 "c:\\cuda\\include\\device_functions.h"
static __inline int mulhi(int a, int b) 
#line 330 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 332 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 341 "c:\\cuda\\include\\device_functions.h"
#line 334 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned mulhi(unsigned a, unsigned b) 
#line 335 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 337 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 346 "c:\\cuda\\include\\device_functions.h"
#line 339 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned mulhi(int a, unsigned b) 
#line 340 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 342 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 351 "c:\\cuda\\include\\device_functions.h"
#line 344 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned mulhi(unsigned a, int b) 
#line 345 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 347 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 356 "c:\\cuda\\include\\device_functions.h"
#line 349 "c:\\cuda\\include\\device_functions.h"
static __inline __int64 mul64hi(__int64 a, __int64 b) 
#line 350 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 352 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 361 "c:\\cuda\\include\\device_functions.h"
#line 354 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, unsigned __int64 b) 
#line 355 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 357 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 366 "c:\\cuda\\include\\device_functions.h"
#line 359 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned __int64 mul64hi(__int64 a, unsigned __int64 b) 
#line 360 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 362 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 371 "c:\\cuda\\include\\device_functions.h"
#line 364 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, __int64 b) 
#line 365 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 367 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 376 "c:\\cuda\\include\\device_functions.h"
#line 369 "c:\\cuda\\include\\device_functions.h"
static __inline int float_as_int(float a) 
#line 370 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 372 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 381 "c:\\cuda\\include\\device_functions.h"
#line 374 "c:\\cuda\\include\\device_functions.h"
static __inline float int_as_float(int a) 
#line 375 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 377 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 386 "c:\\cuda\\include\\device_functions.h"
#line 379 "c:\\cuda\\include\\device_functions.h"
static __inline float saturate(float a) 
#line 380 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 382 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 391 "c:\\cuda\\include\\device_functions.h"
#line 384 "c:\\cuda\\include\\device_functions.h"
static __inline int mul24(int a, int b) 
#line 385 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 387 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 396 "c:\\cuda\\include\\device_functions.h"
#line 389 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned umul24(unsigned a, unsigned b) 
#line 390 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 392 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 401 "c:\\cuda\\include\\device_functions.h"
#line 394 "c:\\cuda\\include\\device_functions.h"
static __inline void trap() 
#line 395 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 397 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 406 "c:\\cuda\\include\\device_functions.h"
#line 399 "c:\\cuda\\include\\device_functions.h"
static __inline void brkpt(int c) 
#line 400 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 402 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 411 "c:\\cuda\\include\\device_functions.h"
#line 404 "c:\\cuda\\include\\device_functions.h"
static __inline void syncthreads() 
#line 405 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 407 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 416 "c:\\cuda\\include\\device_functions.h"
#line 409 "c:\\cuda\\include\\device_functions.h"
static __inline void prof_trigger(int e) 
#line 410 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 427 "c:\\cuda\\include\\device_functions.h"
exit(___);}





































#line 466 "c:\\cuda\\include\\device_functions.h"
#line 429 "c:\\cuda\\include\\device_functions.h"
static __inline void threadfence(bool global) 
#line 430 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 432 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 441 "c:\\cuda\\include\\device_functions.h"
#line 434 "c:\\cuda\\include\\device_functions.h"
static __inline int float2int(float a, cudaRoundMode mode) 
#line 435 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 440 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 449 "c:\\cuda\\include\\device_functions.h"
#line 442 "c:\\cuda\\include\\device_functions.h"
static __inline unsigned float2uint(float a, cudaRoundMode mode) 
#line 443 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 448 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 457 "c:\\cuda\\include\\device_functions.h"
#line 450 "c:\\cuda\\include\\device_functions.h"
static __inline float int2float(int a, cudaRoundMode mode) 
#line 451 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 456 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 465 "c:\\cuda\\include\\device_functions.h"
#line 458 "c:\\cuda\\include\\device_functions.h"
static __inline float uint2float(unsigned a, cudaRoundMode mode) 
#line 459 "c:\\cuda\\include\\device_functions.h"
{int volatile ___ = 1;
#line 464 "c:\\cuda\\include\\device_functions.h"
exit(___);}







#line 473 "c:\\cuda\\include\\device_functions.h"
#line 102 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicAdd(int *address, int val) 
#line 103 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 105 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 114 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 107 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicAdd(unsigned *address, unsigned val) 
#line 108 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 110 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 119 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 112 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicSub(int *address, int val) 
#line 113 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 115 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 124 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 117 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicSub(unsigned *address, unsigned val) 
#line 118 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 120 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 129 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 122 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicExch(int *address, int val) 
#line 123 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 125 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 134 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 127 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicExch(unsigned *address, unsigned val) 
#line 128 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 130 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 139 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 132 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline float atomicExch(float *address, float val) 
#line 133 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 135 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 144 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 137 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicMin(int *address, int val) 
#line 138 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 140 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 149 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 142 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicMin(unsigned *address, unsigned val) 
#line 143 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 145 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 154 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 147 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicMax(int *address, int val) 
#line 148 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 150 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 159 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 152 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicMax(unsigned *address, unsigned val) 
#line 153 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 155 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 164 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 157 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicInc(unsigned *address, unsigned val) 
#line 158 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 160 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 169 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 162 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicDec(unsigned *address, unsigned val) 
#line 163 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 165 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 174 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 167 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicAnd(int *address, int val) 
#line 168 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 170 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 179 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 172 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicAnd(unsigned *address, unsigned val) 
#line 173 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 175 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 184 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 177 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicOr(int *address, int val) 
#line 178 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 180 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 189 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 182 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicOr(unsigned *address, unsigned val) 
#line 183 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 185 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 194 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 187 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicXor(int *address, int val) 
#line 188 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 190 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 199 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 192 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicXor(unsigned *address, unsigned val) 
#line 193 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 195 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 204 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 197 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline int atomicCAS(int *address, int compare, int val) 
#line 198 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 200 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 209 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 202 "c:\\cuda\\include\\sm_11_atomic_functions.h"
static __inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) 
#line 203 "c:\\cuda\\include\\sm_11_atomic_functions.h"
{int volatile ___ = 1;
#line 205 "c:\\cuda\\include\\sm_11_atomic_functions.h"
exit(___);}







#line 214 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 75 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline unsigned __int64 atomicAdd(unsigned __int64 *address, unsigned __int64 val) 
#line 76 "c:\\cuda\\include\\sm_12_atomic_functions.h"
{int volatile ___ = 1;
#line 78 "c:\\cuda\\include\\sm_12_atomic_functions.h"
exit(___);}







#line 87 "c:\\cuda\\include\\sm_12_atomic_functions.h"
#line 80 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline unsigned __int64 atomicExch(unsigned __int64 *address, unsigned __int64 val) 
#line 81 "c:\\cuda\\include\\sm_12_atomic_functions.h"
{int volatile ___ = 1;
#line 83 "c:\\cuda\\include\\sm_12_atomic_functions.h"
exit(___);}







#line 92 "c:\\cuda\\include\\sm_12_atomic_functions.h"
#line 85 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline unsigned __int64 atomicCAS(unsigned __int64 *address, unsigned __int64 compare, unsigned __int64 val) 
#line 86 "c:\\cuda\\include\\sm_12_atomic_functions.h"
{int volatile ___ = 1;
#line 88 "c:\\cuda\\include\\sm_12_atomic_functions.h"
exit(___);}







#line 97 "c:\\cuda\\include\\sm_12_atomic_functions.h"
#line 90 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline bool any(bool cond) 
#line 91 "c:\\cuda\\include\\sm_12_atomic_functions.h"
{int volatile ___ = 1;
#line 93 "c:\\cuda\\include\\sm_12_atomic_functions.h"
exit(___);}







#line 102 "c:\\cuda\\include\\sm_12_atomic_functions.h"
#line 95 "c:\\cuda\\include\\sm_12_atomic_functions.h"
static __inline bool all(bool cond) 
#line 96 "c:\\cuda\\include\\sm_12_atomic_functions.h"
{int volatile ___ = 1;
#line 98 "c:\\cuda\\include\\sm_12_atomic_functions.h"
exit(___);}







#line 107 "c:\\cuda\\include\\sm_12_atomic_functions.h"
#line 170 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double fma(double a, double b, double c, cudaRoundMode mode) 
#line 171 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 176 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 185 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 178 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double dmul(double a, double b, cudaRoundMode mode) 
#line 179 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 184 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 193 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 186 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double dadd(double a, double b, cudaRoundMode mode) 
#line 187 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 192 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 201 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 194 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline int double2int(double a, cudaRoundMode mode) 
#line 195 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 200 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 209 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 202 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline unsigned double2uint(double a, cudaRoundMode mode) 
#line 203 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 208 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 217 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 210 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline __int64 double2ll(double a, cudaRoundMode mode) 
#line 211 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 216 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 225 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 218 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode) 
#line 219 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 224 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 233 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 226 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double ll2double(__int64 a, cudaRoundMode mode) 
#line 227 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 232 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 241 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 234 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode) 
#line 235 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 240 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 249 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 242 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double int2double(int a, cudaRoundMode mode) 
#line 243 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 245 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 254 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 247 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double uint2double(unsigned a, cudaRoundMode mode) 
#line 248 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 250 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 259 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 252 "c:\\cuda\\include\\sm_13_double_functions.h"
static __inline double float2double(float a, cudaRoundMode mode) 
#line 253 "c:\\cuda\\include\\sm_13_double_functions.h"
{int volatile ___ = 1;
#line 255 "c:\\cuda\\include\\sm_13_double_functions.h"
exit(___);}







#line 264 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 66 "c:\\cuda\\include\\sm_20_atomic_functions.h"
static __inline float atomicAdd(float *address, float val) 
#line 67 "c:\\cuda\\include\\sm_20_atomic_functions.h"
{int volatile ___ = 1;
#line 69 "c:\\cuda\\include\\sm_20_atomic_functions.h"
exit(___);}







#line 78 "c:\\cuda\\include\\sm_20_atomic_functions.h"
#line 124 "c:\\cuda\\include\\sm_20_intrinsics.h"
static __inline unsigned ballot(bool pred) 
#line 125 "c:\\cuda\\include\\sm_20_intrinsics.h"
{int volatile ___ = 1;
#line 127 "c:\\cuda\\include\\sm_20_intrinsics.h"
exit(___);}







#line 136 "c:\\cuda\\include\\sm_20_intrinsics.h"
#line 129 "c:\\cuda\\include\\sm_20_intrinsics.h"
static __inline int syncthreads_count(bool pred) 
#line 130 "c:\\cuda\\include\\sm_20_intrinsics.h"
{int volatile ___ = 1;
#line 132 "c:\\cuda\\include\\sm_20_intrinsics.h"
exit(___);}







#line 141 "c:\\cuda\\include\\sm_20_intrinsics.h"
#line 134 "c:\\cuda\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_and(bool pred) 
#line 135 "c:\\cuda\\include\\sm_20_intrinsics.h"
{int volatile ___ = 1;
#line 137 "c:\\cuda\\include\\sm_20_intrinsics.h"
exit(___);}







#line 146 "c:\\cuda\\include\\sm_20_intrinsics.h"
#line 139 "c:\\cuda\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_or(bool pred) 
#line 140 "c:\\cuda\\include\\sm_20_intrinsics.h"
{int volatile ___ = 1;
#line 142 "c:\\cuda\\include\\sm_20_intrinsics.h"
exit(___);}







#line 151 "c:\\cuda\\include\\sm_20_intrinsics.h"
#line 97 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 98 "c:\\cuda\\include\\surface_functions.h"
surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode) 
#line 99 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 106 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 115 "c:\\cuda\\include\\surface_functions.h"
#line 108 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline T 
#line 109 "c:\\cuda\\include\\surface_functions.h"
surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 110 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 116 "c:\\cuda\\include\\surface_functions.h"
exit(___);}











#line 129 "c:\\cuda\\include\\surface_functions.h"
#line 118 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 119 "c:\\cuda\\include\\surface_functions.h"
surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 120 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 122 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 131 "c:\\cuda\\include\\surface_functions.h"
#line 125 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 126 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 128 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 137 "c:\\cuda\\include\\surface_functions.h"
#line 131 "c:\\cuda\\include\\surface_functions.h"
template<> __inline signed char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 132 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 134 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 143 "c:\\cuda\\include\\surface_functions.h"
#line 137 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 138 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 140 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 149 "c:\\cuda\\include\\surface_functions.h"
#line 143 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 144 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 146 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 155 "c:\\cuda\\include\\surface_functions.h"
#line 149 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 150 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 152 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 161 "c:\\cuda\\include\\surface_functions.h"
#line 155 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 156 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 160 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 171 "c:\\cuda\\include\\surface_functions.h"
#line 163 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 164 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 166 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 175 "c:\\cuda\\include\\surface_functions.h"
#line 169 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 170 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 174 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 185 "c:\\cuda\\include\\surface_functions.h"
#line 177 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 178 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 180 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 189 "c:\\cuda\\include\\surface_functions.h"
#line 183 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 184 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 186 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 195 "c:\\cuda\\include\\surface_functions.h"
#line 189 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 190 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 192 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 201 "c:\\cuda\\include\\surface_functions.h"
#line 195 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 196 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 198 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 207 "c:\\cuda\\include\\surface_functions.h"
#line 201 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 202 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 204 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 213 "c:\\cuda\\include\\surface_functions.h"
#line 207 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 208 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 212 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 223 "c:\\cuda\\include\\surface_functions.h"
#line 215 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 216 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 218 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 227 "c:\\cuda\\include\\surface_functions.h"
#line 221 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 222 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 226 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 237 "c:\\cuda\\include\\surface_functions.h"
#line 229 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 230 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 232 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 241 "c:\\cuda\\include\\surface_functions.h"
#line 235 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 236 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 238 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 247 "c:\\cuda\\include\\surface_functions.h"
#line 241 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 242 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 244 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 253 "c:\\cuda\\include\\surface_functions.h"
#line 247 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 248 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 250 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 259 "c:\\cuda\\include\\surface_functions.h"
#line 253 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 254 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 256 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 265 "c:\\cuda\\include\\surface_functions.h"
#line 259 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 260 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 264 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 275 "c:\\cuda\\include\\surface_functions.h"
#line 267 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 268 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 270 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 279 "c:\\cuda\\include\\surface_functions.h"
#line 273 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 274 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 278 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 289 "c:\\cuda\\include\\surface_functions.h"
#line 281 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 282 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 284 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 293 "c:\\cuda\\include\\surface_functions.h"
#line 287 "c:\\cuda\\include\\surface_functions.h"
template<> __inline __int64 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 288 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 290 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 299 "c:\\cuda\\include\\surface_functions.h"
#line 293 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned __int64 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 294 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 296 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 305 "c:\\cuda\\include\\surface_functions.h"
#line 299 "c:\\cuda\\include\\surface_functions.h"
template<> __inline longlong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 300 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 302 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 311 "c:\\cuda\\include\\surface_functions.h"
#line 305 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulonglong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 306 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 308 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 317 "c:\\cuda\\include\\surface_functions.h"
#line 311 "c:\\cuda\\include\\surface_functions.h"
template<> __inline longlong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 312 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 316 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 327 "c:\\cuda\\include\\surface_functions.h"
#line 319 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulonglong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 320 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 322 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 331 "c:\\cuda\\include\\surface_functions.h"
#line 327 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 328 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 330 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 339 "c:\\cuda\\include\\surface_functions.h"
#line 333 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 334 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 336 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 345 "c:\\cuda\\include\\surface_functions.h"
#line 339 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 340 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 342 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 351 "c:\\cuda\\include\\surface_functions.h"
#line 345 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 346 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 348 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 357 "c:\\cuda\\include\\surface_functions.h"
#line 351 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 352 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 356 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 367 "c:\\cuda\\include\\surface_functions.h"
#line 359 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 360 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 364 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 375 "c:\\cuda\\include\\surface_functions.h"
#line 367 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 368 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 372 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 383 "c:\\cuda\\include\\surface_functions.h"
#line 375 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 376 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 380 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 391 "c:\\cuda\\include\\surface_functions.h"
#line 385 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 386 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 388 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 397 "c:\\cuda\\include\\surface_functions.h"
#line 391 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 392 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 394 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 403 "c:\\cuda\\include\\surface_functions.h"
#line 397 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 398 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 402 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 413 "c:\\cuda\\include\\surface_functions.h"
#line 405 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 406 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 410 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 421 "c:\\cuda\\include\\surface_functions.h"
#line 457 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 458 "c:\\cuda\\include\\surface_functions.h"
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode) 
#line 459 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 466 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 475 "c:\\cuda\\include\\surface_functions.h"
#line 468 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline T 
#line 469 "c:\\cuda\\include\\surface_functions.h"
surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 470 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 476 "c:\\cuda\\include\\surface_functions.h"
exit(___);}











#line 489 "c:\\cuda\\include\\surface_functions.h"
#line 478 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 479 "c:\\cuda\\include\\surface_functions.h"
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 480 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 482 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 491 "c:\\cuda\\include\\surface_functions.h"
#line 485 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 486 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 488 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 497 "c:\\cuda\\include\\surface_functions.h"
#line 491 "c:\\cuda\\include\\surface_functions.h"
template<> __inline signed char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 492 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 494 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 503 "c:\\cuda\\include\\surface_functions.h"
#line 497 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 498 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 500 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 509 "c:\\cuda\\include\\surface_functions.h"
#line 503 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 504 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 506 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 515 "c:\\cuda\\include\\surface_functions.h"
#line 509 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 510 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 512 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 521 "c:\\cuda\\include\\surface_functions.h"
#line 515 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 516 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 520 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 531 "c:\\cuda\\include\\surface_functions.h"
#line 523 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 524 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 526 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 535 "c:\\cuda\\include\\surface_functions.h"
#line 529 "c:\\cuda\\include\\surface_functions.h"
template<> __inline char4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 530 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 534 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 545 "c:\\cuda\\include\\surface_functions.h"
#line 537 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uchar4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 538 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 540 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 549 "c:\\cuda\\include\\surface_functions.h"
#line 543 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 544 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 546 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 555 "c:\\cuda\\include\\surface_functions.h"
#line 549 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 550 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 552 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 561 "c:\\cuda\\include\\surface_functions.h"
#line 555 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 556 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 558 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 567 "c:\\cuda\\include\\surface_functions.h"
#line 561 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 562 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 564 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 573 "c:\\cuda\\include\\surface_functions.h"
#line 567 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 568 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 572 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 583 "c:\\cuda\\include\\surface_functions.h"
#line 575 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 576 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 578 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 587 "c:\\cuda\\include\\surface_functions.h"
#line 581 "c:\\cuda\\include\\surface_functions.h"
template<> __inline short4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 582 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 586 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 597 "c:\\cuda\\include\\surface_functions.h"
#line 589 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ushort4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 590 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 592 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 601 "c:\\cuda\\include\\surface_functions.h"
#line 595 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 596 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 598 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 607 "c:\\cuda\\include\\surface_functions.h"
#line 601 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 602 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 604 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 613 "c:\\cuda\\include\\surface_functions.h"
#line 607 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 608 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 610 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 619 "c:\\cuda\\include\\surface_functions.h"
#line 613 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 614 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 616 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 625 "c:\\cuda\\include\\surface_functions.h"
#line 619 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 620 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 624 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 635 "c:\\cuda\\include\\surface_functions.h"
#line 627 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 628 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 630 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 639 "c:\\cuda\\include\\surface_functions.h"
#line 633 "c:\\cuda\\include\\surface_functions.h"
template<> __inline int4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 634 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 638 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 649 "c:\\cuda\\include\\surface_functions.h"
#line 641 "c:\\cuda\\include\\surface_functions.h"
template<> __inline uint4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 642 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 644 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 653 "c:\\cuda\\include\\surface_functions.h"
#line 647 "c:\\cuda\\include\\surface_functions.h"
template<> __inline __int64 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 648 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 650 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 659 "c:\\cuda\\include\\surface_functions.h"
#line 653 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned __int64 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 654 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 656 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 665 "c:\\cuda\\include\\surface_functions.h"
#line 659 "c:\\cuda\\include\\surface_functions.h"
template<> __inline longlong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 660 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 662 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 671 "c:\\cuda\\include\\surface_functions.h"
#line 665 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulonglong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 666 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 668 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 677 "c:\\cuda\\include\\surface_functions.h"
#line 671 "c:\\cuda\\include\\surface_functions.h"
template<> __inline longlong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 672 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 676 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 687 "c:\\cuda\\include\\surface_functions.h"
#line 679 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulonglong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 680 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 682 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 691 "c:\\cuda\\include\\surface_functions.h"
#line 687 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 688 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 690 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 699 "c:\\cuda\\include\\surface_functions.h"
#line 693 "c:\\cuda\\include\\surface_functions.h"
template<> __inline unsigned long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 694 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 696 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 705 "c:\\cuda\\include\\surface_functions.h"
#line 699 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 700 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 702 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 711 "c:\\cuda\\include\\surface_functions.h"
#line 705 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 706 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 708 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 717 "c:\\cuda\\include\\surface_functions.h"
#line 711 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 712 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 716 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 727 "c:\\cuda\\include\\surface_functions.h"
#line 719 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 720 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 724 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 735 "c:\\cuda\\include\\surface_functions.h"
#line 727 "c:\\cuda\\include\\surface_functions.h"
template<> __inline long4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 728 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 732 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 743 "c:\\cuda\\include\\surface_functions.h"
#line 735 "c:\\cuda\\include\\surface_functions.h"
template<> __inline ulong4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 736 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 740 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 751 "c:\\cuda\\include\\surface_functions.h"
#line 745 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 746 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 748 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 757 "c:\\cuda\\include\\surface_functions.h"
#line 751 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 752 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 754 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 763 "c:\\cuda\\include\\surface_functions.h"
#line 757 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 758 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 762 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 773 "c:\\cuda\\include\\surface_functions.h"
#line 765 "c:\\cuda\\include\\surface_functions.h"
template<> __inline float4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 766 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 770 "c:\\cuda\\include\\surface_functions.h"
exit(___);}









#line 781 "c:\\cuda\\include\\surface_functions.h"
#line 817 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 818 "c:\\cuda\\include\\surface_functions.h"
surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode) 
#line 819 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 837 "c:\\cuda\\include\\surface_functions.h"
exit(___);}

























#line 864 "c:\\cuda\\include\\surface_functions.h"
#line 839 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 840 "c:\\cuda\\include\\surface_functions.h"
surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 841 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 843 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 852 "c:\\cuda\\include\\surface_functions.h"
#line 846 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 847 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 849 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 858 "c:\\cuda\\include\\surface_functions.h"
#line 851 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(signed char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 852 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 854 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 863 "c:\\cuda\\include\\surface_functions.h"
#line 856 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 857 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 859 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 868 "c:\\cuda\\include\\surface_functions.h"
#line 861 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(char1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 862 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 864 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 873 "c:\\cuda\\include\\surface_functions.h"
#line 866 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uchar1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 867 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 869 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 878 "c:\\cuda\\include\\surface_functions.h"
#line 871 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(char2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 872 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 874 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 883 "c:\\cuda\\include\\surface_functions.h"
#line 876 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uchar2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 877 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 879 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 888 "c:\\cuda\\include\\surface_functions.h"
#line 881 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(char4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 882 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 884 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 893 "c:\\cuda\\include\\surface_functions.h"
#line 886 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uchar4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 887 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 889 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 898 "c:\\cuda\\include\\surface_functions.h"
#line 891 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 892 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 894 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 903 "c:\\cuda\\include\\surface_functions.h"
#line 896 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 897 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 899 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 908 "c:\\cuda\\include\\surface_functions.h"
#line 901 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(short1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 902 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 904 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 913 "c:\\cuda\\include\\surface_functions.h"
#line 906 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ushort1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 907 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 909 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 918 "c:\\cuda\\include\\surface_functions.h"
#line 911 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(short2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 912 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 914 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 923 "c:\\cuda\\include\\surface_functions.h"
#line 916 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ushort2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 917 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 919 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 928 "c:\\cuda\\include\\surface_functions.h"
#line 921 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(short4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 922 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 924 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 933 "c:\\cuda\\include\\surface_functions.h"
#line 926 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ushort4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 927 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 929 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 938 "c:\\cuda\\include\\surface_functions.h"
#line 931 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(int val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 932 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 934 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 943 "c:\\cuda\\include\\surface_functions.h"
#line 936 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 937 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 939 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 948 "c:\\cuda\\include\\surface_functions.h"
#line 941 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(int1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 942 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 944 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 953 "c:\\cuda\\include\\surface_functions.h"
#line 946 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uint1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 947 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 949 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 958 "c:\\cuda\\include\\surface_functions.h"
#line 951 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(int2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 952 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 954 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 963 "c:\\cuda\\include\\surface_functions.h"
#line 956 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uint2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 957 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 959 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 968 "c:\\cuda\\include\\surface_functions.h"
#line 961 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(int4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 962 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 964 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 973 "c:\\cuda\\include\\surface_functions.h"
#line 966 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(uint4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 967 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 969 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 978 "c:\\cuda\\include\\surface_functions.h"
#line 971 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(__int64 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 972 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 974 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 983 "c:\\cuda\\include\\surface_functions.h"
#line 976 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned __int64 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 977 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 979 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 988 "c:\\cuda\\include\\surface_functions.h"
#line 981 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(longlong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 982 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 984 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 993 "c:\\cuda\\include\\surface_functions.h"
#line 986 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulonglong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 987 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 989 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 998 "c:\\cuda\\include\\surface_functions.h"
#line 991 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(longlong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 992 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 994 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1003 "c:\\cuda\\include\\surface_functions.h"
#line 996 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulonglong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 997 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 999 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1008 "c:\\cuda\\include\\surface_functions.h"
#line 1003 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1004 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1006 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1015 "c:\\cuda\\include\\surface_functions.h"
#line 1008 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(unsigned long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1009 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1011 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1020 "c:\\cuda\\include\\surface_functions.h"
#line 1013 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(long1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1014 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1016 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1025 "c:\\cuda\\include\\surface_functions.h"
#line 1018 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1019 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1021 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1030 "c:\\cuda\\include\\surface_functions.h"
#line 1023 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(long2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1024 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1026 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1035 "c:\\cuda\\include\\surface_functions.h"
#line 1028 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1029 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1031 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1040 "c:\\cuda\\include\\surface_functions.h"
#line 1033 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(long4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1034 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1036 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1045 "c:\\cuda\\include\\surface_functions.h"
#line 1038 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(ulong4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1039 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1041 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1050 "c:\\cuda\\include\\surface_functions.h"
#line 1045 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(float val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1046 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1048 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1057 "c:\\cuda\\include\\surface_functions.h"
#line 1050 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(float1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1051 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1053 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1062 "c:\\cuda\\include\\surface_functions.h"
#line 1055 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(float2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1056 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1058 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1067 "c:\\cuda\\include\\surface_functions.h"
#line 1060 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf1Dwrite(float4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
#line 1061 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1063 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1072 "c:\\cuda\\include\\surface_functions.h"
#line 1110 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 1111 "c:\\cuda\\include\\surface_functions.h"
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode) 
#line 1112 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1130 "c:\\cuda\\include\\surface_functions.h"
exit(___);}

























#line 1157 "c:\\cuda\\include\\surface_functions.h"
#line 1132 "c:\\cuda\\include\\surface_functions.h"
template<class T> static __inline void 
#line 1133 "c:\\cuda\\include\\surface_functions.h"
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1134 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1136 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1145 "c:\\cuda\\include\\surface_functions.h"
#line 1139 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1140 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1142 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1151 "c:\\cuda\\include\\surface_functions.h"
#line 1144 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(signed char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1145 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1147 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1156 "c:\\cuda\\include\\surface_functions.h"
#line 1149 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1150 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1152 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1161 "c:\\cuda\\include\\surface_functions.h"
#line 1154 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(char1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1155 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1157 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1166 "c:\\cuda\\include\\surface_functions.h"
#line 1159 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uchar1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1160 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1162 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1171 "c:\\cuda\\include\\surface_functions.h"
#line 1164 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(char2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1165 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1167 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1176 "c:\\cuda\\include\\surface_functions.h"
#line 1169 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uchar2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1170 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1172 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1181 "c:\\cuda\\include\\surface_functions.h"
#line 1174 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(char4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1175 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1177 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1186 "c:\\cuda\\include\\surface_functions.h"
#line 1179 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uchar4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1180 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1182 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1191 "c:\\cuda\\include\\surface_functions.h"
#line 1184 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1185 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1187 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1196 "c:\\cuda\\include\\surface_functions.h"
#line 1189 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1190 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1192 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1201 "c:\\cuda\\include\\surface_functions.h"
#line 1194 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(short1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1195 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1197 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1206 "c:\\cuda\\include\\surface_functions.h"
#line 1199 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ushort1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1200 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1202 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1211 "c:\\cuda\\include\\surface_functions.h"
#line 1204 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(short2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1205 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1207 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1216 "c:\\cuda\\include\\surface_functions.h"
#line 1209 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ushort2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1210 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1212 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1221 "c:\\cuda\\include\\surface_functions.h"
#line 1214 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(short4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1215 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1217 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1226 "c:\\cuda\\include\\surface_functions.h"
#line 1219 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ushort4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1220 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1222 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1231 "c:\\cuda\\include\\surface_functions.h"
#line 1224 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(int val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1225 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1227 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1236 "c:\\cuda\\include\\surface_functions.h"
#line 1229 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1230 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1232 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1241 "c:\\cuda\\include\\surface_functions.h"
#line 1234 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(int1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1235 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1237 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1246 "c:\\cuda\\include\\surface_functions.h"
#line 1239 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uint1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1240 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1242 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1251 "c:\\cuda\\include\\surface_functions.h"
#line 1244 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(int2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1245 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1247 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1256 "c:\\cuda\\include\\surface_functions.h"
#line 1249 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uint2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1250 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1252 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1261 "c:\\cuda\\include\\surface_functions.h"
#line 1254 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(int4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1255 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1257 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1266 "c:\\cuda\\include\\surface_functions.h"
#line 1259 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(uint4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1260 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1262 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1271 "c:\\cuda\\include\\surface_functions.h"
#line 1264 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(__int64 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1265 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1267 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1276 "c:\\cuda\\include\\surface_functions.h"
#line 1269 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned __int64 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1270 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1272 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1281 "c:\\cuda\\include\\surface_functions.h"
#line 1274 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(longlong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1275 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1277 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1286 "c:\\cuda\\include\\surface_functions.h"
#line 1279 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulonglong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1280 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1282 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1291 "c:\\cuda\\include\\surface_functions.h"
#line 1284 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(longlong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1285 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1287 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1296 "c:\\cuda\\include\\surface_functions.h"
#line 1289 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulonglong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1290 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1292 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1301 "c:\\cuda\\include\\surface_functions.h"
#line 1296 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1297 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1299 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1308 "c:\\cuda\\include\\surface_functions.h"
#line 1301 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(unsigned long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1302 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1304 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1313 "c:\\cuda\\include\\surface_functions.h"
#line 1306 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(long1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1307 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1309 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1318 "c:\\cuda\\include\\surface_functions.h"
#line 1311 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1312 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1314 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1323 "c:\\cuda\\include\\surface_functions.h"
#line 1316 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(long2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1317 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1319 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1328 "c:\\cuda\\include\\surface_functions.h"
#line 1321 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1322 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1324 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1333 "c:\\cuda\\include\\surface_functions.h"
#line 1326 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(long4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1327 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1329 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1338 "c:\\cuda\\include\\surface_functions.h"
#line 1331 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(ulong4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1332 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1334 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1343 "c:\\cuda\\include\\surface_functions.h"
#line 1338 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(float val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1339 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1341 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1350 "c:\\cuda\\include\\surface_functions.h"
#line 1343 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(float1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1344 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1346 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1355 "c:\\cuda\\include\\surface_functions.h"
#line 1348 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(float2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1349 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1351 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1360 "c:\\cuda\\include\\surface_functions.h"
#line 1353 "c:\\cuda\\include\\surface_functions.h"
static __inline void surf2Dwrite(float4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
#line 1354 "c:\\cuda\\include\\surface_functions.h"
{int volatile ___ = 1;
#line 1356 "c:\\cuda\\include\\surface_functions.h"
exit(___);}







#line 1365 "c:\\cuda\\include\\surface_functions.h"
#line 61 "c:\\cuda\\include\\texture_fetch_functions.h"
template<class T, cudaTextureReadMode readMode> extern uint4 __utexfetchi(texture< T, 1, readMode> , int4); 
#line 63 "c:\\cuda\\include\\texture_fetch_functions.h"
template<class T, cudaTextureReadMode readMode> extern int4 __itexfetchi(texture< T, 1, readMode> , int4); 
#line 65 "c:\\cuda\\include\\texture_fetch_functions.h"
template<class T, cudaTextureReadMode readMode> extern float4 __ftexfetchi(texture< T, 1, readMode> , int4); 
#line 68 "c:\\cuda\\include\\texture_fetch_functions.h"
template<class T, int dim, cudaTextureReadMode readMode> extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int); 
#line 70 "c:\\cuda\\include\\texture_fetch_functions.h"
template<class T, int dim, cudaTextureReadMode readMode> extern int4 __itexfetch(texture< T, dim, readMode> , float4, int); 
#line 72 "c:\\cuda\\include\\texture_fetch_functions.h"
template<class T, int dim, cudaTextureReadMode readMode> extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int); 
#line 80 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType>  t, int x) 
#line 81 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 89 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 100 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 91 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType>  t, int x) 
#line 92 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 96 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 107 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 98 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType>  t, int x) 
#line 99 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 103 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 114 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 105 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType>  t, int x) 
#line 106 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 110 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 121 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 112 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType>  t, int x) 
#line 113 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 117 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 128 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 119 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType>  t, int x) 
#line 120 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 124 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 135 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 126 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType>  t, int x) 
#line 127 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 131 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 142 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 133 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType>  t, int x) 
#line 134 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 138 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 149 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 140 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType>  t, int x) 
#line 141 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 145 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 156 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 153 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType>  t, int x) 
#line 154 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 158 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 169 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 160 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType>  t, int x) 
#line 161 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 165 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 176 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 167 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType>  t, int x) 
#line 168 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 172 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 183 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 174 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType>  t, int x) 
#line 175 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 179 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 190 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 181 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType>  t, int x) 
#line 182 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 186 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 197 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 188 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType>  t, int x) 
#line 189 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 193 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 204 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 195 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType>  t, int x) 
#line 196 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 200 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 211 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 202 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType>  t, int x) 
#line 203 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 207 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 218 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 215 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType>  t, int x) 
#line 216 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 220 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 231 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 222 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType>  t, int x) 
#line 223 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 227 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 238 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 229 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType>  t, int x) 
#line 230 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 234 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 245 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 236 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType>  t, int x) 
#line 237 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 241 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 252 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 243 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType>  t, int x) 
#line 244 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 248 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 259 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 250 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType>  t, int x) 
#line 251 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 255 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 266 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 257 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType>  t, int x) 
#line 258 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 262 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 273 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 264 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType>  t, int x) 
#line 265 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 269 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 280 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 279 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long tex1Dfetch(texture< long, 1, cudaReadModeElementType>  t, int x) 
#line 280 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 284 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 295 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 286 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned long tex1Dfetch(texture< unsigned long, 1, cudaReadModeElementType>  t, int x) 
#line 287 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 291 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 302 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 293 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long1 tex1Dfetch(texture< long1, 1, cudaReadModeElementType>  t, int x) 
#line 294 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 298 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 309 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 300 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong1 tex1Dfetch(texture< ulong1, 1, cudaReadModeElementType>  t, int x) 
#line 301 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 305 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 316 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 307 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long2 tex1Dfetch(texture< long2, 1, cudaReadModeElementType>  t, int x) 
#line 308 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 312 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 323 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 314 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong2 tex1Dfetch(texture< ulong2, 1, cudaReadModeElementType>  t, int x) 
#line 315 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 319 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 330 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 321 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long4 tex1Dfetch(texture< long4, 1, cudaReadModeElementType>  t, int x) 
#line 322 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 326 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 337 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 328 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong4 tex1Dfetch(texture< ulong4, 1, cudaReadModeElementType>  t, int x) 
#line 329 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 333 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 344 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 343 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType>  t, int x) 
#line 344 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 348 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 359 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 350 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType>  t, int x) 
#line 351 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 355 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 366 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 357 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType>  t, int x) 
#line 358 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 362 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 373 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 364 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType>  t, int x) 
#line 365 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 369 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 380 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 377 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 378 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 387 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 400 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 389 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 390 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 395 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 408 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 397 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 398 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 403 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 416 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 405 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 406 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 411 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 424 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 413 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 414 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 419 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 432 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 421 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 422 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 427 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 440 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 429 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 430 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 435 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 448 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 437 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 438 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 443 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 456 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 445 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 446 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 451 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 464 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 459 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 460 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 465 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 478 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 467 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 468 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 473 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 486 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 475 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 476 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 481 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 494 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 483 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 484 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 489 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 502 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 491 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 492 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 497 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 510 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 499 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 500 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 505 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 518 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 507 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 508 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 513 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 526 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 515 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, int x) 
#line 516 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 521 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 534 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 529 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char tex1D(texture< char, 1, cudaReadModeElementType>  t, float x) 
#line 530 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 538 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 549 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 540 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType>  t, float x) 
#line 541 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 545 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 556 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 547 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType>  t, float x) 
#line 548 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 552 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 563 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 554 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char1 tex1D(texture< char1, 1, cudaReadModeElementType>  t, float x) 
#line 555 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 559 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 570 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 561 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType>  t, float x) 
#line 562 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 566 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 577 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 568 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char2 tex1D(texture< char2, 1, cudaReadModeElementType>  t, float x) 
#line 569 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 573 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 584 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 575 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType>  t, float x) 
#line 576 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 580 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 591 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 582 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char4 tex1D(texture< char4, 1, cudaReadModeElementType>  t, float x) 
#line 583 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 587 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 598 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 589 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType>  t, float x) 
#line 590 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 594 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 605 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 602 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short tex1D(texture< short, 1, cudaReadModeElementType>  t, float x) 
#line 603 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 607 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 618 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 609 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType>  t, float x) 
#line 610 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 614 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 625 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 616 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short1 tex1D(texture< short1, 1, cudaReadModeElementType>  t, float x) 
#line 617 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 621 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 632 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 623 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType>  t, float x) 
#line 624 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 628 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 639 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 630 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short2 tex1D(texture< short2, 1, cudaReadModeElementType>  t, float x) 
#line 631 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 635 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 646 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 637 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType>  t, float x) 
#line 638 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 642 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 653 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 644 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short4 tex1D(texture< short4, 1, cudaReadModeElementType>  t, float x) 
#line 645 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 649 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 660 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 651 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType>  t, float x) 
#line 652 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 656 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 667 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 664 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int tex1D(texture< int, 1, cudaReadModeElementType>  t, float x) 
#line 665 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 669 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 680 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 671 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType>  t, float x) 
#line 672 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 676 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 687 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 678 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int1 tex1D(texture< int1, 1, cudaReadModeElementType>  t, float x) 
#line 679 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 683 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 694 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 685 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType>  t, float x) 
#line 686 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 690 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 701 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 692 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int2 tex1D(texture< int2, 1, cudaReadModeElementType>  t, float x) 
#line 693 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 697 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 708 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 699 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType>  t, float x) 
#line 700 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 704 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 715 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 706 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int4 tex1D(texture< int4, 1, cudaReadModeElementType>  t, float x) 
#line 707 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 711 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 722 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 713 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType>  t, float x) 
#line 714 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 718 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 729 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 734 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long tex1D(texture< long, 1, cudaReadModeElementType>  t, float x) 
#line 735 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 739 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 750 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 741 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned long tex1D(texture< unsigned long, 1, cudaReadModeElementType>  t, float x) 
#line 742 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 746 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 757 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 748 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long1 tex1D(texture< long1, 1, cudaReadModeElementType>  t, float x) 
#line 749 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 753 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 764 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 755 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong1 tex1D(texture< ulong1, 1, cudaReadModeElementType>  t, float x) 
#line 756 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 760 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 771 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 762 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long2 tex1D(texture< long2, 1, cudaReadModeElementType>  t, float x) 
#line 763 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 767 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 778 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 769 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong2 tex1D(texture< ulong2, 1, cudaReadModeElementType>  t, float x) 
#line 770 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 774 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 785 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 776 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long4 tex1D(texture< long4, 1, cudaReadModeElementType>  t, float x) 
#line 777 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 781 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 792 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 783 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong4 tex1D(texture< ulong4, 1, cudaReadModeElementType>  t, float x) 
#line 784 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 788 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 799 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 798 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< float, 1, cudaReadModeElementType>  t, float x) 
#line 799 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 803 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 814 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 805 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< float1, 1, cudaReadModeElementType>  t, float x) 
#line 806 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 810 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 821 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 812 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< float2, 1, cudaReadModeElementType>  t, float x) 
#line 813 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 817 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 828 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 819 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< float4, 1, cudaReadModeElementType>  t, float x) 
#line 820 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 824 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 835 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 832 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 833 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 842 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 855 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 844 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 845 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 850 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 863 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 852 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 853 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 858 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 871 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 860 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 861 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 866 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 879 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 868 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 869 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 874 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 887 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 876 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 877 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 882 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 895 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 884 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 885 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 890 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 903 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 892 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 893 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 898 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 911 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 900 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 901 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 906 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 919 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 914 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 915 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 920 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 933 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 922 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 923 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 928 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 941 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 930 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 931 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 936 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 949 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 938 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 939 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 944 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 957 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 946 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 947 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 952 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 965 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 954 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 955 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 960 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 973 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 962 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 963 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 968 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 981 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 970 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, float x) 
#line 971 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 976 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 989 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 984 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char tex2D(texture< char, 2, cudaReadModeElementType>  t, float x, float y) 
#line 985 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 993 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1004 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 995 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType>  t, float x, float y) 
#line 996 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1000 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1011 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1002 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1003 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1007 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1018 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1009 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char1 tex2D(texture< char1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1010 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1014 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1025 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1016 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1017 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1021 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1032 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1023 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char2 tex2D(texture< char2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1024 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1028 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1039 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1030 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1031 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1035 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1046 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1037 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char4 tex2D(texture< char4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1038 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1042 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1053 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1044 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1045 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1049 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1060 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1057 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short tex2D(texture< short, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1058 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1062 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1073 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1064 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1065 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1069 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1080 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1071 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short1 tex2D(texture< short1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1072 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1076 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1087 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1078 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1079 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1083 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1094 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1085 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short2 tex2D(texture< short2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1086 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1090 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1101 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1092 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1093 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1097 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1108 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1099 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short4 tex2D(texture< short4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1100 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1104 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1115 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1106 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1107 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1111 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1122 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1119 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int tex2D(texture< int, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1120 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1124 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1135 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1126 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1127 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1131 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1142 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1133 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int1 tex2D(texture< int1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1134 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1138 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1149 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1140 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1141 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1145 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1156 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1147 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int2 tex2D(texture< int2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1148 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1152 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1163 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1154 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1155 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1159 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1170 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1161 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int4 tex2D(texture< int4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1162 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1166 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1177 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1168 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1169 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1173 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1184 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1183 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long tex2D(texture< long, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1184 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1188 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1199 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1190 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned long tex2D(texture< unsigned long, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1191 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1195 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1206 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1197 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long1 tex2D(texture< long1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1198 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1202 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1213 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1204 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong1 tex2D(texture< ulong1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1205 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1209 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1220 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1211 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long2 tex2D(texture< long2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1212 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1216 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1227 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1218 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong2 tex2D(texture< ulong2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1219 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1223 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1234 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1225 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long4 tex2D(texture< long4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1226 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1230 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1241 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1232 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong4 tex2D(texture< ulong4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1233 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1237 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1248 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1247 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< float, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1248 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1252 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1263 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1254 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< float1, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1255 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1259 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1270 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1261 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< float2, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1262 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1266 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1277 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1268 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< float4, 2, cudaReadModeElementType>  t, float x, float y) 
#line 1269 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1273 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1284 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1281 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1282 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1291 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1304 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1293 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1294 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1299 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1312 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1301 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1302 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1307 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1320 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1309 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1310 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1315 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1328 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1317 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1318 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1323 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1336 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1325 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1326 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1331 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1344 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1333 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1334 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1339 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1352 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1341 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1342 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1347 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1360 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1349 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1350 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1355 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1368 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1363 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1364 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1369 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1382 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1371 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1372 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1377 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1390 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1379 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1380 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1385 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1398 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1387 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1388 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1393 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1406 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1395 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1396 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1401 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1414 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1403 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1404 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1409 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1422 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1411 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1412 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1417 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1430 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1419 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
#line 1420 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1425 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1438 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1433 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char tex3D(texture< char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1434 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1442 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1453 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1444 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1445 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1449 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1460 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1451 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1452 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1456 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1467 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1458 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char1 tex3D(texture< char1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1459 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1463 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1474 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1465 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1466 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1470 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1481 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1472 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char2 tex3D(texture< char2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1473 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1477 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1488 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1479 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1480 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1484 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1495 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1486 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline char4 tex3D(texture< char4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1487 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1491 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1502 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1493 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1494 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1498 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1509 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1506 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short tex3D(texture< short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1507 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1511 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1522 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1513 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1514 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1518 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1529 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1520 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short1 tex3D(texture< short1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1521 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1525 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1536 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1527 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1528 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1532 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1543 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1534 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short2 tex3D(texture< short2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1535 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1539 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1550 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1541 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1542 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1546 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1557 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1548 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline short4 tex3D(texture< short4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1549 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1553 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1564 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1555 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1556 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1560 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1571 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1568 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int tex3D(texture< int, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1569 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1573 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1584 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1575 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1576 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1580 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1591 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1582 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int1 tex3D(texture< int1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1583 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1587 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1598 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1589 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1590 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1594 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1605 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1596 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int2 tex3D(texture< int2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1597 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1601 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1612 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1603 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1604 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1608 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1619 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1610 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline int4 tex3D(texture< int4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1611 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1615 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1626 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1617 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1618 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1622 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1633 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1632 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long tex3D(texture< long, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1633 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1637 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1648 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1639 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline unsigned long tex3D(texture< unsigned long, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1640 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1644 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1655 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1646 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long1 tex3D(texture< long1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1647 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1651 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1662 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1653 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong1 tex3D(texture< ulong1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1654 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1658 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1669 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1660 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long2 tex3D(texture< long2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1661 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1665 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1676 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1667 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong2 tex3D(texture< ulong2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1668 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1672 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1683 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1674 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline long4 tex3D(texture< long4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1675 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1679 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1690 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1681 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline ulong4 tex3D(texture< ulong4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1682 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1686 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1697 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1696 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< float, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1697 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1701 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1712 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1703 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< float1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1704 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1708 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1719 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1710 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< float2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1711 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1715 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1726 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1717 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< float4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
#line 1718 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1722 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}









#line 1733 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1730 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1731 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1740 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1753 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1742 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1743 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1748 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1761 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1750 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1751 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1756 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1769 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1758 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1759 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1764 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1777 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1766 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1767 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1772 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1785 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1774 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1775 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1780 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1793 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1782 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1783 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1788 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1801 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1790 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1791 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1796 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1809 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1798 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1799 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1804 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1817 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1812 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1813 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1818 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1831 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1820 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1821 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1826 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1839 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1828 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1829 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1834 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1847 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1836 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1837 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1842 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1855 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1844 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1845 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1850 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1863 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1852 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1853 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1858 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1871 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1860 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1861 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1866 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1879 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 1868 "c:\\cuda\\include\\texture_fetch_functions.h"
static __inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
#line 1869 "c:\\cuda\\include\\texture_fetch_functions.h"
{int volatile ___ = 1;
#line 1874 "c:\\cuda\\include\\texture_fetch_functions.h"
exit(___);}











#line 1887 "c:\\cuda\\include\\texture_fetch_functions.h"
#line 53 "c:\\cuda\\include\\device_launch_parameters.h"




#line 58 "c:\\cuda\\include\\device_launch_parameters.h"
#line 55 "c:\\cuda\\include\\device_launch_parameters.h"




#line 60 "c:\\cuda\\include\\device_launch_parameters.h"
#line 57 "c:\\cuda\\include\\device_launch_parameters.h"




#line 62 "c:\\cuda\\include\\device_launch_parameters.h"
#line 59 "c:\\cuda\\include\\device_launch_parameters.h"




#line 64 "c:\\cuda\\include\\device_launch_parameters.h"
#line 61 "c:\\cuda\\include\\device_launch_parameters.h"




#line 66 "c:\\cuda\\include\\device_launch_parameters.h"
#line 102 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 103 "C:\\CUDA\\include\\cuda_runtime.h"
cudaSetupArgument(T 
#line 104 "C:\\CUDA\\include\\cuda_runtime.h"
arg, size_t 
#line 105 "C:\\CUDA\\include\\cuda_runtime.h"
offset) 
#line 107 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 108 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
#line 109 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 111 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 112 "C:\\CUDA\\include\\cuda_runtime.h"
cudaHostAlloc(T **
#line 113 "C:\\CUDA\\include\\cuda_runtime.h"
ptr, size_t 
#line 114 "C:\\CUDA\\include\\cuda_runtime.h"
size, unsigned 
#line 115 "C:\\CUDA\\include\\cuda_runtime.h"
flags) 
#line 117 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 118 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags); 
#line 119 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 121 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 122 "C:\\CUDA\\include\\cuda_runtime.h"
cudaHostGetDevicePointer(T **
#line 123 "C:\\CUDA\\include\\cuda_runtime.h"
pDevice, void *
#line 124 "C:\\CUDA\\include\\cuda_runtime.h"
pHost, unsigned 
#line 125 "C:\\CUDA\\include\\cuda_runtime.h"
flags) 
#line 127 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 128 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
#line 129 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 131 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 132 "C:\\CUDA\\include\\cuda_runtime.h"
cudaMalloc(T **
#line 133 "C:\\CUDA\\include\\cuda_runtime.h"
devPtr, size_t 
#line 134 "C:\\CUDA\\include\\cuda_runtime.h"
size) 
#line 136 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 137 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size); 
#line 138 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 140 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 141 "C:\\CUDA\\include\\cuda_runtime.h"
cudaMallocHost(T **
#line 142 "C:\\CUDA\\include\\cuda_runtime.h"
ptr, size_t 
#line 143 "C:\\CUDA\\include\\cuda_runtime.h"
size) 
#line 145 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 146 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size); 
#line 147 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 149 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 150 "C:\\CUDA\\include\\cuda_runtime.h"
cudaMallocPitch(T **
#line 151 "C:\\CUDA\\include\\cuda_runtime.h"
devPtr, size_t *
#line 152 "C:\\CUDA\\include\\cuda_runtime.h"
pitch, size_t 
#line 153 "C:\\CUDA\\include\\cuda_runtime.h"
width, size_t 
#line 154 "C:\\CUDA\\include\\cuda_runtime.h"
height) 
#line 156 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 157 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
#line 158 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 173 "C:\\CUDA\\include\\cuda_runtime.h"
static __inline cudaError_t cudaMemcpyToSymbol(char *
#line 174 "C:\\CUDA\\include\\cuda_runtime.h"
symbol, const void *
#line 175 "C:\\CUDA\\include\\cuda_runtime.h"
src, size_t 
#line 176 "C:\\CUDA\\include\\cuda_runtime.h"
count, size_t 
#line 177 "C:\\CUDA\\include\\cuda_runtime.h"
offset = (0), cudaMemcpyKind 
#line 178 "C:\\CUDA\\include\\cuda_runtime.h"
kind = cudaMemcpyHostToDevice) 
#line 180 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 181 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind); 
#line 182 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 184 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 185 "C:\\CUDA\\include\\cuda_runtime.h"
cudaMemcpyToSymbol(const T &
#line 186 "C:\\CUDA\\include\\cuda_runtime.h"
symbol, const void *
#line 187 "C:\\CUDA\\include\\cuda_runtime.h"
src, size_t 
#line 188 "C:\\CUDA\\include\\cuda_runtime.h"
count, size_t 
#line 189 "C:\\CUDA\\include\\cuda_runtime.h"
offset = (0), cudaMemcpyKind 
#line 190 "C:\\CUDA\\include\\cuda_runtime.h"
kind = cudaMemcpyHostToDevice) 
#line 192 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 193 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind); 
#line 194 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 196 "C:\\CUDA\\include\\cuda_runtime.h"
static __inline cudaError_t cudaMemcpyToSymbolAsync(char *
#line 197 "C:\\CUDA\\include\\cuda_runtime.h"
symbol, const void *
#line 198 "C:\\CUDA\\include\\cuda_runtime.h"
src, size_t 
#line 199 "C:\\CUDA\\include\\cuda_runtime.h"
count, size_t 
#line 200 "C:\\CUDA\\include\\cuda_runtime.h"
offset = (0), cudaMemcpyKind 
#line 201 "C:\\CUDA\\include\\cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t 
#line 202 "C:\\CUDA\\include\\cuda_runtime.h"
stream = 0) 
#line 204 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 205 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream); 
#line 206 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 208 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 209 "C:\\CUDA\\include\\cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
#line 210 "C:\\CUDA\\include\\cuda_runtime.h"
symbol, const void *
#line 211 "C:\\CUDA\\include\\cuda_runtime.h"
src, size_t 
#line 212 "C:\\CUDA\\include\\cuda_runtime.h"
count, size_t 
#line 213 "C:\\CUDA\\include\\cuda_runtime.h"
offset = (0), cudaMemcpyKind 
#line 214 "C:\\CUDA\\include\\cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t 
#line 215 "C:\\CUDA\\include\\cuda_runtime.h"
stream = 0) 
#line 217 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 218 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream); 
#line 219 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 227 "C:\\CUDA\\include\\cuda_runtime.h"
static __inline cudaError_t cudaMemcpyFromSymbol(void *
#line 228 "C:\\CUDA\\include\\cuda_runtime.h"
dst, char *
#line 229 "C:\\CUDA\\include\\cuda_runtime.h"
symbol, size_t 
#line 230 "C:\\CUDA\\include\\cuda_runtime.h"
count, size_t 
#line 231 "C:\\CUDA\\include\\cuda_runtime.h"
offset = (0), cudaMemcpyKind 
#line 232 "C:\\CUDA\\include\\cuda_runtime.h"
kind = cudaMemcpyDeviceToHost) 
#line 234 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 235 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind); 
#line 236 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 238 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 239 "C:\\CUDA\\include\\cuda_runtime.h"
cudaMemcpyFromSymbol(void *
#line 240 "C:\\CUDA\\include\\cuda_runtime.h"
dst, const T &
#line 241 "C:\\CUDA\\include\\cuda_runtime.h"
symbol, size_t 
#line 242 "C:\\CUDA\\include\\cuda_runtime.h"
count, size_t 
#line 243 "C:\\CUDA\\include\\cuda_runtime.h"
offset = (0), cudaMemcpyKind 
#line 244 "C:\\CUDA\\include\\cuda_runtime.h"
kind = cudaMemcpyDeviceToHost) 
#line 246 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 247 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind); 
#line 248 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 250 "C:\\CUDA\\include\\cuda_runtime.h"
static __inline cudaError_t cudaMemcpyFromSymbolAsync(void *
#line 251 "C:\\CUDA\\include\\cuda_runtime.h"
dst, char *
#line 252 "C:\\CUDA\\include\\cuda_runtime.h"
symbol, size_t 
#line 253 "C:\\CUDA\\include\\cuda_runtime.h"
count, size_t 
#line 254 "C:\\CUDA\\include\\cuda_runtime.h"
offset = (0), cudaMemcpyKind 
#line 255 "C:\\CUDA\\include\\cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t 
#line 256 "C:\\CUDA\\include\\cuda_runtime.h"
stream = 0) 
#line 258 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 259 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream); 
#line 260 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 262 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 263 "C:\\CUDA\\include\\cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
#line 264 "C:\\CUDA\\include\\cuda_runtime.h"
dst, const T &
#line 265 "C:\\CUDA\\include\\cuda_runtime.h"
symbol, size_t 
#line 266 "C:\\CUDA\\include\\cuda_runtime.h"
count, size_t 
#line 267 "C:\\CUDA\\include\\cuda_runtime.h"
offset = (0), cudaMemcpyKind 
#line 268 "C:\\CUDA\\include\\cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t 
#line 269 "C:\\CUDA\\include\\cuda_runtime.h"
stream = 0) 
#line 271 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 272 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream); 
#line 273 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 275 "C:\\CUDA\\include\\cuda_runtime.h"
static __inline cudaError_t cudaGetSymbolAddress(void **
#line 276 "C:\\CUDA\\include\\cuda_runtime.h"
devPtr, char *
#line 277 "C:\\CUDA\\include\\cuda_runtime.h"
symbol) 
#line 279 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 280 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol); 
#line 281 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 308 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 309 "C:\\CUDA\\include\\cuda_runtime.h"
cudaGetSymbolAddress(void **
#line 310 "C:\\CUDA\\include\\cuda_runtime.h"
devPtr, const T &
#line 311 "C:\\CUDA\\include\\cuda_runtime.h"
symbol) 
#line 313 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 314 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol)); 
#line 315 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 323 "C:\\CUDA\\include\\cuda_runtime.h"
static __inline cudaError_t cudaGetSymbolSize(size_t *
#line 324 "C:\\CUDA\\include\\cuda_runtime.h"
size, char *
#line 325 "C:\\CUDA\\include\\cuda_runtime.h"
symbol) 
#line 327 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 328 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol); 
#line 329 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 356 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 357 "C:\\CUDA\\include\\cuda_runtime.h"
cudaGetSymbolSize(size_t *
#line 358 "C:\\CUDA\\include\\cuda_runtime.h"
size, const T &
#line 359 "C:\\CUDA\\include\\cuda_runtime.h"
symbol) 
#line 361 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 362 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol)); 
#line 363 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 412 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 413 "C:\\CUDA\\include\\cuda_runtime.h"
cudaBindTexture(size_t *
#line 414 "C:\\CUDA\\include\\cuda_runtime.h"
offset, const texture< T, dim, readMode>  &
#line 415 "C:\\CUDA\\include\\cuda_runtime.h"
tex, const void *
#line 416 "C:\\CUDA\\include\\cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
#line 417 "C:\\CUDA\\include\\cuda_runtime.h"
desc, size_t 
#line 418 "C:\\CUDA\\include\\cuda_runtime.h"
size = (4294967295U)) 
#line 420 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 421 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size); 
#line 422 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 456 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 457 "C:\\CUDA\\include\\cuda_runtime.h"
cudaBindTexture(size_t *
#line 458 "C:\\CUDA\\include\\cuda_runtime.h"
offset, const texture< T, dim, readMode>  &
#line 459 "C:\\CUDA\\include\\cuda_runtime.h"
tex, const void *
#line 460 "C:\\CUDA\\include\\cuda_runtime.h"
devPtr, size_t 
#line 461 "C:\\CUDA\\include\\cuda_runtime.h"
size = (4294967295U)) 
#line 463 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 464 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.texture< T, dim, readMode> ::channelDesc), size); 
#line 465 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 511 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 512 "C:\\CUDA\\include\\cuda_runtime.h"
cudaBindTexture2D(size_t *
#line 513 "C:\\CUDA\\include\\cuda_runtime.h"
offset, const texture< T, dim, readMode>  &
#line 514 "C:\\CUDA\\include\\cuda_runtime.h"
tex, const void *
#line 515 "C:\\CUDA\\include\\cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
#line 516 "C:\\CUDA\\include\\cuda_runtime.h"
desc, size_t 
#line 517 "C:\\CUDA\\include\\cuda_runtime.h"
width, size_t 
#line 518 "C:\\CUDA\\include\\cuda_runtime.h"
height, size_t 
#line 519 "C:\\CUDA\\include\\cuda_runtime.h"
pitch) 
#line 521 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 522 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
#line 523 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 553 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 554 "C:\\CUDA\\include\\cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 555 "C:\\CUDA\\include\\cuda_runtime.h"
tex, const cudaArray *
#line 556 "C:\\CUDA\\include\\cuda_runtime.h"
array, const cudaChannelFormatDesc &
#line 557 "C:\\CUDA\\include\\cuda_runtime.h"
desc) 
#line 559 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 560 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc); 
#line 561 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 590 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 591 "C:\\CUDA\\include\\cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 592 "C:\\CUDA\\include\\cuda_runtime.h"
tex, const cudaArray *
#line 593 "C:\\CUDA\\include\\cuda_runtime.h"
array) 
#line 595 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 596 "C:\\CUDA\\include\\cuda_runtime.h"
cudaChannelFormatDesc desc; 
#line 597 "C:\\CUDA\\include\\cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array); 
#line 599 "C:\\CUDA\\include\\cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
#line 600 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 628 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 629 "C:\\CUDA\\include\\cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode>  &
#line 630 "C:\\CUDA\\include\\cuda_runtime.h"
tex) 
#line 632 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 633 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaUnbindTexture(&tex); 
#line 634 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 667 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> __inline cudaError_t 
#line 668 "C:\\CUDA\\include\\cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
#line 669 "C:\\CUDA\\include\\cuda_runtime.h"
offset, const texture< T, dim, readMode>  &
#line 670 "C:\\CUDA\\include\\cuda_runtime.h"
tex) 
#line 672 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 673 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex); 
#line 674 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 724 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 725 "C:\\CUDA\\include\\cuda_runtime.h"
cudaFuncSetCacheConfig(T *
#line 726 "C:\\CUDA\\include\\cuda_runtime.h"
func, cudaFuncCache 
#line 727 "C:\\CUDA\\include\\cuda_runtime.h"
cacheConfig) 
#line 729 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 730 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig); 
#line 731 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 768 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 769 "C:\\CUDA\\include\\cuda_runtime.h"
cudaLaunch(T *
#line 770 "C:\\CUDA\\include\\cuda_runtime.h"
entry) 
#line 772 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 773 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaLaunch((const char *)entry); 
#line 774 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 805 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T> __inline cudaError_t 
#line 806 "C:\\CUDA\\include\\cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
#line 807 "C:\\CUDA\\include\\cuda_runtime.h"
attr, T *
#line 808 "C:\\CUDA\\include\\cuda_runtime.h"
entry) 
#line 810 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 811 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry); 
#line 812 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 835 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim> __inline cudaError_t 
#line 836 "C:\\CUDA\\include\\cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim>  &
#line 837 "C:\\CUDA\\include\\cuda_runtime.h"
surf, const cudaArray *
#line 838 "C:\\CUDA\\include\\cuda_runtime.h"
array, const cudaChannelFormatDesc &
#line 839 "C:\\CUDA\\include\\cuda_runtime.h"
desc) 
#line 841 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 842 "C:\\CUDA\\include\\cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc); 
#line 843 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 865 "C:\\CUDA\\include\\cuda_runtime.h"
template<class T, int dim> __inline cudaError_t 
#line 866 "C:\\CUDA\\include\\cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim>  &
#line 867 "C:\\CUDA\\include\\cuda_runtime.h"
surf, const cudaArray *
#line 868 "C:\\CUDA\\include\\cuda_runtime.h"
array) 
#line 870 "C:\\CUDA\\include\\cuda_runtime.h"
{ 
#line 871 "C:\\CUDA\\include\\cuda_runtime.h"
cudaChannelFormatDesc desc; 
#line 872 "C:\\CUDA\\include\\cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array); 
#line 874 "C:\\CUDA\\include\\cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
#line 875 "C:\\CUDA\\include\\cuda_runtime.h"
} 
#line 28 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#pragma pack ( push, 8 )
#line 59 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { struct _iobuf { 
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
char *_ptr; 
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
int _cnt; 
#line 62 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
char *_base; 
#line 63 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
int _flag; 
#line 64 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
int _file; 
#line 65 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
int _charbuf; 
#line 66 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
int _bufsiz; 
#line 67 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
char *_tmpfname; 
#line 68 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
}; }
#line 69 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { typedef _iobuf FILE; }
#line 132 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl __iob_func(); } 
#line 148 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { typedef __int64 fpos_t; }
#line 189 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _filbuf(FILE *); } 
#line 190 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _flsbuf(int, FILE *); } 
#line 195 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _fsopen(const char *, const char *, int); } 
#line 198 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { void __cdecl clearerr(FILE *); } 
#line 200 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { errno_t __cdecl clearerr_s(FILE *); } 
#line 202 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fclose(FILE *); } 
#line 203 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fcloseall(); } 
#line 208 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _fdopen(int, const char *); } 
#line 211 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl feof(FILE *); } 
#line 212 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl ferror(FILE *); } 
#line 213 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fflush(FILE *); } 
#line 214 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fgetc(FILE *); } 
#line 215 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fgetchar(); } 
#line 216 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fgetpos(FILE *, fpos_t *); } 
#line 217 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { char *__cdecl fgets(char *, int, FILE *); } 
#line 222 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fileno(FILE *); } 
#line 230 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { char *__cdecl _tempnam(const char *, const char *); } 
#line 236 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _flushall(); } 
#line 237 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl fopen(const char *, const char *); } 
#line 239 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { errno_t __cdecl fopen_s(FILE **, const char *, const char *); } 
#line 241 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fprintf(FILE *, const char *, ...); } 
#line 243 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fprintf_s(FILE *, const char *, ...); } 
#line 245 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fputc(int, FILE *); } 
#line 246 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fputchar(int); } 
#line 247 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fputs(const char *, FILE *); } 
#line 248 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { size_t __cdecl fread(void *, size_t, size_t, FILE *); } 
#line 250 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { size_t __cdecl fread_s(void *, size_t, size_t, size_t, FILE *); } 
#line 252 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl freopen(const char *, const char *, FILE *); } 
#line 254 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { errno_t __cdecl freopen_s(FILE **, const char *, const char *, FILE *); } 
#line 256 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fscanf(FILE *, const char *, ...); } 
#line 257 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fscanf_l(FILE *, const char *, _locale_t, ...); } 
#pragma warning(push)
#pragma warning(disable:6530)
#line 261 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fscanf_s(FILE *, const char *, ...); } 
#line 263 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fscanf_s_l(FILE *, const char *, _locale_t, ...); } 
#line 264 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fsetpos(FILE *, const fpos_t *); } 
#line 265 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fseek(FILE *, long, int); } 
#line 266 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { long __cdecl ftell(FILE *); } 
#line 268 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fseeki64(FILE *, __int64, int); } 
#line 269 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __int64 __cdecl _ftelli64(FILE *); } 
#line 271 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { size_t __cdecl fwrite(const void *, size_t, size_t, FILE *); } 
#line 272 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl getc(FILE *); } 
#line 273 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl getchar(); } 
#line 274 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _getmaxstdio(); } 
#line 276 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { char *__cdecl gets_s(char *, rsize_t); } 
#line 278 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline char * __cdecl gets_s ( char ( & _Buffer ) [ _Size ] ) { return gets_s ( _Buffer, _Size ); }
#line 279 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { char *__cdecl gets(char *); } 
#line 280 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _getw(FILE *); } 
#line 285 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _pclose(FILE *); } 
#line 286 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _popen(const char *, const char *); } 
#line 287 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl printf(const char *, ...); } 
#line 289 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl printf_s(const char *, ...); } 
#line 291 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl putc(int, FILE *); } 
#line 292 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl putchar(int); } 
#line 293 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl puts(const char *); } 
#line 294 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _putw(int, FILE *); } 
#line 297 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl remove(const char *); } 
#line 298 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl rename(const char *, const char *); } 
#line 299 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _unlink(const char *); } 
#line 301 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl unlink(const char *); } 
#line 304 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { void __cdecl rewind(FILE *); } 
#line 305 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _rmtmp(); } 
#line 306 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl scanf(const char *, ...); } 
#line 307 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scanf_l(const char *, _locale_t, ...); } 
#line 309 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl scanf_s(const char *, ...); } 
#line 311 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scanf_s_l(const char *, _locale_t, ...); } 
#line 312 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { void __cdecl setbuf(FILE *, char *); } 
#line 313 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _setmaxstdio(int); } 
#line 314 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { unsigned __cdecl _set_output_format(unsigned); } 
#line 315 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { unsigned __cdecl _get_output_format(); } 
#line 316 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl setvbuf(FILE *, char *, int, size_t); } 
#line 317 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snprintf_s(char *, size_t, size_t, const char *, ...); } 
#line 318 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
__pragma(warning(push)) __pragma(warning(disable: 4793)) template < size_t _Size > inline int __cdecl _snprintf_s ( char ( & _Dest ) [ _Size ], size_t _MaxCount, const char * _Format, ... ) { va_list _ArgList; ( __va_start ( & _ArgList, _Format ) ); return _vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _ArgList ); }__pragma(warning(pop)) 
#line 320 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl sprintf_s(char *, size_t, const char *, ...); } 
#line 322 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
__pragma(warning(push)) __pragma(warning(disable: 4793)) template < size_t _Size > inline int __cdecl sprintf_s ( char ( & _Dest ) [ _Size ], const char * _Format, ... ) { va_list _ArgList; ( __va_start ( & _ArgList, _Format ) ); return vsprintf_s ( _Dest, _Size, _Format, _ArgList ); }__pragma(warning(pop)) 
#line 323 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scprintf(const char *, ...); } 
#line 324 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl sscanf(const char *, const char *, ...); } 
#line 325 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _sscanf_l(const char *, const char *, _locale_t, ...); } 
#line 327 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl sscanf_s(const char *, const char *, ...); } 
#line 329 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _sscanf_s_l(const char *, const char *, _locale_t, ...); } 
#line 330 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snscanf(const char *, size_t, const char *, ...); } 
#line 331 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snscanf_l(const char *, size_t, const char *, _locale_t, ...); } 
#line 332 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snscanf_s(const char *, size_t, const char *, ...); } 
#line 333 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snscanf_s_l(const char *, size_t, const char *, _locale_t, ...); } 
#line 334 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl tmpfile(); } 
#line 336 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { errno_t __cdecl tmpfile_s(FILE **); } 
#line 337 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { errno_t __cdecl tmpnam_s(char *, rsize_t); } 
#line 339 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline errno_t __cdecl tmpnam_s ( char ( & _Buf ) [ _Size ] ) { return tmpnam_s ( _Buf, _Size ); }
#line 340 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { char *__cdecl tmpnam(char *); } 
#line 341 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl ungetc(int, FILE *); } 
#line 342 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vfprintf(FILE *, const char *, va_list); } 
#line 344 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vfprintf_s(FILE *, const char *, va_list); } 
#line 346 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vprintf(const char *, va_list); } 
#line 348 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vprintf_s(const char *, va_list); } 
#line 350 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vsnprintf(char *, size_t, const char *, va_list); } 
#line 352 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vsnprintf_s(char *, size_t, size_t, const char *, va_list); } 
#line 354 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnprintf_s(char *, size_t, size_t, const char *, va_list); } 
#line 355 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline int __cdecl _vsnprintf_s ( char ( & _Dest ) [ _Size ], size_t _MaxCount, const char * _Format, va_list _Args ) { return _vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _Args ); }
#pragma warning(push)
#pragma warning(disable:4793)
extern "C" { int __cdecl _snprintf(char *, size_t, const char *, ...); } extern "C" { int __cdecl _vsnprintf(char *, size_t, const char *, va_list); } 
#pragma warning(pop)
#line 361 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vsprintf_s(char *, size_t, const char *, va_list); } 
#line 363 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline int __cdecl vsprintf_s ( char ( & _Dest ) [ _Size ], const char * _Format, va_list _Args ) { return vsprintf_s ( _Dest, _Size, _Format, _Args ); }
#pragma warning(push)
#pragma warning(disable:4793)
extern "C" { int __cdecl sprintf(char *, const char *, ...); } extern "C" { int __cdecl vsprintf(char *, const char *, va_list); } 
#pragma warning(pop)
extern "C" { int __cdecl _vscprintf(const char *, va_list); } 
#line 369 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snprintf_c(char *, size_t, const char *, ...); } 
#line 370 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnprintf_c(char *, size_t, const char *, va_list); } 
#line 372 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fprintf_p(FILE *, const char *, ...); } 
#line 373 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _printf_p(const char *, ...); } 
#line 374 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _sprintf_p(char *, size_t, const char *, ...); } 
#line 375 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vfprintf_p(FILE *, const char *, va_list); } 
#line 376 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vprintf_p(const char *, va_list); } 
#line 377 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsprintf_p(char *, size_t, const char *, va_list); } 
#line 378 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scprintf_p(const char *, ...); } 
#line 379 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vscprintf_p(const char *, va_list); } 
#line 380 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _set_printf_count_output(int); } 
#line 381 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _get_printf_count_output(); } 
#line 383 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _printf_l(const char *, _locale_t, ...); } 
#line 384 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _printf_p_l(const char *, _locale_t, ...); } 
#line 385 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _printf_s_l(const char *, _locale_t, ...); } 
#line 386 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vprintf_l(const char *, _locale_t, va_list); } 
#line 387 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vprintf_p_l(const char *, _locale_t, va_list); } 
#line 388 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vprintf_s_l(const char *, _locale_t, va_list); } 
#line 390 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fprintf_l(FILE *, const char *, _locale_t, ...); } 
#line 391 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fprintf_p_l(FILE *, const char *, _locale_t, ...); } 
#line 392 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fprintf_s_l(FILE *, const char *, _locale_t, ...); } 
#line 393 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vfprintf_l(FILE *, const char *, _locale_t, va_list); } 
#line 394 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vfprintf_p_l(FILE *, const char *, _locale_t, va_list); } 
#line 395 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vfprintf_s_l(FILE *, const char *, _locale_t, va_list); } 
#line 397 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _sprintf_l(char *, const char *, _locale_t, ...); } 
#line 398 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _sprintf_p_l(char *, size_t, const char *, _locale_t, ...); } 
#line 399 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _sprintf_s_l(char *, size_t, const char *, _locale_t, ...); } 
#line 400 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsprintf_l(char *, const char *, _locale_t, va_list); } 
#line 401 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsprintf_p_l(char *, size_t, const char *, _locale_t, va_list); } 
#line 402 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsprintf_s_l(char *, size_t, const char *, _locale_t, va_list); } 
#line 404 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scprintf_l(const char *, _locale_t, ...); } 
#line 405 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scprintf_p_l(const char *, _locale_t, ...); } 
#line 406 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vscprintf_l(const char *, _locale_t, va_list); } 
#line 407 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vscprintf_p_l(const char *, _locale_t, va_list); } 
#line 409 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snprintf_l(char *, size_t, const char *, _locale_t, ...); } 
#line 410 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snprintf_c_l(char *, size_t, const char *, _locale_t, ...); } 
#line 411 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snprintf_s_l(char *, size_t, size_t, const char *, _locale_t, ...); } 
#line 412 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnprintf_l(char *, size_t, const char *, _locale_t, va_list); } 
#line 413 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnprintf_c_l(char *, size_t, const char *, _locale_t, va_list); } 
#line 414 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnprintf_s_l(char *, size_t, size_t, const char *, _locale_t, va_list); } 
#line 427 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _wfsopen(const __wchar_t *, const __wchar_t *, int); } 
#line 430 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl fgetwc(FILE *); } 
#line 431 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl _fgetwchar(); } 
#line 432 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl fputwc(__wchar_t, FILE *); } 
#line 433 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl _fputwchar(__wchar_t); } 
#line 434 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl getwc(FILE *); } 
#line 435 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { inline wint_t __cdecl getwchar(); } 
#line 436 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl putwc(__wchar_t, FILE *); } 
#line 437 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { inline wint_t __cdecl putwchar(__wchar_t); } 
#line 438 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl ungetwc(wint_t, FILE *); } 
#line 440 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __wchar_t *__cdecl fgetws(__wchar_t *, int, FILE *); } 
#line 441 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fputws(const __wchar_t *, FILE *); } 
#line 442 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __wchar_t *__cdecl _getws_s(__wchar_t *, size_t); } 
#line 443 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline wchar_t * __cdecl _getws_s ( wchar_t ( & _String ) [ _Size ] ) { return _getws_s ( _String, _Size ); }
#line 444 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __wchar_t *__cdecl _getws(__wchar_t *); } 
#line 445 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _putws(const __wchar_t *); } 
#line 447 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fwprintf(FILE *, const __wchar_t *, ...); } 
#line 449 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fwprintf_s(FILE *, const __wchar_t *, ...); } 
#line 451 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl wprintf(const __wchar_t *, ...); } 
#line 453 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl wprintf_s(const __wchar_t *, ...); } 
#line 455 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scwprintf(const __wchar_t *, ...); } 
#line 456 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vfwprintf(FILE *, const __wchar_t *, va_list); } 
#line 458 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vfwprintf_s(FILE *, const __wchar_t *, va_list); } 
#line 460 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vwprintf(const __wchar_t *, va_list); } 
#line 462 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vwprintf_s(const __wchar_t *, va_list); } 
#line 466 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl swprintf_s(__wchar_t *, size_t, const __wchar_t *, ...); } 
#line 468 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
__pragma(warning(push)) __pragma(warning(disable: 4793)) template < size_t _Size > inline int __cdecl swprintf_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Format, ... ) { va_list _ArgList; ( __va_start ( & _ArgList, _Format ) ); return vswprintf_s ( _Dest, _Size, _Format, _ArgList ); }__pragma(warning(pop)) 
#line 470 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl vswprintf_s(__wchar_t *, size_t, const __wchar_t *, va_list); } 
#line 472 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline int __cdecl vswprintf_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Format, va_list _Args ) { return vswprintf_s ( _Dest, _Size, _Format, _Args ); }
#line 474 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _swprintf_c(__wchar_t *, size_t, const __wchar_t *, ...); } 
#line 475 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vswprintf_c(__wchar_t *, size_t, const __wchar_t *, va_list); } 
#line 477 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snwprintf_s(__wchar_t *, size_t, size_t, const __wchar_t *, ...); } 
#line 478 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
__pragma(warning(push)) __pragma(warning(disable: 4793)) template < size_t _Size > inline int __cdecl _snwprintf_s ( wchar_t ( & _Dest ) [ _Size ], size_t _Count, const wchar_t * _Format, ... ) { va_list _ArgList; ( __va_start ( & _ArgList, _Format ) ); return _vsnwprintf_s ( _Dest, _Size, _Count, _Format, _ArgList ); }__pragma(warning(pop)) 
#line 479 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnwprintf_s(__wchar_t *, size_t, size_t, const __wchar_t *, va_list); } 
#line 480 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline int __cdecl _vsnwprintf_s ( wchar_t ( & _Dest ) [ _Size ], size_t _Count, const wchar_t * _Format, va_list _Args ) { return _vsnwprintf_s ( _Dest, _Size, _Count, _Format, _Args ); }
#pragma warning(push)
#pragma warning(disable:4793)
extern "C" { int __cdecl _snwprintf(__wchar_t *, size_t, const __wchar_t *, ...); } extern "C" { int __cdecl _vsnwprintf(__wchar_t *, size_t, const __wchar_t *, va_list); } 
#pragma warning(pop)
#line 486 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fwprintf_p(FILE *, const __wchar_t *, ...); } 
#line 487 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _wprintf_p(const __wchar_t *, ...); } 
#line 488 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vfwprintf_p(FILE *, const __wchar_t *, va_list); } 
#line 489 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vwprintf_p(const __wchar_t *, va_list); } 
#line 490 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _swprintf_p(__wchar_t *, size_t, const __wchar_t *, ...); } 
#line 491 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vswprintf_p(__wchar_t *, size_t, const __wchar_t *, va_list); } 
#line 492 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scwprintf_p(const __wchar_t *, ...); } 
#line 493 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vscwprintf_p(const __wchar_t *, va_list); } 
#line 495 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _wprintf_l(const __wchar_t *, _locale_t, ...); } 
#line 496 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _wprintf_p_l(const __wchar_t *, _locale_t, ...); } 
#line 497 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _wprintf_s_l(const __wchar_t *, _locale_t, ...); } 
#line 498 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vwprintf_l(const __wchar_t *, _locale_t, va_list); } 
#line 499 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vwprintf_p_l(const __wchar_t *, _locale_t, va_list); } 
#line 500 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vwprintf_s_l(const __wchar_t *, _locale_t, va_list); } 
#line 502 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fwprintf_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 503 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fwprintf_p_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 504 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fwprintf_s_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 505 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vfwprintf_l(FILE *, const __wchar_t *, _locale_t, va_list); } 
#line 506 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vfwprintf_p_l(FILE *, const __wchar_t *, _locale_t, va_list); } 
#line 507 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vfwprintf_s_l(FILE *, const __wchar_t *, _locale_t, va_list); } 
#line 509 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _swprintf_c_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 510 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _swprintf_p_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 511 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _swprintf_s_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 512 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vswprintf_c_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 513 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vswprintf_p_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 514 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vswprintf_s_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 516 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scwprintf_l(const __wchar_t *, _locale_t, ...); } 
#line 517 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _scwprintf_p_l(const __wchar_t *, _locale_t, ...); } 
#line 518 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vscwprintf_p_l(const __wchar_t *, _locale_t, va_list); } 
#line 520 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snwprintf_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 521 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snwprintf_s_l(__wchar_t *, size_t, size_t, const __wchar_t *, _locale_t, ...); } 
#line 522 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnwprintf_l(__wchar_t *, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 523 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vsnwprintf_s_l(__wchar_t *, size_t, size_t, const __wchar_t *, _locale_t, va_list); } 
#line 537 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#pragma warning(push)
#pragma warning(disable:4141 4996 4793)
extern "C" { __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl _swprintf(__wchar_t *, const __wchar_t *, ...); } extern "C" { __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl _vswprintf(__wchar_t *, const __wchar_t *, va_list); } 
#line 540 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl __swprintf_l(__wchar_t *, const __wchar_t *, _locale_t, ...); } extern "C" { __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl __vswprintf_l(__wchar_t *, const __wchar_t *, _locale_t, va_list); } 
#pragma warning(pop)
#line 34 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4793 4412 )
extern "C" { static __inline int swprintf(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, ...) 
#line 37 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
{ 
#line 38 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
va_list _Arglist; 
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
int _Ret; 
#line 40 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
__va_start(&_Arglist, _Format); 
#line 41 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
_Ret = _vswprintf_c_l(_String, _Count, _Format, 0, _Arglist); 
#line 42 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
_Arglist = ((va_list)0); 
#line 43 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
return _Ret; 
#line 44 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
} } 
#pragma warning( pop )
#line 47 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4412 )
extern "C" { static __inline int __cdecl vswprintf(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, va_list _Ap) 
#line 50 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
{ 
#line 51 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
return _vswprintf_c_l(_String, _Count, _Format, 0, _Ap); 
#line 52 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
} } 
#pragma warning( pop )
#line 58 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4793 4412 )
extern "C" { static __inline int _swprintf_l(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, _locale_t _Plocinfo, ...) 
#line 61 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
{ 
#line 62 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
va_list _Arglist; 
#line 63 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
int _Ret; 
#line 64 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
__va_start(&_Arglist, _Plocinfo); 
#line 65 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
_Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist); 
#line 66 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
_Arglist = ((va_list)0); 
#line 67 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
return _Ret; 
#line 68 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
} } 
#pragma warning( pop )
#line 71 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4412 )
extern "C" { static __inline int __cdecl _vswprintf_l(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, _locale_t _Plocinfo, va_list _Ap) 
#line 74 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
{ 
#line 75 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap); 
#line 76 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
} } 
#pragma warning( pop )
#line 80 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4996 )
#line 83 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4793 4141 )
__inline __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int swprintf(__wchar_t *_String, const __wchar_t *_Format, ...) 
#line 86 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
{ 
#line 87 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
va_list _Arglist; 
#line 88 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
__va_start(&_Arglist, _Format); 
#line 89 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
int _Ret = _vswprintf(_String, _Format, _Arglist); 
#line 90 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
_Arglist = ((va_list)0); 
#line 91 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
return _Ret; 
#line 92 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
} 
#pragma warning( pop )
#line 95 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4141 )
__inline __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl vswprintf(__wchar_t *_String, const __wchar_t *_Format, va_list _Ap) 
#line 98 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
{ 
#line 99 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
return _vswprintf(_String, _Format, _Ap); 
#line 100 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
} 
#pragma warning( pop )
#line 103 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4793 4141 )
__inline __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int _swprintf_l(__wchar_t *_String, const __wchar_t *_Format, _locale_t _Plocinfo, ...) 
#line 106 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
{ 
#line 107 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
va_list _Arglist; 
#line 108 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
__va_start(&_Arglist, _Plocinfo); 
#line 109 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
int _Ret = __vswprintf_l(_String, _Format, _Plocinfo, _Arglist); 
#line 110 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
_Arglist = ((va_list)0); 
#line 111 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
return _Ret; 
#line 112 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
} 
#pragma warning( pop )
#line 115 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( push )
#pragma warning( disable : 4141 )
__inline __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) int __cdecl _vswprintf_l(__wchar_t *_String, const __wchar_t *_Format, _locale_t _Plocinfo, va_list _Ap) 
#line 118 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
{ 
#line 119 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
return __vswprintf_l(_String, _Format, _Plocinfo, _Ap); 
#line 120 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
} 
#pragma warning( pop )
#line 123 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#pragma warning( pop )
#line 561 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __wchar_t *__cdecl _wtempnam(const __wchar_t *, const __wchar_t *); } 
#line 567 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vscwprintf(const __wchar_t *, va_list); } 
#line 568 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _vscwprintf_l(const __wchar_t *, _locale_t, va_list); } 
#line 569 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fwscanf(FILE *, const __wchar_t *, ...); } 
#line 570 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fwscanf_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 572 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fwscanf_s(FILE *, const __wchar_t *, ...); } 
#line 574 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fwscanf_s_l(FILE *, const __wchar_t *, _locale_t, ...); } 
#line 575 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl swscanf(const __wchar_t *, const __wchar_t *, ...); } 
#line 576 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _swscanf_l(const __wchar_t *, const __wchar_t *, _locale_t, ...); } 
#line 578 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl swscanf_s(const __wchar_t *, const __wchar_t *, ...); } 
#line 580 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _swscanf_s_l(const __wchar_t *, const __wchar_t *, _locale_t, ...); } 
#line 581 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snwscanf(const __wchar_t *, size_t, const __wchar_t *, ...); } 
#line 582 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snwscanf_l(const __wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 583 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snwscanf_s(const __wchar_t *, size_t, const __wchar_t *, ...); } 
#line 584 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _snwscanf_s_l(const __wchar_t *, size_t, const __wchar_t *, _locale_t, ...); } 
#line 585 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl wscanf(const __wchar_t *, ...); } 
#line 586 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _wscanf_l(const __wchar_t *, _locale_t, ...); } 
#line 588 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl wscanf_s(const __wchar_t *, ...); } 
#line 590 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _wscanf_s_l(const __wchar_t *, _locale_t, ...); } 
#pragma warning(pop)
#line 593 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _wfdopen(int, const __wchar_t *); } 
#line 594 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _wfopen(const __wchar_t *, const __wchar_t *); } 
#line 595 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { errno_t __cdecl _wfopen_s(FILE **, const __wchar_t *, const __wchar_t *); } 
#line 596 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _wfreopen(const __wchar_t *, const __wchar_t *, FILE *); } 
#line 597 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { errno_t __cdecl _wfreopen_s(FILE **, const __wchar_t *, const __wchar_t *, FILE *); } 
#line 603 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl _wpopen(const __wchar_t *, const __wchar_t *); } 
#line 604 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _wremove(const __wchar_t *); } 
#line 605 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { errno_t __cdecl _wtmpnam_s(__wchar_t *, size_t); } 
#line 606 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
template < size_t _Size > inline errno_t __cdecl _wtmpnam_s ( wchar_t ( & _Buffer ) [ _Size ] ) { return _wtmpnam_s ( _Buffer, _Size ); }
#line 607 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __wchar_t *__cdecl _wtmpnam(__wchar_t *); } 
#line 609 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl _fgetwc_nolock(FILE *); } 
#line 610 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl _fputwc_nolock(__wchar_t, FILE *); } 
#line 611 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { wint_t __cdecl _ungetwc_nolock(wint_t, FILE *); } 
#line 619 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { inline wint_t __cdecl getwchar() 
#line 620 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
{ return fgetwc(&(__iob_func()[0])); } } 
#line 621 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { inline wint_t __cdecl putwchar(__wchar_t _C) 
#line 622 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
{ return fputwc(_C, &(__iob_func()[1])); } } 
#line 669 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { void __cdecl _lock_file(FILE *); } 
#line 670 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { void __cdecl _unlock_file(FILE *); } 
#line 677 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fclose_nolock(FILE *); } 
#line 678 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fflush_nolock(FILE *); } 
#line 679 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { size_t __cdecl _fread_nolock(void *, size_t, size_t, FILE *); } 
#line 680 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { size_t __cdecl _fread_nolock_s(void *, size_t, size_t, size_t, FILE *); } 
#line 681 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fseek_nolock(FILE *, long, int); } 
#line 682 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { long __cdecl _ftell_nolock(FILE *); } 
#line 683 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _fseeki64_nolock(FILE *, __int64, int); } 
#line 684 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { __int64 __cdecl _ftelli64_nolock(FILE *); } 
#line 685 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { size_t __cdecl _fwrite_nolock(const void *, size_t, size_t, FILE *); } 
#line 686 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl _ungetc_nolock(int, FILE *); } 
#line 713 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { char *__cdecl tempnam(const char *, const char *); } 
#line 719 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fcloseall(); } 
#line 720 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { FILE *__cdecl fdopen(int, const char *); } 
#line 721 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fgetchar(); } 
#line 722 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fileno(FILE *); } 
#line 723 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl flushall(); } 
#line 724 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl fputchar(int); } 
#line 725 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl getw(FILE *); } 
#line 726 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl putw(int, FILE *); } 
#line 727 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
extern "C" { int __cdecl rmtmp(); } 
#line 736 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#pragma pack ( pop )
#line 77 "c:\\cuda\\include\\cuPrintf.cuh"
int cuPrintf(const char *); 
#line 78 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1> int cuPrintf(const char *, T1); 
#line 79 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2> int cuPrintf(const char *, T1, T2); 
#line 80 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2, class T3> int cuPrintf(const char *, T1, T2, T3); 
#line 81 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2, class T3, class T4> int cuPrintf(const char *, T1, T2, T3, T4); 
#line 82 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2, class T3, class T4, class T5> int cuPrintf(const char *, T1, T2, T3, T4, T5); 
#line 83 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2, class T3, class T4, class T5, class T6> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6); 
#line 84 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6, T7); 
#line 85 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6, T7, T8); 
#line 86 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6, T7, T8, T9); 
#line 87 "c:\\cuda\\include\\cuPrintf.cuh"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> int cuPrintf(const char *, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10); 
#line 107 "c:\\cuda\\include\\cuPrintf.cuh"
void cuPrintfRestrict(int, int); 
#line 135 "c:\\cuda\\include\\cuPrintf.cuh"
extern "C" cudaError_t cudaPrintfInit(size_t = (1048576)); 
#line 143 "c:\\cuda\\include\\cuPrintf.cuh"
extern "C" void cudaPrintfEnd(); 
#line 160 "c:\\cuda\\include\\cuPrintf.cuh"
extern "C" cudaError_t cudaPrintfDisplay(void * = 0, bool = false); 
#line 94 "C:\\CUDA\\include\\cuPrintf.cu"
static const int CUPRINTF_MAX_LEN = 256; 
#line 100 "C:\\CUDA\\include\\cuPrintf.cu"
typedef 
#line 97 "C:\\CUDA\\include\\cuPrintf.cu"
struct __declspec(align(8)) { 
#line 98 "C:\\CUDA\\include\\cuPrintf.cu"
int threadid; 
#line 99 "C:\\CUDA\\include\\cuPrintf.cu"
int blockid; 
#line 100 "C:\\CUDA\\include\\cuPrintf.cu"
} cuPrintfRestriction; 
#line 110 "C:\\CUDA\\include\\cuPrintf.cu"
static   char *globalPrintfBuffer=(char *)"globalPrintfBuffer"; 
#line 111 "C:\\CUDA\\include\\cuPrintf.cu"
static   int printfBufferLength; 
#line 112 "C:\\CUDA\\include\\cuPrintf.cu"
static   cuPrintfRestriction restrictRules; 
#line 113 "C:\\CUDA\\include\\cuPrintf.cu"
static   volatile char *printfBufferPtr=(volatile char *)"printfBufferPtr"; 
#line 122 "C:\\CUDA\\include\\cuPrintf.cu"
typedef 
#line 117 "C:\\CUDA\\include\\cuPrintf.cu"
struct __declspec(align(8)) { 
#line 118 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short magic; 
#line 119 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short fmtoffset; 
#line 120 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short blockid; 
#line 121 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short threadid; 
#line 122 "C:\\CUDA\\include\\cuPrintf.cu"
} cuPrintfHeader; 
#line 132 "C:\\CUDA\\include\\cuPrintf.cu"
typedef 
#line 126 "C:\\CUDA\\include\\cuPrintf.cu"
struct __declspec(align(16)) { 
#line 127 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short magic; 
#line 128 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short unused; 
#line 129 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned thread_index; 
#line 130 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned thread_buf_len; 
#line 131 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned offset; 
#line 132 "C:\\CUDA\\include\\cuPrintf.cu"
} cuPrintfHeaderSM10; 
#line 160 "C:\\CUDA\\include\\cuPrintf.cu"
static char *getNextPrintfBufPtr() 
#line 161 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 222 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}























#line 247 "C:\\CUDA\\include\\cuPrintf.cu"
#line 232 "C:\\CUDA\\include\\cuPrintf.cu"
static void writePrintfHeader(char *ptr, char *fmtptr) 
#line 233 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 243 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}























#line 268 "C:\\CUDA\\include\\cuPrintf.cu"
#line 257 "C:\\CUDA\\include\\cuPrintf.cu"
static char *cuPrintfStrncpy(char *dest, const char *src, int n, char *end) 
#line 258 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 290 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}















































#line 339 "C:\\CUDA\\include\\cuPrintf.cu"
#line 308 "C:\\CUDA\\include\\cuPrintf.cu"
static char *copyArg(char *ptr, const char *arg, char *end) 
#line 309 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 319 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}















#line 336 "C:\\CUDA\\include\\cuPrintf.cu"
#line 321 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T> static char *
#line 322 "C:\\CUDA\\include\\cuPrintf.cu"
copyArg(char *ptr, T &arg, char *end) 
#line 323 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 338 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}





















#line 361 "C:\\CUDA\\include\\cuPrintf.cu"
#line 385 "C:\\CUDA\\include\\cuPrintf.cu"
int cuPrintf(const char *fmt) 
#line 386 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 390 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}









#line 401 "C:\\CUDA\\include\\cuPrintf.cu"
#line 391 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1> int cuPrintf(const char *fmt, T1 arg1) 
#line 392 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 398 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}











#line 411 "C:\\CUDA\\include\\cuPrintf.cu"
#line 399 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2> int cuPrintf(const char *fmt, T1 arg1, T2 arg2) 
#line 400 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 407 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}













#line 422 "C:\\CUDA\\include\\cuPrintf.cu"
#line 408 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3) 
#line 409 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 417 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}















#line 434 "C:\\CUDA\\include\\cuPrintf.cu"
#line 418 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4) 
#line 419 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 428 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}

















#line 447 "C:\\CUDA\\include\\cuPrintf.cu"
#line 429 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) 
#line 430 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 440 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}



















#line 461 "C:\\CUDA\\include\\cuPrintf.cu"
#line 441 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) 
#line 442 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 452 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}





















#line 475 "C:\\CUDA\\include\\cuPrintf.cu"
#line 453 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) 
#line 454 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 466 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}























#line 491 "C:\\CUDA\\include\\cuPrintf.cu"
#line 467 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) 
#line 468 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 481 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}

























#line 508 "C:\\CUDA\\include\\cuPrintf.cu"
#line 482 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) 
#line 483 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 497 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}



























#line 526 "C:\\CUDA\\include\\cuPrintf.cu"
#line 498 "C:\\CUDA\\include\\cuPrintf.cu"
template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9, class T10> int cuPrintf(const char *fmt, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10) 
#line 499 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 514 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}





























#line 545 "C:\\CUDA\\include\\cuPrintf.cu"
#line 530 "C:\\CUDA\\include\\cuPrintf.cu"
void cuPrintfRestrict(int threadid, int blockid) 
#line 531 "C:\\CUDA\\include\\cuPrintf.cu"
{int volatile ___ = 1;
#line 539 "C:\\CUDA\\include\\cuPrintf.cu"
exit(___);}

















#line 558 "C:\\CUDA\\include\\cuPrintf.cu"
#line 546 "C:\\CUDA\\include\\cuPrintf.cu"
static FILE *printf_fp; 
#line 548 "C:\\CUDA\\include\\cuPrintf.cu"
static char *printfbuf_start = (0); 
#line 549 "C:\\CUDA\\include\\cuPrintf.cu"
static char *printfbuf_device = (0); 
#line 550 "C:\\CUDA\\include\\cuPrintf.cu"
static int printfbuf_len = 0; 
#line 564 "C:\\CUDA\\include\\cuPrintf.cu"
static int outputPrintfData(char *fmt, char *data) 
#line 565 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 567 "C:\\CUDA\\include\\cuPrintf.cu"
fmt += sizeof(__int64); 
#line 572 "C:\\CUDA\\include\\cuPrintf.cu"
char *p = strchr(fmt, '%'); 
#line 573 "C:\\CUDA\\include\\cuPrintf.cu"
while (p != (0)) 
#line 574 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 576 "C:\\CUDA\\include\\cuPrintf.cu"
(*p) = '\000'; 
#line 577 "C:\\CUDA\\include\\cuPrintf.cu"
fputs(fmt, printf_fp); 
#line 578 "C:\\CUDA\\include\\cuPrintf.cu"
(*p) = '%'; 
#line 581 "C:\\CUDA\\include\\cuPrintf.cu"
char *format = (p++); 
#line 582 "C:\\CUDA\\include\\cuPrintf.cu"
p += strcspn(p, "%cdiouxXeEfgGaAnps"); 
#line 583 "C:\\CUDA\\include\\cuPrintf.cu"
if ((*p) == ('\000')) 
#line 584 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 585 "C:\\CUDA\\include\\cuPrintf.cu"
fmt = format; 
#line 586 "C:\\CUDA\\include\\cuPrintf.cu"
break; 
#line 587 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 591 "C:\\CUDA\\include\\cuPrintf.cu"
int arglen = (*((int *)data)); 
#line 592 "C:\\CUDA\\include\\cuPrintf.cu"
if (arglen > CUPRINTF_MAX_LEN) 
#line 593 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 594 "C:\\CUDA\\include\\cuPrintf.cu"
fputs("Corrupt printf buffer data - aborting\n", printf_fp); 
#line 595 "C:\\CUDA\\include\\cuPrintf.cu"
return 0; 
#line 596 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 598 "C:\\CUDA\\include\\cuPrintf.cu"
data += sizeof(__int64); 
#line 600 "C:\\CUDA\\include\\cuPrintf.cu"
char specifier = (*(p++)); 
#line 601 "C:\\CUDA\\include\\cuPrintf.cu"
char c = (*p); 
#line 602 "C:\\CUDA\\include\\cuPrintf.cu"
(*p) = '\000'; 
#line 603 "C:\\CUDA\\include\\cuPrintf.cu"
switch (specifier) 
#line 604 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 606 "C:\\CUDA\\include\\cuPrintf.cu"
case 'c':  
#line 607 "C:\\CUDA\\include\\cuPrintf.cu"
case 'd':  
#line 608 "C:\\CUDA\\include\\cuPrintf.cu"
case 'i':  
#line 609 "C:\\CUDA\\include\\cuPrintf.cu"
case 'o':  
#line 610 "C:\\CUDA\\include\\cuPrintf.cu"
case 'u':  
#line 611 "C:\\CUDA\\include\\cuPrintf.cu"
case 'x':  
#line 612 "C:\\CUDA\\include\\cuPrintf.cu"
case 'X':  
#line 613 "C:\\CUDA\\include\\cuPrintf.cu"
case 'p':  
#line 614 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, format, *((int *)data)); 
#line 615 "C:\\CUDA\\include\\cuPrintf.cu"
break; 
#line 618 "C:\\CUDA\\include\\cuPrintf.cu"
case 'e':  
#line 619 "C:\\CUDA\\include\\cuPrintf.cu"
case 'E':  
#line 620 "C:\\CUDA\\include\\cuPrintf.cu"
case 'f':  
#line 621 "C:\\CUDA\\include\\cuPrintf.cu"
case 'g':  
#line 622 "C:\\CUDA\\include\\cuPrintf.cu"
case 'G':  
#line 623 "C:\\CUDA\\include\\cuPrintf.cu"
case 'a':  
#line 624 "C:\\CUDA\\include\\cuPrintf.cu"
case 'A':  
#line 625 "C:\\CUDA\\include\\cuPrintf.cu"
if (arglen == 4) { 
#line 626 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, format, *((float *)data)); } else { 
#line 628 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, format, *((double *)data)); }  
#line 629 "C:\\CUDA\\include\\cuPrintf.cu"
break; 
#line 632 "C:\\CUDA\\include\\cuPrintf.cu"
case 's':  
#line 633 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, format, data); 
#line 634 "C:\\CUDA\\include\\cuPrintf.cu"
break; 
#line 637 "C:\\CUDA\\include\\cuPrintf.cu"
case '%':  
#line 638 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, "%%"); 
#line 639 "C:\\CUDA\\include\\cuPrintf.cu"
break; 
#line 642 "C:\\CUDA\\include\\cuPrintf.cu"
default:  
#line 643 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, format); 
#line 644 "C:\\CUDA\\include\\cuPrintf.cu"
break; 
#line 645 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 646 "C:\\CUDA\\include\\cuPrintf.cu"
data += sizeof(__int64); 
#line 647 "C:\\CUDA\\include\\cuPrintf.cu"
(*p) = c; 
#line 648 "C:\\CUDA\\include\\cuPrintf.cu"
fmt = p; 
#line 649 "C:\\CUDA\\include\\cuPrintf.cu"
p = strchr(fmt, '%'); 
#line 650 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 653 "C:\\CUDA\\include\\cuPrintf.cu"
fputs(fmt, printf_fp); 
#line 654 "C:\\CUDA\\include\\cuPrintf.cu"
return 1; 
#line 655 "C:\\CUDA\\include\\cuPrintf.cu"
} 
#line 666 "C:\\CUDA\\include\\cuPrintf.cu"
static int doPrintfDisplay(int headings, int clear, char *bufstart, char *bufend, char *bufptr, char *endptr) 
#line 667 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 670 "C:\\CUDA\\include\\cuPrintf.cu"
int printf_count = 0; 
#line 671 "C:\\CUDA\\include\\cuPrintf.cu"
char printfbuf_local[(CUPRINTF_MAX_LEN + 1)]; 
#line 672 "C:\\CUDA\\include\\cuPrintf.cu"
((printfbuf_local)[CUPRINTF_MAX_LEN]) = '\000'; 
#line 674 "C:\\CUDA\\include\\cuPrintf.cu"
while (bufptr != endptr) 
#line 675 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 677 "C:\\CUDA\\include\\cuPrintf.cu"
if (bufptr == bufend) { 
#line 678 "C:\\CUDA\\include\\cuPrintf.cu"
bufptr = bufstart; }  
#line 681 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemcpy(printfbuf_local, bufptr, CUPRINTF_MAX_LEN, cudaMemcpyDeviceToHost); 
#line 685 "C:\\CUDA\\include\\cuPrintf.cu"
cuPrintfHeader *hdr = ((cuPrintfHeader *)(printfbuf_local)); 
#line 686 "C:\\CUDA\\include\\cuPrintf.cu"
if (((hdr->magic) != ((unsigned short)51217)) || ((hdr->fmtoffset) >= CUPRINTF_MAX_LEN)) 
#line 687 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 689 "C:\\CUDA\\include\\cuPrintf.cu"
break; 
#line 690 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 693 "C:\\CUDA\\include\\cuPrintf.cu"
if (headings) { 
#line 694 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, "[%d, %d]: ", hdr->blockid, hdr->threadid); }  
#line 695 "C:\\CUDA\\include\\cuPrintf.cu"
if ((hdr->fmtoffset) == 0) { 
#line 696 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, "printf buffer overflow\n"); } else { 
#line 697 "C:\\CUDA\\include\\cuPrintf.cu"
if (!(outputPrintfData((printfbuf_local) + (hdr->fmtoffset), (printfbuf_local) + sizeof(cuPrintfHeader)))) { 
#line 698 "C:\\CUDA\\include\\cuPrintf.cu"
break; }  }  
#line 699 "C:\\CUDA\\include\\cuPrintf.cu"
printf_count++; 
#line 702 "C:\\CUDA\\include\\cuPrintf.cu"
if (clear) { 
#line 703 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemset(bufptr, 0, CUPRINTF_MAX_LEN); }  
#line 706 "C:\\CUDA\\include\\cuPrintf.cu"
bufptr += CUPRINTF_MAX_LEN; 
#line 707 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 709 "C:\\CUDA\\include\\cuPrintf.cu"
return printf_count; 
#line 710 "C:\\CUDA\\include\\cuPrintf.cu"
} 
#line 720 "C:\\CUDA\\include\\cuPrintf.cu"
extern "C" cudaError_t cudaPrintfInit(size_t bufferLen) 
#line 721 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 723 "C:\\CUDA\\include\\cuPrintf.cu"
bufferLen = ((bufferLen < (CUPRINTF_MAX_LEN)) ? (CUPRINTF_MAX_LEN) : bufferLen); 
#line 724 "C:\\CUDA\\include\\cuPrintf.cu"
if ((bufferLen % (CUPRINTF_MAX_LEN)) > (0)) { 
#line 725 "C:\\CUDA\\include\\cuPrintf.cu"
bufferLen += ((CUPRINTF_MAX_LEN) - (bufferLen % (CUPRINTF_MAX_LEN))); }  
#line 726 "C:\\CUDA\\include\\cuPrintf.cu"
printfbuf_len = ((int)bufferLen); 
#line 729 "C:\\CUDA\\include\\cuPrintf.cu"
if ((cudaMalloc((void **)(&printfbuf_device), printfbuf_len)) != (cudaSuccess)) { 
#line 730 "C:\\CUDA\\include\\cuPrintf.cu"
return cudaErrorInitializationError; }  
#line 731 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemset(printfbuf_device, 0, printfbuf_len); 
#line 732 "C:\\CUDA\\include\\cuPrintf.cu"
printfbuf_start = printfbuf_device; 
#line 735 "C:\\CUDA\\include\\cuPrintf.cu"
cuPrintfRestriction restrict; 
#line 736 "C:\\CUDA\\include\\cuPrintf.cu"
(restrict.threadid) = ((restrict.blockid) = (-1)); 
#line 737 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemcpyToSymbol(restrictRules, &restrict, sizeof(restrict)); 
#line 740 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemcpyToSymbol(globalPrintfBuffer, &printfbuf_device, sizeof(char *)); 
#line 741 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemcpyToSymbol(printfBufferPtr, &printfbuf_device, sizeof(char *)); 
#line 742 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemcpyToSymbol(printfBufferLength, &printfbuf_len, sizeof(printfbuf_len)); 
#line 744 "C:\\CUDA\\include\\cuPrintf.cu"
return cudaSuccess; 
#line 745 "C:\\CUDA\\include\\cuPrintf.cu"
} 
#line 753 "C:\\CUDA\\include\\cuPrintf.cu"
extern "C" void cudaPrintfEnd() 
#line 754 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 755 "C:\\CUDA\\include\\cuPrintf.cu"
if ((!(printfbuf_start)) || (!(printfbuf_device))) { 
#line 756 "C:\\CUDA\\include\\cuPrintf.cu"
return; }  
#line 758 "C:\\CUDA\\include\\cuPrintf.cu"
cudaFree(printfbuf_device); 
#line 759 "C:\\CUDA\\include\\cuPrintf.cu"
printfbuf_start = (printfbuf_device = (0)); 
#line 760 "C:\\CUDA\\include\\cuPrintf.cu"
} 
#line 779 "C:\\CUDA\\include\\cuPrintf.cu"
extern "C" cudaError_t cudaPrintfDisplay(void *outputFP, bool showThreadID) 
#line 780 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 781 "C:\\CUDA\\include\\cuPrintf.cu"
printf_fp = ((FILE *)((outputFP == (0)) ? (&(__iob_func()[1])) : outputFP)); 
#line 786 "C:\\CUDA\\include\\cuPrintf.cu"
bool sync_printfs = true; 
#line 787 "C:\\CUDA\\include\\cuPrintf.cu"
bool clearOnPrint = false; 
#line 790 "C:\\CUDA\\include\\cuPrintf.cu"
if (((!(printfbuf_start)) || (!(printfbuf_device))) || (!(printf_fp))) { 
#line 791 "C:\\CUDA\\include\\cuPrintf.cu"
return cudaErrorMissingConfiguration; }  
#line 796 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short magic; 
#line 797 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemcpy(&magic, printfbuf_device, sizeof(unsigned short), cudaMemcpyDeviceToHost); 
#line 803 "C:\\CUDA\\include\\cuPrintf.cu"
if (magic == 51216) 
#line 804 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 805 "C:\\CUDA\\include\\cuPrintf.cu"
sync_printfs = true; 
#line 806 "C:\\CUDA\\include\\cuPrintf.cu"
clearOnPrint = false; 
#line 807 "C:\\CUDA\\include\\cuPrintf.cu"
int blocklen = 0; 
#line 808 "C:\\CUDA\\include\\cuPrintf.cu"
char *blockptr = printfbuf_device; 
#line 809 "C:\\CUDA\\include\\cuPrintf.cu"
while (blockptr < (printfbuf_device + printfbuf_len)) { 
#line 810 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 811 "C:\\CUDA\\include\\cuPrintf.cu"
cuPrintfHeaderSM10 hdr; 
#line 812 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemcpy(&hdr, blockptr, sizeof(hdr), cudaMemcpyDeviceToHost); 
#line 815 "C:\\CUDA\\include\\cuPrintf.cu"
if ((hdr.thread_buf_len) != (0)) { 
#line 816 "C:\\CUDA\\include\\cuPrintf.cu"
blocklen = (hdr.thread_buf_len); }  
#line 819 "C:\\CUDA\\include\\cuPrintf.cu"
if ((hdr.magic) != 51216) 
#line 820 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 821 "C:\\CUDA\\include\\cuPrintf.cu"
if (blocklen == 0) 
#line 822 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 823 "C:\\CUDA\\include\\cuPrintf.cu"
fprintf(printf_fp, "No printf headers found at all!\n"); 
#line 824 "C:\\CUDA\\include\\cuPrintf.cu"
break; 
#line 825 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 826 "C:\\CUDA\\include\\cuPrintf.cu"
blockptr += blocklen; 
#line 827 "C:\\CUDA\\include\\cuPrintf.cu"
continue; 
#line 828 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 831 "C:\\CUDA\\include\\cuPrintf.cu"
if ((hdr.offset) > (0)) 
#line 832 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 834 "C:\\CUDA\\include\\cuPrintf.cu"
if (sync_printfs) { 
#line 835 "C:\\CUDA\\include\\cuPrintf.cu"
doPrintfDisplay(showThreadID, clearOnPrint, blockptr + CUPRINTF_MAX_LEN, blockptr + (hdr.thread_buf_len), (blockptr + (hdr.offset)) + CUPRINTF_MAX_LEN, blockptr + (hdr.thread_buf_len)); }  
#line 836 "C:\\CUDA\\include\\cuPrintf.cu"
doPrintfDisplay(showThreadID, clearOnPrint, blockptr + CUPRINTF_MAX_LEN, blockptr + (hdr.thread_buf_len), blockptr + CUPRINTF_MAX_LEN, (blockptr + (hdr.offset)) + CUPRINTF_MAX_LEN); 
#line 837 "C:\\CUDA\\include\\cuPrintf.cu"
}  
#line 840 "C:\\CUDA\\include\\cuPrintf.cu"
blockptr += (hdr.thread_buf_len); 
#line 841 "C:\\CUDA\\include\\cuPrintf.cu"
} }  
#line 842 "C:\\CUDA\\include\\cuPrintf.cu"
} else { 
#line 844 "C:\\CUDA\\include\\cuPrintf.cu"
if (magic == ((unsigned short)51217)) 
#line 845 "C:\\CUDA\\include\\cuPrintf.cu"
{ 
#line 847 "C:\\CUDA\\include\\cuPrintf.cu"
char *printfbuf_end = (0); 
#line 848 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemcpyFromSymbol(&printfbuf_end, printfBufferPtr, sizeof(char *)); 
#line 851 "C:\\CUDA\\include\\cuPrintf.cu"
char *bufptr = (((printfbuf_start - printfbuf_device) % printfbuf_len) + printfbuf_device); 
#line 852 "C:\\CUDA\\include\\cuPrintf.cu"
char *endptr = (((printfbuf_end - printfbuf_device) % printfbuf_len) + printfbuf_device); 
#line 856 "C:\\CUDA\\include\\cuPrintf.cu"
if (sync_printfs) { 
#line 857 "C:\\CUDA\\include\\cuPrintf.cu"
doPrintfDisplay(showThreadID, clearOnPrint, printfbuf_device, printfbuf_device + printfbuf_len, endptr, printfbuf_device + printfbuf_len); }  
#line 858 "C:\\CUDA\\include\\cuPrintf.cu"
doPrintfDisplay(showThreadID, clearOnPrint, printfbuf_device, printfbuf_device + printfbuf_len, bufptr, endptr); 
#line 860 "C:\\CUDA\\include\\cuPrintf.cu"
printfbuf_start = printfbuf_end; 
#line 861 "C:\\CUDA\\include\\cuPrintf.cu"
} else { 
#line 863 "C:\\CUDA\\include\\cuPrintf.cu"
; }  }  
#line 867 "C:\\CUDA\\include\\cuPrintf.cu"
if (sync_printfs) { 
#line 868 "C:\\CUDA\\include\\cuPrintf.cu"
cudaMemset(printfbuf_device, 0, printfbuf_len); }  
#line 870 "C:\\CUDA\\include\\cuPrintf.cu"
return cudaSuccess; 
#line 871 "C:\\CUDA\\include\\cuPrintf.cu"
} 
#line 85 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { unsigned __cdecl _clearfp(); } 
#pragma warning(push)
#pragma warning(disable: 4141)
extern "C" { unsigned __cdecl _controlfp(unsigned, unsigned); } 
#pragma warning(pop)
extern "C" { void __cdecl _set_controlfp(unsigned, unsigned); } 
#line 91 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { errno_t __cdecl _controlfp_s(unsigned *, unsigned, unsigned); } 
#line 92 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { unsigned __cdecl _statusfp(); } 
#line 93 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { void __cdecl _fpreset(); } 
#line 174 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { unsigned __cdecl _control87(unsigned, unsigned); } 
#line 183 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { extern int *__cdecl __fpecode(); } 
#line 220 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { double __cdecl _scalb(double, long); } 
#line 221 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { double __cdecl _logb(double); } 
#line 222 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { double __cdecl _nextafter(double, double); } 
#line 223 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { int __cdecl _finite(double); } 
#line 224 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { int __cdecl _isnan(double); } 
#line 225 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { int __cdecl _fpclass(double); } 
#line 228 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { float __cdecl _scalbf(float, long); } 
#line 251 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\float.h"
extern "C" { void __cdecl fpreset(); } 
#line 7 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
static const int L_SIZE = 16; 
#line 8 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
static const int N_POINTS = (L_SIZE * L_SIZE); 
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void fillU(void *r_data, void *u_data) ;































#line 44 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void calc_H(void *h, void *s, void *u) ;

























#line 79 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void calc_E(void *h, void *s, void *e) ;









































#line 118 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void calc_full_E(void *u, void *s, void *e) ;















































#line 153 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
#line 6 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
float U[N_POINTS][N_POINTS][3][3]; 
#line 8 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
void fillR_CPU(float3 *r_cpu) { 
#line 9 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
int k, j; 
#line 10 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
for (j = 0; j < L_SIZE; j++) { 
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
for (k = 0; k < L_SIZE; k++) { 
#line 12 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
((r_cpu[k + (j * L_SIZE)]).x) = ((float)k); 
#line 13 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
((r_cpu[k + (j * L_SIZE)]).y) = ((float)j); 
#line 14 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
((r_cpu[k + (j * L_SIZE)]).z) = (0.0F); 
#line 15 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
}  
#line 16 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
}  
#line 17 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
} 
#line 19 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
void fill_U2(float3 *r_h) { 
#line 20 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
int m, n, i, j; 
#line 21 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
for (i = 0; i < N_POINTS; i++) { 
#line 22 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
for (j = 0; j < N_POINTS; j++) { { 
#line 24 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
if (i == j) { 
#line 25 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
continue; 
#line 26 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
}  
#line 27 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
float d[3]; 
#line 28 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
float r1 = (0), r2 = (0), r3 = (0); 
#line 30 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
((d)[0]) = (((r_h[i]).x) - ((r_h[j]).x)); 
#line 31 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
r2 += (((d)[0]) * ((d)[0])); 
#line 33 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
((d)[1]) = (((r_h[i]).y) - ((r_h[j]).y)); 
#line 34 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
r2 += (((d)[1]) * ((d)[1])); 
#line 36 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
((d)[2]) = (((r_h[i]).z) - ((r_h[j]).z)); 
#line 37 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
r2 += (((d)[2]) * ((d)[2])); 
#line 40 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
r1 = sqrt(r2); 
#line 41 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
r3 = pow(r1, 3); 
#line 43 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
for (m = 0; m < 3; m++) { 
#line 44 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
for (n = 0; n < 3; n++) { 
#line 45 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
(((((U)[i])[j])[m])[n]) = (((((((3) * ((d)[m])) / r1) * ((d)[n])) / r1) - ((m == n) ? 1 : 0)) / r3); 
#line 46 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
}  
#line 47 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
}  
#line 48 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
} }  
#line 49 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
}  
#line 50 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.h"
} 
#line 16 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
int __cdecl main(int argc, char **argv) { 
#line 19 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
puts("Ola"); 
#line 21 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
if (argc < 2) { 
#line 22 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
puts("neoNbody: Usage: neoNbody NumberOfPoints [-d]"); 
#line 23 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
exit(0); 
#line 24 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
}  
#line 27 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
static int N_POINTS = atoi(argv[1]); 
#line 30 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
if (!(strcmp(argv[2], "-d"))) { 
#line 31 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
cudaError_t status = ((cudaError_t)0); }  
#line 34 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
float *u_CPU; 
#line 35 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
u_CPU = ((float *)malloc((((sizeof(float) * (3)) * (3)) * N_POINTS) * N_POINTS)); 
#line 37 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
float3 *r_CPU; 
#line 38 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
r_CPU = ((float3 *)malloc((sizeof(float3) * N_POINTS) * N_POINTS)); 
#line 40 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
fillR_CPU(r_CPU); 
#line 42 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
for (int i = 0; i < N_POINTS; i++) { 
#line 43 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
printf("%f %f %f\n", (r_CPU[i]).x, (r_CPU[i]).y, (r_CPU[i]).z); }  return 0; 
#line 45 "c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu"
} 
#line 1 "naive.cudafe1.stub.c"
#line 1 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.cudafe1.stub.c"
#line 1 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.fatbin.c"
#line 1 "C:\\CUDA\\include\\__cudaFatFormat.h"


















































































extern "C" {
#line 85 "C:\\CUDA\\include\\__cudaFatFormat.h"












typedef struct {
    char*            gpuProfileName;
    char*            cubin;
} __cudaFatCubinEntry;












typedef struct {
    char*            gpuProfileName;            
    char*            ptx;
} __cudaFatPtxEntry;








typedef struct __cudaFatDebugEntryRec {
    char*                   gpuProfileName;            
    char*                   debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int                   size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char*                 gpuProfileName;            
    char*                 elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int                 size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag  = (1 << 1),
      __cudaFatSassDebugFlag  = (1 << 2)
} __cudaFatCudaBinaryFlag;








typedef struct {
    char* name;
} __cudaFatSymbol;










 
typedef struct __cudaFatCudaBinaryRec {
    unsigned long            magic;
    unsigned long            version;
    unsigned long            gpuInfoVersion;
    char*                   key;
    char*                   ident;
    char*                   usageMode;
    __cudaFatPtxEntry             *ptx;
    __cudaFatCubinEntry           *cubin;
    __cudaFatDebugEntry           *debug;
    void*                  debugInfo;
    unsigned int                   flags;
    __cudaFatSymbol               *exported;
    __cudaFatSymbol               *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int                   characteristic;
    __cudaFatElfEntry             *elf;
} __cudaFatCudaBinary;



















    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;



















void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );












unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );









void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
#line 261 "C:\\CUDA\\include\\__cudaFatFormat.h"

#line 263 "C:\\CUDA\\include\\__cudaFatFormat.h"
#line 2 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.fatbin.c"




extern "C" {
#line 8 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.fatbin.c"

static const unsigned long long __deviceText_$compute_11$[] = {
0x6f69737265762e09,0x090a0d342e31206e,0x207465677261742e,0x6d202c31315f6d73,
0x745f3436665f7061,0x090a0d3233665f6f,0x69706d6f63202f2f,0x687469772064656c,
0x414455435c3a4320,0x2e2f34366e69625c,0x34366e65706f2f2e,0x65622f2f62696c2f,
0x2f090a0d6578652e,0x6e65706f766e202f,0x6220312e33206363,0x206e6f20746c6975,
0x2d36302d30313032,0x2f090a0d0a0d3830,0x2d2d2d2d2d2d2d2f,0x2d2d2d2d2d2d2d2d,
0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,
0x2d2d2d2d2d2d2d2d,0x2f090a0d2d2d2d2d,0x6c69706d6f43202f,0x7669616e20676e69,
0x692e337070632e65,0x706d742f3a632820,0x612e23494263632f,0x0a0d293830383330,
0x2d2d2d2d2d2f2f09,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,
0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x0a0d2d2d2d2d2d2d,
0x2d2d2d2f2f090a0d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,
0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,
0x704f202f2f090a0d,0x0a0d3a736e6f6974,0x2d2d2d2d2d2f2f09,0x2d2d2d2d2d2d2d2d,
0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,
0x2d2d2d2d2d2d2d2d,0x0a0d2d2d2d2d2d2d,0x72615420202f2f09,0x2c7874703a746567,
0x5f6d733a41534920,0x69646e45202c3131,0x6c7474696c3a6e61,0x746e696f50202c65,
0x3a657a6953207265,0x202f2f090a0d3436,0x704f2809334f2d20,0x6974617a696d6974,
0x6c6576656c206e6f,0x20202f2f090a0d29,0x626544280930672d,0x6c6576656c206775,
0x20202f2f090a0d29,0x7065522809326d2d,0x697664612074726f,0x0d29736569726f73,
0x2d2d2d2d2f2f090a,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,
0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x0d2d2d2d2d2d2d2d,
0x6c69662e090a0d0a,0x69616e2209310965,0x66616475632e6576,0x0d227570672e3265,
0x09656c69662e090a,0x55435c3a43220932,0x756c636e695c4144,0x69725075635c6564,
0x0d2275632e66746e,0x09656c69662e090a,0x72505c3a43220933,0x6946206d6172676f,
0x363878282073656c,0x736f7263694d5c29,0x757369562074666f,0x6964757453206c61,
0x43565c302e39206f,0x6564756c636e695c,0x736665647472635c,0x662e090a0d22682e,
0x4322093409656c69,0x695c414455435c3a,0x635c6564756c636e,0x63697665642f7472,
0x6d69746e75725f65,0x2e090a0d22682e65,0x22093509656c6966,0x5c414455435c3a43,
0x5c6564756c636e69,0x6665645f74736f68,0x0d22682e73656e69,0x09656c69662e090a,
0x55435c3a43220936,0x756c636e695c4144,0x746c6975625c6564,0x73657079745f6e69,
0x662e090a0d22682e,0x6322093709656c69,0x695c616475635c3a,0x645c6564756c636e,
0x79745f6563697665,0x0a0d22682e736570,0x3809656c69662e09,0x6475635c3a632209,
0x64756c636e695c61,0x7265766972645c65,0x682e73657079745f,0x6c69662e090a0d22,
0x5c3a632209390965,0x636e695c61647563,0x7275735c6564756c,0x7079745f65636166,
0x090a0d22682e7365,0x303109656c69662e,0x6475635c3a632209,0x64756c636e695c61,
0x7275747865745c65,0x2e73657079745f65,0x69662e090a0d2268,0x632209313109656c,
0x695c616475635c3a,0x765c6564756c636e,0x79745f726f746365,0x0a0d22682e736570,
0x3109656c69662e09,0x75635c3a63220932,0x756c636e695c6164,0x746c6975625c6564,
0x73657079745f6e69,0x662e090a0d22682e,0x2209333109656c69,0x5c616475635c3a63,
0x5c6564756c636e69,0x6665645f74736f68,0x0d22682e73656e69,0x09656c69662e090a,
0x435c3a4322093431,0x6c636e695c414455,0x697665645c656475,0x636e75616c5f6563,
0x656d617261705f68,0x0d22682e73726574,0x09656c69662e090a,0x635c3a6322093531,
0x6c636e695c616475,0x5c7472635c656475,0x5f656761726f7473,0x22682e7373616c63,
0x656c69662e090a0d,0x5c3a432209363109,0x206d6172676f7250,0x78282073656c6946,
0x7263694d5c293638,0x69562074666f736f,0x757453206c617573,0x5c302e39206f6964,
0x756c636e695c4356,0x2e656d69745c6564,0x69662e090a0d2268,0x432209373109656c,
0x6172676f72505c3a,0x2073656c6946206d,0x694d5c2936387828,0x2074666f736f7263,
0x53206c6175736956,0x2e39206f69647574,0x636e695c43565c30,0x74616d5c6564756c,
0x2e090a0d22682e68,0x09383109656c6966,0x726573755c3a6322,0x6f645c6f69745c73,
0x5c73746e656d7563,0x73206c6175736976,0x3032206f69647574,0x656a6f72705c3830,
0x5c6f656e5c737463,0x6e72656b5c6f656e,0x0d2275632e736c65,0x09656c69662e090a,
0x435c3a4322093931,0x6c636e695c414455,0x6d6d6f635c656475,0x74636e75665f6e6f,
0x0d22682e736e6f69,0x09656c69662e090a,0x635c3a6322093032,0x6c636e695c616475,
0x6874616d5c656475,0x6f6974636e75665f,0x090a0d22682e736e,0x313209656c69662e,
0x6475635c3a632209,0x64756c636e695c61,0x635f6874616d5c65,0x73746e6174736e6f,
0x662e090a0d22682e,0x2209323209656c69,0x5c616475635c3a63,0x5c6564756c636e69,
0x665f656369766564,0x736e6f6974636e75,0x662e090a0d22682e,0x2209333209656c69,
0x5c616475635c3a63,0x5c6564756c636e69,0x74615f31315f6d73,0x6e75665f63696d6f,
0x682e736e6f697463,0x6c69662e090a0d22,0x3a63220934320965,0x6e695c616475635c,
0x6d735c6564756c63,0x6d6f74615f32315f,0x74636e75665f6369,0x0d22682e736e6f69,
0x09656c69662e090a,0x635c3a6322093532,0x6c636e695c616475,0x315f6d735c656475,
0x656c62756f645f33,0x6f6974636e75665f,0x090a0d22682e736e,0x363209656c69662e,
0x6475635c3a632209,0x64756c636e695c61,0x5f30325f6d735c65,0x665f63696d6f7461,
0x736e6f6974636e75,0x662e090a0d22682e,0x2209373209656c69,0x5c616475635c3a63,
0x5c6564756c636e69,0x6e695f30325f6d73,0x736369736e697274,0x662e090a0d22682e,
0x2209383209656c69,0x5c616475635c3a63,0x5c6564756c636e69,0x5f65636166727573,
0x6e6f6974636e7566,0x2e090a0d22682e73,0x09393209656c6966,0x616475635c3a6322,
0x6564756c636e695c,0x657275747865745c,0x665f68637465665f,0x736e6f6974636e75,
0x662e090a0d22682e,0x2209303309656c69,0x5c616475635c3a63,0x5c6564756c636e69,
0x6e75665f6874616d,0x645f736e6f697463,0x2e317874705f6c62,0x2e090a0d0a0d2268,
0x2e096e7265747865,0x2e20646572616873,0x2034206e67696c61,0x5b706d742038622e,
0x78652e090a0d3b5d,0x68732e096e726574,0x6c612e2064657261,0x622e2034206e6769,
0x5d5b32706d742038,0x6f6c672e090a0d3b,0x696c612e206c6162,0x38622e2038206e67,
0x6369727473657220,0x385b73656c755274,0x6f632e090a0d3b5d,0x3436752e2074736e,
0x506c61626f6c6720,0x66754266746e6972,0x3b30203d20726566,0x736e6f632e090a0d,
0x70203233732e2074,0x66754266746e6972,0x74676e654c726566,0x0a0d3b30203d2068,
0x6c61626f6c672e09,0x7270203436752e20,0x6666754266746e69,0x203d207274507265,
0x2e090a0d0a0d3b30,0x5a5f207972746e65,0x7650556c6c696635,0x09090a0d28205f53,
0x2e206d617261702e,0x75635f5f20343675,0x5f5f6d7261706164,0x50556c6c6966355a,
0x61645f725f5f5376,0x2e09090a0d2c6174,0x752e206d61726170,0x6475635f5f203436,
0x5a5f5f6d72617061,0x7650556c6c696635,0x7461645f755f5f53,0x0a0d7b090a0d2961,
0x752e206765722e09,0x37323c7225203233,0x65722e090a0d3b3e,0x25203436752e2067,
0x0d3b3e33323c6472,0x2e206765722e090a,0x333c662520323366,0x722e090a0d3b3e39,
0x646572702e206765,0x0d3b3e373c702520,0x6c61636f6c2e090a,0x206e67696c612e20,
0x5f5f2038622e2034,0x635f5f5f61647563,0x61636f6c5f616475,0x32375f7261765f6c,
0x5f725f385f373535,0x32315b3631305f69,0x6f6c2e090a0d3b5d,0x696c612e206c6163,
0x38622e2034206e67,0x5f616475635f5f20,0x6c5f616475635f5f,0x7261765f6c61636f,
0x385f38353532375f,0x3232315f6a5f725f,0x0a0d3b5d32315b38,0x383109636f6c2e09,
0x240a0d3009313109,0x6e6967656257444c,0x6c6c6966355a5f5f,0x0a0d3a5f53765055,
0x383109636f6c2e09,0x090a0d3009323209,0x2e3233732e747663,0x3172250920363175,
0x646961746325202c,0x646c090a0d3b782e,0x752e6d617261702e,0x3164722509203436,
0x6475635f5f5b202c,0x5a5f5f6d72617061,0x7650556c6c696635,0x7461645f725f5f53,
0x7663090a0d3b5d61,0x33732e3436732e74,0x2c32647225092032,0x090a0d3b31722520,
0x656469772e6c756d,0x722509203233732e,0x2c317225202c3364,0x61090a0d3b323120,
0x09203436752e6464,0x7225202c34647225,0x33647225202c3164,0x672e646c090a0d3b,
0x33662e6c61626f6c,0x202c316625092032,0x5d302b346472255b,0x6c2e7473090a0d3b,
0x3233662e6c61636f,0x6475635f5f5b0920,0x616475635f5f5f61,0x765f6c61636f6c5f,
0x37353532375f7261,0x305f695f725f385f,0x25202c5d302b3631,0x646c090a0d3b3166,
0x2e6c61626f6c672e,0x3266250920323366,0x2b346472255b202c,0x7473090a0d3b5d34,
0x662e6c61636f6c2e,0x635f5f5b09203233,0x75635f5f5f616475,0x6c61636f6c5f6164,
0x3532375f7261765f,0x695f725f385f3735,0x2c5d342b3631305f,0x090a0d3b32662520,
0x61626f6c672e646c,0x2509203233662e6c,0x6472255b202c3366,0x090a0d3b5d382b34,
0x6c61636f6c2e7473,0x5f5b09203233662e,0x5f5f5f616475635f,0x636f6c5f61647563,
0x375f7261765f6c61,0x725f385f37353532,0x382b3631305f695f,0x0d3b336625202c5d,
0x3109636f6c2e090a,0x0a0d300933320938,0x3233732e74766309,0x722509203631752e,
0x6961746325202c32,0x63090a0d3b792e64,0x732e3436732e7476,0x3564722509203233,
0x0a0d3b327225202c,0x6469772e6c756d09,0x2509203233732e65,0x327225202c366472,
0x090a0d3b3231202c,0x203436752e646461,0x25202c3764722509,0x647225202c316472,
0x2e646c090a0d3b36,0x662e6c61626f6c67,0x2c34662509203233,0x302b376472255b20,
0x2e7473090a0d3b5d,0x33662e6c61636f6c,0x75635f5f5b092032,0x6475635f5f5f6164,
0x5f6c61636f6c5f61,0x353532375f726176,0x5f6a5f725f385f38,0x2c5d302b38323231,
0x090a0d3b34662520,0x61626f6c672e646c,0x2509203233662e6c,0x6472255b202c3566,
0x090a0d3b5d342b37,0x6c61636f6c2e7473,0x5f5b09203233662e,0x5f5f5f616475635f,
0x636f6c5f61647563,0x375f7261765f6c61,0x725f385f38353532,0x2b383232315f6a5f,
0x3b356625202c5d34,0x6c672e646c090a0d,0x3233662e6c61626f,0x5b202c3666250920,
0x3b5d382b37647225,0x6f6c2e7473090a0d,0x203233662e6c6163,0x616475635f5f5b09,
0x5f616475635f5f5f,0x61765f6c61636f6c,0x5f38353532375f72,0x32315f6a5f725f38,
0x25202c5d382b3832,0x6c2e090a0d3b3666,0x353209383109636f,0x627573090a0d3009,
0x662509203233662e,0x202c316625202c37,0x2e090a0d3b346625,0x3409373109636f6c,
0x6d090a0d30093937,0x09203233662e766f,0x336630202c386625,0x3b30303030303866,
0x2f2f092020202020,0x766f6d090a0d3120,0x722509203233732e,0x240a0d3b32202c33,
0x3730315f305f744c,0x2f2f200a0d3a3435,0x4c203e706f6f6c3c,0x79646f6220706f6f,
0x383420656e696c20,0x636f6c2e090a0d30,0x0930383409373109,0x2e6c756d090a0d30,
0x3966250920323366,0x25202c376625202c,0x6e61090a0d3b3866,0x2509203233622e64,
0x2c337225202c3472,0x656e090a0d3b3120,0x2509203233732e67,0x3b347225202c3572,
0x2e74636c73090a0d,0x203233732e323366,0x25202c3031662509,0x2c396625202c3866,
0x090a0d3b35722520,0x203233662e766f6d,0x6625202c38662509,0x6c2e090a0d3b3031,
0x383409373109636f,0x6873090a0d300932,0x2509203233752e72,0x2c337225202c3372,
0x6f6d090a0d3b3120,0x2509203233752e76,0x0a0d3b30202c3672,0x656e2e7074657309,
0x702509203233752e,0x202c337225202c31,0x40090a0d3b367225,0x2061726220317025,
0x315f305f744c2409,0x090a0d3b38313635,0x20696e752e617262,0x646e6557444c2409,
0x6f505f385a5f5f69,0x456649746e695f77,0x325f695f30535f54,0x240a0d3b355f3930,
0x3635315f305f744c,0x2f2f200a0d3a3831,0x50203e706f6f6c3c,0x6c20666f20747261,
0x79646f6220706f6f,0x383420656e696c20,0x2064616568202c30,0x2064656c6562616c,
0x30315f305f744c24,0x6c2e090a0d343537,0x373409373109636f,0x756d090a0d300939,
0x2509203233662e6c,0x2c376625202c3766,0x090a0d3b37662520,0x20696e752e617262,
0x315f305f744c2409,0x240a0d3b34353730,0x5f69646e6557444c,0x5f776f505f385a5f,
0x5f54456649746e69,0x3930325f695f3053,0x6c2e090a0d3a355f,0x353209383109636f,
0x627573090a0d3009,0x662509203233662e,0x2c326625202c3131,0x090a0d3b35662520,
0x09373109636f6c2e,0x090a0d3009393734,0x203233662e766f6d,0x6630202c38662509,
0x3030303030386633,0x2f0920202020203b,0x6f6d090a0d31202f,0x2509203233732e76,
0x0a0d3b32202c3372,0x32315f305f744c24,0x2f200a0d3a343330,0x203e706f6f6c3c2f,
0x646f6220706f6f4c,0x3420656e696c2079,0x6f6c2e090a0d3038,0x3038340937310963,
0x6c756d090a0d3009,0x662509203233662e,0x31316625202c3231,0x0a0d3b386625202c,
0x3233622e646e6109,0x25202c3772250920,0x0a0d3b31202c3372,0x3233732e67656e09,
0x25202c3872250920,0x6c73090a0d3b3772,0x732e3233662e7463,0x3331662509203233,
0x25202c386625202c,0x387225202c323166,0x2e766f6d090a0d3b,0x3866250920323366,
0x0d3b33316625202c,0x3109636f6c2e090a,0x0d30093238340937,0x33752e726873090a,
0x202c337225092032,0x0d3b31202c337225,0x33752e766f6d090a,0x202c397225092032,
0x746573090a0d3b30,0x3233752e656e2e70,0x25202c3270250920,0x3b397225202c3372,
0x2032702540090a0d,0x744c240920617262,0x30333136315f305f,0x2e617262090a0d3b,
0x444c240920696e75,0x5a5f5f69646e6557,0x6e695f776f505f38,0x30535f5445664974,
0x335f3930325f695f,0x305f744c240a0d3b,0x0d3a30333136315f,0x6f6f6c3c2f2f200a,
0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3038342065,
0x6562616c20646165,0x5f744c242064656c,0x0d34333032315f30,0x3109636f6c2e090a,
0x0d30093937340937,0x33662e6c756d090a,0x2c31316625092032,0x25202c3131662520,
0x62090a0d3b313166,0x0920696e752e6172,0x32315f305f744c24,0x4c240a0d3b343330,
0x5f5f69646e655744,0x695f776f505f385a,0x535f54456649746e,0x5f3930325f695f30,
0x6f6c2e090a0d3a33,0x0935320938310963,0x2e627573090a0d30,0x3166250920323366,
0x202c336625202c34,0x2e090a0d3b366625,0x3409373109636f6c,0x6d090a0d30093937,
0x09203233662e766f,0x336630202c386625,0x3b30303030303866,0x2f2f092020202020,
0x766f6d090a0d3120,0x722509203233732e,0x240a0d3b32202c33,0x3333315f305f744c,
0x2f2f200a0d3a3431,0x4c203e706f6f6c3c,0x79646f6220706f6f,0x383420656e696c20,
0x636f6c2e090a0d30,0x0930383409373109,0x2e6c756d090a0d30,0x3166250920323366,
0x2c34316625202c35,0x090a0d3b38662520,0x203233622e646e61,0x25202c3031722509,
0x0a0d3b31202c3372,0x3233732e67656e09,0x202c313172250920,0x090a0d3b30317225,
0x3233662e74636c73,0x662509203233732e,0x202c386625202c38,0x7225202c35316625,
0x6c2e090a0d3b3131,0x383409373109636f,0x6873090a0d300932,0x2509203233752e72,
0x2c337225202c3372,0x6f6d090a0d3b3120,0x2509203233752e76,0x0d3b30202c323172,
0x6e2e70746573090a,0x2509203233752e65,0x2c337225202c3370,0x0a0d3b3231722520,
0x7262203370254009,0x305f744c24092061,0x0d3b32343636315f,0x6e752e617262090a,
0x6557444c24092069,0x5f385a5f5f69646e,0x49746e695f776f50,0x695f30535f544566,
0x0d3b315f3930325f,0x315f305f744c240a,0x200a0d3a32343636,0x3e706f6f6c3c2f2f,
0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c303834,
0x656c6562616c2064,0x5f305f744c242064,0x090a0d3431333331,0x09373109636f6c2e,
0x090a0d3009393734,0x203233662e6c756d,0x25202c3431662509,0x316625202c343166,
0x617262090a0d3b34,0x4c240920696e752e,0x313333315f305f74,0x57444c240a0d3b34,
0x385a5f5f69646e65,0x746e695f776f505f,0x5f30535f54456649,0x3a315f3930325f69,
0x09636f6c2e090a0d,0x0d30093532093831,0x36752e766f6d090a,0x2c38647225092034,
0x5f616475635f5f20,0x6c5f616475635f5f,0x7261765f6c61636f,0x385f37353532375f,
0x3631305f695f725f,0x2e766f6d090a0d3b,0x6472250920343675,0x6475635f5f202c39,
0x616475635f5f5f61,0x765f6c61636f6c5f,0x38353532375f7261,0x315f6a5f725f385f,
0x2e090a0d3b383232,0x3309383109636f6c,0x7663090a0d300935,0x31752e3233732e74,
0x2c33317225092036,0x3b782e6469742520,0x732e747663090a0d,0x09203233732e3436,
0x25202c3031647225,0x6d090a0d3b333172,0x2e656469772e6c75,0x6472250920323373,
0x33317225202c3131,0x61090a0d3b34202c,0x09203436752e6464,0x25202c3231647225,
0x7225202c31316472,0x646c090a0d3b3864,0x662e6c61636f6c2e,0x3631662509203233,
0x32316472255b202c,0x61090a0d3b5d302b,0x09203436752e6464,0x25202c3331647225,
0x7225202c31316472,0x646c090a0d3b3964,0x662e6c61636f6c2e,0x3731662509203233,
0x33316472255b202c,0x73090a0d3b5d302b,0x09203233662e6275,0x6625202c38316625,
0x37316625202c3631,0x636f6c2e090a0d3b,0x3009363309383109,0x732e747663090a0d,
0x09203631752e3233,0x7425202c34317225,0x090a0d3b792e6469,0x2e3436732e747663,
0x6472250920323373,0x34317225202c3431,0x2e6c756d090a0d3b,0x3233732e65646977,
0x2c35316472250920,0x34202c3431722520,0x2e646461090a0d3b,0x6472250920343675,
0x31647225202c3631,0x3b38647225202c35,0x6f6c2e646c090a0d,0x203233662e6c6163,
0x5b202c3931662509,0x5d302b3631647225,0x2e646461090a0d3b,0x6472250920343675,
0x31647225202c3731,0x3b39647225202c35,0x6f6c2e646c090a0d,0x203233662e6c6163,
0x5b202c3032662509,0x5d302b3731647225,0x2e627573090a0d3b,0x3266250920323366,
0x2c39316625202c31,0x0a0d3b3032662520,0x3233662e64646109,0x202c323266250920,
0x6625202c33316625,0x6461090a0d3b3031,0x2509203233662e64,0x326625202c333266,
0x0d3b386625202c32,0x612e74727173090a,0x33662e786f727070,0x2c34326625092032,
0x0a0d3b3332662520,0x3233662e73626109,0x202c353266250920,0x090a0d3b34326625,
0x203233662e766f6d,0x30202c3632662509,0x3030303030343366,0x2f09202020203b30,
0x303239312e31202f,0x0a0d3730302d6539,0x746c2e7074657309,0x702509203233662e,
0x2c35326625202c34,0x0a0d3b3632662520,0x6220347025214009,0x5f744c2409206172,
0x3b30313437315f30,0x09636f6c2e090a0d,0x0d30093034093831,0x33662e766f6d090a,
0x2c37326625092032,0x3030303030663020,0x202020203b303030,0x090a0d30202f2f09,
0x20696e752e617262,0x315f305f744c2409,0x240a0d3b34353137,0x3437315f305f744c,
0x6f6d090a0d3a3031,0x2509203233662e76,0x346630202c383266,0x3b30303030303430,
0x202f2f0920202020,0x2e6c756d090a0d33,0x3266250920323366,0x2c38316625202c39,
0x0a0d3b3832662520,0x6c75662e76696409,0x2509203233662e6c,0x326625202c303366,
0x3b34326625202c39,0x662e6c756d090a0d,0x3133662509203233,0x202c30336625202c,
0x090a0d3b31326625,0x6c6c75662e766964,0x662509203233662e,0x31336625202c3233,
0x0d3b34326625202c,0x33662e766f6d090a,0x2c33336625092032,0x3030386662663020,
0x202020203b303030,0x0a0d312d202f2f09,0x3233662e64646109,0x202c343366250920,
0x6625202c32336625,0x6573090a0d3b3333,0x33732e71652e7074,0x202c357025092032,
0x7225202c34317225,0x6573090a0d3b3331,0x09203233662e706c,0x6625202c35336625,
0x32336625202c3433,0x0a0d3b357025202c,0x3233662e6c756d09,0x202c363366250920,
0x6625202c34326625,0x756d090a0d3b3432,0x2509203233662e6c,0x326625202c373366,
0x3b36336625202c34,0x662e766964090a0d,0x203233662e6c6c75,0x25202c3732662509,
0x336625202c353366,0x5f744c240a0d3b37,0x3a34353137315f30,0x752e747663090a0d,
0x09203631752e3233,0x6e25202c35317225,0x0a0d3b782e646974,0x3233752e74766309,
0x722509203631752e,0x69746e25202c3631,0x6d090a0d3b792e64,0x33752e6f6c2e6c75,
0x2c37317225092032,0x25202c3631722520,0x6c090a0d3b353172,0x2e6d617261702e64,
0x6472250920343675,0x635f5f5b202c3831,0x5f6d726170616475,0x556c6c6966355a5f,
0x645f755f5f537650,0x090a0d3b5d617461,0x752e6f6c2e6c756d,0x3831722509203233,
0x202c33317225202c,0x090a0d3b35317225,0x203233752e646461,0x25202c3931722509,
0x317225202c343172,0x6c756d090a0d3b38,0x203233732e6f6c2e,0x25202c3032722509,
0x37317225202c3272,0x2e747663090a0d3b,0x203631752e323375,0x25202c3132722509,
0x782e64696174636e,0x2e6c756d090a0d3b,0x09203233752e6f6c,0x7225202c32327225,
0x37317225202c3132,0x2e6c756d090a0d3b,0x09203233752e6f6c,0x7225202c33327225,
0x3b32327225202c31,0x752e646461090a0d,0x3432722509203233,0x202c30327225202c,
0x090a0d3b33327225,0x203233752e646461,0x25202c3532722509,0x327225202c393172,
0x747663090a0d3b34,0x3233752e3436752e,0x2c39316472250920,0x0a0d3b3532722520,
0x6469772e6c756d09,0x2509203233752e65,0x7225202c30326472,0x0a0d3b34202c3532,
0x3436752e64646109,0x2c31326472250920,0x202c383164722520,0x0a0d3b3032647225,
0x626f6c672e747309,0x09203233662e6c61,0x302b31326472255b,0x3b37326625202c5d,
0x09636f6c2e090a0d,0x0d30093734093831,0x0d3b74697865090a,0x646e6557444c240a,
0x6c6c6966355a5f5f,0x0a0d3a5f53765055,0x5a5f202f2f207d09,0x7650556c6c696635,
0x2e090a0d0a0d5f53,0x5a5f207972746e65,0x50485f636c616336,0x0d28205f535f5376,
0x617261702e09090a,0x5f203436752e206d,0x726170616475635f,0x6c6163365a5f5f6d,
0x535f537650485f63,0x09090a0d2c685f5f,0x2e206d617261702e,0x75635f5f20343675,
0x5f5f6d7261706164,0x485f636c6163365a,0x735f5f535f537650,0x61702e09090a0d2c,
0x3436752e206d6172,0x70616475635f5f20,0x63365a5f5f6d7261,0x537650485f636c61,
0x0a0d29755f5f535f,0x65722e090a0d7b09,0x25203233752e2067,0x0a0d3b3e36313c72,
0x752e206765722e09,0x313c647225203436,0x722e090a0d3b3e34,0x203233662e206765,
0x0d3b3e34333c6625,0x2e206765722e090a,0x3c70252064657270,0x6c2e090a0d3b3e34,
0x323509383109636f,0x57444c240a0d3009,0x5a5f5f6e69676562,0x50485f636c616336,
0x0a0d3a5f535f5376,0x383109636f6c2e09,0x090a0d3009323609,0x2e3233732e747663,
0x3172250920363175,0x782e64697425202c,0x2e646461090a0d3b,0x3272250920323373,
0x31202c317225202c,0x2e766f6d090a0d3b,0x3372250920323375,0x0a0d3b353532202c,
0x74672e7074657309,0x702509203233732e,0x202c327225202c31,0x40090a0d3b337225,
0x2061726220317025,0x315f315f744c2409,0x6d090a0d3b323832,0x09203233732e766f,
0x353532202c347225,0x2e627573090a0d3b,0x3572250920323373,0x25202c347225202c,
0x756d090a0d3b3172,0x3233732e6f6c2e6c,0x25202c3672250920,0x3b313737202c3172,
0x6c2e6c756d090a0d,0x2509203233732e6f,0x2c327225202c3772,0x756d090a0d3b3320,
0x732e6f6c2e34326c,0x2c38722509203233,0x3b33202c31722520,0x732e627573090a0d,
0x2c39722509203233,0x7225202c37722520,0x766f6d090a0d3b38,0x722509203233732e,
0x3b383637202c3031,0x732e627573090a0d,0x3131722509203233,0x202c30317225202c,
0x6c090a0d3b387225,0x2e6d617261702e64,0x6472250920343675,0x75635f5f5b202c31,
0x5f5f6d7261706164,0x485f636c6163365a,0x685f5f535f537650,0x747663090a0d3b5d,
0x3233732e3436732e,0x202c326472250920,0x6d090a0d3b317225,0x2e656469772e6c75,
0x6472250920323373,0x202c317225202c33,0x6461090a0d3b3231,0x2509203436752e64,
0x647225202c346472,0x3b33647225202c31,0x61702e646c090a0d,0x203436752e6d6172,
0x5b202c3564722509,0x6170616475635f5f,0x6163365a5f5f6d72,0x5f537650485f636c,
0x0a0d3b5d735f5f53,0x3436732e74766309,0x722509203233732e,0x3b327225202c3664,
0x772e6c756d090a0d,0x203233732e656469,0x25202c3764722509,0x0d3b3231202c3272,
0x36752e646461090a,0x2c38647225092034,0x25202c3564722520,0x61090a0d3b376472,
0x09203233732e6464,0x7225202c32317225,0x0d3b397225202c36,0x33732e646461090a,
0x2c33317225092032,0x7225202c36722520,0x646c090a0d3b3131,0x2e6c61626f6c672e,
0x3166250920323366,0x2b346472255b202c,0x646c090a0d3b5d38,0x752e6d617261702e,
0x3964722509203436,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x50485f636c616336,
0x5d755f5f535f5376,0x2e747663090a0d3b,0x203233732e343673,0x202c303164722509,
0x090a0d3b32317225,0x656469772e6c756d,0x722509203233732e,0x317225202c313164,
0x0a0d3b3231202c32,0x3436752e64646109,0x2c32316472250920,0x25202c3964722520,
0x090a0d3b31316472,0x203233732e766f6d,0x25202c3431722509,0x744c240a0d3b3572,
0x3a343937315f315f,0x6f6c3c2f2f200a0d,0x706f6f4c203e706f,0x696c2079646f6220,
0x6e202c323620656e,0x6420676e69747365,0x2c31203a68747065,0x74616d6974736520,
0x6172657469206465,0x75203a736e6f6974,0x0a0d6e776f6e6b6e,0x383109636f6c2e09,
0x090a0d3009343609,0x61626f6c672e646c,0x2509203233662e6c,0x6472255b202c3266,
0x090a0d3b5d302b34,0x61626f6c672e646c,0x2509203233662e6c,0x6472255b202c3366,
0x090a0d3b5d342b38,0x61626f6c672e646c,0x2509203233662e6c,0x6472255b202c3466,
0x0a0d3b5d342b3231,0x3233662e6c756d09,0x25202c3566250920,0x3b346625202c3366,
0x6c672e646c090a0d,0x3233662e6c61626f,0x5b202c3666250920,0x3b5d302b38647225,
0x6c672e646c090a0d,0x3233662e6c61626f,0x5b202c3766250920,0x5d302b3231647225,
0x2e64616d090a0d3b,0x3866250920323366,0x25202c366625202c,0x3b356625202c3766,
0x6c672e646c090a0d,0x3233662e6c61626f,0x5b202c3966250920,0x3b5d382b38647225,
0x6c672e646c090a0d,0x3233662e6c61626f,0x202c303166250920,0x382b32316472255b,
0x64616d090a0d3b5d,0x662509203233662e,0x2c396625202c3131,0x25202c3031662520,
0x6461090a0d3b3866,0x2509203233662e64,0x326625202c323166,0x0d3b31316625202c,
0x6f6c672e7473090a,0x203233662e6c6162,0x302b346472255b09,0x3b32316625202c5d,
0x09636f6c2e090a0d,0x0d30093636093831,0x6f6c672e646c090a,0x203233662e6c6162,
0x5b202c3331662509,0x3b5d342b34647225,0x6c672e646c090a0d,0x3233662e6c61626f,
0x202c343166250920,0x5d342b386472255b,0x672e646c090a0d3b,0x33662e6c61626f6c,
0x2c35316625092032,0x2b32316472255b20,0x6d090a0d3b5d3631,0x09203233662e6c75,
0x6625202c36316625,0x35316625202c3431,0x672e646c090a0d3b,0x33662e6c61626f6c,
0x2c37316625092032,0x302b386472255b20,0x2e646c090a0d3b5d,0x662e6c61626f6c67,
0x3831662509203233,0x32316472255b202c,0x090a0d3b5d32312b,0x203233662e64616d,
0x25202c3931662509,0x316625202c373166,0x3b36316625202c38,0x6c672e646c090a0d,
0x3233662e6c61626f,0x202c303266250920,0x5d382b386472255b,0x672e646c090a0d3b,
0x33662e6c61626f6c,0x2c31326625092032,0x2b32316472255b20,0x6d090a0d3b5d3032,
0x09203233662e6461,0x6625202c32326625,0x31326625202c3032,0x0d3b39316625202c,
0x33662e646461090a,0x2c33326625092032,0x25202c3331662520,0x73090a0d3b323266,
0x6c61626f6c672e74,0x255b09203233662e,0x202c5d342b346472,0x090a0d3b33326625,
0x09383109636f6c2e,0x6c090a0d30093836,0x6c61626f6c672e64,0x662509203233662e,
0x6472255b202c3432,0x090a0d3b5d342b38,0x61626f6c672e646c,0x2509203233662e6c,
0x72255b202c353266,0x3b5d38322b323164,0x662e6c756d090a0d,0x3632662509203233,
0x202c34326625202c,0x090a0d3b35326625,0x61626f6c672e646c,0x2509203233662e6c,
0x72255b202c373266,0x0a0d3b5d302b3864,0x626f6c672e646c09,0x09203233662e6c61,
0x255b202c38326625,0x5d34322b32316472,0x2e64616d090a0d3b,0x3266250920323366,
0x2c37326625202c39,0x25202c3832662520,0x6c090a0d3b363266,0x6c61626f6c672e64,
0x662509203233662e,0x6472255b202c3033,0x090a0d3b5d382b38,0x61626f6c672e646c,
0x2509203233662e6c,0x72255b202c313366,0x3b5d32332b323164,0x662e64616d090a0d,
0x3233662509203233,0x202c30336625202c,0x6625202c31336625,0x6461090a0d3b3932,
0x2509203233662e64,0x2c316625202c3166,0x0a0d3b3233662520,0x626f6c672e747309,
0x09203233662e6c61,0x5d382b346472255b,0x0a0d3b316625202c,0x383109636f6c2e09,
0x090a0d3009323609,0x203233732e646461,0x25202c3231722509,0x0d3b33202c323172,
0x36752e646461090a,0x3231647225092034,0x2c3231647225202c,0x61090a0d3b363320,
0x09203436752e6464,0x7225202c38647225,0x0d3b3231202c3864,0x6e2e70746573090a,
0x2509203233732e65,0x32317225202c3270,0x0d3b33317225202c,0x622032702540090a,
0x5f744c2409206172,0x0d3b343937315f31,0x315f315f744c240a,0x2e090a0d3a323832,
0x3709383109636f6c,0x7865090a0d300932,0x444c240a0d3b7469,0x365a5f5f646e6557,
0x7650485f636c6163,0x090a0d3a5f535f53,0x365a5f202f2f207d,0x7650485f636c6163,
0x0a0d0a0d5f535f53,0x207972746e652e09,0x5f636c6163365a5f,0x205f535f53765045,
0x61702e09090a0d28,0x3436752e206d6172,0x70616475635f5f20,0x63365a5f5f6d7261,
0x537650455f636c61,0x0a0d2c685f5f535f,0x6d617261702e0909,0x5f5f203436752e20,
0x6d72617061647563,0x636c6163365a5f5f,0x5f535f537650455f,0x2e09090a0d2c735f,
0x752e206d61726170,0x6475635f5f203436,0x5a5f5f6d72617061,0x50455f636c616336,
0x29655f5f535f5376,0x2e090a0d7b090a0d,0x3233752e20676572,0x3b3e34313c722520,
0x206765722e090a0d,0x647225203436752e,0x090a0d3b3e39313c,0x33662e206765722e,
0x3e36313c66252032,0x6765722e090a0d3b,0x2520646572702e20,0x090a0d3b3e363c70,
0x09383109636f6c2e,0x4c240a0d30093537,0x5f6e696765625744,0x5f636c6163365a5f,
0x3a5f535f53765045,0x752e766f6d090a0d,0x3164722509203436,0x0a0d3b706d74202c,
0x383109636f6c2e09,0x090a0d3009363809,0x2e3233752e747663,0x3172250920363175,
0x2e6469746e25202c,0x747663090a0d3b78,0x3631752e3233752e,0x25202c3272250920,
0x3b782e6469617463,0x732e747663090a0d,0x09203631752e3233,0x697425202c337225,
0x63090a0d3b782e64,0x732e3436732e7476,0x3264722509203233,0x0a0d3b337225202c,
0x6469772e6c756d09,0x2509203233732e65,0x337225202c336472,0x61090a0d3b34202c,
0x09203436752e6464,0x7225202c34647225,0x33647225202c3164,0x2e6c756d090a0d3b,
0x09203233752e6f6c,0x317225202c347225,0x0a0d3b327225202c,0x3233752e64646109,
0x25202c3572250920,0x3b347225202c3372,0x732e747663090a0d,0x09203233732e3436,
0x7225202c35647225,0x6c756d090a0d3b35,0x33732e656469772e,0x2c36647225092032,
0x3231202c35722520,0x702e646c090a0d3b,0x3436752e6d617261,0x202c376472250920,
0x70616475635f5f5b,0x63365a5f5f6d7261,0x537650455f636c61,0x0d3b5d685f5f535f,
0x36752e646461090a,0x2c38647225092034,0x25202c3764722520,0x6c090a0d3b366472,
0x2e6d617261702e64,0x6472250920343675,0x75635f5f5b202c39,0x5f5f6d7261706164,
0x455f636c6163365a,0x735f5f535f537650,0x646461090a0d3b5d,0x722509203436752e,
0x647225202c303164,0x3b36647225202c39,0x6c672e646c090a0d,0x3233662e6c61626f,
0x5b202c3166250920,0x3b5d342b38647225,0x6c672e646c090a0d,0x3233662e6c61626f,
0x5b202c3266250920,0x5d342b3031647225,0x2e6c756d090a0d3b,0x3366250920323366,
0x25202c316625202c,0x646c090a0d3b3266,0x2e6c61626f6c672e,0x3466250920323366,
0x2b386472255b202c,0x646c090a0d3b5d30,0x2e6c61626f6c672e,0x3566250920323366,
0x30316472255b202c,0x6d090a0d3b5d302b,0x09203233662e6461,0x346625202c366625,
0x25202c356625202c,0x646c090a0d3b3366,0x2e6c61626f6c672e,0x3766250920323366,
0x2b386472255b202c,0x646c090a0d3b5d38,0x2e6c61626f6c672e,0x3866250920323366,
0x30316472255b202c,0x6d090a0d3b5d382b,0x09203233662e6461,0x376625202c396625,
0x25202c386625202c,0x656e090a0d3b3666,0x2509203233662e67,0x396625202c303166,
0x732e7473090a0d3b,0x33662e6465726168,0x346472255b092032,0x316625202c5d302b,
0x6f6c2e090a0d3b30,0x0938380938310963,0x2e726162090a0d30,0x3b300920636e7973,
0x752e766f6d090a0d,0x2c36722509203233,0x6573090a0d3b3120,0x33752e656c2e7074,
0x202c317025092032,0x367225202c317225,0x31702540090a0d3b,0x4c24092061726220,
0x383138325f325f74,0x2e766f6d090a0d3b,0x3772250920323373,0x4c240a0d3b31202c,
0x303333335f325f74,0x6c3c2f2f200a0d3a,0x6f6f4c203e706f6f,0x6c2079646f622070,
0x0a0d383820656e69,0x2e6f6c2e6c756d09,0x3872250920323373,0x32202c377225202c,
0x2e6d6572090a0d3b,0x3972250920323373,0x25202c337225202c,0x6f6d090a0d3b3872,
0x2509203233752e76,0x0d3b30202c303172,0x6e2e70746573090a,0x2509203233732e65,
0x2c397225202c3270,0x0a0d3b3031722520,0x7262203270254009,0x325f744c24092061,
0x0a0d3b363835335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,
0x656e696c2079646f,0x616568202c383820,0x656c6562616c2064,0x5f325f744c242064,
0x2e090a0d30333333,0x3909383109636f6c,0x646c090a0d300933,0x2e6465726168732e,
0x3166250920323366,0x346472255b202c31,0x61090a0d3b5d302b,0x09203233732e6464,
0x7225202c31317225,0x0d3b337225202c37,0x36732e747663090a,0x2509203233732e34,
0x7225202c31316472,0x756d090a0d3b3131,0x732e656469772e6c,0x3164722509203233,
0x2c31317225202c32,0x6461090a0d3b3420,0x2509203436752e64,0x7225202c33316472,
0x31647225202c3164,0x2e646c090a0d3b32,0x662e646572616873,0x3231662509203233,
0x33316472255b202c,0x61090a0d3b5d302b,0x09203233662e6464,0x6625202c33316625,
0x32316625202c3131,0x732e7473090a0d3b,0x33662e6465726168,0x346472255b092032,
0x316625202c5d302b,0x5f744c240a0d3b33,0x0d3a363835335f32,0x6f6f6c3c2f2f200a,
0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c38382065,
0x6c6562616c206461,0x325f744c24206465,0x090a0d303333335f,0x09383109636f6c2e,
0x62090a0d30093539,0x20636e79732e7261,0x6c2e090a0d3b3009,0x303909383109636f,
0x766f6d090a0d3009,0x722509203233732e,0x0d3b387225202c37,0x6c2e70746573090a,
0x2509203233752e74,0x2c387225202c3370,0x090a0d3b31722520,0x6172622033702540,
0x5f325f744c240920,0x240a0d3b30333333,0x3138325f325f744c,0x766f6d090a0d3a38,
0x722509203233752e,0x0a0d3b30202c3231,0x656e2e7074657309,0x702509203233732e,
0x202c337225202c34,0x090a0d3b32317225,0x6172622034702540,0x5f325f744c240920,
0x090a0d3b34353334,0x09383109636f6c2e,0x6c090a0d30093839,0x6465726168732e64,
0x662509203233662e,0x706d745b202c3431,0x6c090a0d3b5d302b,0x2e6d617261702e64,
0x6472250920343675,0x635f5f5b202c3431,0x5f6d726170616475,0x5f636c6163365a5f,
0x5f5f535f53765045,0x7663090a0d3b5d65,0x33752e3436752e74,0x3531647225092032,
0x0a0d3b327225202c,0x6469772e6c756d09,0x2509203233752e65,0x7225202c36316472,
0x090a0d3b34202c32,0x203436752e646461,0x202c373164722509,0x25202c3431647225,
0x090a0d3b36316472,0x61626f6c672e7473,0x5b09203233662e6c,0x5d302b3731647225,
0x0d3b34316625202c,0x345f325f744c240a,0x2e090a0d3a343533,0x3109383109636f6c,
0x65090a0d30093030,0x4c240a0d3b746978,0x5a5f5f646e655744,0x50455f636c616336,
0x0a0d3a5f535f5376,0x5a5f202f2f207d09,0x50455f636c616336,0x0d0a0d5f535f5376,
0x7972746e652e090a,0x6c616331315a5f20,0x455f6c6c75665f63,0x28205f535f537650,
0x7261702e09090a0d,0x203436752e206d61,0x6170616475635f5f,0x6331315a5f5f6d72,
0x6c6c75665f636c61,0x5f535f537650455f,0x2e09090a0d2c755f,0x752e206d61726170,
0x6475635f5f203436,0x5a5f5f6d72617061,0x665f636c61633131,0x537650455f6c6c75,
0x0a0d2c735f5f535f,0x6d617261702e0909,0x5f5f203436752e20,0x6d72617061647563,
0x6c616331315a5f5f,0x455f6c6c75665f63,0x655f5f535f537650,0x090a0d7b090a0d29,
0x33752e206765722e,0x3e36313c72252032,0x6765722e090a0d3b,0x7225203436752e20,
0x0a0d3b3e30323c64,0x662e206765722e09,0x39343c6625203233,0x65722e090a0d3b3e,
0x20646572702e2067,0x0a0d3b3e383c7025,0x383109636f6c2e09,0x0a0d300934303109,
0x6967656257444c24,0x616331315a5f5f6e,0x5f6c6c75665f636c,0x3a5f535f53765045,
0x752e766f6d090a0d,0x3164722509203436,0x0d3b32706d74202c,0x3109636f6c2e090a,
0x0d30093431310938,0x33732e747663090a,0x2509203631752e32,0x64697425202c3172,
0x7663090a0d3b782e,0x33732e3436732e74,0x2c32647225092032,0x090a0d3b31722520,
0x656469772e6c756d,0x722509203233732e,0x2c317225202c3364,0x6461090a0d3b3420,
0x2509203436752e64,0x647225202c346472,0x3b33647225202c31,0x662e766f6d090a0d,
0x2c31662509203233,0x3030303030663020,0x202020203b303030,0x0a0d30202f2f0920,
0x3233662e766f6d09,0x30202c3266250920,0x3030303030303066,0x0920202020203b30,
0x73090a0d30202f2f,0x6465726168732e74,0x255b09203233662e,0x202c5d302b346472,
0x6d090a0d3b326625,0x09203233732e766f,0x0d3b30202c327225,0x33732e766f6d090a,
0x202c337225092032,0x5f744c240a0d3b30,0x0d3a363638345f33,0x6f6f6c3c2f2f200a,
0x20706f6f4c203e70,0x6e696c2079646f62,0x6e202c3431312065,0x6420676e69747365,
0x2c31203a68747065,0x6974617265746920,0x363532203a736e6f,0x09636f6c2e090a0d,
0x3009383131093831,0x2e70746573090a0d,0x09203233732e7165,0x327225202c317025,
0x0a0d3b317225202c,0x7262203170254009,0x335f744c24092061,0x200a0d3b3835325f,
0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,
0x616568202c343131,0x656c6562616c2064,0x5f335f744c242064,0x2e090a0d36363834,
0x3109383109636f6c,0x6c090a0d30093931,0x2e6d617261702e64,0x6472250920343675,
0x75635f5f5b202c35,0x5f5f6d7261706164,0x5f636c616331315a,0x7650455f6c6c7566,
0x3b5d735f5f535f53,0x6c2e6c756d090a0d,0x2509203436752e6f,0x647225202c366472,
0x0a0d3b3231202c32,0x3436752e64646109,0x202c376472250920,0x7225202c35647225,
0x7663090a0d3b3664,0x33732e3436732e74,0x2c38647225092032,0x090a0d3b33722520,
0x656469772e6c756d,0x722509203233732e,0x2c337225202c3964,0x61090a0d3b323120,
0x09203436752e6464,0x25202c3031647225,0x647225202c356472,0x2e646c090a0d3b39,
0x662e6c61626f6c67,0x2c33662509203233,0x302b376472255b20,0x2e646c090a0d3b5d,
0x662e6c61626f6c67,0x2c34662509203233,0x342b376472255b20,0x2e646c090a0d3b5d,
0x662e6c61626f6c67,0x2c35662509203233,0x382b376472255b20,0x2e646c090a0d3b5d,
0x662e6c61626f6c67,0x2c36662509203233,0x2b30316472255b20,0x646c090a0d3b5d34,
0x2e6c61626f6c672e,0x3766250920323366,0x30316472255b202c,0x6c090a0d3b5d302b,
0x6c61626f6c672e64,0x662509203233662e,0x316472255b202c38,0x090a0d3b5d382b30,
0x6d617261702e646c,0x722509203436752e,0x5f5f5b202c313164,0x6d72617061647563,
0x6c616331315a5f5f,0x455f6c6c75665f63,0x755f5f535f537650,0x6c756d090a0d3b5d,
0x203233732e6f6c2e,0x7225202c34722509,0x0d3b383637202c31,0x33732e646461090a,
0x202c357225092032,0x347225202c327225,0x2e747663090a0d3b,0x203233732e343673,
0x202c323164722509,0x6d090a0d3b357225,0x2e656469772e6c75,0x6472250920323373,
0x2c357225202c3331,0x61090a0d3b323120,0x09203436752e6464,0x25202c3431647225,
0x7225202c31316472,0x6c090a0d3b333164,0x6c61626f6c672e64,0x662509203233662e,
0x316472255b202c39,0x090a0d3b5d342b34,0x203233662e6c756d,0x25202c3031662509,
0x3b366625202c3966,0x662e6c756d090a0d,0x3131662509203233,0x25202c336625202c,
0x6c090a0d3b303166,0x6c61626f6c672e64,0x662509203233662e,0x6472255b202c3231,
0x0a0d3b5d302b3431,0x3233662e6c756d09,0x202c333166250920,0x6625202c32316625,
0x6c756d090a0d3b37,0x662509203233662e,0x2c336625202c3431,0x0a0d3b3331662520,
0x3233662e62757309,0x202c353166250920,0x6625202c34316625,0x646c090a0d3b3131,
0x2e6c61626f6c672e,0x3166250920323366,0x316472255b202c36,0x090a0d3b5d382b34,
0x203233662e6c756d,0x25202c3731662509,0x386625202c363166,0x2e6c756d090a0d3b,
0x3166250920323366,0x202c336625202c38,0x090a0d3b37316625,0x203233662e627573,
0x25202c3931662509,0x316625202c353166,0x2e646c090a0d3b38,0x662e6c61626f6c67,
0x3032662509203233,0x34316472255b202c,0x090a0d3b5d32312b,0x203233662e6c756d,
0x25202c3132662509,0x376625202c303266,0x2e6c756d090a0d3b,0x3266250920323366,
0x202c346625202c32,0x090a0d3b31326625,0x203233662e627573,0x25202c3332662509,
0x326625202c393166,0x2e646c090a0d3b32,0x662e6c61626f6c67,0x3432662509203233,
0x34316472255b202c,0x090a0d3b5d36312b,0x203233662e6c756d,0x25202c3532662509,
0x366625202c343266,0x2e6c756d090a0d3b,0x3266250920323366,0x202c346625202c36,
0x090a0d3b35326625,0x203233662e627573,0x25202c3732662509,0x326625202c333266,
0x2e646c090a0d3b36,0x662e6c61626f6c67,0x3832662509203233,0x34316472255b202c,
0x090a0d3b5d30322b,0x203233662e6c756d,0x25202c3932662509,0x386625202c383266,
0x2e6c756d090a0d3b,0x3366250920323366,0x202c346625202c30,0x090a0d3b39326625,
0x203233662e627573,0x25202c3133662509,0x336625202c373266,0x2e646c090a0d3b30,
0x662e6c61626f6c67,0x3233662509203233,0x34316472255b202c,0x090a0d3b5d34322b,
0x203233662e6c756d,0x25202c3333662509,0x376625202c323366,0x2e6c756d090a0d3b,
0x3366250920323366,0x202c356625202c34,0x090a0d3b33336625,0x203233662e627573,
0x25202c3533662509,0x336625202c313366,0x2e646c090a0d3b34,0x662e6c61626f6c67,
0x3633662509203233,0x34316472255b202c,0x090a0d3b5d38322b,0x203233662e6c756d,
0x25202c3733662509,0x366625202c363366,0x2e6c756d090a0d3b,0x3366250920323366,
0x202c356625202c38,0x090a0d3b37336625,0x203233662e627573,0x25202c3933662509,
0x336625202c353366,0x2e646c090a0d3b38,0x662e6c61626f6c67,0x3034662509203233,
0x34316472255b202c,0x090a0d3b5d32332b,0x203233662e6c756d,0x25202c3134662509,
0x386625202c303466,0x2e6c756d090a0d3b,0x3466250920323366,0x202c356625202c32,
0x090a0d3b31346625,0x203233662e627573,0x25202c3334662509,0x346625202c393366,
0x627573090a0d3b32,0x662509203233662e,0x202c316625202c31,0x090a0d3b33346625,
0x65726168732e7473,0x5b09203233662e64,0x2c5d302b34647225,0x240a0d3b31662520,
0x3835325f335f744c,0x6c3c2f2f200a0d3a,0x726150203e706f6f,0x6f6f6c20666f2074,
0x6c2079646f622070,0x2c34313120656e69,0x616c206461656820,0x4c242064656c6562,
0x363638345f335f74,0x09636f6c2e090a0d,0x3009363131093831,0x732e646461090a0d,
0x2c33722509203233,0x3b31202c33722520,0x732e646461090a0d,0x2c32722509203233,
0x3b33202c32722520,0x752e766f6d090a0d,0x2c36722509203233,0x090a0d3b37363720,
0x2e656c2e70746573,0x3270250920323373,0x25202c327225202c,0x2540090a0d3b3672,
0x0920617262203270,0x38345f335f744c24,0x6c2e090a0d3b3636,0x333109383109636f,
0x6162090a0d300934,0x0920636e79732e72,0x747663090a0d3b30,0x3631752e3233752e,
0x25202c3772250920,0x0d3b782e6469746e,0x33752e766f6d090a,0x202c387225092032,
0x746573090a0d3b31,0x3233752e656c2e70,0x25202c3370250920,0x3b387225202c3772,
0x2033702540090a0d,0x744c240920617262,0x3b383733355f335f,0x732e766f6d090a0d,
0x2c39722509203233,0x744c240a0d3b3120,0x3a303938355f335f,0x6f6c3c2f2f200a0d,
0x706f6f4c203e706f,0x696c2079646f6220,0x0a0d34333120656e,0x2e6f6c2e6c756d09,
0x3172250920323373,0x202c397225202c30,0x6d6572090a0d3b32,0x722509203233732e,
0x2c317225202c3131,0x0a0d3b3031722520,0x3233752e766f6d09,0x202c323172250920,
0x746573090a0d3b30,0x3233732e656e2e70,0x25202c3470250920,0x317225202c313172,
0x702540090a0d3b32,0x2409206172622034,0x3431365f335f744c,0x3c2f2f200a0d3b36,
0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x34333120656e696c,
0x6c2064616568202c,0x242064656c656261,0x3938355f335f744c,0x636f6c2e090a0d30,
0x0937333109383109,0x732e646c090a0d30,0x33662e6465726168,0x2c34346625092032,
0x302b346472255b20,0x646461090a0d3b5d,0x722509203233732e,0x2c397225202c3331,
0x090a0d3b31722520,0x2e3436732e747663,0x6472250920323373,0x33317225202c3531,
0x2e6c756d090a0d3b,0x3233732e65646977,0x2c36316472250920,0x34202c3331722520,
0x2e646461090a0d3b,0x6472250920343675,0x31647225202c3731,0x3b3631647225202c,
0x68732e646c090a0d,0x3233662e64657261,0x202c353466250920,0x302b37316472255b,
0x646461090a0d3b5d,0x662509203233662e,0x34346625202c3634,0x0d3b35346625202c,
0x6168732e7473090a,0x203233662e646572,0x302b346472255b09,0x3b36346625202c5d,
0x5f335f744c240a0d,0x200a0d3a36343136,0x3e706f6f6c3c2f2f,0x666f207472615020,
0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c343331,0x656c6562616c2064,
0x5f335f744c242064,0x2e090a0d30393835,0x3109383109636f6c,0x62090a0d30093134,
0x20636e79732e7261,0x6c2e090a0d3b3009,0x333109383109636f,0x6f6d090a0d300935,
0x2509203233732e76,0x30317225202c3972,0x70746573090a0d3b,0x203233752e746c2e,
0x7225202c35702509,0x3b377225202c3031,0x2035702540090a0d,0x744c240920617262,
0x3b303938355f335f,0x5f335f744c240a0d,0x090a0d3a38373335,0x203233752e766f6d,
0x30202c3431722509,0x70746573090a0d3b,0x203233732e656e2e,0x7225202c36702509,
0x3b34317225202c31,0x2036702540090a0d,0x744c240920617262,0x3b343139365f335f,
0x09636f6c2e090a0d,0x3009343431093831,0x68732e646c090a0d,0x3233662e64657261,
0x202c373466250920,0x5d302b32706d745b,0x702e646c090a0d3b,0x3436752e6d617261,
0x2c38316472250920,0x616475635f5f5b20,0x315a5f5f6d726170,0x75665f636c616331,
0x5f537650455f6c6c,0x0a0d3b5d655f5f53,0x626f6c672e747309,0x09203233662e6c61,
0x342b38316472255b,0x3b37346625202c5d,0x5f335f744c240a0d,0x090a0d3a34313936,
0x09383109636f6c2e,0x090a0d3009373431,0x240a0d3b74697865,0x5f5f646e6557444c,
0x5f636c616331315a,0x7650455f6c6c7566,0x090a0d3a5f535f53,0x315a5f202f2f207d,
0x75665f636c616331,0x5f537650455f6c6c,0x00000a0d0a0d5f53
};


}
#line 535 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.fatbin.c"


extern "C" {
#line 539 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.fatbin.c"

static const unsigned long long __deviceText_$sm_11$[] = {
0x33010102464c457f,0x0000000000000002,0x0000000100be0002,0x0000000000000000,
0x0000000000001ab4,0x0000000000000040,0x00380040000b000b,0x0001001a0040000b,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000,
0x0000000300000001,0x0000000000000000,0x0000000000000000,0x00000000000006c0,
0x0000000000000229,0x0000000000000000,0x0000000000000004,0x0000000000000000,
0x000000030000000b,0x0000000000000000,0x0000000000000000,0x00000000000008e9,
0x0000000000000088,0x0000000000000000,0x0000000000000001,0x0000000000000000,
0x0000000200000013,0x0000000000000000,0x0000000000000000,0x0000000000000971,
0x0000000000000330,0x0000001a00000002,0x0000000000000001,0x0000000000000018,
0x00000001000000cf,0x0000000000000006,0x0000000000000000,0x0000000000000ca1,
0x00000000000003c8,0x0c00000c00000003,0x0000000000000004,0x0000000000000000,
0x0000000100000111,0x0000000000000002,0x0000000000000000,0x0000000000001069,
0x0000000000000018,0x0000000400000000,0x0000000000000004,0x0000000000000000,
0x000000010000012c,0x0000000000000002,0x0000000000000000,0x0000000000001081,
0x000000000000000c,0x0000000400000000,0x0000000000000001,0x0000000000000000,
0x00000008000000e2,0x0000000000000003,0x0000000000000000,0x000000000000108d,
0x0000000000000020,0x0000000400000000,0x0000000000000004,0x0000000000000000,
0x00000008000000fa,0x0000000000000003,0x0000000000000000,0x000000000000108d,
0x0000000000000018,0x0000000400000000,0x0000000000000004,0x0000000000000000,
0x00000001000000a0,0x0000000000000006,0x0000000000000000,0x000000000000108d,
0x0000000000000280,0x0f00000a00000003,0x0000000000000004,0x0000000000000000,
0x000000010000015d,0x0000000000000002,0x0000000000000000,0x000000000000130d,
0x0000000000000008,0x0000000900000000,0x0000000000000004,0x0000000000000000,
0x00000001000000b6,0x0000000000000002,0x0000000000000000,0x0000000000001315,
0x000000000000001c,0x0000000900000000,0x0000000000000001,0x0000000000000000,
0x0000000800000142,0x0000000000000003,0x0000000000000000,0x0000000000001331,
0x0000000000000030,0x0000000900000000,0x0000000000000004,0x0000000000000000,
0x0000000100000071,0x0000000000100006,0x0000000000000000,0x0000000000001331,
0x00000000000002b8,0x0c00000800000003,0x0000000000000004,0x0000000000000000,
0x0000000100000196,0x0000000000000002,0x0000000000000000,0x00000000000015e9,
0x0000000000000004,0x0000000d00000000,0x0000000000000004,0x0000000000000000,
0x0000000100000087,0x0000000000000002,0x0000000000000000,0x00000000000015ed,
0x000000000000001c,0x0000000d00000000,0x0000000000000001,0x0000000000000000,
0x000000080000017b,0x0000000000000003,0x0000000000000000,0x0000000000001609,
0x0000000000000030,0x0000000d00000000,0x0000000000000004,0x0000000000000000,
0x0000000100000036,0x0000000000100006,0x0000000000000000,0x0000000000001609,
0x0000000000000448,0x0e00000600000003,0x0000000000000004,0x0000000000000000,
0x00000001000001d5,0x0000000000000002,0x0000000000000000,0x0000000000001a51,
0x0000000000000008,0x0000001100000000,0x0000000000000004,0x0000000000000000,
0x0000000100000052,0x0000000000000002,0x0000000000000000,0x0000000000001a59,
0x000000000000001c,0x0000001100000000,0x0000000000000001,0x0000000000000000,
0x00000008000001b4,0x0000000000000003,0x0000000000000000,0x0000000000001a75,
0x0000000000000030,0x0000001100000000,0x0000000000000004,0x0000000000000000,
0x000000010000021b,0x0000000000000002,0x0000000000000000,0x0000000000001a75,
0x000000000000000c,0x0000000000000000,0x0000000000000004,0x0000000000000000,
0x00000001000001f9,0x0000000000000002,0x0000000000000000,0x0000000000001a81,
0x0000000000000008,0x0000000000000000,0x0000000000000008,0x0000000000000000,
0x0000000900000208,0x0000000000000000,0x0000000000000000,0x0000000000001a89,
0x0000000000000020,0x0000001600000003,0x0000000000000004,0x0000000000000010,
0x000000010000001b,0x0000000000000003,0x0000000000000000,0x0000000000001aa9,
0x0000000000000008,0x0000000000000000,0x0000000000000004,0x0000000000000000,
0x000000080000002b,0x0000000000000003,0x0000000000000000,0x0000000000001ab1,
0x0000000000000008,0x0000000000000000,0x0000000000000004,0x0000000000000000,
0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261,
0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x31315a5f2e747865,
0x6c75665f636c6163,0x535f537650455f6c,0x6e692e766e2e005f,0x6331315a5f2e6f66,
0x6c6c75665f636c61,0x5f535f537650455f,0x5f2e747865742e00,0x455f636c6163365a,
0x2e005f535f537650,0x2e6f666e692e766e,0x5f636c6163365a5f,0x005f535f53765045,
0x5a5f2e747865742e,0x50485f636c616336,0x6e2e005f535f5376,0x5f2e6f666e692e76,
0x485f636c6163365a,0x2e005f535f537650,0x355a5f2e74786574,0x537650556c6c6966,
0x68732e766e2e005f,0x355a5f2e64657261,0x537650556c6c6966,0x6f6c2e766e2e005f,
0x66355a5f2e6c6163,0x5f537650556c6c69,0x6e6f632e766e2e00,0x5f2e31746e617473,
0x50556c6c6966355a,0x2e766e2e005f5376,0x355a5f2e6f666e69,0x537650556c6c6966,
0x68732e766e2e005f,0x365a5f2e64657261,0x7650485f636c6163,0x766e2e005f535f53,
0x6e6174736e6f632e,0x6163365a5f2e3174,0x5f537650485f636c,0x732e766e2e005f53,
0x5a5f2e6465726168,0x50455f636c616336,0x6e2e005f535f5376,0x6174736e6f632e76,
0x63365a5f2e31746e,0x537650455f636c61,0x2e766e2e005f535f,0x5f2e646572616873,
0x5f636c616331315a,0x7650455f6c6c7566,0x766e2e005f535f53,0x6e6174736e6f632e,
0x6331315a5f2e3174,0x6c6c75665f636c61,0x5f535f537650455f,0x6e6f632e766e2e00,
0x003431746e617473,0x2e766e2e6c65722e,0x746e6174736e6f63,0x632e766e2e003431,
0x30746e6174736e6f,0x616331315a5f0000,0x5f6c6c75665f636c,0x005f535f53765045,
0x5f636c6163365a5f,0x005f535f53765045,0x5f636c6163365a5f,0x005f535f53765048,
0x556c6c6966355a5f,0x736572005f537650,0x6c75527463697274,0x746e697270007365,
0x5072656666754266,0x746e697270007274,0x4c72656666754266,0x6c67006874676e65,
0x6e6972506c61626f,0x7265666675426674,0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0100030000000000,0x0000000000000000,0x0000000000000000,
0x0200030000000000,0x0000000000000000,0x0000000000000000,0x0300030000000000,
0x0000000000000000,0x0000000000000000,0x1800030000000000,0x0000000000000000,
0x0000000000000000,0x1900030000000000,0x0000000000000000,0x0000000000000000,
0x1100030000000000,0x0000000000000000,0x0000000000044800,0x1300030000000000,
0x0000000000000000,0x0000000000000000,0x0d00030000000000,0x0000000000000000,
0x000000000002b800,0x0f00030000000000,0x0000000000000000,0x0000000000000000,
0x0900030000000000,0x0000000000000000,0x0000000000028000,0x0b00030000000000,
0x0000000000000000,0x0000000000000000,0x0400030000000000,0x0000000000000000,
0x000000000003c800,0x0700030000000000,0x0000000000000000,0x0000000000000000,
0x0800030000000000,0x0000000000000000,0x0000000000000000,0x0500030000000000,
0x0000000000000000,0x0000000000000000,0x0600030000000000,0x0000000000000000,
0x0000000000000000,0x0c00030000000000,0x0000000000000000,0x0000000000000000,
0x0a00030000000000,0x0000000000000000,0x0000000000000000,0x1000030000000000,
0x0000000000000000,0x0000000000000000,0x0e00030000000000,0x0000000000000000,
0x0000000000000000,0x1400030000000000,0x0000000000000000,0x0000000000000000,
0x1200030000000000,0x0000000000000000,0x0000000000000000,0x1600030000000000,
0x0000000000000000,0x0000000000000000,0x1700030000000000,0x0000000000000000,
0x0000000000000000,0x1500030000000000,0x0000000000000000,0x0000000000000000,
0x1110120000000100,0x0000000000000000,0x0000000000000000,0x0d10120000001700,
0x0000000000000000,0x0000000000000000,0x0910120000002700,0x0000000000000000,
0x0000000000000000,0x0410120000003700,0x0000000000000000,0x0000000000000000,
0x1900110000004400,0x0000000000000000,0x0000000000000800,0x1800110000005200,
0x0000000000000000,0x0000000000000800,0x1500110000006200,0x0000000000000800,
0x0000000000000400,0x1500110000007500,0x0000000000000000,0x0000000000000800,
0x200780a0004c0d00,0x1007803003060904,0x10078030020605c4,0x200780a0004e11c4,
0x0047802000040504,0x1007803003081904,0x10078030020809c4,0x2047802000c815c4,
0xc00780d00e0a0504,0x00878020000c2180,0x00000320048a0904,0xc00780d00e041900,
0x00000320088a0980,0xc00780d00e041d00,0xc00780d000000580,0x2207802000c82560,
0xc00780d00e120904,0xc00780d000081980,0x0000032004921560,0xc00780d00e0a2100,
0x0000032008921580,0xc00780d00e0a2500,0xc00780d000101d80,0xc00780d000180960,
0xc00780d000202160,0x008780b000022960,0xf800031000800908,0x0000031002801503,
0xc00780d000282500,0x400780d0800a0560,0x0147c8a00003fd04,0x000780c00a042d2c,
0x03ce001000042d00,0x1007c030010a1504,0x00960810009604e4,0x0002801002800310,
0x020780b0000c2100,0xf800031000801508,0x0000031002802903,0x0007801002a00300,
0x000780c00a142900,0x0007801001d00300,0x400780d080140900,0x0147c8a00005fd04,
0x000780c0080a192c,0x03ce0010000a1900,0x1007c03001142904,0x008c1410008c08e4,
0x0002801003500310,0x024780b0000e2100,0xf800031000801908,0x0000031002801d03,
0x0007801003700300,0x000780c008102100,0x0007801002a00300,0x400780d0800e1500,
0x0147c8a0000bfd04,0x000780c0080c152c,0x03ce0010000c1500,0x1007c030010e1d04,
0x03c78010000a19e4,0x0005001004000304,0x000780c008102100,0x0007801003700300,
0x400780d082023900,0x000780a000001500,0x004780b000040104,0x000780a0001c0900,
0x00078000020a0504,0xc00780d400001dc0,0xc00780d400180540,0x018780b000000140,
0x0007800002040900,0xc00780d8000021c0,0xc00780d800181940,0x0007809000000140,
0x0007809000000140,0x5047c8b08201fd00,0x46101cb0410e0460,0x00010010052003b0,
0x03c7801000f81d00,0x0007801006500304,0x5107c8b08301fd00,0x040003c000021960,
0x03c7801000000504,0x400680c0850c1904,0x400680c085020500,0x010c049000020400,
0x5107c8b08301fdc0,0x008004c007021c60,0x400680c0850e1d10,0x400680c085020500,
0x0000189000020400,0x000780c0010e05c0,0x0087c8300505fd00,0x000780c00600016c,
0x410280b100020500,0x5107c8b08301fd00,0x400680c085020560,0x400680c085000100,
0x00021c9000000000,0x200780a0004219c0,0x200780400c440104,0x2007804001480500,
0x1007803010020500,0x20478060004805c4,0x01102040030c2400,0x000780400c162940,
0x02478060020e2500,0x0207806000122100,0x1007803010142900,0x10078030101225c4,
0x10078030101021c4,0x028780600c1415c4,0x02478060020c0500,0x0207806000100100,
0x00820020028a0800,0x0007802000040120,0x1007803002000104,0x2007802000cc01c4,
0xc00781d00e001d04,0x0003ff00000001a0,0x8000003400000000,0x800000bf8000007e,
0x00000000080b043e,0x00000d0000000800,0x01860504000780a0,0x8003fd0000000320,
0x0000036c4107c830,0x0380090000028030,0x050c010000003310,0x040e110000078040,
0x0102010000078060,0x100811c410078030,0x000001c410078030,0x040c110400478020,
0x0306090001078060,0x020615c410078030,0x810601c410078030,0x0584248840078060,
0x03021d2000880820,0x020221c410078030,0x008001c410078030,0x0304150000003310,
0x020419c410078030,0x00c805c410078030,0x8106010422478020,0x088e1c8840078060,
0x08820d20068a1420,0x0e060d0000000320,0x00880080c00780d0,0x00d0152107ec1020,
0x048a190421478020,0x0e0c190000000320,0x04881d80c00780d0,0x0e0e2d0000000320,
0x0e082980c00780d0,0x0e0a2580c00780d0,0x0e022180c00780d0,0x06163580c00780d0,
0x08881900000780c0,0x088a2d0000000320,0x0e162d0000000320,0x0e0c3180c00780d0,
0x09142580c00780d0,0x0b182500034780e0,0x00102100024780e0,0x0e022100024780b0,
0x108a21a0c00780d0,0x0e10290000000320,0x0e0e2d80c00780d0,0x0c8a2180c00780d0,
0x0e10210000000320,0x0e082580c00780d0,0x0a163980c00780d0,0x148a2900000780c0,
0x0e14310000000320,0x0e0c3580c00780d0,0x04822980c00780d0,0x0e142d0000000320,
0x08122180c00780d0,0x0c1a2100038780e0,0x00162100020780e0,0x0e142100020780b0,
0x0e0e2da0c00780d0,0x1c8a1d80c00780d0,0x0e0e290000000320,0x188a1d80c00780d0,
0x0e0e210000000320,0x0e082580c00780d0,0x0e0c1d80c00780d0,0x0a162980c00780d0,
0x208a1900000780c0,0x0e0c190000000320,0x08122180c00780d0,0x060e1900028780e0,
0x00060d00020780e0,0x03840900018780b0,0x0882190000000320,0x0005fd0000000320,
0x0e0c0d6c0147c830,0x248a15a0c00780d0,0x0c88110000000320,0x01b0030000000320,
0x0000010000028010,0x0000ffe0000001f0,0x0c0b040000000300,0x0000080000000000,
0x080d040000001000,0x0000200020010000,0x200780a000421100,0x200780a0004c1504,
0x000780a000000504,0x0082004008140004,0x1007803003000920,0x10078030020001c4,
0x00e81820008400c4,0x2007802000cc0d21,0x00000320048c0104,0xc00780d00e002100,
0x0000032004860180,0xc00780d00e001d00,0xc00780d00e0c0180,0xc00780d00e060980,
0x000780c007101d80,0x00000320088c1900,0xc00780d00e0c1900,0x0000032008860d80,
0xc00780d00e060d00,0x01c780e002000180,0x000780e0030c0100,0x0007800002020500,
0x004780a0000001c0,0x20078004001801e4,0x000000861ffe03e4,0x40c7c8308009fd00,
0x0002801002c00364,0x000000a002b00300,0x0000031001800d00,0x1007803001060900,
0x00841810008200c4,0x0007802003200310,0x0147c8307c01fd00,0x00c500200002016c,
0x0005000002000904,0x00050000020205c0,0x00c50018001801c0,0x200500b400d80144,
0x2005000400180100,0x000000861ffe03e4,0x0047c8300405fd00,0x03c7801000040d64,
0x0002801001d00304,0x000002f000000100,0x0147c8307c03fde0,0x000280300000036c,
0x10078030020a0500,0x01f0041100f800c4,0xc00780d00e020121,0x00078030000003a0,
0x114780a0000c1d00,0x004780a0000e2104,0x114780a000002544,0x0007809000102904,
0x064780a000122100,0xffffff203e942944,0x00c7c0c00a10210f,0x064780a000102100,
0x00078040111c2d84,0x02c78060101e2d00,0x1007803010162d00,0x02c78060101c2dc4,
0x02c7802040122d00,0x064780a000162d04,0x00c7c0c00a162944,0x064780a000142900,
0x0287802000102184,0x000780400e222904,0x028780600f202900,0x1007803010142900,
0x028780600e2029c4,0x0247803000142900,0x00c780300a0e2904,0x0207803000142164,
0x000780400e222904,0x028780600f202900,0x1007803010142900,0x028780600e201dc4,
0x100780301f000100,0x02478030000e21e4,0x014780a000001d04,0x008780d0080e1d2c,
0x0147c8307c0dfd04,0x01c780200000016c,0x02c500d006000104,0x0007803000000304,
0x000001f000000100,0x0c0b0400000001e0,0x0000080000000000,0x080d040000001000,
0x0000200023011800,0x000780a000000500,0x03c7801000f80d04,0x0007800002020504,
0x03c7801000f809c0,0x03c7801000f80104,0x3f07800400180104,0x0087c8300105fde4,
0x000000a00440036c,0x0002801004400300,0x1007803009021100,0x10078030080215c4,
0x04841020058810c4,0x1007803003001920,0x1007803002001dc4,0x10078030030815c4,
0x10078030020811c4,0x048a1020078c18c4,0x1007803003021520,0x10078030020221c4,
0x04e8182106ec1cc4,0x02078020000a1521,0x00000320048e1104,0xc00780d00e081100,
0x00000320048c2180,0xc00780d00e102d00,0x2147802000cc2180,0xc00780d00e102504,
0xc00780d00e0e1580,0xc00780d00e0c2980,0x000780c00b083180,0x00000320088e1d00,
0xc00780d00e0e1d00,0x00000320088c2d80,0xc00780d00e162d00,0x0a0a28c00c123080,
0x030780e00a1231c0,0x000780c00b0e2908,0x030780e00a122500,0x000003200c8c2904,
0xc00780d00e142d00,0x0000032004902980,0xc00780d00e142900,0x00000320108c3180,
0xc00780d00e183500,0x00000320148c3180,0xc00780d00e183100,0x000780c00b0a2d80,
0x024780e00b142d00,0x000780c00d082504,0x02c780e009142d00,0x000780c00c0e2504,
0x02c780e009142500,0x00000320188c2904,0xc00780d00e142900,0x0000032008902180,
0xc00780d00e102100,0x000003201c8c2d80,0xc00780d00e162d00,0x00000320208c1980,
0xc00780d00e0c1900,0x000780c005141580,0x024780e005102500,0x070c14c004161004,
0x024780e0041011c0,0x010780e005101104,0x010780b000060d04,0x0007800002020508,
0x20c78004001801c0,0x000002f0000001e4,0x00000320038409e0,0x40c7c8308005fd00,
0x000003200180016c,0x0002801000600300,0x000000861ffe0300,0x200780a000422900,
0x40c7c8308115fd04,0x0002801005e00364,0x000000a005d00300,0x0000031001800d00,
0x1007803001061100,0x00880810008200c4,0x0007802006400310,0x0147c8307c01fd00,
0x004500200006016c,0x0005000002000904,0x00050000020205c0,0x00c50018001801c0,
0x200500b400d80144,0x2005000400180100,0x000000861ffe03e4,0x0047c8300a09fd00,
0x03c7801000080d64,0x0002801004f00304,0x000002f000000100,0x0147c8307c03fde0,
0x000280300000036c,0x0000032104f00500,0x00c7801000180100,0xc00780d00e020144,
0x00078030000003a0,0x114780a000041500,0x004780a0000a1904,0x114780a000001d44,
0x00078090000c2104,0x064780a0000e1900,0xffffff203e902144,0x00c7c0c0080c190f,
0x064780a0000c1900,0x000780400d142584,0x024780600c162500,0x1007803010122500,
0x024780600c1425c4,0x02478020400e2500,0x064780a000122504,0x00c7c0c008122144,
0x064780a000102100,0x02078020000c1984,0x000780400a1a2104,0x020780600b182100,
0x1007803010102100,0x020780600a1821c4,0x01c7803000102100,0x00c78030080a2104,
0x0187803000101964,0x000780400a1a2104,0x020780600b182100,0x1007803010102100,
0x020780600a1815c4,0x100780301f000100,0x01c78030000a19e4,0x014780a000001504,
0x008780d0060a152c,0x0147c8307c05fd04,0x014780200000016c,0x02c500d002000104,
0x0007803000000304,0x000001f000000100,0x000001000002ffe0,0x000000000c0b0400,
0x0000100000000800,0x23011800080d0400,0x0000000000002000,0x0000000000000000,
0x0000000000000000,0x0000000000000400,0x00001f0000000100,0x0000000000000000,
0x00001e0000000100,0x0000000000000000,0x0000000600000000,0x00001ab400000005,
0x0000000000000000,0x0000000000000000,0x0000026800000000,0x0000026800000000,
0x0000000400000000,0x6000000000000000,0x00000ca100001d05,0x0000000000000000,
0x0000000000000000,0x000003ec00000000,0x000003ec00000000,0x0000000400000000,
0x6000000000000000,0x0000108d00001d06,0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000003800000000,0x0000000400000000,0x6000000000000000,
0x0000108d00001c05,0x0000000000000000,0x0000000000000000,0x000002a400000000,
0x000002a400000000,0x0000000400000000,0x6000000000000000,0x0000133100001c06,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000003000000000,
0x0000000400000000,0x6000000000000000,0x0000133100001b05,0x0000000000000000,
0x0000000000000000,0x000002d800000000,0x000002d800000000,0x0000000400000000,
0x6000000000000000,0x0000160900001b06,0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000003000000000,0x0000000400000000,0x6000000000000000,
0x0000160900001a05,0x0000000000000000,0x0000000000000000,0x0000046c00000000,
0x0000046c00000000,0x0000000400000000,0x6000000000000000,0x00001a7500001a06,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000003000000000,
0x0000000400000000,0x0000000100000000,0x00001a7500000005,0x0000000000000000,
0x0000000000000000,0x0000003400000000,0x0000003400000000,0x0000000400000000,
0x0000000100000000,0x00001aa900000006,0x0000000000000000,0x0000000000000000,
0x0000000800000000,0x0000001000000000,0x0000000400000000,0x0000000000000000
};


}
#line 779 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.fatbin.c"

static __cudaFatPtxEntry   __ptxEntries  [] = {{(char*)"compute_11",(char*)__deviceText_$compute_11$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_11", (char*)__deviceText_$sm_11$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_11$)};


#pragma data_seg(".nvFatBinSegment")
#pragma data_seg()

__declspec(allocate(".nvFatBinSegment")) static __cudaFatCudaBinary __fatDeviceText= {0x1ee55a01,0x00000004,0xa14f518d,(char*)"fa001963f6b5b364",(char*)"c:/Users/tio/Documents/Visual Studio 2008/Projects/Neo/Neo/naive.cu",(char*)"-v -maxrregcount=32 ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0xe4a4a97c,&__elfEntries1};

#line 2 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.cudafe1.stub.c"
#line 1 "C:\\CUDA\\include\\crt/host_runtime.h"







































































#line 73 "C:\\CUDA\\include\\crt/host_runtime.h"




















extern "C" {

extern void** __stdcall __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __stdcall __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __stdcall __cudaRegisterVar(
        void **fatCubinHandle,
        char  *hostVar,
        char  *deviceAddress,
  const char  *deviceName,
        int    ext,
        int    size,
        int    constant,
        int    global
);

extern void __stdcall __cudaRegisterTexture(
        void                    **fatCubinHandle,
  const struct textureReference  *hostVar,
  const void                    **deviceAddress,
  const char                     *deviceName,
        int                       dim,       
        int                       norm,      
        int                       ext        
);

extern void __stdcall __cudaRegisterSurface(
        void                    **fatCubinHandle,
  const struct surfaceReference  *hostVar,
  const void                    **deviceAddress,
  const char                     *deviceName,
        int                       dim,       
        int                       ext        
);

extern void __stdcall __cudaRegisterFunction(
        void   **fatCubinHandle,
  const char    *hostFun,
        char    *deviceFun,
  const char    *deviceName,
        int      thread_limit,
        uint3   *tid,
        uint3   *bid,
        dim3    *bDim,
        dim3    *gDim,
        int     *wSize
);





#line 151 "C:\\CUDA\\include\\crt/host_runtime.h"

extern int __cdecl atexit(void(__cdecl *)(void));

#line 155 "C:\\CUDA\\include\\crt/host_runtime.h"

}

static void **__cudaFatCubinHandle;

static void __cdecl __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

#line 1 "C:\\CUDA\\include\\common_functions.h"














































































#line 80 "C:\\CUDA\\include\\common_functions.h"







#line 1 "c:\\cuda\\include\\math_functions.h"
















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 946 "c:\\cuda\\include\\math_functions.h"

#line 1 "c:\\cuda\\include\\host_defines.h"



















































































































































#line 149 "c:\\cuda\\include\\host_defines.h"
#line 948 "c:\\cuda\\include\\math_functions.h"
#line 1 "c:\\cuda\\include\\math_constants.h"
















































































#line 82 "c:\\cuda\\include\\math_constants.h"






#line 89 "c:\\cuda\\include\\math_constants.h"





















































#line 143 "c:\\cuda\\include\\math_constants.h"
#line 949 "c:\\cuda\\include\\math_functions.h"




























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 2962 "c:\\cuda\\include\\math_functions.h"







#line 1 "C:\\CUDA\\include\\crt/func_macro.h"













































#line 47 "C:\\CUDA\\include\\crt/func_macro.h"





#line 53 "C:\\CUDA\\include\\crt/func_macro.h"








#line 62 "C:\\CUDA\\include\\crt/func_macro.h"






#line 69 "C:\\CUDA\\include\\crt/func_macro.h"






#line 76 "C:\\CUDA\\include\\crt/func_macro.h"

#line 78 "C:\\CUDA\\include\\crt/func_macro.h"

#line 80 "C:\\CUDA\\include\\crt/func_macro.h"
#line 2970 "c:\\cuda\\include\\math_functions.h"









static double exp10(double a)
{
  return pow(10.0, a);
}

static float exp10f(float a)
{
    return (float)exp10((double)a);
}

static void sincos(double a, double *sptr, double *cptr)
{
  *sptr = sin(a);
  *cptr = cos(a);
}

static void sincosf(float a, float *sptr, float *cptr)
{
  double s, c;

  sincos((double)a, &s, &c);
  *sptr = (float)s;
  *cptr = (float)c;
}

static int __isnan(double a)
{
  volatile union {
    double                 d;
    unsigned long long int l;
  } cvt;

  cvt.d = a;

  return cvt.l << 1 > 0xffe0000000000000ull;
}

static int __isinf(double a)
{
  volatile union {
    double                 d;
    unsigned long long int l;
  } cvt;

  cvt.d = a;

  return cvt.l << 1 == 0xffe0000000000000ull;
}

#line 3029 "c:\\cuda\\include\\math_functions.h"



static long long int llabs(long long int a)
{
  return a < 0ll ? -a : a;
}







static int __signbit(double a)
{
  volatile union {
    double               d;
    signed long long int l;
  } cvt;

  cvt.d = a;
  return cvt.l < 0ll;
}

static double copysign(double a, double b)
{
  volatile union {
    double                 d;
    unsigned long long int l;
  } cvta, cvtb;

  cvta.d = a;
  cvtb.d = b;
  cvta.l = (cvta.l & 0x7fffffffffffffffULL) | (cvtb.l & 0x8000000000000000ULL);
  return cvta.d;
}

static int __finite(double a)
{
  volatile union {
    double                 d;
    unsigned long long int l;
  } cvt;

  cvt.d = a;
  return cvt.l << 1 < 0xffe0000000000000ull;
}

static double fmax(double a, double b)
{
  if (__isnan(a) && __isnan(b)) return a + b;
  if (__isnan(a)) return b;
  if (__isnan(b)) return a;
  if ((a == 0.0) && (b == 0.0) && __signbit(b)) return a;
  return a > b ? a : b;
}

static double fmin(double a, double b)
{
  if (__isnan(a) && __isnan(b)) return a + b;
  if (__isnan(a)) return b;
  if (__isnan(b)) return a;
  if ((a == 0.0) && (b == 0.0) && __signbit(a)) return a;
  return a < b ? a : b;
}

static double trunc(double a)
{
  return a < 0.0 ? ceil(a) : floor(a);
}

static double round(double a)
{
  double fa = fabs(a);

  if (fa > 4503599627370496.0) {
    return a;
  } else {
    double u = floor(fa + 0.5);
    if (fa < 0.5) u = 0;
    u = copysign (u, a);
    return u;
  }
}

static long int lround(double a)
{
  return (long int)round(a);
}

static long long int llround(double a)
{
  return (long long int)round(a);
}

static double rint(double a)
{
  double fa = fabs(a);
  double u = 4503599627370496.0 + fa;
  if (fa >= 4503599627370496.0) {
    u = a;
  } else {
    u = u - 4503599627370496.0;
    u = copysign (u, a);
  }
  return u;  
}
static double nearbyint(double a)
{
  return rint(a);
}

static long int lrint(double a)
{
  return (long int)rint(a);
}

static long long int llrint(double a)
{
  return (long long int)rint(a);
}

static double fdim(double a, double b)
{
  if (a > b) {
    return (a - b);
  } else if (a <= b) {
    return 0.0;
  } else if (__isnan(a)) {
    return a;
  } else {
    return b;
  }
}

static double scalbn(double a, int b)
{
  return ldexp(a, b);
}

static double scalbln(double a, long int b)
{
  int t;

  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return scalbn(a, t);
}

static double log2(double a)
{
  return log(a) * 1.44269504088896340;
}

static double exp2(double a)
{
  return pow(2.0, a);
}






static double log1p(double a)
{
  volatile double u, m;

  u = 1.0 + a;
  if (u == 1.0) {
    
    u = a;
  } else {
    m = u - 1.0;
    u = log(u);
    if (a < 1.0) {
      
      u = a * u;
      u = u / m;
    }
  }
  return u;
}




static double expm1(double a)
{
  volatile double u, m;

  u = exp(a);
  m = u - 1.0;
  if (m == 0.0) {
    
    m = a;
  } 
  else if (fabs(a) < 1.0) {
    
    u = log(u);
    m = m * a;
    m = m / u;
  }
  return m;
}

static double cbrt(double a)
{
  double s, t;

  if (a == 0.0 || __isinf(a)) {
    return a;
  } 
  s = fabs(a);
  t = exp2(3.3333333333333333e-1 * log2(s));           
  t = t - (t - (s / (t * t))) * 3.3333333333333333e-1; 
  t = copysign(t, a);
  return t;
}

static double acosh(double a)
{
  double s, t;

  t = a - 1.0;
  if (t == a) {
    return log(2.0) + log(a);
  } else {
    s = a + 1.0;
    t = t + sqrt(s * t);
    return log1p(t);
  }
}

static double asinh(double a)
{
  double fa, oofa, t;

  fa = fabs(a);
  if (fa > 1e18) {
    t = log(2.0) + log(fa);
  } else {
    oofa = 1.0 / fa;
    t = fa + fa / (oofa + sqrt(1.0 + oofa * oofa));
    t = log1p(t);
  }
  t = copysign(t, a);
  return t;
}

static double atanh(double a)
{
  double fa, t;

  if (__isnan(a)) {
    return a + a;
  }
  fa = fabs(a);
  t = (2.0 * fa) / (1.0 - fa);
  t = 0.5 * log1p(t);
  if (__isnan(t) || !__signbit(a)) {
    return t;
  }
  return -t;
}

static int ilogb(double a)
{
  volatile union {
    double                 d;
    unsigned long long int l;
  } x;
  unsigned long long int i;
  int expo = -1022;

  if (__isnan(a)) return -((int)((unsigned int)-1 >> 1))-1;
  if (__isinf(a)) return ((int)((unsigned int)-1 >> 1));
  x.d = a;
  i = x.l & 0x7fffffffffffffffull;
  if (i == 0) return -((int)((unsigned int)-1 >> 1))-1;
  if (i >= 0x0010000000000000ull) {
    return (int)(((i >> 52) & 0x7ff) - 1023);
  }
  while (i < 0x0010000000000000ull) {
    expo--;
    i <<= 1;
  }
  return expo;
}

static double logb(double a)
{
  volatile union {
    double                 d;
    unsigned long long int l;
  } x;
  unsigned long long int i;
  int expo = -1022;

  if (__isnan(a)) return a + a;
  if (__isinf(a)) return fabs(a);
  x.d = a;
  i = x.l & 0x7fffffffffffffffull;
  if (i == 0) return -1.0/fabs(a);
  if (i >= 0x0010000000000000ull) {
    return (double)((int)((i >> 52) & 0x7ff) - 1023);
  }
  while (i < 0x0010000000000000ull) {
    expo--;
    i <<= 1;
  }
  return (double)expo;
}

static double remquo(double a, double b, int *quo)
{
  volatile union {
    double                 d;
    unsigned long long int l;
  } cvt;
  int rem1 = 1; 
  int expo_a;
  int expo_b;
  unsigned long long mant_a;
  unsigned long long mant_b;
  unsigned long long mant_c;
  unsigned long long temp;
  int sign_a;
  int sign_b;
  int sign_c;
  int expo_c;
  int expodiff;
  int quot = 0;                 
  int l;
  int iter;

  cvt.d = a;
  mant_a = (cvt.l << 11) | 0x8000000000000000ULL;
  expo_a = (int)((cvt.l >> 52) & 0x7ff) - 1023;
  sign_a = (int)(cvt.l >> 63);

  cvt.d = b;
  mant_b = (cvt.l << 11) | 0x8000000000000000ULL;
  expo_b = (int)((cvt.l >> 52) & 0x7ff) - 1023;
  sign_b = (int)(cvt.l >> 63);

  sign_c = sign_a;  
  expo_c = expo_a;  
      
  
  if (__isnan(a) || __isnan(b)) {
    *quo = quot;
    return a + b;
  }
  if (__isinf(a) || (b == 0.0)) {
    *quo = quot;
    cvt.l = 0xfff8000000000000ULL;
    return cvt.d;
  }
  if ((a == 0.0) || (__isinf(b))) {
    *quo = quot;
    return a;
  }
  
  if (expo_a < -1022) {
    mant_a = mant_a + mant_a;
    while (mant_a < 0x8000000000000000ULL) {
      mant_a = mant_a + mant_a;
      expo_a--;
    }
  } 
  if (expo_b < -1022) {
    mant_b = mant_b + mant_b;
    while (mant_b < 0x8000000000000000ULL) {
      mant_b = mant_b + mant_b;
      expo_b--;
    }
  }
  expodiff = expo_a - expo_b;
  
  if (expodiff < 0) {
    iter = -1;
  } else {
    iter = expodiff;
  }
  


  mant_a = mant_a >> 1;
  mant_b = mant_b >> 1;
  expo_c = expo_a - iter; 

  
  for (l = 0; l < (iter + 1); l++) {
    mant_a = mant_a - mant_b;
    if (mant_a & 0x8000000000000000ULL) {
      mant_a = mant_a + mant_b;
      quot = quot + quot;
    } else {
      quot = quot + quot + 1;
    }
    mant_a = mant_a + mant_a;
  }

  
  mant_c = mant_a;
  
  if (mant_c == 0) {
    quot = quot & 7;
    *quo = (sign_a ^ sign_b) ? -quot : quot;
    cvt.l = (unsigned long long int)sign_c << 63;
    return cvt.d;
  }
  
  while (!(mant_c & 0x8000000000000000ULL)) {
    mant_c = mant_c + mant_c;
    expo_c--;
  }
  


  if (rem1 && ((expodiff+1) >= 0)) {
    temp = mant_a - mant_b;
    
    if (((temp != 0ULL) && (!(temp & 0x8000000000000000ULL))) ||
        ((temp == 0ULL) && (quot & 1))) {
      mant_a = mant_a >> 1;
      quot++;
      



      sign_c = 1 ^ sign_c;
      expo_c = expo_a - iter + 1;
      mant_c = mant_b - mant_a;
      
      while (!(mant_c & 0x8000000000000000ULL)) {
        mant_c = mant_c + mant_c;
        expo_c--;
      }
    }
  }
  
  if (expo_c >= -1022) { 
    mant_c = ((mant_c >> 11) + 
              ((((unsigned long long)sign_c) << 63) +
               (((unsigned long long)(expo_c + 1022)) << 52)));
  } else { 
    mant_c = ((((unsigned long long)sign_c) << 63) + 
              (mant_c >> (11 - expo_c - 1022)));
  }
  quot = quot & 7; 
  *quo = (sign_a ^ sign_b) ? -quot : quot;
  cvt.l = mant_c;
  return cvt.d;
}

static double remainder(double a, double b)
{
  int quo;
  return remquo (a, b, &quo);
}

static double fma (double a, double b, double c)
{
  volatile union {
    struct {
      unsigned int lo;
      unsigned int hi;
    };
    double d;
  } xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;
  
  xx.d = a;
  yy.d = b;
  zz.d = c;

  expo_z = 0x7FF;
  t =  xx.hi >> 20;
  expo_x = expo_z & t;
  expo_x = expo_x - 1;    
  t =  yy.hi >> 20;
  expo_y = expo_z & t;
  expo_y = expo_y - 1;    
  t =  zz.hi >> 20;
  expo_z = expo_z & t;
  expo_z = expo_z - 1;    

  if (!((expo_x <= 0x7FD) &&
        (expo_y <= 0x7FD) &&
        (expo_z <= 0x7FD))) {
    
    



    if (((yy.hi << 1) | (yy.lo != 0)) > 0xffe00000) {
      yy.hi |= 0x00080000;
      return yy.d;
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return zz.d;
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return xx.d;
    }
    
    










    if (((((xx.hi << 1) | xx.lo) == 0) && 
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) && 
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return xx.d;
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return xx.d;
        }
      }
    }
    



    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return xx.d;
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return yy.d;
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return zz.d;
    }
    




    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return zz.d;
        }
      }
    }
    


    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      zz.hi &= 0x7fffffff;
      return zz.d;
    }
    
    


    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return zz.d;
    }
    
    if (expo_x == 0xffffffff) {
      expo_x++;
      t = xx.hi & 0x80000000;
      s = xx.lo >> 21;
      xx.lo = xx.lo << 11;
      xx.hi = xx.hi << 11;
      xx.hi = xx.hi | s;
      if (!xx.hi) {
        xx.hi = xx.lo;
        xx.lo = 0;
        expo_x -= 32;
      }
      while ((int)xx.hi > 0) {
        s = xx.lo >> 31;
        xx.lo = xx.lo + xx.lo;
        xx.hi = xx.hi + xx.hi;
        xx.hi = xx.hi | s;
        expo_x--;
      }
      xx.lo = (xx.lo >> 11);
      xx.lo |= (xx.hi << 21);
      xx.hi = (xx.hi >> 11) | t;
    }
    if (expo_y == 0xffffffff) {
      expo_y++;
      t = yy.hi & 0x80000000;
      s = yy.lo >> 21;
      yy.lo = yy.lo << 11;
      yy.hi = yy.hi << 11;
      yy.hi = yy.hi | s;
      if (!yy.hi) {
        yy.hi = yy.lo;
        yy.lo = 0;
        expo_y -= 32;
      }
      while ((int)yy.hi > 0) {
        s = yy.lo >> 31;
        yy.lo = yy.lo + yy.lo;
        yy.hi = yy.hi + yy.hi;
        yy.hi = yy.hi | s;
        expo_y--;
      }
      yy.lo = (yy.lo >> 11);
      yy.lo |= (yy.hi << 21);
      yy.hi = (yy.hi >> 11) | t;
    }
    if (expo_z == 0xffffffff) {
      expo_z++;
      t = zz.hi & 0x80000000;
      s = zz.lo >> 21;
      zz.lo = zz.lo << 11;
      zz.hi = zz.hi << 11;
      zz.hi = zz.hi | s;
      if (!zz.hi) {
        zz.hi = zz.lo;
        zz.lo = 0;
        expo_z -= 32;
      }
      while ((int)zz.hi > 0) {
        s = zz.lo >> 31;
        zz.lo = zz.lo + zz.lo;
        zz.hi = zz.hi + zz.hi;
        zz.hi = zz.hi | s;
        expo_z--;
      }
      zz.lo = (zz.lo >> 11);
      zz.lo |= (zz.hi << 21);
      zz.hi = (zz.hi >> 11) | t;
    }
  }
  
  expo_x = expo_x + expo_y;
  expo_y = xx.hi ^ yy.hi;
  t = xx.lo >> 21;
  xx.lo = xx.lo << 11;
  xx.hi = xx.hi << 11;
  xx.hi = xx.hi | t;
  yy.hi = yy.hi & 0x000fffff;
  xx.hi = xx.hi | 0x80000000; 
  yy.hi = yy.hi | 0x00100000; 

  prod0 = xx.lo * yy.lo;
  prod1 =(unsigned)(((unsigned long long)xx.lo*(unsigned long long)yy.lo)>>32);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 =(unsigned)(((unsigned long long)xx.hi*(unsigned long long)yy.lo)>>32);
  prod3 =(unsigned)(((unsigned long long)xx.lo*(unsigned long long)yy.hi)>>32);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 =(unsigned)(((unsigned long long)xx.hi*(unsigned long long)yy.hi)>>32);
  prod3 = prod3 + s;
  
  yy.lo = prod0;                 
  yy.hi = prod1;                 
  xx.lo = prod2;                 
  xx.hi = prod3;                 
  expo_x = expo_x - (1023 - 2);  
  expo_y = expo_y & 0x80000000;  

  if (xx.hi < 0x00100000) {
    s = xx.lo >> 31;
    s = (xx.hi << 1) + s;
    xx.hi = s;
    s = yy.hi >> 31;
    s = (xx.lo << 1) + s;
    xx.lo = s;
    s = yy.lo >> 31;
    s = (yy.hi << 1) + s;
    yy.hi = s;
    s = yy.lo << 1;
    yy.lo = s;
    expo_x--;
  }

  t = 0;
  if (((zz.hi << 1) | zz.lo) != 0) { 
    
    s = zz.hi & 0x80000000;
    
    zz.hi &= 0x000fffff;
    zz.hi |= 0x00100000;
    ww.hi = 0;
    ww.lo = 0;
    
    
    if ((int)expo_z > (int)expo_x) {
      t = expo_z;
      expo_z = expo_x;
      expo_x = t;
      t = zz.hi;
      zz.hi = xx.hi;
      xx.hi = t;
      t = zz.lo;
      zz.lo = xx.lo;
      xx.lo = t;
      t = ww.hi;
      ww.hi = yy.hi;
      yy.hi = t;
      t = ww.lo;
      ww.lo = yy.lo;
      yy.lo = t;
      t = expo_y;
      expo_y = s;
      s = t;
    }
    
    
    
    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 107) {
      
      t = 0;
      while (expo_z >= 32) {
        t     = ww.lo | (t != 0);
        ww.lo = ww.hi;
        ww.hi = zz.lo;
        zz.lo = zz.hi;
        zz.hi = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        t     = (t     >> expo_z) | (ww.lo << (32 - expo_z)) | 
                ((t << (32 - expo_z)) != 0);
        ww.lo = (ww.lo >> expo_z) | (ww.hi << (32 - expo_z));
        ww.hi = (ww.hi >> expo_z) | (zz.lo << (32 - expo_z));
        zz.lo = (zz.lo >> expo_z) | (zz.hi << (32 - expo_z));
        zz.hi = (zz.hi >> expo_z);
      }
    } else {
      t = 1;
      ww.lo = 0;
      ww.hi = 0;
      zz.lo = 0;
      zz.hi = 0;
    }
    if ((int)u < 0) {
      
      t = (unsigned)(-(int)t);
      s = (t != 0);
      u = yy.lo - s;
      s = u > yy.lo;
      yy.lo = u - ww.lo;
      s += yy.lo > u;
      u = yy.hi - s;
      s = u > yy.hi;
      yy.hi = u - ww.hi;
      s += yy.hi > u;
      u = xx.lo - s;
      s = u > xx.lo;
      xx.lo = u - zz.lo;
      s += xx.lo > u;
      xx.hi = (xx.hi - zz.hi) - s;
      if (!(xx.hi | xx.lo | yy.hi | yy.lo | t)) {
        
        return xx.d;
      }
      if ((int)xx.hi < 0) {
        


        t = ~t;
        yy.lo = ~yy.lo;
        yy.hi = ~yy.hi;
        xx.lo = ~xx.lo;
        xx.hi = ~xx.hi;
        if (++t == 0) {
          if (++yy.lo == 0) {
            if (++yy.hi == 0) {
              if (++xx.lo == 0) {
              ++xx.hi;
              }
            }
          }
        }
        expo_y ^= 0x80000000;
      }
        
      
      while (!(xx.hi & 0x00100000)) {
        xx.hi = (xx.hi << 1) | (xx.lo >> 31);
        xx.lo = (xx.lo << 1) | (yy.hi >> 31);
        yy.hi = (yy.hi << 1) | (yy.lo >> 31);
        yy.lo = (yy.lo << 1);
        expo_x--;
      }
    } else {
      
      yy.lo = yy.lo + ww.lo;
      s = yy.lo < ww.lo;
      yy.hi = yy.hi + s;
      u = yy.hi < s;
      yy.hi = yy.hi + ww.hi;
      u += yy.hi < ww.hi;
      xx.lo = xx.lo + u;
      s = xx.lo < u;
      xx.lo = xx.lo + zz.lo;
      s += xx.lo < zz.lo;
      xx.hi = xx.hi + zz.hi + s;
      if (xx.hi & 0x00200000) {
        t = t | (yy.lo << 31);
        yy.lo = (yy.lo >> 1) | (yy.hi << 31);
        yy.hi = (yy.hi >> 1) | (xx.lo << 31);
        xx.lo = (xx.lo >> 1) | (xx.hi << 31);
        xx.hi = ((xx.hi & 0x80000000) | (xx.hi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  t = yy.lo | (t != 0);
  t = yy.hi | (t != 0);
        
  xx.hi |= expo_y; 
  if (expo_x <= 0x7FD) {
    
    xx.hi = xx.hi & ~0x00100000; 
    s = xx.lo & 1; 
    u = xx.lo;
    xx.lo += (t == 0x80000000) ? s : (t >> 31);
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return xx.d;
  } else if ((int)expo_x >= 2046) {      
    
    xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
    xx.lo = 0;
    return xx.d;
  }
  
  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {
    xx.hi = xx.hi & 0x80000000;
    xx.lo = 0;
    return xx.d;
  }  
  yy.hi = xx.hi &  0x80000000;   
  xx.hi = xx.hi & ~0xffe00000;
  if (expo_x >= 32) {
    t = xx.lo | (t != 0);
    xx.lo = xx.hi;
    xx.hi = 0;
    expo_x -= 32;
  }
  if (expo_x) {
    t     = (t     >> expo_x) | (xx.lo << (32 - expo_x)) | (t != 0);
    xx.lo = (xx.lo >> expo_x) | (xx.hi << (32 - expo_x));
    xx.hi = (xx.hi >> expo_x);
  }
  expo_x = xx.lo & 1; 
  u = xx.lo;
  xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return xx.d;
}

static double nextafter(double a, double b)
{
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;
  unsigned long long int ia;
  unsigned long long int ib;
  cvt.d = a;
  ia = cvt.l;
  cvt.d = b;
  ib = cvt.l;
  if (__isnan(a) || __isnan(b)) return a + b; 
  if (((ia | ib) << 1) == 0ULL) return b;
  if (a == 0.0) {
    return copysign (4.9406564584124654e-324, b); 
  }
  if ((a < b) && (a < 0.0)) ia--;
  if ((a < b) && (a > 0.0)) ia++;
  if ((a > b) && (a < 0.0)) ia++;
  if ((a > b) && (a > 0.0)) ia--;
  cvt.l = ia;
  return cvt.d;
}

static double erf(double a)
{
  double t, r, q;

  t = fabs(a);
  if (t >= 1.0) {
    r =        -1.28836351230756500E-019;
    r = r * t + 1.30597472161093370E-017;
    r = r * t - 6.33924401259620500E-016;
    r = r * t + 1.96231865908940140E-014;
    r = r * t - 4.35272243559990750E-013;
    r = r * t + 7.37083927929352150E-012;
    r = r * t - 9.91402142550461630E-011;
    r = r * t + 1.08817017167760820E-009;
    r = r * t - 9.93918713097634620E-009;
    r = r * t + 7.66739923255145500E-008;
    r = r * t - 5.05440278302806720E-007;
    r = r * t + 2.87474157099000620E-006;
    r = r * t - 1.42246725399722510E-005;
    r = r * t + 6.16994555079419460E-005;
    r = r * t - 2.36305221938908790E-004;
    r = r * t + 8.05032844055371070E-004;
    r = r * t - 2.45833366629108140E-003;
    r = r * t + 6.78340988296706120E-003;
    r = r * t - 1.70509103597554640E-002;
    r = r * t + 3.93322852515666300E-002;
    r = r * t - 8.37271292613764040E-002;
    r = r * t + 1.64870423707623280E-001;
    r = r * t - 2.99729521787681470E-001;
    r = r * t + 4.99394435612628580E-001;
    r = r * t - 7.52014596480123030E-001;
    r = r * t + 9.99933138314926250E-001;
    r = r * t - 1.12836725321102670E+000;
    r = r * t + 9.99998988715182450E-001;
    q = exp (-t * t);
    r = 1.0 - r * q;
    if (t >= 6.5) {
      r = 1.0;
    }    
    a = copysign (r, a);
  } else {
    q = a * a;
    r =        -7.77946848895991420E-010;
    r = r * q + 1.37109803980285950E-008;
    r = r * q - 1.62063137584932240E-007;
    r = r * q + 1.64471315712790040E-006;
    r = r * q - 1.49247123020098620E-005;
    r = r * q + 1.20552935769006260E-004;
    r = r * q - 8.54832592931448980E-004;
    r = r * q + 5.22397760611847340E-003;
    r = r * q - 2.68661706431114690E-002;
    r = r * q + 1.12837916709441850E-001;
    r = r * q - 3.76126389031835210E-001;
    r = r * q + 1.12837916709551260E+000;
    a = r * a;
  }
  return a;
}

static double erfc(double a)
{
  double p, q, h, l;

  if (a < 0.75) {
    return 1.0 - erf(a);
  } 
  if (a > 27.3) {
    return 0.0;
  }
  if (a < 5.0) {
    double t;
    t = 1.0 / a;
    p =         1.9759923722227928E-008;
    p = p * t - 1.0000002670474897E+000;
    p = p * t - 7.4935303236347828E-001;
    p = p * t - 1.5648136328071860E-001;
    p = p * t + 1.2871196242447239E-001;
    p = p * t + 1.1126459974811195E-001;
    p = p * t + 4.0678642255914332E-002;
    p = p * t + 7.9915414156678296E-003;
    p = p * t + 7.1458332107840234E-004;
    q =     t + 2.7493547525030619E+000;
    q = q * t + 3.3984254815725423E+000;
    q = q * t + 2.4635304979947761E+000;
    q = q * t + 1.1405284734691286E+000;
    q = q * t + 3.4130157606195649E-001;
    q = q * t + 6.2250967676044953E-002;
    q = q * t + 5.5661370941268700E-003;
    q = q * t + 1.0575248365468671E-009;
    p = p / q;
    p = p * t;
    h = ((int)(a * 16.0)) * 0.0625;
    l = (a - h) * (a + h);
    q = exp(-h * h) * exp(-l);
    q = q * 0.5;
    p = p * q + q;
    p = p * t;
  } else {
    double ooa, ooasq;

    ooa = 1.0 / a;
    ooasq = ooa * ooa;
    p =            -4.0025406686930527E+005;
    p = p * ooasq + 1.4420582543942123E+005;
    p = p * ooasq - 2.7664185780951841E+004;
    p = p * ooasq + 4.1144611644767283E+003;
    p = p * ooasq - 5.8706000519209351E+002;
    p = p * ooasq + 9.1490086446323375E+001;
    p = p * ooasq - 1.6659491387740221E+001;
    p = p * ooasq + 3.7024804085481784E+000;
    p = p * ooasq - 1.0578553994424316E+000;
    p = p * ooasq + 4.2314218745087778E-001;
    p = p * ooasq - 2.8209479177354962E-001;
    p = p * ooasq + 5.6418958354775606E-001;
    h = a * a;
    h = ((int)(a * 16.0)) * 0.0625;
    l = (a - h) * (a + h);
    q = exp(-h * h) * exp(-l);
    p = p * ooa;
    p = p * q;
  }
  return p;
}

static double lgamma(double a)
{
  double s;
  double t;
  double i;
  double fa;
  double sum;
  long long int quot;
  if (__isnan(a) || __isinf(a)) {
    return a * a;
  }
  fa = fabs(a);
  if (fa >= 3.0) {
    if (fa >= 8.0) {
      


      s = 1.0 / fa;
      t = s * s;
      sum =          -0.1633436431e-2;
      sum = sum * t + 0.83645878922e-3;
      sum = sum * t - 0.5951896861197e-3;
      sum = sum * t + 0.793650576493454e-3;
      sum = sum * t - 0.277777777735865004e-2;
      sum = sum * t + 0.833333333333331018375e-1;
      sum = sum * s + 0.918938533204672;
      s = 0.5 * log (fa);
      t = fa - 0.5;
      s = s * t;
      t = s - fa;
      s = s + sum;
      t = t + s;
    } else {
      i = fa - 3.0;
      s =        -4.02412642744125560E+003;
      s = s * i - 2.97693796998962000E+005;
      s = s * i - 6.38367087682528790E+006;
      s = s * i - 5.57807214576539320E+007;
      s = s * i - 2.24585140671479230E+008;
      s = s * i - 4.70690608529125090E+008;
      s = s * i - 7.62587065363263010E+008;
      s = s * i - 9.71405112477113250E+008;
      t =     i - 1.02277248359873170E+003;
      t = t * i - 1.34815350617954480E+005;
      t = t * i - 4.64321188814343610E+006;
      t = t * i - 6.48011106025542540E+007;
      t = t * i - 4.19763847787431360E+008;
      t = t * i - 1.25629926018000720E+009;
      t = t * i - 1.40144133846491690E+009;
      t = s / t;
      t = t + i;
    }
  } else if (fa >= 1.5) {
    i = fa - 2.0;
    t =         9.84839283076310610E-009;
    t = t * i - 6.69743850483466500E-008;
    t = t * i + 2.16565148880011450E-007;
    t = t * i - 4.86170275781575260E-007;
    t = t * i + 9.77962097401114400E-007;
    t = t * i - 2.03041287574791810E-006;
    t = t * i + 4.36119725805364580E-006;
    t = t * i - 9.43829310866446590E-006;
    t = t * i + 2.05106878496644220E-005;
    t = t * i - 4.49271383742108440E-005;
    t = t * i + 9.94570466342226000E-005;
    t = t * i - 2.23154589559238440E-004;
    t = t * i + 5.09669559149637430E-004;
    t = t * i - 1.19275392649162300E-003;
    t = t * i + 2.89051032936815490E-003;
    t = t * i - 7.38555102806811700E-003;
    t = t * i + 2.05808084278121250E-002;
    t = t * i - 6.73523010532073720E-002;
    t = t * i + 3.22467033424113040E-001;
    t = t * i + 4.22784335098467190E-001;
    t = t * i;
  } else if (fa >= 0.7) {
    i = 1.0 - fa;
    t =         1.17786911519331130E-002;  
    t = t * i + 3.89046747413522300E-002;
    t = t * i + 5.90045711362049900E-002;
    t = t * i + 6.02143305254344420E-002;
    t = t * i + 5.61652708964839180E-002;
    t = t * i + 5.75052755193461370E-002;
    t = t * i + 6.21061973447320710E-002;
    t = t * i + 6.67614724532521880E-002;
    t = t * i + 7.14856037245421020E-002;
    t = t * i + 7.69311251313347100E-002;
    t = t * i + 8.33503129714946310E-002;
    t = t * i + 9.09538288991182800E-002;
    t = t * i + 1.00099591546322310E-001;
    t = t * i + 1.11334278141734510E-001;
    t = t * i + 1.25509666613462880E-001;
    t = t * i + 1.44049896457704160E-001;
    t = t * i + 1.69557177031481600E-001;
    t = t * i + 2.07385551032182120E-001;
    t = t * i + 2.70580808427600350E-001;
    t = t * i + 4.00685634386517050E-001;
    t = t * i + 8.22467033424113540E-001;
    t = t * i + 5.77215664901532870E-001;
    t = t * i;
  } else {
    t =         -9.04051686831357990E-008;
    t = t * fa + 7.06814224969349250E-007;
    t = t * fa - 3.80702154637902830E-007;
    t = t * fa - 2.12880892189316100E-005;
    t = t * fa + 1.29108470307156190E-004;
    t = t * fa - 2.15932815215386580E-004;
    t = t * fa - 1.16484324388538480E-003;
    t = t * fa + 7.21883433044470670E-003;
    t = t * fa - 9.62194579514229560E-003;
    t = t * fa - 4.21977386992884450E-002;
    t = t * fa + 1.66538611813682460E-001;
    t = t * fa - 4.20026350606819980E-002;
    t = t * fa - 6.55878071519427450E-001;
    t = t * fa + 5.77215664901523870E-001;
    t = t * fa;
    t = t * fa + fa;
    t = -log (t);
  }
  if (a >= 0.0) return t;
  if (fa < 1e-19) return -log(fa);
  i = floor(fa);       
  if (fa == i) return 1.0 / (fa - i); 
  i = rint (2.0 * fa);
  quot = (long long int)i;
  i = fa - 0.5 * i;
  i = i * 3.1415926535897931e+0;
  if (quot & 1) {
    i = cos(i);
  } else {
    i = sin(i);
  }
  i = fabs(i);
  t = log(3.1415926535897931e+0 / (i * fa)) - t;
  return t;
}

static unsigned long long int __internal_host_nan_kernel(const char *s)
{
  unsigned long long i = 0;
  int c;
  int ovfl = 0;
  int invld = 0;
  if (s && (*s == '0')) {
    s++;
    if ((*s == 'x') || (*s == 'X')) {
      s++; 
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x0fffffffffffffffULL) {
          ovfl = 1;
        }
        c = (((*s) >= 'A') && ((*s) <= 'F')) ? (*s + 'a' - 'A') : (*s);
        if ((c >= 'a') && (c <= 'f')) { 
          c = c - 'a' + 10;
          i = i * 16 + c;
        } else if ((c >= '0') && (c <= '9')) { 
          c = c - '0';
          i = i * 16 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    } else {
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x1fffffffffffffffULL) {
          ovfl = 1;
        }
        c = *s;
        if ((c >= '0') && (c <= '7')) { 
          c = c - '0';
          i = i * 8 + c;
        } else {
          invld = 1; 
        }
        s++;
      }
    }
  } else if (s) {
    while (*s) {
      c = *s;
      if ((i > 1844674407370955161ULL) || 
          ((i == 1844674407370955161ULL) && (c > '5'))) {
        ovfl = 1;
      }
      if ((c >= '0') && (c <= '9')) { 
        c = c - '0';
        i = i * 10 + c;
      } else {
        invld = 1;
      }
      s++;
    }
  }
  if (ovfl) {
    i = ~0ULL;
  }
  if (invld) {
    i = 0ULL;
  }
  i = (i & 0x000fffffffffffffULL) | 0x7ff8000000000000ULL;
  return i;
}

static double nan(const char *tagp)
{
  volatile union {
    unsigned long long l;
    double d;
  } cvt;

  cvt.l = __internal_host_nan_kernel(tagp);
  return cvt.d;
}

static double __host_tgamma_kernel(double a)
{
  double t;
  t =       - 4.4268934071252475E-010;
  t = t * a - 2.0266591846658954E-007;
  t = t * a + 1.1381211721119527E-006;
  t = t * a - 1.2507734816630748E-006;
  t = t * a - 2.0136501740408771E-005;
  t = t * a + 1.2805012607354486E-004;
  t = t * a - 2.1524140811527418E-004;
  t = t * a - 1.1651675459704604E-003;
  t = t * a + 7.2189432248466381E-003;
  t = t * a - 9.6219715326862632E-003;
  t = t * a - 4.2197734554722394E-002;
  t = t * a + 1.6653861138250356E-001;
  t = t * a - 4.2002635034105444E-002;
  t = t * a - 6.5587807152025712E-001;
  t = t * a + 5.7721566490153287E-001;
  t = t * a + 1.0000000000000000E+000;
  return t;
}

static double __host_stirling_poly(double a)
{
  double x = 1.0 / a;
  double z = 0.0;
  z =       + 8.3949872067208726e-004;
  z = z * x - 5.1717909082605919e-005;
  z = z * x - 5.9216643735369393e-004;
  z = z * x + 6.9728137583658571e-005;
  z = z * x + 7.8403922172006662e-004;
  z = z * x - 2.2947209362139917e-004;
  z = z * x - 2.6813271604938273e-003;
  z = z * x + 3.4722222222222220e-003;
  z = z * x + 8.3333333333333329e-002;
  z = z * x + 1.0000000000000000e+000;
  return z;
}

static double __host_tgamma_stirling(double a)
{
  double z;
  double x;
  z = __host_stirling_poly (a);
  if (a < 142.0) {
    x = pow (a, a - 0.5);
    a = x * exp (-a);
    a = a * 2.5066282746310007e+0;
    return a * z;
  } else if (a < 172.0) {
    x = pow (a, 0.5 * a - 0.25);
    a = x * exp (-a);
    a = a * 2.5066282746310007e+0;
    a = a * z;
    return a * x;
  } else {
    return exp(1000.0); 
  }
}

static double tgamma(double a)
{
  double s, xx, x = a;
  if (__isnan(a)) {
    return a + a;
  }
  if (fabs(x) < 20.0) {
    if (x >= 0.0) {
      s = 1.0;
      xx = x;
      while (xx > 1.5) {
        xx = xx - 1.0;
        s = s * xx;
      }
      if (x >= 0.5) {
        xx = xx - 1.0;
      }
      xx = __host_tgamma_kernel (xx);
      if (x < 0.5) {
        xx = xx * x;
      }
      s = s / xx;
    } else {
      xx = x;
      s = xx;
      if (x == floor(x)) {
        return 0.0 / (x - floor(x));
      }
      while (xx < -0.5) {
        xx = xx + 1.0;
        s = s * xx;
      }
      xx = __host_tgamma_kernel (xx);
      s = s * xx;
      s = 1.0 / s;
    }
    return s;
  } else {
    if (x >= 0.0) {
      return __host_tgamma_stirling (x);
    } else {
      double t;
      int quot;
      if (x == floor(x)) {
        return 0.0 / (x - floor(x));
      }
      if (x < -185.0) {
        int negative;
        x = floor(x);
        negative = ((x - (2.0 * floor(0.5 * x))) == 1.0);
        return negative ? (-1.0 / 1e308 / 1e308) : 0.0;
      }
      
      xx = rint (2.0 * x);
      quot = (int)xx;
      xx = -0.5 * xx + x;
      xx = xx * 3.1415926535897931e+0;
      if (quot & 1) {
        xx = cos (xx);
      } else {
        xx = sin (xx);
      }
      if (quot & 2) {
        xx = -xx;
      }
      x = fabs (x);
      s = exp (-x);
      t = x - 0.5;
      if (x > 140.0) t = 0.5 * t;
      t = pow (x, t);
      if (x > 140.0) s = s * t;
      s = s * __host_stirling_poly (x);
      s = s * x;
      s = s * xx;
      s = 1.0 / s;
      s = s * 1.2533141373155003e+0;
      s = s / t;
      return s;
    }
  }
}








static int __signbitf(float a)
{
  return __signbit((double)a);
}

static int __finitef(float a)
{
  return __finite((double)a);
}

static int __isinff(float a)
{
  return __isinf((double)a);
}

static int __isnanf(float a)
{
  return __isnan((double)a);
}

static float fmaxf(float a, float b)
{
  return (float)fmax((double)a, (double)b);
}

static float fminf(float a, float b)
{
  return (float)fmin((double)a, (double)b);
}

static float roundf(float a)
{
  return (float)round((double)a);
}

static long int lroundf(float a)
{
  return lround((double)a);
}

static long long int llroundf(float a)
{
  return llround((double)a);
}

static float truncf(float a)
{
  return (float)trunc((double)a);
}

static float rintf(float a)
{
  return (float)rint((double)a);
}

static float nearbyintf(float a)
{
  return (float)nearbyint((double)a);
}

static long int lrintf(float a)
{
  return lrint((double)a);
}

static long long int llrintf(float a)
{
  return llrint((double)a);
}

static float logbf(float a)
{
  return (float)logb((double)a);
}

static float scalblnf(float a, long int b)
{
  return (float)scalbln((double)a, b);
}

static float log2f(float a)
{
  return (float)log2((double)a);
}

static float exp2f(float a)
{
  return (float)exp2((double)a);
}

static float acoshf(float a)
{
  return (float)acosh((double)a);
}

static float asinhf(float a)
{
  return (float)asinh((double)a);
}

static float atanhf(float a)
{
  return (float)atanh((double)a);
}

static float cbrtf(float a)
{
  return (float)cbrt((double)a);
}

static float expm1f(float a)
{
  return (float)expm1((double)a);
}

static float fdimf(float a, float b)
{
  return (float)fdim((double)a, (double)b);
}

static float hypotf(float a, float b)
{
  return (float)hypot((double)a, (double)b);
}

static float log1pf(float a)
{
  return (float)log1p((double)a);
}

static float scalbnf(float a, int b)
{
  return (float)scalbn((double)a, b);
}

static float fmaf(float a, float b, float c)
{
  return (float)fma((double)a, (double)b, (double)c);
}

static int ilogbf(float a)
{
  return ilogb((double)a);
}

static float erff(float a)
{
  return (float)erf((double)a);
}

static float erfcf(float a)
{
  return (float)erfc((double)a);
}

static float lgammaf(float a)
{
  return (float)lgamma((double)a);
}

static float tgammaf(float a)
{
  return (float)tgamma((double)a);
}

static float remquof(float a, float b, int *quo)
{
  return (float)remquo((double)a, (double)b, quo);
}

static float remainderf(float a, float b)
{
  return (float)remainder((double)a, (double)b);
}







static float copysignf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } aa, bb;

  aa.f = a;
  bb.f = b;
  aa.i = (aa.i & ~0x80000000) | (bb.i & 0x80000000);
  return aa.f;
}

static float nextafterf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvt;
  unsigned int ia;
  unsigned int ib;
  cvt.f = a;
  ia = cvt.i;
  cvt.f = b;
  ib = cvt.i;
  if (__isnanf(a) || __isnanf(b)) return a + b; 
  if (((ia | ib) << 1) == 0) return b;
  if (a == 0.0f) {
    return copysignf(1.401298464e-045f, b); 
  }
  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  cvt.i = ia;
  return cvt.f;
}

static float nanf(const char *tagp)
{
  volatile union {
    float f;
    unsigned int i;
  } cvt;
  
  cvt.i = (unsigned int)__internal_host_nan_kernel(tagp);
  cvt.i = (cvt.i & 0x007fffff) | 0x7fc00000;
  return cvt.f;
}

#line 4672 "c:\\cuda\\include\\math_functions.h"







static double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

static double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  } 
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));                
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;


#line 4700 "c:\\cuda\\include\\math_functions.h"
  if (__signbit(a))
#line 4702 "c:\\cuda\\include\\math_functions.h"
  {
    t = -t;
  }
  return t;
}

static double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  } 
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

static double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;                    
    if (fa == 1.0) {
      t = a * exp(1000.0);        
    }
  } else if (fa >= 0.9375) {
    



    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p =         2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q =     t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {
    



    t = a * a - .87890625;
    p =         .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q =     t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {
    



    t = a * a - .5625;
    p =       - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q =     t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

static double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;                        
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);  
    }
  } 
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {
    



    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p =         2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q =     t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {
    



    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p =         6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q =     t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

static float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

static float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

static float sinpif(float a)
{
  return (float)sinpi((double)a);
}

static float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

static float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







static int min(int a, int b)
{
  return a < b ? a : b;
}

static unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

static long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

static unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

static int max(int a, int b)
{
  return a > b ? a : b;
}

static unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

static long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

static unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}

#line 4985 "c:\\cuda\\include\\math_functions.h"

#line 4987 "c:\\cuda\\include\\math_functions.h"





#line 4993 "c:\\cuda\\include\\math_functions.h"



#line 1 "c:\\cuda\\include\\math_functions_dbl_ptx1.h"















































































































































































































































































































































































































#line 401 "c:\\cuda\\include\\math_functions_dbl_ptx1.h"

#line 403 "c:\\cuda\\include\\math_functions_dbl_ptx1.h"
#line 4997 "c:\\cuda\\include\\math_functions.h"

#line 4999 "c:\\cuda\\include\\math_functions.h"





#line 5005 "c:\\cuda\\include\\math_functions.h"

#line 5007 "c:\\cuda\\include\\math_functions.h"

#line 88 "C:\\CUDA\\include\\common_functions.h"

#line 90 "C:\\CUDA\\include\\common_functions.h"

#line 166 "C:\\CUDA\\include\\crt/host_runtime.h"



#pragma warning(disable: 4099)





#line 176 "C:\\CUDA\\include\\crt/host_runtime.h"

#line 178 "C:\\CUDA\\include\\crt/host_runtime.h"

#line 180 "C:\\CUDA\\include\\crt/host_runtime.h"
#line 3 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.cudafe1.stub.c"
struct __T20 {void *__par0;void *__par1;int __dummy_field;};
struct __T21 {void *__par0;void *__par1;void *__par2;int __dummy_field;};
struct __T22 {void *__par0;void *__par1;void *__par2;int __dummy_field;};
struct __T23 {void *__par0;void *__par1;void *__par2;int __dummy_field;};
extern void __device_stub__Z5fillUPvS_(void *, void *);
extern void __device_stub__Z6calc_HPvS_S_(void *, void *, void *);
extern void __device_stub__Z6calc_EPvS_S_(void *, void *, void *);
extern void __device_stub__Z11calc_full_EPvS_S_(void *, void *, void *);
static void __sti____cudaRegisterAll_13_naive_cpp1_ii_51e07f2f(void);
#pragma section(".CRT$XCU",read)
__declspec(allocate(".CRT$XCU"))static void (*__dummy_static_init__sti____cudaRegisterAll_13_naive_cpp1_ii_51e07f2f[])(void) = {__sti____cudaRegisterAll_13_naive_cpp1_ii_51e07f2f};
void __device_stub__Z5fillUPvS_(void *__par0, void *__par1){ struct __T20 *__T211;
*(void**)(void*)&__T211 = (void*)0;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T211->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T211->__par1) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(void *, void *))fillU)); (void)cudaLaunch(((char *)((void ( *)(void *, void *))fillU))); };}
void fillU( void *__cuda_0,void *__cuda_1)
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{__device_stub__Z5fillUPvS_( __cuda_0,__cuda_1);
#line 47 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 1 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.cudafe1.stub.c"
void __device_stub__Z6calc_HPvS_S_( void *__par0,  void *__par1,  void *__par2) {  struct __T21 *__T212;
*(void**)(void*)&__T212 = (void*)0; if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T212->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T212->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T212->__par2) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(void *, void *, void *))calc_H)); (void)cudaLaunch(((char *)((void ( *)(void *, void *, void *))calc_H))); }; }
void calc_H( void *__cuda_0,void *__cuda_1,void *__cuda_2)
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{__device_stub__Z6calc_HPvS_S_( __cuda_0,__cuda_1,__cuda_2);
#line 72 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 1 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.cudafe1.stub.c"
void __device_stub__Z6calc_EPvS_S_( void *__par0,  void *__par1,  void *__par2) {  struct __T22 *__T213;
*(void**)(void*)&__T213 = (void*)0; if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T213->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T213->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T213->__par2) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(void *, void *, void *))calc_E)); (void)cudaLaunch(((char *)((void ( *)(void *, void *, void *))calc_E))); }; }
void calc_E( void *__cuda_0,void *__cuda_1,void *__cuda_2)
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{__device_stub__Z6calc_EPvS_S_( __cuda_0,__cuda_1,__cuda_2);
#line 100 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 1 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.cudafe1.stub.c"
void __device_stub__Z11calc_full_EPvS_S_( void *__par0,  void *__par1,  void *__par2) {  struct __T23 *__T214;
*(void**)(void*)&__T214 = (void*)0; if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T214->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T214->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T214->__par2) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(void *, void *, void *))calc_full_E)); (void)cudaLaunch(((char *)((void ( *)(void *, void *, void *))calc_full_E))); }; }
void calc_full_E( void *__cuda_0,void *__cuda_1,void *__cuda_2)
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{__device_stub__Z11calc_full_EPvS_S_( __cuda_0,__cuda_1,__cuda_2);
#line 147 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 1 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.cudafe1.stub.c"
static void __sti____cudaRegisterAll_13_naive_cpp1_ii_51e07f2f(void) {  __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(void *, void *, void *))calc_full_E), (char*)"_Z11calc_full_EPvS_S_", "_Z11calc_full_EPvS_S_", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(void *, void *, void *))calc_E), (char*)"_Z6calc_EPvS_S_", "_Z6calc_EPvS_S_", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(void *, void *, void *))calc_H), (char*)"_Z6calc_HPvS_S_", "_Z6calc_HPvS_S_", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(void *, void *))fillU), (char*)"_Z5fillUPvS_", "_Z5fillUPvS_", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&globalPrintfBuffer, (char*)"globalPrintfBuffer", "globalPrintfBuffer", 0, 8, 1, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&printfBufferLength, (char*)"printfBufferLength", "printfBufferLength", 0, 4, 1, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&restrictRules, (char*)"restrictRules", "restrictRules", 0, 8, 0, 0); __cudaRegisterVar(__cudaFatCubinHandle, (char*)&printfBufferPtr, (char*)"printfBufferPtr", "printfBufferPtr", 0, 8, 0, 0);  }
#line 2 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\naive.cudafe1.stub.c"

