#line 1 "naive.cudafe1.gpu"
#line 97 "C:\\CUDA\\include\\cuPrintf.cu"
struct cuPrintfRestriction;
#line 117 "C:\\CUDA\\include\\cuPrintf.cu"
struct cuPrintfHeader;
#line 488 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
typedef unsigned __int64 size_t;
#include "crt/host_runtime.h"
#line 93 "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\VC\\include\\time.h"
typedef long clock_t;
#line 97 "C:\\CUDA\\include\\cuPrintf.cu"
struct __declspec(align(8)) cuPrintfRestriction {
#line 98 "C:\\CUDA\\include\\cuPrintf.cu"
int threadid;
#line 99 "C:\\CUDA\\include\\cuPrintf.cu"
int blockid;};
#line 100 "C:\\CUDA\\include\\cuPrintf.cu"
typedef struct cuPrintfRestriction cuPrintfRestriction;
#line 117 "C:\\CUDA\\include\\cuPrintf.cu"
struct __declspec(align(8)) cuPrintfHeader {
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
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);

#include "naive.cudafe2.stub.c"
