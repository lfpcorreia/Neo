#line 1 "naive.cudafe2.gpu"
#line 97 "C:\\CUDA\\include\\cuPrintf.cu"
struct cuPrintfRestriction;
#line 117 "C:\\CUDA\\include\\cuPrintf.cu"
struct cuPrintfHeader;
#line 488 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
typedef unsigned long long size_t;
#line 1 "C:\\CUDA\\include\\crt/device_runtime.h"





































#line 1 "C:\\CUDA\\include\\host_defines.h"










































#line 44 "C:\\CUDA\\include\\host_defines.h"
























































#line 101 "C:\\CUDA\\include\\host_defines.h"










#line 112 "C:\\CUDA\\include\\host_defines.h"






#line 119 "C:\\CUDA\\include\\host_defines.h"




#line 124 "C:\\CUDA\\include\\host_defines.h"










#line 136 "C:\\CUDA\\include\\host_defines.h"












#line 149 "C:\\CUDA\\include\\host_defines.h"
#line 39 "C:\\CUDA\\include\\crt/device_runtime.h"





typedef const void *__texture_type__;

typedef const void *__surface_type__;








#line 56 "C:\\CUDA\\include\\crt/device_runtime.h"




#line 61 "C:\\CUDA\\include\\crt/device_runtime.h"



































#line 97 "C:\\CUDA\\include\\crt/device_runtime.h"

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


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
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


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
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


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
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


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
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




struct __attribute__((aligned(8))) long2 { long int x; long int y; };


struct __attribute__((aligned(8))) ulong2 { unsigned long int x; unsigned long int y; };















#line 241 "c:\\cuda\\include\\vector_types.h"


struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
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


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
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


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
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




#line 477 "c:\\cuda\\include\\vector_types.h"
};


typedef struct dim3 dim3;



#line 485 "c:\\cuda\\include\\vector_types.h"
#line 47 "c:\\cuda\\include\\builtin_types.h"
#line 99 "C:\\CUDA\\include\\crt/device_runtime.h"
#line 1 "C:\\CUDA\\include\\device_launch_parameters.h"






































#line 1 "c:\\cuda\\include\\vector_types.h"



































































































































































































































































































































































































































































































#line 485 "c:\\cuda\\include\\vector_types.h"
#line 40 "C:\\CUDA\\include\\device_launch_parameters.h"






#line 47 "C:\\CUDA\\include\\device_launch_parameters.h"



#line 51 "C:\\CUDA\\include\\device_launch_parameters.h"


uint3 extern const threadIdx;

uint3 extern const blockIdx;

dim3 extern const blockDim;

dim3 extern const gridDim;

int extern const warpSize;





#line 68 "C:\\CUDA\\include\\device_launch_parameters.h"






#line 75 "C:\\CUDA\\include\\device_launch_parameters.h"






#line 82 "C:\\CUDA\\include\\device_launch_parameters.h"






#line 89 "C:\\CUDA\\include\\device_launch_parameters.h"






#line 96 "C:\\CUDA\\include\\device_launch_parameters.h"






#line 103 "C:\\CUDA\\include\\device_launch_parameters.h"

#line 105 "C:\\CUDA\\include\\device_launch_parameters.h"
#line 100 "C:\\CUDA\\include\\crt/device_runtime.h"
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
#line 101 "C:\\CUDA\\include\\crt/device_runtime.h"
#line 490 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#line 93 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
typedef long clock_t;
#line 97 "C:\\CUDA\\include\\cuPrintf.cu"
struct __attribute__((aligned(8))) cuPrintfRestriction {
#line 98 "C:\\CUDA\\include\\cuPrintf.cu"
int threadid;
#line 99 "C:\\CUDA\\include\\cuPrintf.cu"
int blockid;};
#line 100 "C:\\CUDA\\include\\cuPrintf.cu"
typedef struct cuPrintfRestriction cuPrintfRestriction;
#line 117 "C:\\CUDA\\include\\cuPrintf.cu"
struct __attribute__((aligned(8))) cuPrintfHeader {
#line 118 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short magic;
#line 119 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short fmtoffset;
#line 120 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short blockid;
#line 121 "C:\\CUDA\\include\\cuPrintf.cu"
unsigned short threadid;};
#line 122 "C:\\CUDA\\include\\cuPrintf.cu"
typedef struct cuPrintfHeader cuPrintfHeader;



#line 127 "C:\\CUDA\\include\\cuPrintf.cu"



#line 131 "C:\\CUDA\\include\\cuPrintf.cu"



#line 135 "C:\\CUDA\\include\\cuPrintf.cu"



#line 139 "C:\\CUDA\\include\\cuPrintf.cu"



#line 143 "C:\\CUDA\\include\\cuPrintf.cu"



#line 147 "C:\\CUDA\\include\\cuPrintf.cu"



#line 151 "C:\\CUDA\\include\\cuPrintf.cu"



#line 155 "C:\\CUDA\\include\\cuPrintf.cu"



#line 159 "C:\\CUDA\\include\\cuPrintf.cu"



#line 163 "C:\\CUDA\\include\\cuPrintf.cu"



#line 167 "C:\\CUDA\\include\\cuPrintf.cu"



#line 171 "C:\\CUDA\\include\\cuPrintf.cu"



#line 175 "C:\\CUDA\\include\\cuPrintf.cu"



#line 179 "C:\\CUDA\\include\\cuPrintf.cu"



#line 183 "C:\\CUDA\\include\\cuPrintf.cu"



#line 187 "C:\\CUDA\\include\\cuPrintf.cu"



#line 191 "C:\\CUDA\\include\\cuPrintf.cu"



#line 195 "C:\\CUDA\\include\\cuPrintf.cu"



#line 199 "C:\\CUDA\\include\\cuPrintf.cu"



#line 203 "C:\\CUDA\\include\\cuPrintf.cu"



#line 207 "C:\\CUDA\\include\\cuPrintf.cu"



#line 211 "C:\\CUDA\\include\\cuPrintf.cu"



#line 215 "C:\\CUDA\\include\\cuPrintf.cu"



#line 219 "C:\\CUDA\\include\\cuPrintf.cu"



#line 223 "C:\\CUDA\\include\\cuPrintf.cu"



#line 227 "C:\\CUDA\\include\\cuPrintf.cu"



#line 231 "C:\\CUDA\\include\\cuPrintf.cu"



#line 235 "C:\\CUDA\\include\\cuPrintf.cu"



#line 239 "C:\\CUDA\\include\\cuPrintf.cu"



#line 243 "C:\\CUDA\\include\\cuPrintf.cu"



#line 247 "C:\\CUDA\\include\\cuPrintf.cu"



#line 251 "C:\\CUDA\\include\\cuPrintf.cu"



#line 255 "C:\\CUDA\\include\\cuPrintf.cu"



#line 259 "C:\\CUDA\\include\\cuPrintf.cu"



#line 263 "C:\\CUDA\\include\\cuPrintf.cu"



#line 267 "C:\\CUDA\\include\\cuPrintf.cu"



#line 271 "C:\\CUDA\\include\\cuPrintf.cu"



#line 275 "C:\\CUDA\\include\\cuPrintf.cu"



#line 279 "C:\\CUDA\\include\\cuPrintf.cu"



#line 283 "C:\\CUDA\\include\\cuPrintf.cu"



#line 287 "C:\\CUDA\\include\\cuPrintf.cu"



#line 291 "C:\\CUDA\\include\\cuPrintf.cu"



#line 295 "C:\\CUDA\\include\\cuPrintf.cu"



#line 299 "C:\\CUDA\\include\\cuPrintf.cu"



#line 303 "C:\\CUDA\\include\\cuPrintf.cu"



#line 307 "C:\\CUDA\\include\\cuPrintf.cu"



#line 311 "C:\\CUDA\\include\\cuPrintf.cu"



#line 315 "C:\\CUDA\\include\\cuPrintf.cu"



#line 319 "C:\\CUDA\\include\\cuPrintf.cu"



#line 323 "C:\\CUDA\\include\\cuPrintf.cu"



#line 327 "C:\\CUDA\\include\\cuPrintf.cu"



#line 331 "C:\\CUDA\\include\\cuPrintf.cu"



#line 335 "C:\\CUDA\\include\\cuPrintf.cu"



#line 339 "C:\\CUDA\\include\\cuPrintf.cu"



#line 343 "C:\\CUDA\\include\\cuPrintf.cu"



#line 347 "C:\\CUDA\\include\\cuPrintf.cu"



#line 351 "C:\\CUDA\\include\\cuPrintf.cu"



#line 355 "C:\\CUDA\\include\\cuPrintf.cu"



#line 359 "C:\\CUDA\\include\\cuPrintf.cu"



#line 363 "C:\\CUDA\\include\\cuPrintf.cu"



#line 367 "C:\\CUDA\\include\\cuPrintf.cu"



#line 371 "C:\\CUDA\\include\\cuPrintf.cu"



#line 375 "C:\\CUDA\\include\\cuPrintf.cu"



#line 379 "C:\\CUDA\\include\\cuPrintf.cu"



#line 383 "C:\\CUDA\\include\\cuPrintf.cu"



#line 387 "C:\\CUDA\\include\\cuPrintf.cu"



#line 391 "C:\\CUDA\\include\\cuPrintf.cu"



#line 395 "C:\\CUDA\\include\\cuPrintf.cu"



#line 399 "C:\\CUDA\\include\\cuPrintf.cu"



#line 403 "C:\\CUDA\\include\\cuPrintf.cu"



#line 407 "C:\\CUDA\\include\\cuPrintf.cu"



#line 411 "C:\\CUDA\\include\\cuPrintf.cu"



#line 415 "C:\\CUDA\\include\\cuPrintf.cu"



#line 419 "C:\\CUDA\\include\\cuPrintf.cu"



#line 423 "C:\\CUDA\\include\\cuPrintf.cu"



#line 427 "C:\\CUDA\\include\\cuPrintf.cu"



#line 431 "C:\\CUDA\\include\\cuPrintf.cu"



#line 435 "C:\\CUDA\\include\\cuPrintf.cu"



#line 439 "C:\\CUDA\\include\\cuPrintf.cu"



#line 443 "C:\\CUDA\\include\\cuPrintf.cu"



#line 447 "C:\\CUDA\\include\\cuPrintf.cu"



#line 451 "C:\\CUDA\\include\\cuPrintf.cu"



#line 455 "C:\\CUDA\\include\\cuPrintf.cu"



#line 459 "C:\\CUDA\\include\\cuPrintf.cu"



#line 463 "C:\\CUDA\\include\\cuPrintf.cu"



#line 467 "C:\\CUDA\\include\\cuPrintf.cu"



#line 471 "C:\\CUDA\\include\\cuPrintf.cu"



#line 475 "C:\\CUDA\\include\\cuPrintf.cu"



#line 479 "C:\\CUDA\\include\\cuPrintf.cu"



#line 483 "C:\\CUDA\\include\\cuPrintf.cu"



#line 487 "C:\\CUDA\\include\\cuPrintf.cu"



#line 491 "C:\\CUDA\\include\\cuPrintf.cu"



#line 495 "C:\\CUDA\\include\\cuPrintf.cu"



#line 499 "C:\\CUDA\\include\\cuPrintf.cu"



#line 503 "C:\\CUDA\\include\\cuPrintf.cu"



#line 507 "C:\\CUDA\\include\\cuPrintf.cu"



#line 511 "C:\\CUDA\\include\\cuPrintf.cu"



#line 515 "C:\\CUDA\\include\\cuPrintf.cu"



#line 519 "C:\\CUDA\\include\\cuPrintf.cu"



#line 523 "C:\\CUDA\\include\\cuPrintf.cu"



#line 527 "C:\\CUDA\\include\\cuPrintf.cu"



#line 531 "C:\\CUDA\\include\\cuPrintf.cu"



#line 535 "C:\\CUDA\\include\\cuPrintf.cu"



#line 539 "C:\\CUDA\\include\\cuPrintf.cu"



#line 543 "C:\\CUDA\\include\\cuPrintf.cu"



#line 547 "C:\\CUDA\\include\\cuPrintf.cu"



#line 551 "C:\\CUDA\\include\\cuPrintf.cu"



#line 555 "C:\\CUDA\\include\\cuPrintf.cu"



#line 559 "C:\\CUDA\\include\\cuPrintf.cu"



#line 563 "C:\\CUDA\\include\\cuPrintf.cu"



#line 567 "C:\\CUDA\\include\\cuPrintf.cu"



#line 571 "C:\\CUDA\\include\\cuPrintf.cu"



#line 575 "C:\\CUDA\\include\\cuPrintf.cu"



#line 579 "C:\\CUDA\\include\\cuPrintf.cu"



#line 583 "C:\\CUDA\\include\\cuPrintf.cu"



#line 587 "C:\\CUDA\\include\\cuPrintf.cu"



#line 591 "C:\\CUDA\\include\\cuPrintf.cu"



#line 595 "C:\\CUDA\\include\\cuPrintf.cu"



#line 599 "C:\\CUDA\\include\\cuPrintf.cu"



#line 603 "C:\\CUDA\\include\\cuPrintf.cu"



#line 607 "C:\\CUDA\\include\\cuPrintf.cu"



#line 611 "C:\\CUDA\\include\\cuPrintf.cu"



#line 615 "C:\\CUDA\\include\\cuPrintf.cu"



#line 619 "C:\\CUDA\\include\\cuPrintf.cu"



#line 623 "C:\\CUDA\\include\\cuPrintf.cu"



#line 627 "C:\\CUDA\\include\\cuPrintf.cu"



#line 631 "C:\\CUDA\\include\\cuPrintf.cu"



#line 635 "C:\\CUDA\\include\\cuPrintf.cu"



#line 639 "C:\\CUDA\\include\\cuPrintf.cu"



#line 643 "C:\\CUDA\\include\\cuPrintf.cu"



#line 647 "C:\\CUDA\\include\\cuPrintf.cu"



#line 651 "C:\\CUDA\\include\\cuPrintf.cu"



#line 655 "C:\\CUDA\\include\\cuPrintf.cu"



#line 659 "C:\\CUDA\\include\\cuPrintf.cu"



#line 663 "C:\\CUDA\\include\\cuPrintf.cu"



#line 667 "C:\\CUDA\\include\\cuPrintf.cu"



#line 671 "C:\\CUDA\\include\\cuPrintf.cu"



#line 675 "C:\\CUDA\\include\\cuPrintf.cu"



#line 679 "C:\\CUDA\\include\\cuPrintf.cu"



#line 683 "C:\\CUDA\\include\\cuPrintf.cu"



#line 687 "C:\\CUDA\\include\\cuPrintf.cu"



#line 691 "C:\\CUDA\\include\\cuPrintf.cu"



#line 695 "C:\\CUDA\\include\\cuPrintf.cu"



#line 699 "C:\\CUDA\\include\\cuPrintf.cu"



#line 703 "C:\\CUDA\\include\\cuPrintf.cu"



#line 707 "C:\\CUDA\\include\\cuPrintf.cu"



#line 711 "C:\\CUDA\\include\\cuPrintf.cu"



#line 715 "C:\\CUDA\\include\\cuPrintf.cu"



#line 719 "C:\\CUDA\\include\\cuPrintf.cu"



#line 723 "C:\\CUDA\\include\\cuPrintf.cu"



#line 727 "C:\\CUDA\\include\\cuPrintf.cu"



#line 731 "C:\\CUDA\\include\\cuPrintf.cu"



#line 735 "C:\\CUDA\\include\\cuPrintf.cu"



#line 739 "C:\\CUDA\\include\\cuPrintf.cu"



#line 743 "C:\\CUDA\\include\\cuPrintf.cu"



#line 747 "C:\\CUDA\\include\\cuPrintf.cu"



#line 751 "C:\\CUDA\\include\\cuPrintf.cu"



#line 755 "C:\\CUDA\\include\\cuPrintf.cu"



#line 759 "C:\\CUDA\\include\\cuPrintf.cu"



#line 763 "C:\\CUDA\\include\\cuPrintf.cu"



#line 767 "C:\\CUDA\\include\\cuPrintf.cu"



#line 771 "C:\\CUDA\\include\\cuPrintf.cu"



#line 775 "C:\\CUDA\\include\\cuPrintf.cu"



#line 779 "C:\\CUDA\\include\\cuPrintf.cu"



#line 783 "C:\\CUDA\\include\\cuPrintf.cu"



#line 787 "C:\\CUDA\\include\\cuPrintf.cu"



#line 791 "C:\\CUDA\\include\\cuPrintf.cu"



#line 795 "C:\\CUDA\\include\\cuPrintf.cu"



#line 799 "C:\\CUDA\\include\\cuPrintf.cu"



#line 803 "C:\\CUDA\\include\\cuPrintf.cu"



#line 807 "C:\\CUDA\\include\\cuPrintf.cu"



#line 811 "C:\\CUDA\\include\\cuPrintf.cu"



#line 815 "C:\\CUDA\\include\\cuPrintf.cu"



#line 819 "C:\\CUDA\\include\\cuPrintf.cu"



#line 823 "C:\\CUDA\\include\\cuPrintf.cu"



#line 827 "C:\\CUDA\\include\\cuPrintf.cu"



#line 831 "C:\\CUDA\\include\\cuPrintf.cu"



#line 835 "C:\\CUDA\\include\\cuPrintf.cu"



#line 839 "C:\\CUDA\\include\\cuPrintf.cu"



#line 843 "C:\\CUDA\\include\\cuPrintf.cu"



#line 847 "C:\\CUDA\\include\\cuPrintf.cu"



#line 851 "C:\\CUDA\\include\\cuPrintf.cu"



#line 855 "C:\\CUDA\\include\\cuPrintf.cu"



#line 859 "C:\\CUDA\\include\\cuPrintf.cu"



#line 863 "C:\\CUDA\\include\\cuPrintf.cu"



#line 867 "C:\\CUDA\\include\\cuPrintf.cu"



#line 871 "C:\\CUDA\\include\\cuPrintf.cu"



#line 875 "C:\\CUDA\\include\\cuPrintf.cu"



#line 879 "C:\\CUDA\\include\\cuPrintf.cu"



#line 883 "C:\\CUDA\\include\\cuPrintf.cu"



#line 887 "C:\\CUDA\\include\\cuPrintf.cu"



#line 891 "C:\\CUDA\\include\\cuPrintf.cu"



#line 895 "C:\\CUDA\\include\\cuPrintf.cu"



#line 899 "C:\\CUDA\\include\\cuPrintf.cu"



#line 903 "C:\\CUDA\\include\\cuPrintf.cu"



#line 907 "C:\\CUDA\\include\\cuPrintf.cu"



#line 911 "C:\\CUDA\\include\\cuPrintf.cu"



#line 915 "C:\\CUDA\\include\\cuPrintf.cu"



#line 919 "C:\\CUDA\\include\\cuPrintf.cu"



#line 923 "C:\\CUDA\\include\\cuPrintf.cu"



#line 927 "C:\\CUDA\\include\\cuPrintf.cu"



#line 931 "C:\\CUDA\\include\\cuPrintf.cu"



#line 935 "C:\\CUDA\\include\\cuPrintf.cu"



#line 939 "C:\\CUDA\\include\\cuPrintf.cu"



#line 943 "C:\\CUDA\\include\\cuPrintf.cu"



#line 947 "C:\\CUDA\\include\\cuPrintf.cu"



#line 951 "C:\\CUDA\\include\\cuPrintf.cu"



#line 955 "C:\\CUDA\\include\\cuPrintf.cu"



#line 959 "C:\\CUDA\\include\\cuPrintf.cu"



#line 963 "C:\\CUDA\\include\\cuPrintf.cu"



#line 967 "C:\\CUDA\\include\\cuPrintf.cu"



#line 971 "C:\\CUDA\\include\\cuPrintf.cu"



#line 975 "C:\\CUDA\\include\\cuPrintf.cu"



#line 979 "C:\\CUDA\\include\\cuPrintf.cu"



#line 983 "C:\\CUDA\\include\\cuPrintf.cu"



#line 987 "C:\\CUDA\\include\\cuPrintf.cu"



#line 991 "C:\\CUDA\\include\\cuPrintf.cu"



#line 995 "C:\\CUDA\\include\\cuPrintf.cu"



#line 999 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1003 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1007 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1011 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1015 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1019 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1023 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1027 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1031 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1035 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1039 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1043 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1047 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1051 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1055 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1059 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1063 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1067 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1071 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1075 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1079 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1083 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1087 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1091 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1095 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1099 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1103 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1107 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1111 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1115 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1119 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1123 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1127 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1131 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1135 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1139 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1143 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1147 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1151 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1155 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1159 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1163 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1167 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1171 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1175 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1179 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1183 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1187 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1191 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1195 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1199 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1203 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1207 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1211 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1215 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1219 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1223 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1227 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1231 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1235 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1239 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1243 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1247 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1251 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1255 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1259 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1263 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1267 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1271 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1275 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1279 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1283 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1287 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1291 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1295 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1299 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1303 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1307 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1311 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1315 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1319 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1323 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1327 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1331 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1335 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1339 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1343 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1347 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1351 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1355 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1359 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1363 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1367 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1371 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1375 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1379 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1383 "C:\\CUDA\\include\\cuPrintf.cu"



#line 1387 "C:\\CUDA\\include\\cuPrintf.cu"
#line 473 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
static __inline__ float _Z8_Pow_intIfET_S0_i(float, int);
#line 160 "C:\\CUDA\\include\\cuPrintf.cu"
static char *_Z19getNextPrintfBufPtrv(void);
#line 232 "C:\\CUDA\\include\\cuPrintf.cu"
static void _Z17writePrintfHeaderPcS_(char *, char *);
#line 257 "C:\\CUDA\\include\\cuPrintf.cu"
static char *_Z15cuPrintfStrncpyPcPKciS_(char *, const char *, int, char *);
#line 385 "C:\\CUDA\\include\\cuPrintf.cu"
static int _Z8cuPrintfPKc(const char *);
#line 530 "C:\\CUDA\\include\\cuPrintf.cu"
static void _Z16cuPrintfRestrictii(int, int);
#line 540 "C:\\CUDA\\include\\cuPrintf.cu"
__attribute__((global)) __attribute__((__used__)) extern void _Z5fillUPvS_(void *, void *);
#line 48 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__attribute__((global)) __attribute__((__used__)) extern void _Z6calc_HPvS_S_(void *, void *, void *);
#line 73 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__attribute__((global)) __attribute__((__used__)) extern void _Z6calc_EPvS_S_(void *, void *, void *);
#line 101 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__attribute__((global)) __attribute__((__used__)) extern void _Z11calc_full_EPvS_S_(void *, void *, void *);
#line 112 "C:\\CUDA\\include\\cuPrintf.cu"
static __attribute__((__used__)) __attribute__((device)) cuPrintfRestriction restrictRules;
#line 77 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
extern __attribute__((shared)) float tmp[];
#line 106 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
extern __attribute__((shared)) float tmp2[];
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






#line 1 "c:\\cuda\\include\\device_functions.h"

















































































































































































































































































































































































































































































#line 467 "c:\\cuda\\include\\device_functions.h"







static __inline__ __attribute__((always_inline)) float __sinf(float a)
{
  return __builtin_sinf(a);
}

static __inline__ __attribute__((always_inline)) float __cosf(float a)
{
  return __builtin_cosf(a);
}

static __inline__ __attribute__((always_inline)) float __log2f(float a)
{
  return __builtin_log2f(a);
}







static __inline__ __attribute__((always_inline)) float __tanf(float a)
{
  return __fdividef (__sinf(a), __cosf(a));
}

static __inline__ __attribute__((always_inline)) void __sincosf(float a, float *sptr, float *cptr)
{
  *sptr = __sinf(a);
  *cptr = __cosf(a);
}

static __inline__ __attribute__((always_inline)) float __expf(float a)
{
  return exp2f(a * 1.442695041f);
}

static __inline__ __attribute__((always_inline)) float __exp10f(float a)
{
  return exp2f(a * 3.321928094f);
}

static __inline__ __attribute__((always_inline)) float __log10f(float a)
{
  return 0.301029996f * __log2f(a);
}

static __inline__ __attribute__((always_inline)) float __logf(float a)
{
  return 0.693147181f * __log2f(a);
}

static __inline__ __attribute__((always_inline)) float __powf(float a, float b)
{
  return exp2f(b * __log2f(a));
}

static __inline__ __attribute__((always_inline)) float fdividef(float a, float b)
{


#line 536 "c:\\cuda\\include\\device_functions.h"
  return a / b;
#line 538 "c:\\cuda\\include\\device_functions.h"
}



static __inline__ __attribute__((always_inline)) double fdivide(double a, double b)
{
  return (double)fdividef((float)a, (float)b);
}

#line 548 "c:\\cuda\\include\\device_functions.h"








#line 557 "c:\\cuda\\include\\device_functions.h"



static __inline__ __attribute__((always_inline)) float __frcp_rn (float x)
{
  unsigned int expo;
  unsigned f, y;
  unsigned int argi;
  float t;
    
  argi = __float_as_int(x);
  expo = (argi >> 23);
  expo = expo & 0xff;
  f = expo - 1;
  if (f <= 0xFD) {
    y = (argi & 0x00ffffff) | 0x00800000;
    expo = (2 * 127) - expo - 2;
    t = 1.0f / x;
    argi = __float_as_int(t);
    argi = (argi & 0x00ffffff) | 0x00800000;
    if ((int)expo >= 0) {
      
      f = __umul24(y, argi);
      
      if ((int)f > 0) { 
        t = __int_as_float(__float_as_int(t)-1);
        f -= y; 
      }
      
      expo = f + y;
      
      f = (unsigned)(-(int)f);
      if (expo < f) {
        t = __int_as_float(__float_as_int(t)+1);
      }
      return t;
    }
  }
  return 1.0f / x;
}
 
static __inline__ __attribute__((always_inline)) float __frcp_rz (float x)
{
  unsigned int expo;
  unsigned f, y;
  unsigned int argi;
  float t;
    
  argi = __float_as_int(x);
  expo = (argi >> 23);
  expo = expo & 0xff;
  f = expo - 1;
  if (f <= 0xFD) {
    y = (argi & 0x00ffffff) | 0x00800000;
    expo = (2 * 127) - expo - 2;
    t = 1.0f / x;
    argi = __float_as_int(t);
    argi = (argi & 0x00ffffff) | 0x00800000;
    if ((int)expo >= 0) {
      f = __umul24(y, argi);
      if ((int)f > 0) { 
        t = __int_as_float(__float_as_int(t)-1);
      }
      return t;
    }
  }
  return 1.0f / x;
}

static __inline__ __attribute__((always_inline)) float __frcp_rd (float x)
{
  unsigned int expo;
  unsigned f, y;
  unsigned int argi;
  float t;
    
  argi = __float_as_int(x);
  expo = (argi >> 23);
  expo = expo & 0xff;
  f = expo - 1;
  if (f <= 0xFD) {
    y = (argi & 0x00ffffff) | 0x00800000;
    expo = (2 * 127) - expo - 2;
    t = 1.0f / x;
    argi = __float_as_int(t);
    argi = (argi & 0x00ffffff) | 0x00800000;
    if ((int)expo >= 0) {
      f = __umul24(y, argi);
      if (((int)f > 0) && (x > 0.0f)) { 
        t = __int_as_float(__float_as_int(t)-1);
      }
      if (((int)f < 0) && (x < 0.0f)) { 
        t = __int_as_float(__float_as_int(t)+1);
      }
      return t;
    }
  }
  return 1.0f / x;
}

static __inline__ __attribute__((always_inline)) float __frcp_ru (float x)
{
  unsigned int expo;
  unsigned f, y;
  unsigned int argi;
  float t;
    
  argi = __float_as_int(x);
  expo = (argi >> 23);
  expo = expo & 0xff;
  f = expo - 1;
  if (f <= 0xFD) {
    y = (argi & 0x00ffffff) | 0x00800000;
    expo = (2 * 127) - expo - 2;
    t = 1.0f / x;
    argi = __float_as_int(t);
    argi = (argi & 0x00ffffff) | 0x00800000;
    if ((int)expo >= 0) {
      f = __umul24(y, argi);
      if (((int)f > 0) && (x < 0.0f)) { 
        t = __int_as_float(__float_as_int(t)-1);
      }
      if (((int)f < 0) && (x > 0.0f)) { 
        t = __int_as_float(__float_as_int(t)+1);
      }
      return t;
    }
  }
  return 1.0f / x;
}

static __inline__ __attribute__((always_inline)) float __fsqrt_rn (float radicand)
{
  unsigned int expo, argi;
  unsigned int s, f, x;

  argi = __float_as_int(radicand);
  expo = argi >> 23;
  expo = expo & 0xff;
  f = expo - 1;

  if ((argi <= 0x80000000) && (f <= 0xFD)) {
    x = (argi << 8) | 0x80000000;
    x = x >> (expo & 1);
    argi = (((__float_as_int(rsqrtf(__int_as_float(
              __float_as_int(radicand)|1)))&0x00ffffff)|0x00800000)<<7);
    
    s = __umulhi(argi,argi);
    f = 0x30000000 - __umulhi(x,s);
    argi = __umulhi(f,argi);
    
    argi = __umulhi(x,argi);
    argi = argi >> 3;
    x = (x << 16) - (argi * argi);
    
    f = x - (2 * argi + 1);
    if ((int)f < 0) f = (unsigned)(-(int)f);
    if ((int)x < 0) x = (unsigned)(-(int)x);
    if (f < x) argi ++;
    argi = argi + (((expo + 125) & ~0x1) << 22);
    return __int_as_float(argi);
  }
  return sqrtf(radicand);
}

static __inline__ __attribute__((always_inline)) float __fsqrt_rz (float radicand)
{
  unsigned int expo, argi;
  unsigned int s, f, x;

  argi = __float_as_int(radicand);
  expo = argi >> 23;
  expo = expo & 0xff;
  f = expo - 1;

  if ((argi <= 0x80000000) && (f <= 0xFD)) {
    x = (argi << 8) | 0x80000000;
    x = x >> (expo & 1);
    argi = (((__float_as_int(rsqrtf(__int_as_float(
              __float_as_int(radicand)|1)))&0x00ffffff)|0x00800000)<<7);
    
    s = __umulhi(argi,argi);
    f = 0x30000000 - __umulhi(x,s);
    argi = __umulhi(f,argi);
    
    argi = __umulhi(x,argi);
    
    argi = (argi + 4) >> 3;
    x = (x << 16) - (argi * argi);
    if ((int)x < 0) argi--;
    argi = argi + (((expo + 125) & ~0x1) << 22);
    return __int_as_float(argi);
  }
  return sqrtf(radicand);
}

static __inline__ __attribute__((always_inline)) float __fsqrt_ru (float radicand)
{
  unsigned int expo, argi;
  unsigned int s, f, x;

  argi = __float_as_int(radicand);
  expo = argi >> 23;
  expo = expo & 0xff;
  f = expo - 1;

  if ((argi <= 0x80000000) && (f <= 0xFD)) {
    x = (argi << 8) | 0x80000000;
    x = x >> (expo & 1);
    argi = (((__float_as_int(rsqrtf(__int_as_float(
              __float_as_int(radicand)|1)))&0x00ffffff)|0x00800000)<<7);
    
    s = __umulhi(argi,argi);
    f = 0x30000000 - __umulhi(x,s);
    argi = __umulhi(f,argi);
    
    argi = __umulhi(x,argi);
    argi = (argi + 4) >> 3;
    x = (x << 16) - (argi * argi);
    if ((int)x > 0) argi++;
    argi = argi + (((expo + 125) & ~0x1) << 22);
    return __int_as_float(argi);
  }
  return sqrtf(radicand);
}

static __inline__ __attribute__((always_inline)) float __fsqrt_rd (float radicand)
{
  unsigned int expo, argi;
  unsigned int s, f, x;

  argi = __float_as_int(radicand);
  expo = argi >> 23;
  expo = expo & 0xff;
  f = expo - 1;

  if ((argi <= 0x80000000) && (f <= 0xFD)) {
    x = (argi << 8) | 0x80000000;
    x = x >> (expo & 1);
    argi = (((__float_as_int(rsqrtf(__int_as_float(
              __float_as_int(radicand)|1)))&0x00ffffff)|0x00800000)<<7);
    
    s = __umulhi(argi,argi);
    f = 0x30000000 - __umulhi(x,s);
    argi = __umulhi(f,argi);
    
    argi = __umulhi(x,argi);
    
    argi = (argi + 4) >> 3;
    x = (x << 16) - (argi * argi);
    if ((int)x < 0) argi--;
    argi = argi + (((expo + 125) & ~0x1) << 22);
    return __int_as_float(argi);
  }
  return sqrtf(radicand);
}

static __inline__ __attribute__((always_inline)) float __fdiv_rn (float dividend, float divisor)
{
  unsigned long long prod;
  unsigned r, f, x, y, expox, expoy, sign;
  unsigned expo_res;
  unsigned resi, cvtxi, cvtyi;
  float t;

  cvtxi = __float_as_int(dividend);
  cvtyi = __float_as_int(divisor);
  expox = (cvtxi >> 23) & 0xff;
  expoy = (cvtyi >> 23) & 0xff;
  sign  = ((cvtxi ^ cvtyi) & 0x80000000);

  if (((expox - 1) <= 0xFD) && ((expoy - 1) <= 0xFD)) {
    expo_res = expox - expoy + 127 - 1;
    
    y = (cvtyi << 8) | 0x80000000;
    x = (cvtxi & 0x00ffffff) | 0x00800000;
    t =__int_as_float((cvtyi & 0x00ffffff) | 0x3f800001);
    r = ((__float_as_int(1.0f / t) & 0x00ffffff) | 0x00800000) << 7;
      
    f = (unsigned)-(int)__umulhi (y, r << 1);
    r = __umulhi (f, r << 1);
    
    prod = ((unsigned long long)x) * (r << 1);
    
    if (((int)((prod >> 32) << 8)) > 0) {
      expo_res--;
      prod = prod + prod;
    }
    
    r = (unsigned)(prod >> 32);
    y = y >> 8;
    
    if (expo_res <= 0xFD) {
      int rem0, rem1, inc;
      
      prod = ((unsigned long long)y) * r;
      x = x << (23 + ((prod >> 32) >> 15));
      rem1 = x - (unsigned)(prod & 0xffffffff);
      rem0 = rem1 - y;
      inc = abs(rem0) < abs(rem1);
      
      resi = sign | ((expo_res << 23) + r + inc);
      return __int_as_float(resi);
    } else if ((int)expo_res >= 254) {
      
      resi = sign | 0x7f800000;
      return __int_as_float(resi);
    } else {
      
      int rem0, rem1, inc;
      prod = ((unsigned long long)y) * r;
      x = x << (23 + ((prod >> 32) >> 15));
      rem1 = x - (unsigned)(prod & 0xffffffff);
      rem0 = rem1 - y;
      inc = abs(rem0) < abs(rem1);
      resi = ((expo_res << 23) + r + inc);
      if (resi != 0x00800000) resi = 0;
      return __int_as_float(sign | resi);
    }
  }
  if (fabsf(divisor) > 8.507059173e37f) {
    divisor  *= 0.25f;
    dividend *= 0.25f;
  }
  return __fdividef (dividend, divisor);
}

static __inline__ __attribute__((always_inline)) float __fdiv_rz (float dividend, float divisor)
{
  unsigned long long prod;
  unsigned r, f, x, y, expox, expoy, sign;
  unsigned expo_res;
  unsigned resi, cvtxi, cvtyi;
  float t;

  cvtxi = __float_as_int(dividend);
  cvtyi = __float_as_int(divisor);
  expox = (cvtxi >> 23) & 0xff;
  expoy = (cvtyi >> 23) & 0xff;
  sign  = ((cvtxi ^ cvtyi) & 0x80000000);

  if (((expox - 1) <= 0xFD) && ((expoy - 1) <= 0xFD)) {
    expo_res = expox - expoy + 127 - 1;
    
    y = (cvtyi << 8) | 0x80000000;
    x = (cvtxi & 0x00ffffff) | 0x00800000;
    t =__int_as_float((cvtyi & 0x00ffffff) | 0x3f800001);
    r = ((__float_as_int(1.0f / t) & 0x00ffffff) | 0x00800000) << 7;
      
    f = (unsigned)-(int)__umulhi (y, r << 1);
    r = __umulhi (f, r << 1);
    
    prod = ((unsigned long long)x) * (r << 1);
    
    if (((int)((prod >> 32) << 8)) > 0) {
      expo_res--;
      prod = prod + prod;
    }
    
    prod += 0x0000000080000000ULL;
    r = (unsigned)(prod >> 32);
    y = y >> 8;
    if (expo_res <= 0xFD) {
      
      int rem1;
      prod = ((unsigned long long)y) * r;
      x = x << (23 + ((prod >> 32) >> 15));
      rem1 = x - (unsigned)(prod & 0xffffffff);
      if (rem1 < 0) r--;
      resi = (expo_res << 23) + r;
      if (resi == 0x7f800000) resi = 0x7f7fffff;
      return __int_as_float(sign | resi);
    } else if ((int)expo_res >= 254) {
      
      resi = 0x7f7fffff;
      return __int_as_float(sign |resi);
    } else {
      
      int rem1;
      prod = ((unsigned long long)y) * r;
      x = x << (23 + ((prod >> 32) >> 15));
      rem1 = x - (unsigned)(prod & 0xffffffff);
      if (rem1 < 0) r--;
      resi = ((expo_res << 23) + r);
      if (resi != 0x00800000) resi = 0;
      return __int_as_float(sign | resi);
    }
  }
  if (fabsf(divisor) > 8.507059173e37f) {
    divisor  *= 0.25f;
    dividend *= 0.25f;
  }
  return __fdividef (dividend, divisor);
}

static __inline__ __attribute__((always_inline)) float __fdiv_ru (float dividend, float divisor)
{
  unsigned long long prod;
  unsigned r, f, x, y, expox, expoy, sign;
  unsigned expo_res;
  unsigned resi, cvtxi, cvtyi;
  float t;

  cvtxi = __float_as_int(dividend);
  cvtyi = __float_as_int(divisor);
  expox = (cvtxi >> 23) & 0xff;
  expoy = (cvtyi >> 23) & 0xff;
  sign  = ((cvtxi ^ cvtyi) & 0x80000000);

  if (((expox - 1) <= 0xFD) && ((expoy - 1) <= 0xFD)) {
    expo_res = expox - expoy + 127 - 1;
    
    y = (cvtyi << 8) | 0x80000000;
    x = (cvtxi & 0x00ffffff) | 0x00800000;
    t =__int_as_float((cvtyi & 0x00ffffff) | 0x3f800001);
    r = ((__float_as_int(1.0f / t) & 0x00ffffff) | 0x00800000) << 7;
      
    f = (unsigned)-(int)__umulhi (y, r << 1);
    r = __umulhi (f, r << 1);
    
    prod = ((unsigned long long)x) * (r << 1);
    
    if (((int)((prod >> 32) << 8)) > 0) {
      expo_res--;
      prod = prod + prod;
    }
    
    prod += 0x0000000080000000ULL;
    r = (unsigned)(prod >> 32);
    y = y >> 8;
    if (expo_res <= 0xFD) {
      
      int rem1;
      prod = ((unsigned long long)y) * r;
      x = x << (23 + ((prod >> 32) >> 15));
      rem1 = x - (unsigned)(prod & 0xffffffff);
      if ((rem1 < 0) &&  (sign)) r--;
      if ((rem1 > 0) && (!sign)) r++;
      resi = (expo_res << 23) + r;
      if ((resi == 0x7f800000) && (sign)) resi = 0x7f7fffff;
      return __int_as_float(sign | resi);
    } else if ((int)expo_res >= 254) {
      
      resi = sign ? 0x7f7fffff : 0x7f800000;
      return __int_as_float(sign | resi);
    } else {
      
      int rem1;
      prod = ((unsigned long long)y) * r;
      x = x << (23 + ((prod >> 32) >> 15));
      rem1 = x - (unsigned)(prod & 0xffffffff);
      if ((rem1 < 0) &&  (sign)) r--;
      if ((rem1 > 0) && (!sign)) r++;
      resi = ((expo_res << 23) + r);
      if (resi != 0x00800000) resi = 0;
      return __int_as_float(sign | resi);
    }
  }
  if (fabsf(divisor) > 8.507059173e37f) {
    divisor  *= 0.25f;
    dividend *= 0.25f;
  }
  return __fdividef (dividend, divisor);
}

static __inline__ __attribute__((always_inline)) float __fdiv_rd (float dividend, float divisor)
{
  unsigned long long prod;
  unsigned r, f, x, y, expox, expoy, sign;
  unsigned expo_res;
  unsigned resi, cvtxi, cvtyi;
  float t;

  cvtxi = __float_as_int(dividend);
  cvtyi = __float_as_int(divisor);
  expox = (cvtxi >> 23) & 0xff;
  expoy = (cvtyi >> 23) & 0xff;
  sign  = ((cvtxi ^ cvtyi) & 0x80000000);

  if (((expox - 1) <= 0xFD) && ((expoy - 1) <= 0xFD)) {
    expo_res = expox - expoy + 127 - 1;
    
    y = (cvtyi << 8) | 0x80000000;
    x = (cvtxi & 0x00ffffff) | 0x00800000;
    t =__int_as_float((cvtyi & 0x00ffffff) | 0x3f800001);
    r = ((__float_as_int(1.0f / t) & 0x00ffffff) | 0x00800000) << 7;
      
    f = (unsigned)-(int)__umulhi (y, r << 1);
    r = __umulhi (f, r << 1);
    
    prod = ((unsigned long long)x) * (r << 1);
    
    if (((int)((prod >> 32) << 8)) > 0) {
      expo_res--;
      prod = prod + prod;
    }
    
    prod += 0x0000000080000000ULL;
    r = (unsigned)(prod >> 32);
    y = y >> 8;
    if (expo_res <= 0xFD) {
      
      int rem1;
      prod = ((unsigned long long)y) * r;
      x = x << (23 + ((prod >> 32) >> 15));
      rem1 = x - (unsigned)(prod & 0xffffffff);
      if ((rem1 < 0) && (!sign)) r--;
      if ((rem1 > 0) &&  (sign)) r++;
      resi = (expo_res << 23) + r;
      if ((resi == 0x7f800000) && (!sign)) resi = 0x7f7fffff;
      return __int_as_float(sign | resi);
    } else if ((int)expo_res >= 254) {
      
      resi = sign ? 0x7f800000 : 0x7f7fffff;
      return __int_as_float(sign |resi);
    } else {
      
      int rem1;
      prod = ((unsigned long long)y) * r;
      x = x << (23 + ((prod >> 32) >> 15));
      rem1 = x - (unsigned)(prod & 0xffffffff);
      if ((rem1 < 0) && (!sign)) r--;
      if ((rem1 > 0) &&  (sign)) r++;
      resi = ((expo_res << 23) + r);
      if (resi != 0x00800000) resi = 0;
      return __int_as_float(sign | resi);
    }
  }
  if (fabsf(divisor) > 8.507059173e37f) {
    divisor  *= 0.25f;
    dividend *= 0.25f;
  }
  return __fdividef (dividend, divisor);
}

static __inline__ __attribute__((always_inline)) float __fadd_ru (float a, float b)
{
  unsigned int expo_x, expo_y;
  unsigned int xxi, yyi, temp;
    
  xxi = __float_as_int(a);
  yyi = __float_as_int(b);

  
  expo_y = yyi << 1;
  if (expo_y > (xxi << 1)) {
    expo_y = xxi;
    xxi    = yyi;
    yyi    = expo_y;
  }
    
  temp = 0xff;
  expo_x = temp & (xxi >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yyi >> 23);
  expo_y = expo_y - 1;
    
  if ((expo_x <= 0xFD) && 
      (expo_y <= 0xFD)) {
        
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xxi ^ yyi;
    xxi = xxi & ~0x7f000000;
    xxi = xxi |  0x00800000;
    yyi = yyi & ~0xff000000;
    yyi = yyi |  0x00800000;
        
    if ((int)temp < 0) {
      
      temp = 32 - expo_y;
      temp = (expo_y) ? (yyi << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xxi = xxi - (yyi >> expo_y) - (temp ? 1 : 0);
      if (xxi & 0x00800000) {
        if (expo_x <= 0xFD) {
          xxi = (xxi + (expo_x << 23));
          xxi += (temp && !(xxi & 0x80000000));
          return __int_as_float(xxi);
        }
      } else {
        if ((temp | (xxi << 1)) == 0) {
          
          xxi = 0;
          return __int_as_float(xxi);
        }
        
        yyi = xxi & 0x80000000;
        do {
          xxi = (xxi << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xxi & 0x00800000));
        xxi = xxi | yyi;
      }
    } else {
      
      temp = 32 - expo_y;
      temp = (expo_y) ? (yyi << temp) : 0;
      xxi = xxi + (yyi >> expo_y);
      if (!(xxi & 0x01000000)) {
        if (expo_x <= 0xFD) {
          xxi = xxi + (expo_x << 23);
          xxi += (temp && !(xxi & 0x80000000));
          return __int_as_float(xxi);
        }
      } else {
        
        temp = (xxi << 31) | (temp >> 1);
        xxi = ((xxi & 0x80000000) | (xxi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      xxi += (temp && !(xxi & 0x80000000));
      xxi = xxi + (expo_x << 23);
      return __int_as_float(xxi);
    }
    if ((int)expo_x >= 254) {
      
      temp = xxi & 0x80000000;
      xxi = (temp ? 0xff7fffff : 0x7F800000);
      return __int_as_float(xxi);
    }
    
    yyi = xxi &  0x80000000;
    xxi = xxi & ~0xff000000;
    expo_x = (unsigned int)(-((int)expo_x));
    xxi = (xxi >> expo_x);
    if ((expo_x > 25) || (xxi != 0x00800000)) xxi = 0;
    return __int_as_float(yyi | xxi);
  } else {
    return a + b;
  }
}

static __inline__ __attribute__((always_inline)) float __fadd_rd (float a, float b)
{
  unsigned int expo_x, expo_y;
  unsigned int xxi, yyi, temp;
    
  xxi = __float_as_int(a);
  yyi = __float_as_int(b);

  
  expo_y = yyi << 1;
  if (expo_y > (xxi << 1)) {
    expo_y = xxi;
    xxi    = yyi;
    yyi    = expo_y;
  }
    
  temp = 0xff;
  expo_x = temp & (xxi >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yyi >> 23);
  expo_y = expo_y - 1;
    
  if ((expo_x <= 0xFD) && 
      (expo_y <= 0xFD)) {
        
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xxi ^ yyi;
    xxi = xxi & ~0x7f000000;
    xxi = xxi |  0x00800000;
    yyi = yyi & ~0xff000000;
    yyi = yyi |  0x00800000;
        
    if ((int)temp < 0) {
      
      temp = 32 - expo_y;
      temp = (expo_y) ? (yyi << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xxi = xxi - (yyi >> expo_y) - (temp ? 1 : 0);
      if (xxi & 0x00800000) {
        if (expo_x <= 0xFD) {
          xxi = xxi & ~0x00800000; 
          xxi = (xxi + (expo_x << 23)) + 0x00800000;
          xxi += (temp && (xxi & 0x80000000));
          return __int_as_float(xxi);
        }
      } else {
        if ((temp | (xxi << 1)) == 0) {
          
          xxi = 0x80000000;
          return __int_as_float(xxi);
        }
        
        yyi = xxi & 0x80000000;
        do {
          xxi = (xxi << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xxi & 0x00800000));
        xxi = xxi | yyi;
      }
    } else {
      
      temp = 32 - expo_y;
      temp = (expo_y) ? (yyi << temp) : 0;
      xxi = xxi + (yyi >> expo_y);
      if (!(xxi & 0x01000000)) {
        if (expo_x <= 0xFD) {
          expo_y = xxi & 1;
          xxi = xxi + (expo_x << 23);
          xxi += (temp && (xxi & 0x80000000));
          return __int_as_float(xxi);
        }
      } else {
        
        temp = (xxi << 31) | (temp >> 1);
        xxi = ((xxi & 0x80000000) | (xxi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      xxi += (temp && (xxi & 0x80000000));
      xxi = xxi + (expo_x << 23);
      return __int_as_float(xxi);
    }
    if ((int)expo_x >= 254) {
      
      temp = xxi & 0x80000000;
      xxi = (temp ? 0xFF800000 : 0x7f7fffff);
      return __int_as_float(xxi);
    }
    
    yyi = xxi &  0x80000000;
    xxi = xxi & ~0xff000000;
    expo_x = (unsigned int)(-((int)expo_x));
    xxi = (xxi >> expo_x);
    if ((expo_x > 25) || (xxi != 0x00800000)) xxi = 0;
    return __int_as_float(yyi | xxi);
  } else {
    a = a + b;
    xxi = xxi ^ yyi;
    if ((a == 0.0f) && ((int)xxi < 0)) a = __int_as_float(0x80000000);
    return a;
  }
}

static __inline__ __attribute__((always_inline)) float __fmul_ru (float a, float b)
{
  unsigned long long product;
  unsigned int expo_x, expo_y;
  unsigned int xxi, yyi;
    
  xxi = __float_as_int(a);
  yyi = __float_as_int(b);

  expo_y = 0xFF;
  expo_x = expo_y & (xxi >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yyi >> 23);
  expo_y = expo_y - 1;
    
  if ((expo_x <= 0xFD) && 
      (expo_y <= 0xFD)) {
    expo_x = expo_x + expo_y;
    expo_y = xxi ^ yyi;
    xxi = xxi & 0x00ffffff;
    yyi = yyi << 8;
    xxi = xxi | 0x00800000;
    yyi = yyi | 0x80000000;
    
    product = ((unsigned long long)xxi) * yyi;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xxi = (unsigned int)(product >> 32);
    yyi = (unsigned int)(product & 0xffffffff);
    
    if (xxi < 0x00800000) {
      xxi = (xxi << 1) | (yyi >> 31);
      yyi = (yyi << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xxi = xxi | expo_y;          
      xxi = xxi + (expo_x << 23);  
      
      xxi += (yyi && !expo_y);
      return __int_as_float(xxi);
    } else if ((int)expo_x >= 254) {
      
      xxi = (expo_y ? 0xff7fffff : 0x7F800000);
      return __int_as_float(xxi);
    } else {
      
      expo_x = ((unsigned int)-((int)expo_x));
      xxi += (yyi && !expo_y);
      xxi = (xxi >> expo_x);
      if ((expo_x > 25) || (xxi != 0x00800000)) xxi = 0;
      return __int_as_float(expo_y | xxi);
    }
  } else {
    return a * b;
  }
}

static __inline__ __attribute__((always_inline)) float __fmul_rd (float a, float b)
{
  unsigned long long product;
  unsigned int expo_x, expo_y;
  unsigned int xxi, yyi;
    
  xxi = __float_as_int(a);
  yyi = __float_as_int(b);

  expo_y = 0xFF;
  expo_x = expo_y & (xxi >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yyi >> 23);
  expo_y = expo_y - 1;
    
  if ((expo_x <= 0xFD) && 
      (expo_y <= 0xFD)) {
    expo_x = expo_x + expo_y;
    expo_y = xxi ^ yyi;
    xxi = xxi & 0x00ffffff;
    yyi = yyi << 8;
    xxi = xxi | 0x00800000;
    yyi = yyi | 0x80000000;
    
    product = ((unsigned long long)xxi) * yyi;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xxi = (unsigned int)(product >> 32);
    yyi = (unsigned int)(product & 0xffffffff);
    
    if (xxi < 0x00800000) {
      xxi = (xxi << 1) | (yyi >> 31);
      yyi = (yyi << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xxi = xxi | expo_y;          
      xxi = xxi + (expo_x << 23);  
      
      xxi += (yyi && expo_y);
      return __int_as_float(xxi);
    } else if ((int)expo_x >= 254) {
      
      xxi = expo_y | (expo_y ?0x7F800000 : 0x7f7fffff);
      return __int_as_float(xxi);
    } else {
      
      expo_x = ((unsigned int)-((int)expo_x));
      xxi += (yyi && expo_y);
      xxi = (xxi >> expo_x);
      if ((expo_x > 25) || (xxi != 0x00800000)) xxi = 0;
      return __int_as_float(expo_y | xxi);
    }
  } else {
    return a * b;
  }
}

static __inline__ __attribute__((always_inline)) float __fmaf_rn (float a, float b, float c)
{
  unsigned long long product;
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;

  xx = __float_as_int(a);
  yy = __float_as_int(b);
  zz = __float_as_int(c);

  
  if ((xx << 1) < 0x01000000) xx &= 0x80000000;
  if ((yy << 1) < 0x01000000) yy &= 0x80000000;
  if ((zz << 1) < 0x01000000) zz &= 0x80000000;
   
  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) && 
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {
    



    if ((yy << 1) > 0xff000000) {
      return rsqrtf(b);
    }
    if ((zz << 1) > 0xff000000) {
      return rsqrtf(c);
    }
    if ((xx << 1) > 0xff000000) {
      return rsqrtf(a);
    }
    










    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      return rsqrtf(__int_as_float(0xffc00000));
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          return rsqrtf(__int_as_float(0xffc00000));
        }
      }
    }
    



    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      return __int_as_float(xx);
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      return __int_as_float(yy);
    }
    if ((zz << 1) == 0xff000000) {
      return __int_as_float(zz);
    }
    




    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          return __int_as_float(zz);
        }
      }
    }
    


    if (((zz << 1) == 0) && 
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      zz &= 0x7fffffff;
      return __int_as_float(zz);
    }
    


    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      return __int_as_float(zz);
    }
    
    if (expo_x == (unsigned)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }
    
    if (expo_y == (unsigned)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }
    
    if ((expo_z == (unsigned)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }
    
  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  product = ((unsigned long long)xx) * yy;
  xx = (unsigned)(product >> 32);
  yy = (unsigned)(product & 0xffffffff);

  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;
  
  if (xx < 0x00800000) {
    xx = (xx << 1) | (yy >> 31);
    yy = (yy << 1);
    expo_x--;
  }
  temp = 0;

  if ((zz << 1) != 0) { 
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;
    
    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }
    
    
    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {
      
      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) | 
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }
      
    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }            
    if ((int)u < 0) {
      
      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {
        
        return __int_as_float(xx);
      }
      if ((int)xx < 0) {
        

        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }
      
      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {
      
      yy = yy + ww;
      s =  yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {
    
    xx |= expo_y; 
    s = xx & 1; 
    xx += (temp == 0x80000000) ? s : (temp >> 31);
    xx = xx + (expo_x << 23); 
    return __int_as_float(xx);
  } else if ((int)expo_x >= 126) {
    
    xx = expo_y | 0x7f800000;
    return __int_as_float(xx);
  }
  
  expo_x = (unsigned int)(-(int)expo_x);
  
  xx += (temp >= 0x80000000);
  if (xx >= 0x01000000) {
    xx = xx >> 1;
    expo_x--;
  }
  if (expo_x > 0) xx = 0;
  xx = expo_y | xx;
  return __int_as_float(xx);
}

static __inline__ __attribute__((always_inline)) float __fmaf_rz (float a, float b, float c)
{
  unsigned long long product;
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;

  xx = __float_as_int(a);
  yy = __float_as_int(b);
  zz = __float_as_int(c);

  
  if ((xx << 1) < 0x01000000) xx &= 0x80000000;
  if ((yy << 1) < 0x01000000) yy &= 0x80000000;
  if ((zz << 1) < 0x01000000) zz &= 0x80000000;
   
  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) && 
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {
    



    if ((yy << 1) > 0xff000000) {
      return rsqrtf(b);
    }
    if ((zz << 1) > 0xff000000) {
      return rsqrtf(c);
    }
    if ((xx << 1) > 0xff000000) {
      return rsqrtf(a);
    }
    










    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      return rsqrtf(__int_as_float(0xffc00000));
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          return rsqrtf(__int_as_float(0xffc00000));
        }
      }
    }
    



    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      return __int_as_float(xx);
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      return __int_as_float(yy);
    }
    if ((zz << 1) == 0xff000000) {
      return __int_as_float(zz);
    }
    




    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          return __int_as_float(zz);
        }
      }
    }
    


    if (((zz << 1) == 0) && 
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      zz &= 0x7fffffff;
      return __int_as_float(zz);
    }
    


    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      return __int_as_float(zz);
    }
    
    if (expo_x == (unsigned)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }
    
    if (expo_y == (unsigned)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }
    
    if ((expo_z == (unsigned)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }
    
  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  product = ((unsigned long long)xx) * yy;
  xx = (unsigned)(product >> 32);
  yy = (unsigned)(product & 0xffffffff);

  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;
  
  if (xx < 0x00800000) {
    xx = (xx << 1) | (yy >> 31);
    yy = (yy << 1);
    expo_x--;
  }
  temp = 0;

  if ((zz << 1) != 0) { 
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;
    
    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }
    
    
    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {
      
      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) | 
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }
      
    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }            
    if ((int)u < 0) {
      
      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {
        
        return __int_as_float(xx);
      }
      if ((int)xx < 0) {
        

        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }
      
      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {
      
      yy = yy + ww;
      s =  yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {
    
    xx |= expo_y; 
    xx = xx + (expo_x << 23); 
    return __int_as_float(xx);
  } else if ((int)expo_x >= 126) {
    
    xx = expo_y | 0x7f7fffff;
    return __int_as_float(xx);
  }
  
  return __int_as_float(expo_y);
}

static __inline__ __attribute__((always_inline)) float __fmaf_ru (float a, float b, float c)
{
  unsigned long long product;
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;

  xx = __float_as_int(a);
  yy = __float_as_int(b);
  zz = __float_as_int(c);

  
  if ((xx << 1) < 0x01000000) xx &= 0x80000000;
  if ((yy << 1) < 0x01000000) yy &= 0x80000000;
  if ((zz << 1) < 0x01000000) zz &= 0x80000000;
   
  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) && 
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {
    



    if ((yy << 1) > 0xff000000) {
      return rsqrtf(b);
    }
    if ((zz << 1) > 0xff000000) {
      return rsqrtf(c);
    }
    if ((xx << 1) > 0xff000000) {
      return rsqrtf(a);
    }
    










    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      return rsqrtf(__int_as_float(0xffc00000));
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          return rsqrtf(__int_as_float(0xffc00000));
        }
      }
    }
    



    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      return __int_as_float(xx);
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      return __int_as_float(yy);
    }
    if ((zz << 1) == 0xff000000) {
      return __int_as_float(zz);
    }
    




    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          return __int_as_float(zz);
        }
      }
    }
    


    if (((zz << 1) == 0) && 
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      zz &= 0x7fffffff;
      return __int_as_float(zz);
    }
    


    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      return __int_as_float(zz);
    }
    
    if (expo_x == (unsigned)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }
    
    if (expo_y == (unsigned)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }
    
    if ((expo_z == (unsigned)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }
    
  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  product = ((unsigned long long)xx) * yy;
  xx = (unsigned)(product >> 32);
  yy = (unsigned)(product & 0xffffffff);

  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;
  
  if (xx < 0x00800000) {
    xx = (xx << 1) | (yy >> 31);
    yy = (yy << 1);
    expo_x--;
  }
  temp = 0;

  if ((zz << 1) != 0) { 
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;
    
    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }
    
    
    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {
      
      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) | 
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }
      
    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }            
    if ((int)u < 0) {
      
      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {
        
        return __int_as_float(xx);
      }
      if ((int)xx < 0) {
        

        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }
      
      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {
      
      yy = yy + ww;
      s =  yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {
    
    xx |= expo_y; 
    xx += (temp && !expo_y); 
    xx = xx + (expo_x << 23); 
    return __int_as_float(xx);
  } else if ((int)expo_x >= 126) {
    
    xx = expo_y | (expo_y ? 0x7f7fffff : 0x7F800000);
    return __int_as_float(xx);
  }
  
  expo_x = ((unsigned int)-((int)expo_x));
  xx += (temp && !expo_y);
  xx = (xx >> expo_x);
  if ((expo_x > 25) || (xx != 0x00800000)) xx = 0;
  return __int_as_float(expo_y | xx);
}

static __inline__ __attribute__((always_inline)) float __fmaf_rd (float a, float b, float c)
{
  unsigned long long product;
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;

  xx = __float_as_int(a);
  yy = __float_as_int(b);
  zz = __float_as_int(c);

  
  if ((xx << 1) < 0x01000000) xx &= 0x80000000;
  if ((yy << 1) < 0x01000000) yy &= 0x80000000;
  if ((zz << 1) < 0x01000000) zz &= 0x80000000;
   
  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) && 
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {
    



    if ((yy << 1) > 0xff000000) {
      return rsqrtf(b);
    }
    if ((zz << 1) > 0xff000000) {
      return rsqrtf(c);
    }
    if ((xx << 1) > 0xff000000) {
      return rsqrtf(a);
    }
    










    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      return rsqrtf(__int_as_float(0xffc00000));
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          return rsqrtf(__int_as_float(0xffc00000));
        }
      }
    }
    



    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      return __int_as_float(xx);
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      return __int_as_float(yy);
    }
    if ((zz << 1) == 0xff000000) {
      return __int_as_float(zz);
    }
    




    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          return __int_as_float(zz);
        }
      }
    }
    


    if (((zz << 1) == 0) && 
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      zz = (xx ^ yy ^ zz) & 0x80000000;
      return __int_as_float(zz);
    }
    


    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      return __int_as_float(zz);
    }
    
    if (expo_x == (unsigned)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }
    
    if (expo_y == (unsigned)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }
    
    if ((expo_z == (unsigned)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }
    
  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  product = ((unsigned long long)xx) * yy;
  xx = (unsigned)(product >> 32);
  yy = (unsigned)(product & 0xffffffff);

  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;
  
  if (xx < 0x00800000) {
    xx = (xx << 1) | (yy >> 31);
    yy = (yy << 1);
    expo_x--;
  }
  temp = 0;

  if ((zz << 1) != 0) { 
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;
    
    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }
    
    
    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {
      
      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) | 
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }
      
    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }            
    if ((int)u < 0) {
      
      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {
        
        return __int_as_float(0x80000000);
      }
      if ((int)xx < 0) {
        

        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }
      
      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {
      
      yy = yy + ww;
      s =  yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {
    
    xx |= expo_y; 
    xx += (temp && expo_y); 
    xx = xx + (expo_x << 23); 
    return __int_as_float(xx);
  } else if ((int)expo_x >= 126) {
    
    xx = expo_y | (expo_y ? 0x7f800000 : 0x7F7FFFFF);
    return __int_as_float(xx);
  }
  
  expo_x = ((unsigned int)-((int)expo_x));
  xx += (temp && expo_y);
  xx = (xx >> expo_x);
  if ((expo_x > 25) || (xx != 0x00800000)) xx = 0;
  return __int_as_float(expo_y | xx);
}

static __inline__ __attribute__((always_inline)) int __clz(int a)
{
  return (a)?(158-(__float_as_int(__uint2float_rz((unsigned int)a))>>23)):32;
}

static __inline__ __attribute__((always_inline)) int __clzll(long long int a)
{
  int ahi = ((int)((unsigned long long)a >> 32));
  int alo = ((int)((unsigned long long)a & 0xffffffffULL));
  int res;
  if (ahi) {
    res = 0;
  } else {
    res = 32;
    ahi = alo;
  }
  res = res + __clz(ahi);
  return res;
}

static __inline__ __attribute__((always_inline)) int __popc(unsigned int a)
{
  a = a - ((a >> 1) & 0x55555555);
  a = (a & 0x33333333) + ((a >> 2) & 0x33333333);
  a = (a + (a >> 4)) & 0x0f0f0f0f;
  a = ((__umul24(a, 0x808080) << 1) + a) >> 24;
  return a;
}

static __inline__ __attribute__((always_inline)) int __popcll(unsigned long long int a)
{
  unsigned int ahi = ((unsigned int)(a >> 32));
  unsigned int alo = ((unsigned int)(a & 0xffffffffULL));
  alo = alo - ((alo >> 1) & 0x55555555);
  alo = (alo & 0x33333333) + ((alo >> 2) & 0x33333333);
  ahi = ahi - ((ahi >> 1) & 0x55555555);
  ahi = (ahi & 0x33333333) + ((ahi >> 2) & 0x33333333);
  alo = alo + ahi;
  alo = (alo & 0x0f0f0f0f) + ((alo >> 4) & 0x0f0f0f0f);
  alo = ((__umul24(alo, 0x808080) << 1) + alo) >> 24;
  return alo;
}

static __inline__ __attribute__((always_inline)) unsigned int __brev(unsigned int a)
{
  
  unsigned int t;
  a = (a << 15) | (a >> 17);
  t = (a ^ (a >> 10)) & 0x003f801f; 
  a = (t + (t << 10)) ^ a;
  t = (a ^ (a >>  4)) & 0x0e038421; 
  a = (t + (t <<  4)) ^ a;
  t = (a ^ (a >>  2)) & 0x22488842; 
  a = (t + (t <<  2)) ^ a;
  return a;
}

static __inline__ __attribute__((always_inline)) unsigned long long int __brevll(unsigned long long int a)
{
  unsigned int hi = (unsigned int)(a >> 32);
  unsigned int lo = (unsigned int)(a & 0xffffffffULL);
  unsigned int t;
  t  = __brev(lo);
  lo = __brev(hi);
  return ((unsigned long long int)t << 32) + (unsigned long long int)lo;
}

static __inline__ __attribute__((always_inline)) unsigned int __byte_perm(unsigned int a, unsigned int b, unsigned int slct)
{
  unsigned int i0 = (slct >>  0) & 0x7;
  unsigned int i1 = (slct >>  4) & 0x7;
  unsigned int i2 = (slct >>  8) & 0x7;
  unsigned int i3 = (slct >> 12) & 0x7;

  return (((((i0 < 4) ? (a >> (i0*8)) : (b >> ((i0-4)*8))) & 0xff) <<  0) +
          ((((i1 < 4) ? (a >> (i1*8)) : (b >> ((i1-4)*8))) & 0xff) <<  8) +
          ((((i2 < 4) ? (a >> (i2*8)) : (b >> ((i2-4)*8))) & 0xff) << 16) +
          ((((i3 < 4) ? (a >> (i3*8)) : (b >> ((i3-4)*8))) & 0xff) << 24));
}

#line 2577 "c:\\cuda\\include\\device_functions.h"

static __inline__ __attribute__((always_inline)) int __ffs(int a)
{
  return 32 - __clz(a & -a);
}

static __inline__ __attribute__((always_inline)) int __ffsll(long long int a)
{
  return 64 - __clzll(a & -a);
}

#line 2589 "c:\\cuda\\include\\device_functions.h"







#line 1 "c:\\cuda\\include\\sm_11_atomic_functions.h"
















































































































































































































#line 210 "c:\\cuda\\include\\sm_11_atomic_functions.h"

#line 212 "c:\\cuda\\include\\sm_11_atomic_functions.h"
#line 2597 "c:\\cuda\\include\\device_functions.h"
#line 1 "c:\\cuda\\include\\sm_12_atomic_functions.h"





































































































#line 103 "c:\\cuda\\include\\sm_12_atomic_functions.h"

#line 105 "c:\\cuda\\include\\sm_12_atomic_functions.h"
#line 2598 "c:\\cuda\\include\\device_functions.h"
#line 1 "c:\\cuda\\include\\sm_13_double_functions.h"


































































































































































































































































#line 260 "c:\\cuda\\include\\sm_13_double_functions.h"



static __inline__ __attribute__((always_inline)) double __internal_fma_kernel(double x, double y, double z, enum cudaRoundMode rndMode)
{
  struct __cudart_UintUint {
    unsigned int lo;
    unsigned int hi;
  } xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;
  
  xx.hi = __double2hiint(x);
  xx.lo = __double2loint(x);
  yy.hi = __double2hiint(y);
  yy.lo = __double2loint(y);
  zz.hi = __double2hiint(z);
  zz.lo = __double2loint(z);

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
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return __hiloint2double(zz.hi, zz.lo);
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    
    










    if (((((xx.hi << 1) | xx.lo) == 0) && 
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) && 
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
    }
    



    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return __hiloint2double(zz.hi, zz.lo);
    }
    




    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return __hiloint2double(zz.hi, zz.lo);
        }
      }
    }
    


    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      if (rndMode == cudaRoundMinInf) {
        return __hiloint2double((xx.hi ^ yy.hi ^ zz.hi) & 0x80000000, zz.lo);
      } else {
        zz.hi &= 0x7fffffff;
        return __hiloint2double(zz.hi, zz.lo);
      }
    }
    
    


    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return __hiloint2double(zz.hi, zz.lo);
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
  prod1 = __umulhi (xx.lo, yy.lo);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 = __umulhi (xx.hi, yy.lo);
  prod3 = __umulhi (xx.lo, yy.hi);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 = __umulhi (xx.hi, yy.hi) + s;
  
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
        
        if (rndMode == cudaRoundMinInf) {
          return __hiloint2double(0x80000000, xx.lo);
        } else {
          return __hiloint2double(xx.hi, xx.lo);
        }
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
    if (rndMode == cudaRoundNearest) {
      xx.lo += (t == 0x80000000) ? s : (t >> 31);
    } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
               ((rndMode == cudaRoundMinInf) && t && expo_y)) {
      xx.lo += 1;
    }
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return __hiloint2double(xx.hi, xx.lo);
  } else if ((int)expo_x >= 2046) {      
    
    if ((rndMode == cudaRoundNearest) || 
        ((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
      xx.lo = 0;
    } else {
      xx.hi = (xx.hi & 0x80000000) | 0x7fefffff;
      xx.lo = 0xffffffff;
    }
    return __hiloint2double(xx.hi, xx.lo);
  }
  
  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {
    
    if (((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      return __hiloint2double(xx.hi & 0x80000000, 1);
    } else {
      return __hiloint2double(xx.hi & 0x80000000, 0);
    }
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
  if (rndMode == cudaRoundNearest) {
    xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
             ((rndMode == cudaRoundMinInf) && t && expo_y)) {
    xx.lo += 1;
  }
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return __hiloint2double(xx.hi, xx.lo);
}

static __inline__ __attribute__((always_inline)) double __fma_rn(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundNearest);
}

static __inline__ __attribute__((always_inline)) double __fma_rd(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundMinInf);
}

static __inline__ __attribute__((always_inline)) double __fma_ru(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundPosInf);
}

static __inline__ __attribute__((always_inline)) double __fma_rz(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundZero);
}

static __inline__ __attribute__((always_inline)) double __dadd_rz(double a, double b)
{
  return __fma_rz(a, 1.0, b); 
}

static __inline__ __attribute__((always_inline)) double __dadd_ru(double a, double b)
{
  return __fma_ru(a, 1.0, b); 
}

static __inline__ __attribute__((always_inline)) double __dadd_rd(double a, double b)
{
  return __fma_rd(a, 1.0, b); 
}

static __inline__ __attribute__((always_inline)) double __dmul_rz(double a, double b)
{
  return __fma_rz(a, b, __hiloint2double(0x80000000, 0x00000000)); 
}

static __inline__ __attribute__((always_inline)) double __dmul_ru(double a, double b)
{
  return __fma_ru(a, b, __hiloint2double(0x80000000, 0x00000000)); 
}

static __inline__ __attribute__((always_inline)) double __dmul_rd(double a, double b)
{
  return __fma_rd(a, b, 0.0); 
}

static __inline__ __attribute__((always_inline)) double __dadd_rn(double a, double b)
{
  return __fma_rn(a, 1.0, b); 
}

static __inline__ __attribute__((always_inline)) double __dmul_rn(double a, double b)
{
  return __fma_rn(a, b, __hiloint2double(0x80000000, 0x00000000)); 
}

#line 779 "c:\\cuda\\include\\sm_13_double_functions.h"

#line 781 "c:\\cuda\\include\\sm_13_double_functions.h"

#line 783 "c:\\cuda\\include\\sm_13_double_functions.h"
#line 2599 "c:\\cuda\\include\\device_functions.h"
#line 1 "c:\\cuda\\include\\sm_20_atomic_functions.h"








































































#line 74 "c:\\cuda\\include\\sm_20_atomic_functions.h"

#line 76 "c:\\cuda\\include\\sm_20_atomic_functions.h"
#line 2600 "c:\\cuda\\include\\device_functions.h"
#line 1 "c:\\cuda\\include\\sm_20_intrinsics.h"

















































































































































#line 147 "c:\\cuda\\include\\sm_20_intrinsics.h"

#line 149 "c:\\cuda\\include\\sm_20_intrinsics.h"
#line 2601 "c:\\cuda\\include\\device_functions.h"
#line 1 "c:\\cuda\\include\\surface_functions.h"





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1367 "c:\\cuda\\include\\surface_functions.h"

extern uchar1     __surf1Dreadc1(const void*, int, enum cudaSurfaceBoundaryMode);
extern uchar2     __surf1Dreadc2(const void*, int, enum cudaSurfaceBoundaryMode);
extern uchar4     __surf1Dreadc4(const void*, int, enum cudaSurfaceBoundaryMode);
extern ushort1    __surf1Dreads1(const void*, int, enum cudaSurfaceBoundaryMode);
extern ushort2    __surf1Dreads2(const void*, int, enum cudaSurfaceBoundaryMode);
extern ushort4    __surf1Dreads4(const void*, int, enum cudaSurfaceBoundaryMode);
extern uint1      __surf1Dreadu1(const void*, int, enum cudaSurfaceBoundaryMode);
extern uint2      __surf1Dreadu2(const void*, int, enum cudaSurfaceBoundaryMode);
extern uint4      __surf1Dreadu4(const void*, int, enum cudaSurfaceBoundaryMode);
extern ulonglong1 __surf1Dreadl1(const void*, int, enum cudaSurfaceBoundaryMode);
extern ulonglong2 __surf1Dreadl2(const void*, int, enum cudaSurfaceBoundaryMode);
extern uchar1     __surf2Dreadc1(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern uchar2     __surf2Dreadc2(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern uchar4     __surf2Dreadc4(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern ushort1    __surf2Dreads1(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern ushort2    __surf2Dreads2(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern ushort4    __surf2Dreads4(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern uint1      __surf2Dreadu1(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern uint2      __surf2Dreadu2(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern uint4      __surf2Dreadu4(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong1 __surf2Dreadl1(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern ulonglong2 __surf2Dreadl2(const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwritec1(    uchar1, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwritec2(    uchar2, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwritec4(    uchar4, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwrites1(   ushort1, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwrites2(   ushort2, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwrites4(   ushort4, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwriteu1(     uint1, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwriteu2(     uint2, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwriteu4(     uint4, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwritel1(ulonglong1, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf1Dwritel2(ulonglong2, const void*, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwritec1(    uchar1, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwritec2(    uchar2, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwritec4(    uchar4, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwrites1(   ushort1, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwrites2(   ushort2, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwrites4(   ushort4, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwriteu1(     uint1, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwriteu2(     uint2, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwriteu4(     uint4, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwritel1(ulonglong1, const void*, int, int, enum cudaSurfaceBoundaryMode);
extern void       __surf2Dwritel2(ulonglong2, const void*, int, int, enum cudaSurfaceBoundaryMode);

#line 1414 "c:\\cuda\\include\\surface_functions.h"

#line 1416 "c:\\cuda\\include\\surface_functions.h"

#line 2602 "c:\\cuda\\include\\device_functions.h"
#line 1 "c:\\cuda\\include\\texture_fetch_functions.h"



















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1877 "c:\\cuda\\include\\texture_fetch_functions.h"

extern  uint4 __utexfetchi1D(const void*, int4);
extern   int4 __itexfetchi1D(const void*, int4);
extern float4 __ftexfetchi1D(const void*, int4);
extern  uint4 __utexfetch1D(const void*, float4);
extern   int4 __itexfetch1D(const void*, float4);
extern float4 __ftexfetch1D(const void*, float4);
extern  uint4 __utexfetch2D(const void*, float4);
extern   int4 __itexfetch2D(const void*, float4);
extern float4 __ftexfetch2D(const void*, float4);
extern  uint4 __utexfetch3D(const void*, float4);
extern   int4 __itexfetch3D(const void*, float4);
extern float4 __ftexfetch3D(const void*, float4);














#line 1905 "c:\\cuda\\include\\texture_fetch_functions.h"

#line 1907 "c:\\cuda\\include\\texture_fetch_functions.h"

#line 2603 "c:\\cuda\\include\\device_functions.h"

#line 2605 "c:\\cuda\\include\\device_functions.h"

#line 956 "c:\\cuda\\include\\math_functions.h"









int __cuda_error_not_implememted(void);













#line 980 "c:\\cuda\\include\\math_functions.h"




#line 985 "c:\\cuda\\include\\math_functions.h"

#line 987 "c:\\cuda\\include\\math_functions.h"







static __inline__ __attribute__((always_inline)) float rintf(float a)
{
  return __builtin_roundf(a);
}

static __inline__ __attribute__((always_inline)) long int lrintf(float a)
{


#line 1004 "c:\\cuda\\include\\math_functions.h"
  return (long int)__float2int_rn(a);
#line 1006 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) long long int llrintf(float a)
{
  return __float2ll_rn(a);
}

static __inline__ __attribute__((always_inline)) float nearbyintf(float a)
{
  return __builtin_roundf(a);
}







static __inline__ __attribute__((always_inline)) int __signbitf(float a)
{
  return (int)((unsigned int)__float_as_int(a) >> 31);
}




static __inline__ __attribute__((always_inline)) float copysignf(float a, float b)
{
  return __int_as_float((__float_as_int(b) &  0x80000000) | 
                        (__float_as_int(a) & ~0x80000000));
}

static __inline__ __attribute__((always_inline)) int __finitef(float a)
{
  return fabsf(a) < __int_as_float(0x7f800000);
}








#line 1051 "c:\\cuda\\include\\math_functions.h"

static __inline__ __attribute__((always_inline)) int __isinff(float a)
{
  return fabsf(a) == __int_as_float(0x7f800000);
}

static __inline__ __attribute__((always_inline)) int __isnanf(float a)
{
  return !(fabsf(a) <= __int_as_float(0x7f800000));
}

static __inline__ __attribute__((always_inline)) float nextafterf(float a, float b)
{
  unsigned int ia;
  unsigned int ib;
  ia = __float_as_int(a);
  ib = __float_as_int(b);

  if ((ia << 1) < 0x01000000) ia &= 0x80000000; 
  if ((ib << 1) < 0x01000000) ib &= 0x80000000; 
#line 1072 "c:\\cuda\\include\\math_functions.h"
  if (__isnanf(a) || __isnanf(b)) return a + b; 
  if (__int_as_float (ia | ib) == 0.0f) return __int_as_float(ib);

  if (__int_as_float(ia) == 0.0f) {
    return __int_as_float (0x00800000 | (__float_as_int(b) & 0x80000000));
  }




#line 1083 "c:\\cuda\\include\\math_functions.h"
  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  a = __int_as_float(ia);

  if (a == 0.0f) {
    a = __int_as_float(ia & 0x80000000); 
  }
#line 1093 "c:\\cuda\\include\\math_functions.h"
  return a;
}

static __inline__ __attribute__((always_inline)) unsigned long long int __internal_nan_kernel(const char *s)
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

static __inline__ __attribute__((always_inline)) float nanf(const char *tagp)
{
  return __int_as_float(0x7fffffff);
}

static __inline__ __attribute__((always_inline)) float __internal_fmad(float a, float b, float c)
{


#line 1175 "c:\\cuda\\include\\math_functions.h"
  return a * b + c;
#line 1177 "c:\\cuda\\include\\math_functions.h"
}


static __inline__ __attribute__((always_inline)) float __internal_atanhf_kernel(float a_1, float a_2)
{
  float a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;    
  t =                         1.566305595598990E-001f/64.0f;
  t = __internal_fmad (t, a2, 1.995081856004762E-001f/16.0f);
  t = __internal_fmad (t, a2, 3.333382699617026E-001f/4.0f);
  t = t * a2;
  t = __internal_fmad (t, a, a_2);
  t = t + a_1;
  return t;
}  




static __inline__ __attribute__((always_inline)) float __internal_atanf_kernel(float a)
{
  float t4, t0, t1;

  t4 = a * a;
  t0 = -5.674867153f;
  t0 = __internal_fmad (t4, -0.823362947f, t0);
  t0 = __internal_fmad (t0, t4, -6.565555096f);
  t0 = t0 * t4;
  t0 = t0 * a;
  t1 = t4 + 11.33538818f;
  t1 = __internal_fmad (t1, t4, 28.84246826f);
  t1 = __internal_fmad (t1, t4, 19.69667053f);
  t1 = 1.0f / t1;
  a = __internal_fmad (t0, t1, a);
  return a;
}


static __inline__ __attribute__((always_inline)) float __internal_tan_kernel(float a)
{
  float a2, s, t;

  a2 = a * a;
  t  = __internal_fmad (4.114678393115178E-003f, a2, -8.231194034909670E-001f);
  s  = a2 - 2.469348886157666E+000f;
  s  = 1.0f / s;
  t  = t * s;
  t  = t * a2;
  t  = __internal_fmad (t, a, a);
  return t;
}

static __inline__ __attribute__((always_inline)) float __internal_accurate_logf(float a)
{
  float t;
  float z;
  float m;
  int ia;
  ia = __float_as_int(a);

  if ((a > 0.0f) && (a < __int_as_float(0x7f800000))) {
    int e = -127;







#line 1249 "c:\\cuda\\include\\math_functions.h"
    
    m = __int_as_float((ia & 0x807fffff) | 0x3f800000);
    e += ((unsigned)ia >> 23);
    if (m > 1.414213562f) {
      m = m * 0.5f;
      e = e + 1;
    }      
    t = m - 1.0f;
    z = m + 1.0f;
    z = __fdividef (t, z);
    z = -t * z;
    z = __internal_atanhf_kernel(t, z);
    z = __internal_fmad ((float)e, 0.693147181f, z);
    return z;
  } else {
    
    return __logf(a);
  }
}  

static __inline__ __attribute__((always_inline)) float2 __internal_log_ep(float a)
{
  float2 res;
  int expo;
  float m;
  float log_hi, log_lo;
  float t_hi, t_lo;
  float f, g, u, v, q;
  float r, s, e;
  expo = (__float_as_int(a) >> 23) & 0xff;







#line 1287 "c:\\cuda\\include\\math_functions.h"
  expo -= 127;
  m = __int_as_float((__float_as_int(a) & 0x807fffff) | 0x3f800000);
  if (m > 1.414213562f) {
    m = m * 0.5f;
    expo = expo + 1;
  }

  




  f = m - 1.0f;
  g = m + 1.0f;
  g = 1.0f / g;
  u = 2.0f * f * g;
  v = u * u;
  q = 1.49356810919559350E-001f/64.0f;
  q = __internal_fmad (q, v, 1.99887797540072460E-001f/16.0f);
  q = __internal_fmad (q, v, 3.33333880955515580E-001f/4.0f);
  q = q * v;
  q = q * u;
  log_hi = __int_as_float(__float_as_int(u) & 0xfffff000);
  v = __int_as_float(__float_as_int(f) & 0xfffff000);
  u = 2.0f * (f - log_hi);
  f = f - v;
  u = __internal_fmad (-log_hi, v, u);
  u = __internal_fmad (-log_hi, f, u);
  u = g * u;
  

  
  r = log_hi + u;
  s = u - (r - log_hi);
  log_hi = r;
  log_lo = s;
  
  r = log_hi + q;
  s = ((log_hi - r) + q) + log_lo;
  log_hi = e = r + s;
  log_lo = (r - e) + s;

  
  t_hi = expo * 0.6931457519f;    
  t_lo = expo * 1.4286067653e-6f;

  
  r = t_hi + log_hi;
  s = (((t_hi - r) + log_hi) + log_lo) + t_lo;
  res.y = e = r + s;
  res.x = (r - e) + s;
  return res;
}

static __inline__ __attribute__((always_inline)) float __internal_accurate_log2f(float a)
{
  return 1.442695041f * __internal_accurate_logf(a);
}




static __inline__ __attribute__((always_inline)) float2 __internal_dsmul (float2 x, float2 y)
{
    float2 z;

    float up, vp, u1, u2, v1, v2, mh, ml;
    up  = x.y * 4097.0f;
    u1  = (x.y - up) + up;
    u2  = x.y - u1;
    vp  = y.y * 4097.0f;
    v1  = (y.y - vp) + vp;
    v2  = y.y - v1;
    mh  = __fmul_rn(x.y,y.y);
    ml  = (((u1 * v1 - mh) + u1 * v2) + u2 * v1) + u2 * v2;
    ml  = (__fmul_rn(x.y,y.x) + __fmul_rn(x.x,y.y)) + ml;
    z.y = up = mh + ml;
    z.x = (mh - up) + ml;









#line 1375 "c:\\cuda\\include\\math_functions.h"
    return z;
}


static __attribute__((constant)) unsigned int __cudart_i2opi_f [] = {
  0x3c439041,
  0xdb629599,
  0xf534ddc0,
  0xfc2757d1,
  0x4e441529,
  0xa2f9836e,
};


static __inline__ __attribute__((always_inline)) float __internal_trig_reduction_kernel(float a, int *quadrant)
{
  float j;
  int q;
  if (fabsf(a) > 48039.0f) {
    
    unsigned int ia = __float_as_int(a);
    unsigned int s = ia & 0x80000000;
    unsigned int result[7];
    unsigned int phi, plo;
    unsigned int hi, lo;
    unsigned int e;
    int idx;
    e = ((ia >> 23) & 0xff) - 128;
    ia = (ia << 8) | 0x80000000;
    
    idx = 4 - (e >> 5);
    hi = 0;
#pragma unroll 1
    for (q = 0; q < 6; q++) {
      plo = __cudart_i2opi_f[q] * ia;
      phi = __umulhi (__cudart_i2opi_f[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q] = lo;
    }
    result[q] = hi;
    e = e & 31;
    


    hi = result[idx+2];
    lo = result[idx+1];
    if (e) {
      q = 32 - e;
      hi = (hi << e) + (lo >> q);
      lo = (lo << e) + (result[idx] >> q);
    }
    q = hi >> 30;
    
    hi = (hi << 2) + (lo >> 30);
    lo = (lo << 2);
    e = (hi + (lo > 0)) > 0x80000000; 
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned int t;
      hi = ~hi;
      lo = -(int)lo;
      t = (lo == 0);
      hi += t;
      s = s ^ 0x80000000;
    }
    *quadrant = q;
    
    e = 0;
    while ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xc90fdaa2;
    hi = __umulhi(hi, 0xc90fdaa2);
    if ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | (((e + 126) << 23) + (hi >> 8) + ((hi << 24) >= 0x80000000));
    return __int_as_float(ia);
  }
  q = __float2int_rn (a * 0.636619772f);
  j = (float)q;
  a = __internal_fmad (-j, 1.5703125000000000e+000f, a);



#line 1468 "c:\\cuda\\include\\math_functions.h"
  a = __internal_fmad (-j, 4.8351287841796875e-004f, a);
  a = __internal_fmad (-j, 3.1385570764541626e-007f, a);
#line 1471 "c:\\cuda\\include\\math_functions.h"
  a = __internal_fmad (-j, 6.0771005065061922e-011f, a);
  *quadrant = q;
  return a;
}










static __inline__ __attribute__((always_inline)) float __internal_expf_kernel(float a, float scale)
{
  float j, z;

  j = truncf(a * 1.442695041f);
  z = __internal_fmad (j, -0.6931457519f,    a);
  z = __internal_fmad (j, -1.4286067653e-6f, z);
  z = z * 1.442695041f;
  z = exp2f(z) * exp2f(j + scale);
  return z;
}

static __inline__ __attribute__((always_inline)) float __internal_accurate_expf(float a)
{
  float z;

  z = __internal_expf_kernel(a, 0.0f);
  if (a < -105.0f) z = 0.0f;
  if (a >  105.0f) z = __int_as_float(0x7f800000);
  return z;
}

static __inline__ __attribute__((always_inline)) float __internal_accurate_exp10f(float a)
{
  float j, z;

  j = truncf(a * 3.321928094f);
  z = __internal_fmad (j, -3.0102920532226563e-001f, a);
  z = __internal_fmad (j, -7.9034171557301747e-007f, z);
  z = z * 3.321928094f;
  z = exp2f(z) * exp2f(j);
  if (a < -46.0f) z = 0.0f;
  if (a >  46.0f) z = __int_as_float(0x7f800000);
  return z;
}

static __inline__ __attribute__((always_inline)) float __internal_lgammaf_pos(float a)
{
  float sum;
  float s, t;

  if (a == __int_as_float(0x7f800000)) {
    return a;
  }
  if (a >= 3.0f) {
    if (a >= 7.8f) {
      


      s = __fdividef (1.0f, a);
      t = s * s;
      sum =                           0.77783067e-3f;
      sum = __internal_fmad (sum, t, -0.2777655457e-2f);
      sum = __internal_fmad (sum, t,  0.83333273853e-1f);
      sum = __internal_fmad (sum, s,  0.918938533204672f);
      s = 0.5f * __internal_accurate_logf(a);
      t = a - 0.5f;
      s = s * t;
      t = s - a;
      s = __fadd_rn(s, sum); 
      t = t + s;
      return t;
    } else {
      a = a - 3.0f;
      s =                        -7.488903254816711E+002f;
      s = __internal_fmad (s, a, -1.234974215949363E+004f);
      s = __internal_fmad (s, a, -4.106137688064877E+004f);
      s = __internal_fmad (s, a, -4.831066242492429E+004f);
      s = __internal_fmad (s, a, -1.430333998207429E+005f);
      t =                     a - 2.592509840117874E+002f;
      t = __internal_fmad (t, a, -1.077717972228532E+004f);
      t = __internal_fmad (t, a, -9.268505031444956E+004f);
      t = __internal_fmad (t, a, -2.063535768623558E+005f);
      t = __fdividef (s, t);
      t = t + a;
      return t;
    }
  } else if (a >= 1.5f) {
    a = a - 2.0f;
    t =                         4.959849168282574E-005f;
    t = __internal_fmad (t, a, -2.208948403848352E-004f);
    t = __internal_fmad (t, a,  5.413142447864599E-004f);
    t = __internal_fmad (t, a, -1.204516976842832E-003f);
    t = __internal_fmad (t, a,  2.884251838546602E-003f);
    t = __internal_fmad (t, a, -7.382757963931180E-003f);
    t = __internal_fmad (t, a,  2.058131963026755E-002f);
    t = __internal_fmad (t, a, -6.735248600734503E-002f);
    t = __internal_fmad (t, a,  3.224670187176319E-001f);
    t = __internal_fmad (t, a,  4.227843368636472E-001f);
    t = t * a;
    return t;
  } else if (a >= 0.7f) {
    a = 1.0f - a;
    t =                        4.588266515364258E-002f;
    t = __internal_fmad (t, a, 1.037396712740616E-001f);
    t = __internal_fmad (t, a, 1.228036339653591E-001f);
    t = __internal_fmad (t, a, 1.275242157462838E-001f);
    t = __internal_fmad (t, a, 1.432166835245778E-001f);
    t = __internal_fmad (t, a, 1.693435824224152E-001f);
    t = __internal_fmad (t, a, 2.074079329483975E-001f);
    t = __internal_fmad (t, a, 2.705875136435339E-001f);
    t = __internal_fmad (t, a, 4.006854436743395E-001f);
    t = __internal_fmad (t, a, 8.224669796332661E-001f);
    t = __internal_fmad (t, a, 5.772156651487230E-001f);
    t = t * a;
    return t;
  } else {
    t =                         3.587515669447039E-003f;
    t = __internal_fmad (t, a, -5.471285428060787E-003f);
    t = __internal_fmad (t, a, -4.462712795343244E-002f);
    t = __internal_fmad (t, a,  1.673177015593242E-001f);
    t = __internal_fmad (t, a, -4.213597883575600E-002f);
    t = __internal_fmad (t, a, -6.558672843439567E-001f);
    t = __internal_fmad (t, a,  5.772153712885004E-001f);
    t = t * a;
    t = __internal_fmad (t, a, a);
    return -__internal_accurate_logf(t);
  }
}


static __inline__ __attribute__((always_inline)) float __internal_sin_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z  =                         -1.95152959e-4f;
  z  = __internal_fmad (z, x2,  8.33216087e-3f);
  z  = __internal_fmad (z, x2, -1.66666546e-1f);
  z  = z * x2;
  z  = __internal_fmad (z, x, x);
  return z;
}


static __inline__ __attribute__((always_inline)) float __internal_cos_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z  =                          2.44331571e-5f;
  z  = __internal_fmad (z, x2, -1.38873163e-3f);
  z  = __internal_fmad (z, x2,  4.16666457e-2f);
  z  = __internal_fmad (z, x2, -5.00000000e-1f);
  z  = __internal_fmad (z, x2,  1.00000000e+0f);
  return z;
}

static __inline__ __attribute__((always_inline)) float __internal_accurate_sinf(float a)
{
  float z;
  int   i;

  if ((__isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  z = __internal_trig_reduction_kernel(a, &i);
  
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}







static __inline__ __attribute__((always_inline)) float sinf(float a)
{


#line 1665 "c:\\cuda\\include\\math_functions.h"
  return __internal_accurate_sinf(a);
#line 1667 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float sinpif(float a)
{
  float z;
  int   i;

  if ((__isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  if (a == floorf(a)) {
    return __int_as_float(__float_as_int(a) & 0x80000000);
  }
  i = (int)rintf (a * 2.0f);
  z = __internal_fmad ((float)i, -0.5f, a);
  z = z * 3.141592654f;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static __inline__ __attribute__((always_inline)) float cosf(float a)
{


#line 1699 "c:\\cuda\\include\\math_functions.h"
  float z;
  int i;

  if (__isinff(a)) {
    return __fadd_rn (a, -a); 
  }
  z = __internal_trig_reduction_kernel(a, &i);
  
  i++;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
#line 1718 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float tanf(float a)
{


#line 1725 "c:\\cuda\\include\\math_functions.h"
  float z;
  int   i;

  if (__isinff(a)) {
    return __fadd_rn (a, -a); 
  }
  z = __internal_trig_reduction_kernel(a, &i);
  
  z = __internal_tan_kernel(z);
  if (i & 1) {
    z = - (1.0f / z);
  }
  return z;
#line 1739 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float log2f(float a)
{


#line 1746 "c:\\cuda\\include\\math_functions.h"
  return __internal_accurate_log2f(a);
#line 1748 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float expf(float a)
{


#line 1755 "c:\\cuda\\include\\math_functions.h"
  return __internal_accurate_expf(a);
#line 1757 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float exp10f(float a)
{


#line 1764 "c:\\cuda\\include\\math_functions.h"
  return __internal_accurate_exp10f(a);
#line 1766 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float coshf(float a)
{
  float z;

  a = fabsf(a);
  z = __internal_expf_kernel(a, -2.0f);
  z = __internal_fmad (2.0f, z,  __fdividef (0.125f, z));
  if (a >= 90.0f) {
    z = __int_as_float(0x7f800000);     
  }
  return z;
}

static __inline__ __attribute__((always_inline)) float sinhf(float a)
{
  float s, z;

  s = a;
  a = fabsf(a);
  if (a >= 1.0f) {         
    z = __internal_expf_kernel(a, -2.0f);
    z = __internal_fmad (2.0f, z, -__fdividef (0.125f, z));
    if (a >= 90.0f) {
      z = __int_as_float(0x7f800000);     
    }
    z =  __int_as_float(__float_as_int(z) | (__float_as_int(s) & 0x80000000));
  } else {
    float a2 = s * s;
    
    z =                         2.816951222e-6f;
    z = __internal_fmad (z, a2, 1.983615978e-4f);
    z = __internal_fmad (z, a2, 8.333350058e-3f);
    z = __internal_fmad (z, a2, 1.666666650e-1f);
    z = z * a2;
    z = __internal_fmad (z, s, s);
  }
  return z;
}

static __inline__ __attribute__((always_inline)) float tanhf(float a)
{
  float s, t;

  t = fabsf(a);
  if (t >= 0.55f) {
    s = 1.0f - __fdividef(2.0f,(__internal_expf_kernel(2.0f * t, 0.0f)+1.0f));
    if (t >= 88.0f) {
      s = 1.0f;
    }
    s = __int_as_float(__float_as_int(s) | (__float_as_int(a) & 0x80000000));
  } else {
    float z2;
    z2 = a * a;
    t =                          1.643758066599993e-2f;
    t = __internal_fmad (t, z2, -5.267181327760551e-2f);
    t = __internal_fmad (t, z2,  1.332072505223051e-1f);
    t = __internal_fmad (t, z2, -3.333294663641083e-1f);
    t = t * z2;
    s = __internal_fmad (t, a, a);
    if (a == 0.0f) {   
      s = a + a;
    }
  }
  return s;
}

static __inline__ __attribute__((always_inline)) float atan2f(float a, float b)
{
  float t0, t1, fa, fb;

  fb = fabsf(b);
  fa = fabsf(a);
  if ((fa == 0.0f) && (fb == 0.0f)) {
    t0 = (__float_as_int(b) < 0) ? 3.141592654f : 0.0f;
    t0 = __int_as_float(__float_as_int(t0) | (__float_as_int(a) & 0x80000000));
  } else if ((fa == __int_as_float(0x7f800000)) && (fb == __int_as_float(0x7f800000))) {
    t0 = (__float_as_int(b) < 0) ? 2.356194490f : 0.785398163f;
    t0 = __int_as_float(__float_as_int(t0) | (__float_as_int(a) & 0x80000000));
  } else {
    
    
    t0 = fminf(fa, fb);
    t1 = fmaxf(fa, fb);
    t0 = t0 / t1;
    t0 = __internal_atanf_kernel(t0);
    
    if (fa > fb) t0 = 1.570796327f - t0;
    if (b < 0.0f) t0 = 3.141592654f - t0;
    t0 = __int_as_float(__float_as_int(t0) | (__float_as_int(a) & 0x80000000));
    t1 = a + b;
    if (!(t1 <= __int_as_float(0x7f800000))) {
      
        t0 = t1;
    }
  }
  return t0;
}

static __inline__ __attribute__((always_inline)) float atanf(float a)
{
  float t0, t1;

  
  t0 = fabsf(a);
  t1 = t0;
  if (t0 > 1.0f) {
    t1 = 1.0f / t1;
  }
  
  t1 = __internal_atanf_kernel(t1);
  
  if (t0 > 1.0f) {
    t1 = 1.570796327f - t1;
  }
  if (t0 <= __int_as_float(0x7f800000)) {
    t1 = __int_as_float(__float_as_int(t1) | (__float_as_int(a) & 0x80000000));
  }
  return t1;
}


static __inline__ __attribute__((always_inline)) float __internal_asinf_kernel(float a)
{
  float a2, t;
  a2 = a * a;
  t =                         5.175137819e-002f;
  t = __internal_fmad (t, a2, 1.816697683e-002f);
  t = __internal_fmad (t, a2, 4.675685871e-002f);
  t = __internal_fmad (t, a2, 7.484657646e-002f);
  t = __internal_fmad (t, a2, 1.666701424e-001f);
  t = t * a2;
  a = __internal_fmad (t, a, a);
  return a;
}

static __inline__ __attribute__((always_inline)) float asinf(float a)
{
  float t0, t1, t2;

  t0 = fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = sqrtf(t2);
  t1 = t0 > 0.57f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t2 = __internal_fmad (-2.0f, t1, 1.570796327f);
  if (t0 > 0.57f) {
    t1 = t2;
  }
  if (t1 <= __int_as_float(0x7f800000)) {
    t1 = __int_as_float(__float_as_int(t1) | (__float_as_int(a) & 0x80000000));
  }
  return t1;
}

static __inline__ __attribute__((always_inline)) float acosf(float a)
{
  float t0, t1, t2;

  t0 = fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = sqrtf(t2);
  t1 = t0 > 0.57f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t1 = t0 > 0.57f ? 2.0f * t1 : 1.570796327f - t1;
  if (__float_as_int(a) < 0) {
    t1 = 3.141592654f - t1;
  }
  return t1;
}

static __inline__ __attribute__((always_inline)) float logf(float a)
{


#line 1945 "c:\\cuda\\include\\math_functions.h"
  return __internal_accurate_logf(a);
#line 1947 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float log10f(float a)
{


#line 1954 "c:\\cuda\\include\\math_functions.h"
  return 0.434294482f * __internal_accurate_logf(a);
#line 1956 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float log1pf(float a)
{
  float t;
  if (a >= -0.394f && a <= 0.65f) {
    
    t = a + 2.0f;
    t = __fdividef (a, t);
    t = -a * t;
    t = __internal_atanhf_kernel (a, t);
  } else {
    t = __internal_accurate_logf (1.0f + a);
  }
  return t;
}

static __inline__ __attribute__((always_inline)) float acoshf(float a)
{
  float t;

  t = a - 1.0f;
  if (fabsf(t) > 8388608.0f) {
    
    return 0.693147181f + __internal_accurate_logf(a);
  } else {
    t = t + sqrtf(__fadd_rn(__fmul_rz(a, t), t));
    return log1pf(t);
  }
}

static __inline__ __attribute__((always_inline)) float asinhf(float a)
{
  float fa, oofa, t;

  fa = fabsf(a);
  if (fa > 8.507059173e37f) {   
    t = 0.693147181f + __logf(fa);  
  } else {
    oofa = 1.0f / fa;
    t =fa+__fdividef (fa,(oofa+sqrtf(__internal_fmad(oofa,oofa,1.0f))));
    t = log1pf(t);
  }
  if (fa <= __int_as_float(0x7f800000)) {
    t = __int_as_float(__float_as_int(t) | (__float_as_int(a) & 0x80000000));
  }
  return t;
}

static __inline__ __attribute__((always_inline)) float atanhf(float a)
{
  float fa, t;

  fa = fabsf(a);
  t = __fdividef ((2.0f * fa), (1.0f - fa));
  t = 0.5f * log1pf(t);
  if (fabsf(t) <= __int_as_float(0x7f800000)) {
    t = __int_as_float(__float_as_int(t) | (__float_as_int(a) & 0x80000000));
  }
  return t;
}

static __inline__ __attribute__((always_inline)) float expm1f(float a)
{
  float t, z, j, u;
  
  t = rintf (a * 1.442695041f);
  
  if (fabsf(a) < 0.41f) {
    t = 0.0f;
  }  
  z = __internal_fmad (-t, 0.6931457519f, a);
  z = __internal_fmad (-t, 1.4286067653e-6f, z);
  
  j = t;
  if (t == 128.0f) j = j - 1.0f; 
  
  u =                        1.38795078474044430E-003f;
  u = __internal_fmad (u, z, 8.38241261853264930E-003f);
  u = __internal_fmad (u, z, 4.16678317762833940E-002f);
  u = __internal_fmad (u, z, 1.66663978874356580E-001f);
  u = __internal_fmad (u, z, 4.99999940395997040E-001f);
  u = u * z;
  u = __internal_fmad (u, z, z);
  
  z = exp2f (j);
  u = __internal_fmad (u, z, z - 1.0f);
  if (t == 128.0f) u = u + u; 
  
  if (j > 128.0f) u = __int_as_float(0x7f800000);
  if (j < -25.0f) u = -1.0f;
  
  if (a == 0.0f) {
    u = __int_as_float(__float_as_int(a) & 0x80000000);
  }
  return u;
}

static __inline__ __attribute__((always_inline)) float hypotf(float a, float b)
{
  float v, w, s, t, fa, fb;

  fa = fabsf(a);
  fb = fabsf(b);
  v = s = fmaxf(fa, fb);
  w = t = fminf(fa, fb);
  if (v > 8.507059173e37f) {
    s = s * 0.25f;
    t = t * 0.25f;
  }
  t = __fdividef(t, s);
  t = __internal_fmad (t, t, 1.0f);
  t = v * sqrtf(t);
  if (v == 0.0f) {
    t = v + w;         
  }
  if ((!(fa <= __int_as_float(0x7f800000))) || (!(fb <= __int_as_float(0x7f800000)))) {
    t = a + b;         
  }
  if (v == __int_as_float(0x7f800000)) {
    t = v + w;         
  }
  return t;
}

static __inline__ __attribute__((always_inline)) float cbrtf(float a)
{
  float s, t;

  s = fabsf(a);
  t = exp2f(0.333333333f * __log2f(s));           
  t = t - (t - (__fdividef (s, t * t))) * 0.333333333f;  
  if (__float_as_int(a) < 0) {
    t = -t;
  }
  s = a + a;
  if (s == a) t = s; 
  return t;
}

static __inline__ __attribute__((always_inline)) float rcbrtf(float a)
{
  float s, t;

  s = fabsf(a);
  t = exp2f(-0.333333333f * __log2f(s));          
  t = __internal_fmad(__internal_fmad(t*t, -s*t, 1.0f), 0.333333333f*t, t);
  if (__float_as_int(a) < 0) {
    t = -t;
  }
  s = a + a;
  if (s == a) t = __fdividef (1.0f, a); 
  return t;
}

static __inline__ __attribute__((always_inline)) float erff(float a)
{
  float t, r, q;

  t = fabsf(a);
  if (t >= 1.0f) { 
    


    q = __internal_fmad (t, 0.3275911f, 1.0f);
    q = 1.0f / q;
    r =                         1.061405429f;
    r = __internal_fmad (r, q, -1.453152027f);
    r = __internal_fmad (r, q,  1.421413741f);
    r = __internal_fmad (r, q, -0.284496736f);
    r = __internal_fmad (r, q,  0.254829592f);
    r = r * q;
    q = __internal_expf_kernel(-a * a, 0.0f);
    r = __internal_fmad (-q, r, 1.0f);
    if (t >= 5.5f) {
      r = 1.0f;
    }
    a = __int_as_float (__float_as_int(r) | (__float_as_int(a) & 0x80000000));
  } else {
    t = a * a;
    r =                        -5.58510127926029810E-004f;
    r = __internal_fmad (r, t,  4.90688891415893070E-003f);
    r = __internal_fmad (r, t, -2.67027980930150640E-002f);
    r = __internal_fmad (r, t,  1.12799056505903940E-001f);
    r = __internal_fmad (r, t, -3.76122956138427440E-001f);
    r = __internal_fmad (r, t,  1.12837911712623450E+000f);
    a = a * r;
  }
  return a;
}

















 
static __inline__ __attribute__((always_inline)) float erfinvf(float a)
{
  float s, t, r;

  s = 1.0f + a;
  t = 1.0f - a;
  s = s * t;
  t = - __log2f (s);
  if (t > 8.2f) {
    t = rsqrtf (t);
    r =                        -5.8991436871681446E-001f;
    r = __internal_fmad (r, t, -6.6300422537735360E-001f);
    r = __internal_fmad (r, t,  1.5970110948817704E+000f);
    r = __internal_fmad (r, t, -6.7521557026467416E-001f);
    r = __internal_fmad (r, t, -9.5224791160399669E-002f);
    r = __internal_fmad (r, t,  8.3535343797791939E-001f);
    t = 1.0f / t;
    t = r * t;
    if (a < 0.0f) t = -t;
    return t;
  } else {
    r =                        -2.5172707606685652E-010f; 
    r = __internal_fmad (r, t,  9.4274289432374619E-009f); 
    r = __internal_fmad (r, t, -1.2054753059594516E-007f); 
    r = __internal_fmad (r, t,  2.1697004698667657E-007f); 
    r = __internal_fmad (r, t,  8.0621488510822390E-006f); 
    r = __internal_fmad (r, t, -3.1675491789646913E-005f); 
    r = __internal_fmad (r, t, -7.7436312951712784E-004f); 
    r = __internal_fmad (r, t,  5.5465877941375773E-003f); 
    r = __internal_fmad (r, t,  1.6082022430967846E-001f); 
    r = __internal_fmad (r, t,  8.8622690039402130E-001f); 
    return r * a;
  }
}

static __inline__ __attribute__((always_inline)) float erfcf(float a)
{
  if (a <= 0.813f) {
    return 1.0f - erff(a);
  } else {
    float p;
    float q;
    float h;
    float l;
    float t;

    








    t = __fdividef(1.0f, a);

    p =                        - 9.9910025099425892E-001f;
    p = __internal_fmad (p, t, - 2.6108451215634448E-001f);
    p = __internal_fmad (p, t, + 1.2460347155371844E-001f);
    p = __internal_fmad (p, t, + 1.3243909814778765E-001f);
    p = __internal_fmad (p, t, + 3.3477599162629441E-002f);
    q =                     t  + 2.2542670016875404E+000f;
    q = __internal_fmad (q, t, + 2.1514433559696009E+000f);
    q = __internal_fmad (q, t, + 1.0284106806050302E+000f);
    q = __internal_fmad (q, t, + 2.6094298761636442E-001f);
    q = __internal_fmad (q, t, - 3.9951461024063317E-006f);
    
    p = __fdividef(p, q);
    p = p * t;


    h = __int_as_float(__float_as_int(a) & 0xfffff000);
    l = a - h;
    q = -h * h;
    q = __internal_expf_kernel(q, 0.0f);
    h = a + h;
    l = l * h;
    h = __internal_expf_kernel(-l, -1.0f);
    q = q * h;





#line 2250 "c:\\cuda\\include\\math_functions.h"
    p = __internal_fmad (p, q, q);
    p = p * t;
    if (a > 10.055f) {
      p = 0.0f;
    }
    return p;
  }
}

static __inline__ __attribute__((always_inline)) float erfcinvf(float a)
{
  float t;
  if (a <= 0.0f) {
    t = rsqrtf (__int_as_float (0xffc00000));  
    if (a == 0.0f) {
      t = (1.0f - a) * __int_as_float(0x7f800000);
    }
  } 
  else if (a >= 0.0625f) {
    t = erfinvf (1.0f - a);
  }
  else {
    float p, q;
    t = __internal_accurate_logf(a);
    t = rsqrtf(-t);
    p =                        -1.64441567910e-1f;
    p = __internal_fmad (p, t,  6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t,  6.90969348887e-1f);
    p = __internal_fmad (p, t,  1.38271964963e+0f);
    p = __internal_fmad (p, t,  1.55047000312e-1f);
    q =                     t + 1.38522814199e+0f;
    q = __internal_fmad (q, t,  1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
  }
  return t;
}

static __inline__ __attribute__((always_inline)) float lgammaf(float a)
{
  float t;
  float i;
  int quot;
  t = __internal_lgammaf_pos(fabsf(a));
  if (a >= 0.0f) return t;
  a = fabsf(a);
  i = floorf(a);                   
  if (a == i) return __int_as_float(0x7f800000); 
  if (a < 1e-19f) return -__internal_accurate_logf(a);
  i = rintf (2.0f * a);
  quot = (int)i;
  i = __internal_fmad (-i, 0.5f, a);
  i = i * 3.141592654f;
  if (quot & 1) {
    i = __internal_cos_kernel(i);
  } else {
    i = __internal_sin_kernel(i);
  }
  i = fabsf(i);
  t = 1.144729886f - __internal_accurate_logf(i * a) - t;
  return t;
}

static __inline__ __attribute__((always_inline)) float ldexpf(float a, int b)
{
  float fa = fabsf(a);

  if ((fa == 0.0f) || (fa == __int_as_float(0x7f800000)) || (b == 0)) {
    if (!(fa > 0.0f)) a = a + a;
    return a;
  } else if (abs(b) < 126) {
    return a * exp2f((float)b);
  } else if (abs(b) < 252) {
    int bhalf = b / 2;
    return a * exp2f((float)bhalf) * exp2f((float)(b - bhalf));
  } else {
    int bquarter = b / 4;
    float t = exp2f((float)bquarter);
    return a * t * t * t * exp2f((float)(b - 3 * bquarter));
  }
}

static __inline__ __attribute__((always_inline)) float scalbnf(float a, int b)
{
  
  return ldexpf(a, b);
}

static __inline__ __attribute__((always_inline)) float scalblnf(float a, long int b)
{
  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return scalbnf(a, t);
}

static __inline__ __attribute__((always_inline)) float frexpf(float a, int *b)
{
  float fa = fabsf(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 1.175494351e-38f) {
    a *= 16777216.0f;
    denorm = 24;
  } else {
    denorm = 0;
  }
  expo = ((__float_as_int(a) >> 23) & 0xff);
  if ((fa == 0.0f) || (expo == 0xff)) {
    expo = 0;
    a = a + a;
  } else {  
    expo = expo - denorm - 126;
    a = __int_as_float(((__float_as_int(a) & 0x807fffff) | 0x3f000000));
  }
  *b = expo;
  return a;
}

static __inline__ __attribute__((always_inline)) float modff(float a, float *b)
{
  float t;
  if (__finitef(a)) {
    t = truncf(a);
    *b = t;
    t = a - t;
    t = __int_as_float(__float_as_int(t) | (__float_as_int(a) & 0x80000000));
    return t;
  } else if (__isinff(a)) {
    *b = a;
    return __int_as_float(__float_as_int(a) & 0x80000000);
  } else {
    *b = a + a; 
    return a + a;
  }
}

static __inline__ __attribute__((always_inline)) float fmodf(float a, float b)
{
  float orig_a = a;
  float orig_b = b;
  a = fabsf(a);
  b = fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {











#line 2418 "c:\\cuda\\include\\math_functions.h"
    float scaled_b = __int_as_float ((__float_as_int(b) & 0x007fffff) | 
                                     (__float_as_int(a) & 0x7f800000));
    if (scaled_b > a) {
      scaled_b *= 0.5f;
    }
#line 2424 "c:\\cuda\\include\\math_functions.h"
    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5f;
    }
    return __int_as_float (__float_as_int(a) | 
                           (__float_as_int(orig_a) & 0x80000000));
  } else {
    if (!(a > 0.0f)) orig_a = orig_a + orig_a;
    return orig_a;
  }
}

static __inline__ __attribute__((always_inline)) float remainderf(float a, float b)
{

  float twoa = 0.0f;
  unsigned int quot0 = 0;  
  float orig_a = a;
  float orig_b = b;

  a = fabsf(a);
  b = fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {










#line 2465 "c:\\cuda\\include\\math_functions.h"
    float scaled_b = __int_as_float ((__float_as_int(b) & 0x007fffff) | 
                                     (__float_as_int(a) & 0x7f800000));
    if (scaled_b > a) {
      scaled_b *= 0.5f;
    }
    
    if (a == scaled_b) {
      return __int_as_float(__float_as_int(orig_a) & 0x80000000);
    }    
#line 2475 "c:\\cuda\\include\\math_functions.h"
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        twoa = __internal_fmad (a, 2.0f, -scaled_b) - scaled_b;
        a = a - scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5f;
    }
  }
  






#line 2493 "c:\\cuda\\include\\math_functions.h"
  if (a >= 1.175494351e-38f) {
    twoa = 2.0f * a;
    if ((twoa > b) || ((twoa == b) && quot0)) {
      a -= b;
      a = __int_as_float(__float_as_int(a) | 0x80000000);
    }
  } else {
    
    if ((twoa > b) || ((twoa == b) && quot0)) {
      a = 0.5f * __internal_fmad(b, -2.0f, twoa);
      a = __int_as_float(__float_as_int(a) | 0x80000000);
    }
  }
#line 2507 "c:\\cuda\\include\\math_functions.h"
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  return a;
}

static __inline__ __attribute__((always_inline)) float remquof(float a, float b, int* quo)
{
  float twoa = 0.0f;
  unsigned int quot = 0;  
  unsigned int sign;
  float orig_a = a;
  float orig_b = b;

  
  sign = 0 - ((__float_as_int(a) ^ __float_as_int(b)) < 0);
  a = fabsf(a);
  b = fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    *quo = quot;
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    *quo = quot;
    return rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {











#line 2544 "c:\\cuda\\include\\math_functions.h"
    float scaled_b = __int_as_float ((__float_as_int(b) & 0x007fffff) | 
                                     (__float_as_int(a) & 0x7f800000));
    if (scaled_b > a) {
      scaled_b *= 0.5f;
    }
    
    if (a == scaled_b) {
      if (__float_as_int(b) > 0x7e800000) {
          a *= 0.25f;
          b *= 0.25f;
      }
      a = __fdividef(a,b) + 0.5f;
      quot = (a < 8.0f) ? (int)a : 0;
      quot = quot ^ sign;
      quot = quot - sign;
      *quo = quot;
      return __int_as_float(__float_as_int(orig_a) & 0x80000000);
    }    
#line 2563 "c:\\cuda\\include\\math_functions.h"
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5f;
    }
  }
  







#line 2582 "c:\\cuda\\include\\math_functions.h"
  if (a >= 1.175494351e-38f) {
    twoa = 2.0f * a;
    if ((twoa > b) || ((twoa == b) && (quot & 1))) {
      quot++;
      a -= b;
      a = __int_as_float(__float_as_int(a) | 0x80000000);
    }
  } else {
    
    if ((twoa > b) || ((twoa == b) && (quot & 1))) {
      quot++;
      a = 0.5f * (twoa - 2.0f * b);
      a = __int_as_float(__float_as_int(a) | 0x80000000);
    }
  }
#line 2598 "c:\\cuda\\include\\math_functions.h"
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *quo = quot;
  return a;
}

static __inline__ __attribute__((always_inline)) float fmaf(float a, float b, float c)
{
  return __fmaf_rn(a, b, c);
}

static __inline__ __attribute__((always_inline)) float __internal_accurate_powf(float a, float b)
{
  float2 loga, prod;
  float t;

  
  loga = __internal_log_ep(a);

  
  if (fabsf(b) > 1.0e34f) b *= 1.220703125e-4f;
  prod.y = b;
  prod.x = 0.0f;
  prod = __internal_dsmul (prod, loga);

  
  if (__float_as_int(prod.y) == 0x42b17218) {
    prod.y = __int_as_float(__float_as_int(prod.y) - 1);
    prod.x = prod.x + __int_as_float(0x37000000);
  }

  
  t = __internal_accurate_expf(prod.y);
  
  if (t != __int_as_float(0x7f800000)) {
    


    t = __internal_fmad (t, prod.x, t);
  }
  return t;
}

static __inline__ __attribute__((always_inline)) float powif(float a, int b)
{
  unsigned int e = abs(b);
  float r = 1.0f;

  while (1) {
    if ((e & 1) != 0) {
      r = __fmul_rn (r, a);
    }
    e = e >> 1;
    if (e == 0) {
      r = (b < 0) ? 1.0f / r : r;
      return r;
    }
    a = __fmul_rn (a, a);
  }
}

static __inline__ __attribute__((always_inline)) double powi(double a, int b)
{
  unsigned int e = abs(b);
  double       r = 1.0;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0 / r : r;
    }
    a = a * a;
  }
}

static __inline__ __attribute__((always_inline)) float powf(float a, float b)
{


#line 2684 "c:\\cuda\\include\\math_functions.h"
  int bIsOddInteger;
  float t;
  if (a == 1.0f || b == 0.0f) {
    return 1.0f;
  } 
  if (__isnanf(a) || __isnanf(b)) {
    return a + b;
  }
  if (a == __int_as_float(0x7f800000)) {
    return (__float_as_int(b) < 0) ? 0.0f : __int_as_float(0x7f800000);
  }
  if (__isinff(b)) {
    if (a == -1.0f) {
      return 1.0f;
    }
    t = (fabsf(a) > 1.0f) ? __int_as_float(0x7f800000) : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t + t;
  }  
  bIsOddInteger = fabsf(b - (2.0f * truncf(0.5f * b))) == 1.0f;
  if (a == 0.0f) {
    t = bIsOddInteger ? a : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t + t;
  } 
  if (a == -__int_as_float(0x7f800000)) {
    t = - ((b < 0.0f) ? (1.0f / a) : a);
    if (bIsOddInteger) {
      t = __int_as_float(__float_as_int(t) ^ 0x80000000);
    }
    return t;
  } 
  if ((a < 0.0f) && (b != truncf(b))) {
    return rsqrtf(__int_as_float(0xffc00000));
  }
  t = fabsf(a);
  t = __internal_accurate_powf(t, b);
  if ((a < 0.0f) && bIsOddInteger) {
    t = __int_as_float(__float_as_int(t) ^ 0x80000000);
  }
  return t;
#line 2730 "c:\\cuda\\include\\math_functions.h"
}


static __inline__ __attribute__((always_inline)) float __internal_tgammaf_kernel(float a)
{
  float t;
  t =                        -1.05767296987211380E-003f;
  t = __internal_fmad (t, a,  7.09279059435508670E-003f);
  t = __internal_fmad (t, a, -9.65347121958557050E-003f);
  t = __internal_fmad (t, a, -4.21736613253687960E-002f);
  t = __internal_fmad (t, a,  1.66542401247154280E-001f);
  t = __internal_fmad (t, a, -4.20043267827838460E-002f);
  t = __internal_fmad (t, a, -6.55878234051332940E-001f);
  t = __internal_fmad (t, a,  5.77215696929794240E-001f);
  t = __internal_fmad (t, a,  1.00000000000000000E+000f);
  return t;
}





static __inline__ __attribute__((always_inline)) float tgammaf(float a)
{
  float s, xx, x=a;
  if (x >= 0.0f) {
    if (x > 36.0f) x = 36.0f; 
    s = 1.0f;
    xx = x;
    if (x > 34.03f) { 
      xx -= 1.0f;
    }
    while (xx > 1.5f) {
      xx = xx - 1.0f;
      s = s * xx;
    }
    if (x >= 0.5f) {
      xx = xx - 1.0f;
    }
    xx = __internal_tgammaf_kernel(xx);
    if (x < 0.5f) {
      xx = xx * x;
    }
    s = __fdividef(s, xx);
    if (x > 34.03f) {
      
      xx = x - 1.0f;
      s = s * xx;
    }
    return s;
  } else {
    if (x == floorf(x)) {  
      x = rsqrtf (__int_as_float (0xffc00000));  
    } 
    if (x < -41.1f) x = -41.1f; 
    xx = x;
    if (x < -34.03f) {           
      xx += 6.0f;
    } 
    s = xx;
    while (xx < -0.5f) {
      xx = xx + 1.0f;
      s = s * xx;
    }
    xx = __internal_tgammaf_kernel(xx);
    s = s * xx;
    s = 1.0f / s;
    if (x < -34.03f) {
      xx = x;
      xx *= (x + 1.0f);
      xx *= (x + 2.0f);
      xx *= (x + 3.0f);
      xx *= (x + 4.0f);
      xx *= (x + 5.0f);
      xx = 1.0f / xx;
      s = s * xx;
      if ((a < -42.0f) && !(((int)a)&1)) {
        s = __int_as_float(0x80000000);
      }
    }    
    return s;
  }
}

static __inline__ __attribute__((always_inline)) float roundf(float a)
{
  float fa = fabsf(a);
  float u = __int_as_float (0x3f000000 | (__float_as_int(a) & 0x80000000));
  u = truncf (a + u);
  if (fa > 8388608.0f) u = a;
  if (fa < 0.5f) u = truncf (a);
  return u;
}

static __inline__ __attribute__((always_inline)) long long int __internal_llroundf_kernel(float a)
{
  unsigned long long int res, t = 0LL;
  int shift;
  unsigned int ia = __float_as_int(a);
  
  if ((ia << 1) > 0xff000000) return 0x8000000000000000LL;
  if ((int)ia >= 0x5f000000) return 0x7fffffffffffffffLL;
  if (ia >= 0xdf000000) return 0x8000000000000000LL;
  shift = 189 - ((ia >> 23) & 0xff);
  res = ((long long int)(((ia << 8) | 0x80000000) >> 1)) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (t >= 0x8000000000000000LL) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)(-(long long int)res);
  return (long long int)res;
}

static __inline__ __attribute__((always_inline)) long long int llroundf(float a)
{
  return __internal_llroundf_kernel(a);
}

static __inline__ __attribute__((always_inline)) long int lroundf(float a)
{


#line 2859 "c:\\cuda\\include\\math_functions.h"
  return (long int)(roundf(a));
#line 2861 "c:\\cuda\\include\\math_functions.h"
}

static __inline__ __attribute__((always_inline)) float fdimf(float a, float b)
{
  float t;
  t = a - b;    
  if (a <= b) {
    t = 0.0f;
  }
  return t;
}

static __inline__ __attribute__((always_inline)) int ilogbf(float a)
{
  unsigned int i;
  int expo;
  float fa;
  fa = fabsf(a);
  i = __float_as_int(fa);
  if (i < 0x00800000) {
    
    expo = -118 - __clz(i);
    if (i == 0x00000000) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  } else {
    expo = ((int)((i >> 23) & 0xff)) - 127;
    if ((i == 0x7f800000)) {
      expo = ((int)((unsigned int)-1 >> 1));
    }
    if ((i > 0x7f800000)) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  } 
  return expo;
}

static __inline__ __attribute__((always_inline)) float logbf(float a)
{
  unsigned int i;
  int expo;
  float fa, res;
  fa = fabsf(a);
  i = __float_as_int(fa);
  if (i < 0x00800000) {
    
    expo = -118 - __clz(i);
    res = (float)expo;
    if (a == 0.0f) {
      res = -__int_as_float(0x7f800000);
    }
  } else {
    expo = ((int)((i >> 23) & 0xff)) - 127;
    res = (float)expo;
    if ((i >= 0x7f800000)) {  
      
      res = a * a;
    }
  } 
  return res;
}

static __inline__ __attribute__((always_inline)) void sincosf(float a, float *sptr, float *cptr)
{


#line 2928 "c:\\cuda\\include\\math_functions.h"
  float t, s, c;
  volatile float t2, u2;
  int quadrant;
  t = fabsf(a);
  if ((t == __int_as_float(0x7f800000)) || (t == 0.0f)) {
    s = __fmul_rn (a, 0.0f); 
    c = 1.0f + s;                     
    *sptr = s;
    *cptr = c;
    return;
  }
  t = __internal_trig_reduction_kernel(a, &quadrant);
  u2 = __internal_cos_kernel(t);
  t2 = __internal_sin_kernel(t);
  if (quadrant & 1) {
    s = u2;
    c = t2;
  } else {
    s = t2;
    c = u2;
  }
  if (quadrant & 2) {
    s = -s;
  }
  quadrant++;
  if (quadrant & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;
#line 2959 "c:\\cuda\\include\\math_functions.h"
}








































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 4985 "c:\\cuda\\include\\math_functions.h"

#line 4987 "c:\\cuda\\include\\math_functions.h"





#line 4993 "c:\\cuda\\include\\math_functions.h"



#line 1 "c:\\cuda\\include\\math_functions_dbl_ptx1.h"








































static __inline__ __attribute__((always_inline)) double fabs(double a)
{
  return (double)fabsf((float)a);
}

static __inline__ __attribute__((always_inline)) double fmax(double a, double b)
{
  return (double)fmaxf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) double fmin(double a, double b)
{
  return (double)fminf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) int __finite(double a)
{
  return __finitef((float)a);
}

static __inline__ __attribute__((always_inline)) int __isinf(double a)
{
  return __isinff((float)a);
}

static __inline__ __attribute__((always_inline)) int __isnan(double a)
{
  return __isnanf((float)a);
}

static __inline__ __attribute__((always_inline)) int __signbit(double a)
{
  return __signbitf((float)a);
}

static __inline__ __attribute__((always_inline)) double sqrt(double a)
{
  return (double)sqrtf((float)a);
}

static __inline__ __attribute__((always_inline)) double rsqrt(double a)
{
  return (double)rsqrtf((float)a);
}

static __inline__ __attribute__((always_inline)) double ceil(double a)
{
  return (double)ceilf((float)a);
}

static __inline__ __attribute__((always_inline)) double trunc(double a)
{
  return (double)truncf((float)a);
}

static __inline__ __attribute__((always_inline)) double floor(double a)
{
  return (double)floorf((float)a);
}

static __inline__ __attribute__((always_inline)) double copysign(double a, double b)
{
  return (double)copysignf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) double sin(double a)
{
  return (double)sinf((float)a);
}

static __inline__ __attribute__((always_inline)) double sinpi(double a)
{
  return (double)sinpif((float)a);
}

static __inline__ __attribute__((always_inline)) double cos(double a)
{
  return (double)cosf((float)a);
}

static __inline__ __attribute__((always_inline)) void sincos(double a, double *sptr, double *cptr)
{
  float fs, fc;

  sincosf((float)a, &fs, &fc);

  *sptr = (double)fs;
  *cptr = (double)fc;
}

static __inline__ __attribute__((always_inline)) double tan(double a)
{
  return (double)tanf((float)a);
}

static __inline__ __attribute__((always_inline)) double exp(double a)
{
  return (double)expf((float)a);
}

static __inline__ __attribute__((always_inline)) double exp2(double a)
{
  return (double)exp2f((float)a);
}

static __inline__ __attribute__((always_inline)) double exp10(double a)
{
  return (double)exp10f((float)a);
}

static __inline__ __attribute__((always_inline)) double expm1(double a)
{
  return (double)expm1f((float)a);
}

static __inline__ __attribute__((always_inline)) double cosh(double a)
{
  return (double)coshf((float)a);
}

static __inline__ __attribute__((always_inline)) double sinh(double a)
{
  return (double)sinhf((float)a);
}

static __inline__ __attribute__((always_inline)) double tanh(double a)
{
  return (double)tanhf((float)a);
}

static __inline__ __attribute__((always_inline)) double asin(double a)
{
  return (double)asinf((float)a);
}

static __inline__ __attribute__((always_inline)) double acos(double a)
{
  return (double)acosf((float)a);
}

static __inline__ __attribute__((always_inline)) double atan(double a)
{
  return (double)atanf((float)a);
}

static __inline__ __attribute__((always_inline)) double atan2(double a, double b)
{
  return (double)atan2f((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) double log(double a)
{
  return (double)logf((float)a);
}

static __inline__ __attribute__((always_inline)) double log2(double a)
{
  return (double)log2f((float)a);
}

static __inline__ __attribute__((always_inline)) double log10(double a)
{
  return (double)log10f((float)a);
}

static __inline__ __attribute__((always_inline)) double log1p(double a)
{
  return (double)log1pf((float)a);
}

static __inline__ __attribute__((always_inline)) double acosh(double a)
{
  return (double)acoshf((float)a);
}

static __inline__ __attribute__((always_inline)) double asinh(double a)
{
  return (double)asinhf((float)a);
}

static __inline__ __attribute__((always_inline)) double atanh(double a)
{
  return (double)atanhf((float)a);
}

static __inline__ __attribute__((always_inline)) double hypot(double a, double b)
{
  return (double)hypotf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) double cbrt(double a)
{
  return (double)cbrtf((float)a);
}

static __inline__ __attribute__((always_inline)) double rcbrt(double a)
{
  return (double)rcbrtf((float)a);
}

static __inline__ __attribute__((always_inline)) double erf(double a)
{
  return (double)erff((float)a);
}

static __inline__ __attribute__((always_inline)) double erfinv(double a)
{
  return (double)erfinvf((float)a);
}

static __inline__ __attribute__((always_inline)) double erfc(double a)
{
  return (double)erfcf((float)a);
}

static __inline__ __attribute__((always_inline)) double erfcinv(double a)
{
  return (double)erfcinvf((float)a);
}

static __inline__ __attribute__((always_inline)) double lgamma(double a)
{
  return (double)lgammaf((float)a);
}

static __inline__ __attribute__((always_inline)) double tgamma(double a)
{
  return (double)tgammaf((float)a);
}

static __inline__ __attribute__((always_inline)) double ldexp(double a, int b)
{
  return (double)ldexpf((float)a, b);
}

static __inline__ __attribute__((always_inline)) double scalbn(double a, int b)
{
  return (double)scalbnf((float)a, b);
}

static __inline__ __attribute__((always_inline)) double scalbln(double a, long b)
{
  return (double)scalblnf((float)a, b);
}

static __inline__ __attribute__((always_inline)) double frexp(double a, int *b)
{
  return (double)frexpf((float)a, b);
}

static __inline__ __attribute__((always_inline)) double modf(double a, double *b)
{
  float fb;
  float fa = modff((float)a, &fb);

  *b = (double)fb;

  return (double)fa;  
}

static __inline__ __attribute__((always_inline)) double fmod(double a, double b)
{
  return (double)fmodf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) double remainder(double a, double b)
{
  return (double)remainderf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) double remquo(double a, double b, int *c)
{
  return (double)remquof((float)a, (float)b, c);
}

static __inline__ __attribute__((always_inline)) double nextafter(double a, double b)
{
  return (double)nextafterf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) double nan(const char *tagp)
{
  return (double)nanf(tagp);
}

static __inline__ __attribute__((always_inline)) double pow(double a, double b)
{
  return (double)powf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) double round(double a)
{
  return (double)roundf((float)a);
}

static __inline__ __attribute__((always_inline)) long lround(double a)
{
  return lroundf((float)a);
}

static __inline__ __attribute__((always_inline)) long long llround(double a)
{
  return llroundf((float)a);
}

static __inline__ __attribute__((always_inline)) double rint(double a)
{
  return (double)rintf((float)a);
}

static __inline__ __attribute__((always_inline)) long lrint(double a)
{
  return lrintf((float)a);
}

static __inline__ __attribute__((always_inline)) long long llrint(double a)
{
  return llrintf((float)a);
}

static __inline__ __attribute__((always_inline)) double nearbyint(double a)
{
  return (double)nearbyintf((float)a);
}

static __inline__ __attribute__((always_inline)) double fdim(double a, double b)
{
  return (double)fdimf((float)a, (float)b);
}

static __inline__ __attribute__((always_inline)) int ilogb(double a)
{
  return ilogbf((float)a);
}

static __inline__ __attribute__((always_inline)) double logb(double a)
{
  return (double)logbf((float)a);
}

static __inline__ __attribute__((always_inline)) double fma(double a, double b, double c)
{
  return (double)fmaf((float)a, (float)b, (float)c);
}













#line 399 "c:\\cuda\\include\\math_functions_dbl_ptx1.h"

#line 401 "c:\\cuda\\include\\math_functions_dbl_ptx1.h"

#line 403 "c:\\cuda\\include\\math_functions_dbl_ptx1.h"
#line 4997 "c:\\cuda\\include\\math_functions.h"

#line 4999 "c:\\cuda\\include\\math_functions.h"





#line 5005 "c:\\cuda\\include\\math_functions.h"

#line 5007 "c:\\cuda\\include\\math_functions.h"

#line 88 "C:\\CUDA\\include\\common_functions.h"

#line 90 "C:\\CUDA\\include\\common_functions.h"

#line 108 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
#line 110 "C:\\CUDA\\include\\cuPrintf.cu"
static __attribute__((__used__)) __attribute__((constant)) char *globalPrintfBuffer = ((char *)0);
#line 111 "C:\\CUDA\\include\\cuPrintf.cu"
static __attribute__((__used__)) __attribute__((constant)) int printfBufferLength = 0;
#line 113 "C:\\CUDA\\include\\cuPrintf.cu"
static __attribute__((__used__)) __attribute__((device)) volatile char *printfBufferPtr = ((volatile char *)0);

#line 116 "C:\\CUDA\\include\\cuPrintf.cu"

#line 118 "C:\\CUDA\\include\\cuPrintf.cu"

#line 120 "C:\\CUDA\\include\\cuPrintf.cu"

#line 122 "C:\\CUDA\\include\\cuPrintf.cu"

#line 124 "C:\\CUDA\\include\\cuPrintf.cu"

#line 126 "C:\\CUDA\\include\\cuPrintf.cu"

#line 128 "C:\\CUDA\\include\\cuPrintf.cu"

#line 130 "C:\\CUDA\\include\\cuPrintf.cu"

#line 132 "C:\\CUDA\\include\\cuPrintf.cu"

#line 134 "C:\\CUDA\\include\\cuPrintf.cu"

#line 136 "C:\\CUDA\\include\\cuPrintf.cu"

#line 138 "C:\\CUDA\\include\\cuPrintf.cu"

#line 140 "C:\\CUDA\\include\\cuPrintf.cu"

#line 142 "C:\\CUDA\\include\\cuPrintf.cu"

#line 144 "C:\\CUDA\\include\\cuPrintf.cu"

#line 146 "C:\\CUDA\\include\\cuPrintf.cu"

#line 148 "C:\\CUDA\\include\\cuPrintf.cu"

#line 150 "C:\\CUDA\\include\\cuPrintf.cu"

#line 152 "C:\\CUDA\\include\\cuPrintf.cu"

#line 154 "C:\\CUDA\\include\\cuPrintf.cu"

#line 156 "C:\\CUDA\\include\\cuPrintf.cu"

#line 158 "C:\\CUDA\\include\\cuPrintf.cu"

#line 160 "C:\\CUDA\\include\\cuPrintf.cu"

#line 162 "C:\\CUDA\\include\\cuPrintf.cu"

#line 164 "C:\\CUDA\\include\\cuPrintf.cu"

#line 166 "C:\\CUDA\\include\\cuPrintf.cu"

#line 168 "C:\\CUDA\\include\\cuPrintf.cu"

#line 170 "C:\\CUDA\\include\\cuPrintf.cu"

#line 172 "C:\\CUDA\\include\\cuPrintf.cu"

#line 174 "C:\\CUDA\\include\\cuPrintf.cu"

#line 176 "C:\\CUDA\\include\\cuPrintf.cu"

#line 178 "C:\\CUDA\\include\\cuPrintf.cu"

#line 180 "C:\\CUDA\\include\\cuPrintf.cu"

#line 182 "C:\\CUDA\\include\\cuPrintf.cu"

#line 184 "C:\\CUDA\\include\\cuPrintf.cu"

#line 186 "C:\\CUDA\\include\\cuPrintf.cu"

#line 188 "C:\\CUDA\\include\\cuPrintf.cu"

#line 190 "C:\\CUDA\\include\\cuPrintf.cu"

#line 192 "C:\\CUDA\\include\\cuPrintf.cu"

#line 194 "C:\\CUDA\\include\\cuPrintf.cu"

#line 196 "C:\\CUDA\\include\\cuPrintf.cu"

#line 198 "C:\\CUDA\\include\\cuPrintf.cu"

#line 200 "C:\\CUDA\\include\\cuPrintf.cu"

#line 202 "C:\\CUDA\\include\\cuPrintf.cu"

#line 204 "C:\\CUDA\\include\\cuPrintf.cu"

#line 206 "C:\\CUDA\\include\\cuPrintf.cu"

#line 208 "C:\\CUDA\\include\\cuPrintf.cu"

#line 210 "C:\\CUDA\\include\\cuPrintf.cu"

#line 212 "C:\\CUDA\\include\\cuPrintf.cu"

#line 214 "C:\\CUDA\\include\\cuPrintf.cu"

#line 216 "C:\\CUDA\\include\\cuPrintf.cu"

#line 218 "C:\\CUDA\\include\\cuPrintf.cu"

#line 220 "C:\\CUDA\\include\\cuPrintf.cu"

#line 222 "C:\\CUDA\\include\\cuPrintf.cu"

#line 224 "C:\\CUDA\\include\\cuPrintf.cu"

#line 226 "C:\\CUDA\\include\\cuPrintf.cu"

#line 228 "C:\\CUDA\\include\\cuPrintf.cu"

#line 230 "C:\\CUDA\\include\\cuPrintf.cu"

#line 232 "C:\\CUDA\\include\\cuPrintf.cu"

#line 234 "C:\\CUDA\\include\\cuPrintf.cu"

#line 236 "C:\\CUDA\\include\\cuPrintf.cu"

#line 238 "C:\\CUDA\\include\\cuPrintf.cu"

#line 240 "C:\\CUDA\\include\\cuPrintf.cu"

#line 242 "C:\\CUDA\\include\\cuPrintf.cu"

#line 244 "C:\\CUDA\\include\\cuPrintf.cu"

#line 246 "C:\\CUDA\\include\\cuPrintf.cu"

#line 248 "C:\\CUDA\\include\\cuPrintf.cu"

#line 250 "C:\\CUDA\\include\\cuPrintf.cu"

#line 252 "C:\\CUDA\\include\\cuPrintf.cu"

#line 254 "C:\\CUDA\\include\\cuPrintf.cu"

#line 256 "C:\\CUDA\\include\\cuPrintf.cu"

#line 258 "C:\\CUDA\\include\\cuPrintf.cu"

#line 260 "C:\\CUDA\\include\\cuPrintf.cu"

#line 262 "C:\\CUDA\\include\\cuPrintf.cu"

#line 264 "C:\\CUDA\\include\\cuPrintf.cu"

#line 266 "C:\\CUDA\\include\\cuPrintf.cu"

#line 268 "C:\\CUDA\\include\\cuPrintf.cu"

#line 270 "C:\\CUDA\\include\\cuPrintf.cu"

#line 272 "C:\\CUDA\\include\\cuPrintf.cu"

#line 274 "C:\\CUDA\\include\\cuPrintf.cu"

#line 276 "C:\\CUDA\\include\\cuPrintf.cu"

#line 278 "C:\\CUDA\\include\\cuPrintf.cu"

#line 280 "C:\\CUDA\\include\\cuPrintf.cu"

#line 282 "C:\\CUDA\\include\\cuPrintf.cu"

#line 284 "C:\\CUDA\\include\\cuPrintf.cu"

#line 286 "C:\\CUDA\\include\\cuPrintf.cu"

#line 288 "C:\\CUDA\\include\\cuPrintf.cu"

#line 290 "C:\\CUDA\\include\\cuPrintf.cu"

#line 292 "C:\\CUDA\\include\\cuPrintf.cu"

#line 294 "C:\\CUDA\\include\\cuPrintf.cu"

#line 296 "C:\\CUDA\\include\\cuPrintf.cu"

#line 298 "C:\\CUDA\\include\\cuPrintf.cu"

#line 300 "C:\\CUDA\\include\\cuPrintf.cu"

#line 302 "C:\\CUDA\\include\\cuPrintf.cu"

#line 304 "C:\\CUDA\\include\\cuPrintf.cu"

#line 306 "C:\\CUDA\\include\\cuPrintf.cu"

#line 308 "C:\\CUDA\\include\\cuPrintf.cu"

#line 310 "C:\\CUDA\\include\\cuPrintf.cu"

#line 312 "C:\\CUDA\\include\\cuPrintf.cu"

#line 314 "C:\\CUDA\\include\\cuPrintf.cu"

#line 316 "C:\\CUDA\\include\\cuPrintf.cu"

#line 318 "C:\\CUDA\\include\\cuPrintf.cu"

#line 320 "C:\\CUDA\\include\\cuPrintf.cu"

#line 322 "C:\\CUDA\\include\\cuPrintf.cu"

#line 324 "C:\\CUDA\\include\\cuPrintf.cu"

#line 326 "C:\\CUDA\\include\\cuPrintf.cu"

#line 328 "C:\\CUDA\\include\\cuPrintf.cu"

#line 330 "C:\\CUDA\\include\\cuPrintf.cu"

#line 332 "C:\\CUDA\\include\\cuPrintf.cu"

#line 334 "C:\\CUDA\\include\\cuPrintf.cu"

#line 336 "C:\\CUDA\\include\\cuPrintf.cu"

#line 338 "C:\\CUDA\\include\\cuPrintf.cu"

#line 340 "C:\\CUDA\\include\\cuPrintf.cu"

#line 342 "C:\\CUDA\\include\\cuPrintf.cu"

#line 344 "C:\\CUDA\\include\\cuPrintf.cu"

#line 346 "C:\\CUDA\\include\\cuPrintf.cu"

#line 348 "C:\\CUDA\\include\\cuPrintf.cu"

#line 350 "C:\\CUDA\\include\\cuPrintf.cu"

#line 352 "C:\\CUDA\\include\\cuPrintf.cu"

#line 354 "C:\\CUDA\\include\\cuPrintf.cu"

#line 356 "C:\\CUDA\\include\\cuPrintf.cu"

#line 358 "C:\\CUDA\\include\\cuPrintf.cu"

#line 360 "C:\\CUDA\\include\\cuPrintf.cu"

#line 362 "C:\\CUDA\\include\\cuPrintf.cu"

#line 364 "C:\\CUDA\\include\\cuPrintf.cu"

#line 366 "C:\\CUDA\\include\\cuPrintf.cu"

#line 368 "C:\\CUDA\\include\\cuPrintf.cu"

#line 370 "C:\\CUDA\\include\\cuPrintf.cu"

#line 372 "C:\\CUDA\\include\\cuPrintf.cu"

#line 374 "C:\\CUDA\\include\\cuPrintf.cu"

#line 376 "C:\\CUDA\\include\\cuPrintf.cu"

#line 378 "C:\\CUDA\\include\\cuPrintf.cu"

#line 380 "C:\\CUDA\\include\\cuPrintf.cu"

#line 382 "C:\\CUDA\\include\\cuPrintf.cu"

#line 384 "C:\\CUDA\\include\\cuPrintf.cu"

#line 386 "C:\\CUDA\\include\\cuPrintf.cu"

#line 388 "C:\\CUDA\\include\\cuPrintf.cu"

#line 390 "C:\\CUDA\\include\\cuPrintf.cu"

#line 392 "C:\\CUDA\\include\\cuPrintf.cu"

#line 394 "C:\\CUDA\\include\\cuPrintf.cu"

#line 396 "C:\\CUDA\\include\\cuPrintf.cu"

#line 398 "C:\\CUDA\\include\\cuPrintf.cu"

#line 400 "C:\\CUDA\\include\\cuPrintf.cu"

#line 402 "C:\\CUDA\\include\\cuPrintf.cu"

#line 404 "C:\\CUDA\\include\\cuPrintf.cu"

#line 406 "C:\\CUDA\\include\\cuPrintf.cu"

#line 408 "C:\\CUDA\\include\\cuPrintf.cu"

#line 410 "C:\\CUDA\\include\\cuPrintf.cu"

#line 412 "C:\\CUDA\\include\\cuPrintf.cu"

#line 414 "C:\\CUDA\\include\\cuPrintf.cu"

#line 416 "C:\\CUDA\\include\\cuPrintf.cu"

#line 418 "C:\\CUDA\\include\\cuPrintf.cu"

#line 420 "C:\\CUDA\\include\\cuPrintf.cu"

#line 422 "C:\\CUDA\\include\\cuPrintf.cu"

#line 424 "C:\\CUDA\\include\\cuPrintf.cu"

#line 426 "C:\\CUDA\\include\\cuPrintf.cu"

#line 428 "C:\\CUDA\\include\\cuPrintf.cu"

#line 430 "C:\\CUDA\\include\\cuPrintf.cu"

#line 432 "C:\\CUDA\\include\\cuPrintf.cu"

#line 434 "C:\\CUDA\\include\\cuPrintf.cu"

#line 436 "C:\\CUDA\\include\\cuPrintf.cu"

#line 438 "C:\\CUDA\\include\\cuPrintf.cu"

#line 440 "C:\\CUDA\\include\\cuPrintf.cu"

#line 442 "C:\\CUDA\\include\\cuPrintf.cu"

#line 444 "C:\\CUDA\\include\\cuPrintf.cu"

#line 446 "C:\\CUDA\\include\\cuPrintf.cu"

#line 448 "C:\\CUDA\\include\\cuPrintf.cu"

#line 450 "C:\\CUDA\\include\\cuPrintf.cu"

#line 452 "C:\\CUDA\\include\\cuPrintf.cu"

#line 454 "C:\\CUDA\\include\\cuPrintf.cu"

#line 456 "C:\\CUDA\\include\\cuPrintf.cu"

#line 458 "C:\\CUDA\\include\\cuPrintf.cu"

#line 460 "C:\\CUDA\\include\\cuPrintf.cu"

#line 462 "C:\\CUDA\\include\\cuPrintf.cu"

#line 464 "C:\\CUDA\\include\\cuPrintf.cu"

#line 466 "C:\\CUDA\\include\\cuPrintf.cu"

#line 468 "C:\\CUDA\\include\\cuPrintf.cu"

#line 470 "C:\\CUDA\\include\\cuPrintf.cu"

#line 472 "C:\\CUDA\\include\\cuPrintf.cu"

#line 474 "C:\\CUDA\\include\\cuPrintf.cu"

#line 476 "C:\\CUDA\\include\\cuPrintf.cu"

#line 478 "C:\\CUDA\\include\\cuPrintf.cu"

#line 480 "C:\\CUDA\\include\\cuPrintf.cu"

#line 482 "C:\\CUDA\\include\\cuPrintf.cu"

#line 484 "C:\\CUDA\\include\\cuPrintf.cu"

#line 486 "C:\\CUDA\\include\\cuPrintf.cu"

#line 488 "C:\\CUDA\\include\\cuPrintf.cu"

#line 490 "C:\\CUDA\\include\\cuPrintf.cu"

#line 492 "C:\\CUDA\\include\\cuPrintf.cu"

#line 494 "C:\\CUDA\\include\\cuPrintf.cu"

#line 496 "C:\\CUDA\\include\\cuPrintf.cu"

#line 498 "C:\\CUDA\\include\\cuPrintf.cu"

#line 500 "C:\\CUDA\\include\\cuPrintf.cu"

#line 502 "C:\\CUDA\\include\\cuPrintf.cu"

#line 504 "C:\\CUDA\\include\\cuPrintf.cu"

#line 506 "C:\\CUDA\\include\\cuPrintf.cu"

#line 508 "C:\\CUDA\\include\\cuPrintf.cu"

#line 510 "C:\\CUDA\\include\\cuPrintf.cu"

#line 512 "C:\\CUDA\\include\\cuPrintf.cu"

#line 514 "C:\\CUDA\\include\\cuPrintf.cu"

#line 516 "C:\\CUDA\\include\\cuPrintf.cu"

#line 518 "C:\\CUDA\\include\\cuPrintf.cu"

#line 520 "C:\\CUDA\\include\\cuPrintf.cu"

#line 522 "C:\\CUDA\\include\\cuPrintf.cu"

#line 524 "C:\\CUDA\\include\\cuPrintf.cu"

#line 526 "C:\\CUDA\\include\\cuPrintf.cu"

#line 528 "C:\\CUDA\\include\\cuPrintf.cu"

#line 530 "C:\\CUDA\\include\\cuPrintf.cu"

#line 532 "C:\\CUDA\\include\\cuPrintf.cu"

#line 534 "C:\\CUDA\\include\\cuPrintf.cu"

#line 536 "C:\\CUDA\\include\\cuPrintf.cu"

#line 538 "C:\\CUDA\\include\\cuPrintf.cu"

#line 540 "C:\\CUDA\\include\\cuPrintf.cu"

#line 542 "C:\\CUDA\\include\\cuPrintf.cu"

#line 544 "C:\\CUDA\\include\\cuPrintf.cu"

#line 546 "C:\\CUDA\\include\\cuPrintf.cu"

#line 548 "C:\\CUDA\\include\\cuPrintf.cu"

#line 550 "C:\\CUDA\\include\\cuPrintf.cu"

#line 552 "C:\\CUDA\\include\\cuPrintf.cu"

#line 554 "C:\\CUDA\\include\\cuPrintf.cu"

#line 556 "C:\\CUDA\\include\\cuPrintf.cu"

#line 558 "C:\\CUDA\\include\\cuPrintf.cu"

#line 560 "C:\\CUDA\\include\\cuPrintf.cu"

#line 562 "C:\\CUDA\\include\\cuPrintf.cu"

#line 564 "C:\\CUDA\\include\\cuPrintf.cu"

#line 566 "C:\\CUDA\\include\\cuPrintf.cu"

#line 568 "C:\\CUDA\\include\\cuPrintf.cu"

#line 570 "C:\\CUDA\\include\\cuPrintf.cu"

#line 572 "C:\\CUDA\\include\\cuPrintf.cu"

#line 574 "C:\\CUDA\\include\\cuPrintf.cu"

#line 576 "C:\\CUDA\\include\\cuPrintf.cu"

#line 578 "C:\\CUDA\\include\\cuPrintf.cu"

#line 580 "C:\\CUDA\\include\\cuPrintf.cu"

#line 582 "C:\\CUDA\\include\\cuPrintf.cu"

#line 584 "C:\\CUDA\\include\\cuPrintf.cu"

#line 586 "C:\\CUDA\\include\\cuPrintf.cu"

#line 588 "C:\\CUDA\\include\\cuPrintf.cu"

#line 590 "C:\\CUDA\\include\\cuPrintf.cu"

#line 592 "C:\\CUDA\\include\\cuPrintf.cu"

#line 594 "C:\\CUDA\\include\\cuPrintf.cu"

#line 596 "C:\\CUDA\\include\\cuPrintf.cu"

#line 598 "C:\\CUDA\\include\\cuPrintf.cu"

#line 600 "C:\\CUDA\\include\\cuPrintf.cu"

#line 602 "C:\\CUDA\\include\\cuPrintf.cu"

#line 604 "C:\\CUDA\\include\\cuPrintf.cu"

#line 606 "C:\\CUDA\\include\\cuPrintf.cu"

#line 608 "C:\\CUDA\\include\\cuPrintf.cu"

#line 610 "C:\\CUDA\\include\\cuPrintf.cu"

#line 612 "C:\\CUDA\\include\\cuPrintf.cu"

#line 614 "C:\\CUDA\\include\\cuPrintf.cu"

#line 616 "C:\\CUDA\\include\\cuPrintf.cu"

#line 618 "C:\\CUDA\\include\\cuPrintf.cu"

#line 620 "C:\\CUDA\\include\\cuPrintf.cu"

#line 622 "C:\\CUDA\\include\\cuPrintf.cu"

#line 624 "C:\\CUDA\\include\\cuPrintf.cu"

#line 626 "C:\\CUDA\\include\\cuPrintf.cu"

#line 628 "C:\\CUDA\\include\\cuPrintf.cu"

#line 630 "C:\\CUDA\\include\\cuPrintf.cu"

#line 632 "C:\\CUDA\\include\\cuPrintf.cu"

#line 634 "C:\\CUDA\\include\\cuPrintf.cu"

#line 636 "C:\\CUDA\\include\\cuPrintf.cu"

#line 638 "C:\\CUDA\\include\\cuPrintf.cu"

#line 640 "C:\\CUDA\\include\\cuPrintf.cu"

#line 642 "C:\\CUDA\\include\\cuPrintf.cu"

#line 644 "C:\\CUDA\\include\\cuPrintf.cu"

#line 646 "C:\\CUDA\\include\\cuPrintf.cu"

#line 648 "C:\\CUDA\\include\\cuPrintf.cu"

#line 650 "C:\\CUDA\\include\\cuPrintf.cu"

#line 652 "C:\\CUDA\\include\\cuPrintf.cu"

#line 654 "C:\\CUDA\\include\\cuPrintf.cu"

#line 656 "C:\\CUDA\\include\\cuPrintf.cu"

#line 658 "C:\\CUDA\\include\\cuPrintf.cu"

#line 660 "C:\\CUDA\\include\\cuPrintf.cu"

#line 662 "C:\\CUDA\\include\\cuPrintf.cu"

#line 664 "C:\\CUDA\\include\\cuPrintf.cu"

#line 666 "C:\\CUDA\\include\\cuPrintf.cu"

#line 668 "C:\\CUDA\\include\\cuPrintf.cu"

#line 670 "C:\\CUDA\\include\\cuPrintf.cu"

#line 672 "C:\\CUDA\\include\\cuPrintf.cu"

#line 674 "C:\\CUDA\\include\\cuPrintf.cu"

#line 676 "C:\\CUDA\\include\\cuPrintf.cu"

#line 678 "C:\\CUDA\\include\\cuPrintf.cu"

#line 680 "C:\\CUDA\\include\\cuPrintf.cu"

#line 682 "C:\\CUDA\\include\\cuPrintf.cu"

#line 684 "C:\\CUDA\\include\\cuPrintf.cu"

#line 686 "C:\\CUDA\\include\\cuPrintf.cu"

#line 688 "C:\\CUDA\\include\\cuPrintf.cu"

#line 690 "C:\\CUDA\\include\\cuPrintf.cu"

#line 692 "C:\\CUDA\\include\\cuPrintf.cu"

#line 694 "C:\\CUDA\\include\\cuPrintf.cu"

#line 696 "C:\\CUDA\\include\\cuPrintf.cu"

#line 698 "C:\\CUDA\\include\\cuPrintf.cu"

#line 700 "C:\\CUDA\\include\\cuPrintf.cu"

#line 702 "C:\\CUDA\\include\\cuPrintf.cu"

#line 704 "C:\\CUDA\\include\\cuPrintf.cu"

#line 706 "C:\\CUDA\\include\\cuPrintf.cu"

#line 708 "C:\\CUDA\\include\\cuPrintf.cu"

#line 710 "C:\\CUDA\\include\\cuPrintf.cu"

#line 712 "C:\\CUDA\\include\\cuPrintf.cu"

#line 714 "C:\\CUDA\\include\\cuPrintf.cu"

#line 716 "C:\\CUDA\\include\\cuPrintf.cu"

#line 718 "C:\\CUDA\\include\\cuPrintf.cu"

#line 720 "C:\\CUDA\\include\\cuPrintf.cu"

#line 722 "C:\\CUDA\\include\\cuPrintf.cu"

#line 724 "C:\\CUDA\\include\\cuPrintf.cu"

#line 726 "C:\\CUDA\\include\\cuPrintf.cu"

#line 728 "C:\\CUDA\\include\\cuPrintf.cu"

#line 730 "C:\\CUDA\\include\\cuPrintf.cu"

#line 732 "C:\\CUDA\\include\\cuPrintf.cu"

#line 734 "C:\\CUDA\\include\\cuPrintf.cu"

#line 736 "C:\\CUDA\\include\\cuPrintf.cu"

#line 738 "C:\\CUDA\\include\\cuPrintf.cu"

#line 740 "C:\\CUDA\\include\\cuPrintf.cu"

#line 742 "C:\\CUDA\\include\\cuPrintf.cu"

#line 744 "C:\\CUDA\\include\\cuPrintf.cu"

#line 746 "C:\\CUDA\\include\\cuPrintf.cu"
#line 473 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
static __inline__ float _Z8_Pow_intIfET_S0_i(
#line 473 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
float _X, 
#line 473 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
int _Y)
#line 474 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{
#line 474 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
 unsigned __cuda_local_var_30927_23__N;
#line 475 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
if (_Y >= 0)
#line 475 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{
#line 476 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
__cuda_local_var_30927_23__N = ((unsigned)_Y);
#line 476 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}
#line 476 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
else 
#line 476 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{
#line 478 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
__cuda_local_var_30927_23__N = ((unsigned)(-_Y));
#line 478 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}
#line 478 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{
#line 479 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
 float _Z;
#line 479 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
_Z = (1.0F);
#line 479 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
for (; ; _X *= _X)
#line 480 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{
#line 480 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
if ((__cuda_local_var_30927_23__N & 1U) != 0U)
#line 480 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{
#line 481 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
_Z *= _X;
#line 481 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}
#line 482 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
if ((__cuda_local_var_30927_23__N >>= 1) == 0U)
#line 482 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
{
#line 483 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
return (_Y < 0) ? ((1.0F) / _Z) : _Z;
#line 483 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}
#line 483 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}
#line 483 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}
#line 483 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\math.h"
}
#line 160 "C:\\CUDA\\include\\cuPrintf.cu"
static char *_Z19getNextPrintfBufPtrv(void)
#line 161 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 218 "C:\\CUDA\\include\\cuPrintf.cu"
 size_t __cuda_local_var_67223_12_offset;
#line 163 "C:\\CUDA\\include\\cuPrintf.cu"
if (!(printfBufferPtr))
#line 163 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 164 "C:\\CUDA\\include\\cuPrintf.cu"
return ((char *)0);
#line 164 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 167 "C:\\CUDA\\include\\cuPrintf.cu"
if (((restrictRules.blockid) != (-1)) && (((unsigned)(restrictRules.blockid)) != ((blockIdx.x) + ((gridDim.x) * (blockIdx.y)))))
#line 167 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 168 "C:\\CUDA\\include\\cuPrintf.cu"
return ((char *)0);
#line 168 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 169 "C:\\CUDA\\include\\cuPrintf.cu"
if (((restrictRules.threadid) != (-1)) && (((unsigned)(restrictRules.threadid)) != (((threadIdx.x) + ((blockDim.x) * (threadIdx.y))) + (((blockDim.x) * (blockDim.y)) * (threadIdx.z)))))
#line 169 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 170 "C:\\CUDA\\include\\cuPrintf.cu"
return ((char *)0);
#line 170 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 218 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67223_12_offset = (((unsigned long long)(__uAtomicAdd(((unsigned *)(&printfBufferPtr)), 256U))) - ((size_t)globalPrintfBuffer));
#line 219 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67223_12_offset %= ((unsigned long long)printfBufferLength);
#line 220 "C:\\CUDA\\include\\cuPrintf.cu"
return globalPrintfBuffer + __cuda_local_var_67223_12_offset;
#line 222 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 232 "C:\\CUDA\\include\\cuPrintf.cu"
static void _Z17writePrintfHeaderPcS_(
#line 232 "C:\\CUDA\\include\\cuPrintf.cu"
char *ptr, 
#line 232 "C:\\CUDA\\include\\cuPrintf.cu"
char *fmtptr)
#line 233 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 234 "C:\\CUDA\\include\\cuPrintf.cu"
if (ptr)
#line 235 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 236 "C:\\CUDA\\include\\cuPrintf.cu"
 cuPrintfHeader __cuda_local_var_67241_24_header;
#line 237 "C:\\CUDA\\include\\cuPrintf.cu"
(__cuda_local_var_67241_24_header.magic) = ((unsigned short)51217U);
#line 238 "C:\\CUDA\\include\\cuPrintf.cu"
(__cuda_local_var_67241_24_header.fmtoffset) = ((unsigned short)(fmtptr - ptr));
#line 239 "C:\\CUDA\\include\\cuPrintf.cu"
(__cuda_local_var_67241_24_header.blockid) = ((unsigned short)((blockIdx.x) + ((gridDim.x) * (blockIdx.y))));
#line 240 "C:\\CUDA\\include\\cuPrintf.cu"
(__cuda_local_var_67241_24_header.threadid) = ((unsigned short)(((threadIdx.x) + ((blockDim.x) * (threadIdx.y))) + (((blockDim.x) * (blockDim.y)) * (threadIdx.z))));
#line 241 "C:\\CUDA\\include\\cuPrintf.cu"
(*((cuPrintfHeader *)((void *)ptr))) = __cuda_local_var_67241_24_header;
#line 242 "C:\\CUDA\\include\\cuPrintf.cu"
} 
#line 243 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 257 "C:\\CUDA\\include\\cuPrintf.cu"
static char *_Z15cuPrintfStrncpyPcPKciS_(
#line 257 "C:\\CUDA\\include\\cuPrintf.cu"
char *dest, 
#line 257 "C:\\CUDA\\include\\cuPrintf.cu"
const char *src, 
#line 257 "C:\\CUDA\\include\\cuPrintf.cu"
int n, 
#line 257 "C:\\CUDA\\include\\cuPrintf.cu"
char *end)
#line 258 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 266 "C:\\CUDA\\include\\cuPrintf.cu"
 int *__cuda_local_var_67271_10_lenptr;
#line 267 "C:\\CUDA\\include\\cuPrintf.cu"
 int __cuda_local_var_67272_9_len;
#line 260 "C:\\CUDA\\include\\cuPrintf.cu"
if (((!(dest)) || (!(src))) || (dest >= end))
#line 260 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 261 "C:\\CUDA\\include\\cuPrintf.cu"
return ((char *)0);
#line 261 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 266 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67271_10_lenptr = ((int *)((void *)dest));
#line 267 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67272_9_len = 0;
#line 268 "C:\\CUDA\\include\\cuPrintf.cu"
dest += 8ULL;
#line 271 "C:\\CUDA\\include\\cuPrintf.cu"
while (n--)
#line 272 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 273 "C:\\CUDA\\include\\cuPrintf.cu"
if (dest >= end)
#line 273 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 274 "C:\\CUDA\\include\\cuPrintf.cu"
goto __T24;
#line 274 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 276 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67272_9_len++;
#line 277 "C:\\CUDA\\include\\cuPrintf.cu"
(*(dest++)) = (*src);
#line 278 "C:\\CUDA\\include\\cuPrintf.cu"
if (((int)(*(src++))) == 0)
#line 278 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 279 "C:\\CUDA\\include\\cuPrintf.cu"
goto __T24;
#line 279 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 280 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 280 "C:\\CUDA\\include\\cuPrintf.cu"
__T24:;
#line 283 "C:\\CUDA\\include\\cuPrintf.cu"
while ((dest < end) && ((((unsigned long long)((long)((unsigned long)((unsigned long)dest)))) & 7ULL) != 0ULL))
#line 284 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 285 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67272_9_len++;
#line 286 "C:\\CUDA\\include\\cuPrintf.cu"
(*(dest++)) = ((char)0);
#line 287 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 288 "C:\\CUDA\\include\\cuPrintf.cu"
(*__cuda_local_var_67271_10_lenptr) = __cuda_local_var_67272_9_len;
#line 289 "C:\\CUDA\\include\\cuPrintf.cu"
return (dest < end) ? dest : ((char *)0);
#line 290 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 385 "C:\\CUDA\\include\\cuPrintf.cu"
static int _Z8cuPrintfPKc(
#line 385 "C:\\CUDA\\include\\cuPrintf.cu"
const char *fmt)
#line 386 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
 char *__cuda_local_var_67392_8_start;
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
 char *__cuda_local_var_67392_16_end;
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
 char *__cuda_local_var_67392_22_bufptr;
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
 char *__cuda_local_var_67392_31_fmtstart;
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
if ((__cuda_local_var_67392_8_start = (_Z19getNextPrintfBufPtrv())) == ((char *)0))
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
return 0;
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67392_16_end = (__cuda_local_var_67392_8_start + 256);
#line 387 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67392_22_bufptr = (__cuda_local_var_67392_8_start + 8ULL);
#line 389 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67392_31_fmtstart = __cuda_local_var_67392_22_bufptr;
#line 389 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67392_16_end = (_Z15cuPrintfStrncpyPcPKciS_(__cuda_local_var_67392_22_bufptr, fmt, 256, __cuda_local_var_67392_16_end));
#line 389 "C:\\CUDA\\include\\cuPrintf.cu"
_Z17writePrintfHeaderPcS_(__cuda_local_var_67392_8_start, ((__cuda_local_var_67392_16_end) ? __cuda_local_var_67392_31_fmtstart : ((char *)0)));
#line 389 "C:\\CUDA\\include\\cuPrintf.cu"
return (__cuda_local_var_67392_16_end) ? ((int)(__cuda_local_var_67392_16_end - __cuda_local_var_67392_8_start)) : 0;
#line 390 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 530 "C:\\CUDA\\include\\cuPrintf.cu"
static void _Z16cuPrintfRestrictii(
#line 530 "C:\\CUDA\\include\\cuPrintf.cu"
int threadid, 
#line 530 "C:\\CUDA\\include\\cuPrintf.cu"
int blockid)
#line 531 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 532 "C:\\CUDA\\include\\cuPrintf.cu"
 int __cuda_local_var_67537_9_thread_count;
#line 536 "C:\\CUDA\\include\\cuPrintf.cu"
 int __cuda_local_var_67541_6_block_count;
#line 532 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67537_9_thread_count = ((int)(((blockDim.x) * (blockDim.y)) * (blockDim.z)));
#line 533 "C:\\CUDA\\include\\cuPrintf.cu"
if (((threadid < __cuda_local_var_67537_9_thread_count) && (threadid >= 0)) || (threadid == (-1)))
#line 533 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 534 "C:\\CUDA\\include\\cuPrintf.cu"
(restrictRules.threadid) = threadid;
#line 534 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 536 "C:\\CUDA\\include\\cuPrintf.cu"
__cuda_local_var_67541_6_block_count = ((int)((gridDim.x) * (gridDim.y)));
#line 537 "C:\\CUDA\\include\\cuPrintf.cu"
if (((blockid < __cuda_local_var_67541_6_block_count) && (blockid >= 0)) || (blockid == (-1)))
#line 537 "C:\\CUDA\\include\\cuPrintf.cu"
{
#line 538 "C:\\CUDA\\include\\cuPrintf.cu"
(restrictRules.blockid) = blockid;
#line 538 "C:\\CUDA\\include\\cuPrintf.cu"
} 
#line 539 "C:\\CUDA\\include\\cuPrintf.cu"
}
#line 540 "C:\\CUDA\\include\\cuPrintf.cu"
__attribute__((global)) __attribute__((__used__)) void _Z5fillUPvS_(
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *r_data, 
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *u_data){
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __T217;
#line 12 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __T218;
#line 13 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __T219;
#line 14 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __T220;
#line 13 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 struct float3 *__cuda_local_var_72548_10_r;
#line 17 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float *__cuda_local_var_72552_9_u;
#line 19 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72554_6_i;
#line 20 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72555_6_j;
#line 22 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __cuda_local_var_72557_8_r_i[3];
#line 23 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __cuda_local_var_72558_8_r_j[3];
#line 25 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __cuda_local_var_72560_8_r1;
#line 30 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72565_6_alpha;
#line 31 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72566_6_beta;
#line 33 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72568_6_blockSize;
#line 35 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __cuda_local_var_72570_8_d_alpha;
#line 36 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float __cuda_local_var_72571_8_d_beta;
#line 13 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72548_10_r = ((struct float3 *)r_data);
#line 17 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72552_9_u = ((float *)u_data);
#line 19 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72554_6_i = ((int)(blockIdx.x));
#line 20 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72555_6_j = ((int)(blockIdx.y));
#line 22 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
(*(__cuda_local_var_72557_8_r_i)) = ((__cuda_local_var_72548_10_r[__cuda_local_var_72554_6_i]).x);
#line 22 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((__cuda_local_var_72557_8_r_i)[1ULL]) = ((__cuda_local_var_72548_10_r[__cuda_local_var_72554_6_i]).y);
#line 22 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((__cuda_local_var_72557_8_r_i)[2ULL]) = ((__cuda_local_var_72548_10_r[__cuda_local_var_72554_6_i]).z);
#line 23 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
(*(__cuda_local_var_72558_8_r_j)) = ((__cuda_local_var_72548_10_r[__cuda_local_var_72555_6_j]).x);
#line 23 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((__cuda_local_var_72558_8_r_j)[1ULL]) = ((__cuda_local_var_72548_10_r[__cuda_local_var_72555_6_j]).y);
#line 23 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((__cuda_local_var_72558_8_r_j)[2ULL]) = ((__cuda_local_var_72548_10_r[__cuda_local_var_72555_6_j]).z);
#line 25 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72560_8_r1 = ((__T220 = ((((__T217 = (((__cuda_local_var_72557_8_r_i)[0]) - ((__cuda_local_var_72558_8_r_j)[0]))) , (_Z8_Pow_intIfET_S0_i(__T217, 2))) + ((__T218 = (((__cuda_local_var_72557_8_r_i)[1]) - ((__cuda_local_var_72558_8_r_j)[1]))) , (_Z8_Pow_intIfET_S0_i(__T218, 2)))) + ((__T219 = (((__cuda_local_var_72557_8_r_i)[2]) - ((__cuda_local_var_72558_8_r_j)[2]))) , (_Z8_Pow_intIfET_S0_i(__T219, 2))))) , (sqrtf(__T220)));
#line 30 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72565_6_alpha = ((int)(threadIdx.x));
#line 31 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72566_6_beta = ((int)(threadIdx.y));
#line 33 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72568_6_blockSize = ((int)((blockDim.x) * (blockDim.y)));
#line 35 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72570_8_d_alpha = (((__cuda_local_var_72557_8_r_i)[__cuda_local_var_72565_6_alpha]) - ((__cuda_local_var_72558_8_r_j)[__cuda_local_var_72565_6_alpha]));
#line 36 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72571_8_d_beta = (((__cuda_local_var_72557_8_r_i)[__cuda_local_var_72566_6_beta]) - ((__cuda_local_var_72558_8_r_j)[__cuda_local_var_72566_6_beta]));
#line 40 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
(__cuda_local_var_72552_9_u[(((((((unsigned)__cuda_local_var_72568_6_blockSize) * (gridDim.x)) * ((unsigned)__cuda_local_var_72554_6_i)) + ((unsigned)(__cuda_local_var_72568_6_blockSize * __cuda_local_var_72555_6_j))) + ((blockDim.x) * ((unsigned)__cuda_local_var_72565_6_alpha))) + ((unsigned)__cuda_local_var_72566_6_beta))]) = (((fabsf(__cuda_local_var_72560_8_r1)) < (1.192092896e-007F)) ? (0.0F) : (fdividef(((fdividef(((fdividef(((3.0F) * __cuda_local_var_72570_8_d_alpha), __cuda_local_var_72560_8_r1)) * __cuda_local_var_72571_8_d_beta), __cuda_local_var_72560_8_r1)) - ((float)((__cuda_local_var_72565_6_alpha == __cuda_local_var_72566_6_beta) ? 1 : 0))), ((__cuda_local_var_72560_8_r1 * __cuda_local_var_72560_8_r1) * __cuda_local_var_72560_8_r1))));
#line 47 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
} 
#line 47 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}}
#line 48 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__attribute__((global)) __attribute__((__used__)) void _Z6calc_HPvS_S_(
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *h, 
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *s, 
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *u){
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 55 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72590_6_i;
#line 57 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 struct float3 *__cuda_local_var_72592_10_s_data;
#line 58 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 struct float3 *__cuda_local_var_72593_10_u_data;
#line 59 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 struct float3 *__cuda_local_var_72594_10_h_data;
#line 55 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72590_6_i = ((int)(threadIdx.x));
#line 57 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72592_10_s_data = ((struct float3 *)s);
#line 58 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72593_10_u_data = ((struct float3 *)u);
#line 59 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72594_10_h_data = ((struct float3 *)h);
#line 59 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 62 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int j;
#line 62 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int aux;
#line 62 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
j = (__cuda_local_var_72590_6_i + 1);
#line 62 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
aux = (((__cuda_local_var_72590_6_i * 256) * 3) + (j * 3));
#line 62 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
for (; (j < 256); (j++) , ((void)(aux += 3)))
#line 62 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 64 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((__cuda_local_var_72594_10_h_data[__cuda_local_var_72590_6_i]).x) += (((((__cuda_local_var_72593_10_u_data[aux]).x) * ((__cuda_local_var_72592_10_s_data[j]).x)) + (((__cuda_local_var_72593_10_u_data[aux]).y) * ((__cuda_local_var_72592_10_s_data[j]).y))) + (((__cuda_local_var_72593_10_u_data[aux]).z) * ((__cuda_local_var_72592_10_s_data[j]).z)));
#line 66 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((__cuda_local_var_72594_10_h_data[__cuda_local_var_72590_6_i]).y) += (((((__cuda_local_var_72593_10_u_data[(aux + 1)]).x) * ((__cuda_local_var_72592_10_s_data[j]).x)) + (((__cuda_local_var_72593_10_u_data[(aux + 1)]).y) * ((__cuda_local_var_72592_10_s_data[j]).y))) + (((__cuda_local_var_72593_10_u_data[(aux + 1)]).z) * ((__cuda_local_var_72592_10_s_data[j]).z)));
#line 68 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((__cuda_local_var_72594_10_h_data[__cuda_local_var_72590_6_i]).z) += (((((__cuda_local_var_72593_10_u_data[(aux + 2)]).x) * ((__cuda_local_var_72592_10_s_data[j]).x)) + (((__cuda_local_var_72593_10_u_data[(aux + 2)]).y) * ((__cuda_local_var_72592_10_s_data[j]).y))) + (((__cuda_local_var_72593_10_u_data[(aux + 2)]).z) * ((__cuda_local_var_72592_10_s_data[j]).z)));
#line 70 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 70 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 72 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
} 
#line 72 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}}
#line 73 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__attribute__((global)) __attribute__((__used__)) void _Z6calc_EPvS_S_(
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *h, 
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *s, 
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *e){
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 79 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 struct float3 *__cuda_local_var_72614_10_h_data;
#line 80 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 struct float3 *__cuda_local_var_72615_10_s_data;
#line 81 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float *__cuda_local_var_72616_9_e_data;
#line 83 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72618_6_tid;
#line 84 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72619_6_i;
#line 79 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72614_10_h_data = ((struct float3 *)h);
#line 80 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72615_10_s_data = ((struct float3 *)s);
#line 81 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72616_9_e_data = ((float *)e);
#line 83 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72618_6_tid = ((int)(threadIdx.x));
#line 84 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72619_6_i = ((int)(((blockIdx.x) * (blockDim.x)) + (threadIdx.x)));
#line 86 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((tmp)[__cuda_local_var_72618_6_tid]) = ((((-1.0F) * (((__cuda_local_var_72614_10_h_data[__cuda_local_var_72619_6_i]).x) * ((__cuda_local_var_72615_10_s_data[__cuda_local_var_72619_6_i]).x))) - (((__cuda_local_var_72614_10_h_data[__cuda_local_var_72619_6_i]).y) * ((__cuda_local_var_72615_10_s_data[__cuda_local_var_72619_6_i]).y))) - (((__cuda_local_var_72614_10_h_data[__cuda_local_var_72619_6_i]).z) * ((__cuda_local_var_72615_10_s_data[__cuda_local_var_72619_6_i]).z)));
#line 88 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__syncthreads();
#line 88 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 90 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int s;
#line 90 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
s = 1;
#line 90 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
for (; (((unsigned)s) < (blockDim.x)); s *= 2)
#line 90 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 92 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
if ((__cuda_local_var_72618_6_tid % (2 * s)) == 0)
#line 92 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 93 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((tmp)[__cuda_local_var_72618_6_tid]) += ((tmp)[(__cuda_local_var_72618_6_tid + s)]);
#line 94 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 95 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__syncthreads();
#line 96 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 96 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 97 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
if (__cuda_local_var_72618_6_tid == 0)
#line 97 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 98 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
(__cuda_local_var_72616_9_e_data[(blockIdx.x)]) = ((tmp)[0]);
#line 98 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 100 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
} 
#line 100 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}}
#line 101 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__attribute__((global)) __attribute__((__used__)) void _Z11calc_full_EPvS_S_(
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *u, 
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *s, 
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
void *e){
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 108 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 struct float3 *__cuda_local_var_72643_10_u_data;
#line 109 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 struct float3 *__cuda_local_var_72644_10_s_data;
#line 110 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 float *__cuda_local_var_72645_9_e_data;
#line 112 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72647_6_tid;
#line 115 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int __cuda_local_var_72650_6_aux;
#line 108 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72643_10_u_data = ((struct float3 *)u);
#line 109 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72644_10_s_data = ((struct float3 *)s);
#line 110 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72645_9_e_data = ((float *)e);
#line 112 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72647_6_tid = ((int)(threadIdx.x));
#line 114 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((tmp2)[__cuda_local_var_72647_6_tid]) = (0.0F);
#line 115 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__cuda_local_var_72650_6_aux = 0;
#line 115 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 116 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int j;
#line 116 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
j = 0;
#line 116 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
for (; (j < 768); (j += 3) , ((void)(__cuda_local_var_72650_6_aux++)))
#line 116 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 117 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
if (j == __cuda_local_var_72647_6_tid)
#line 117 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 118 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
goto __T221;
#line 118 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 119 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((tmp2)[__cuda_local_var_72647_6_tid]) -= ((((((((((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).x) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + j)]).x)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).x)) - ((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).y) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + j)]).y)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).x))) - ((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).z) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + j)]).z)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).x))) - ((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).x) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + (j + 1))]).x)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).y))) - ((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).y) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + (j + 1))]).y)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).y))) - ((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).z) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + (j + 1))]).z)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).y))) - ((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).x) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + (j + 2))]).x)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).z))) - ((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).y) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + (j + 2))]).y)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).z))) - ((((__cuda_local_var_72644_10_s_data[__cuda_local_var_72650_6_aux]).z) * ((__cuda_local_var_72643_10_u_data[(((__cuda_local_var_72647_6_tid * 256) * 3) + (j + 2))]).z)) * ((__cuda_local_var_72644_10_s_data[__cuda_local_var_72647_6_tid]).z)));
#line 119 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__T221:;
#line 131 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 131 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 134 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__syncthreads();
#line 134 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 135 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
 int s;
#line 135 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
s = 1;
#line 135 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
for (; (((unsigned)s) < (blockDim.x)); s *= 2)
#line 135 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 137 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
if ((__cuda_local_var_72647_6_tid % (2 * s)) == 0)
#line 137 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 137 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
((tmp2)[__cuda_local_var_72647_6_tid]) += ((tmp2)[(__cuda_local_var_72647_6_tid + s)]);
#line 137 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 141 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
__syncthreads();
#line 142 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 142 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 143 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
if (__cuda_local_var_72647_6_tid == 0)
#line 143 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{
#line 144 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
(__cuda_local_var_72645_9_e_data[1]) = ((tmp2)[0]);
#line 144 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 147 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
} 
#line 147 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}}
