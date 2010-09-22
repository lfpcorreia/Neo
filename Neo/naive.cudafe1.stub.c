#include "naive.fatbin.c"
#include "crt/host_runtime.h"
struct __T20 {void *__par0;void *__par1;int __dummy_field;__pad__(volatile char __dummy[4];)};
struct __T21 {void *__par0;void *__par1;void *__par2;int __dummy_field;__pad__(volatile char __dummy[4];)};
struct __T22 {void *__par0;void *__par1;void *__par2;int __dummy_field;__pad__(volatile char __dummy[4];)};
struct __T23 {void *__par0;void *__par1;void *__par2;int __dummy_field;__pad__(volatile char __dummy[4];)};
extern void __device_stub__Z5fillUPvS_(void *, void *);
extern void __device_stub__Z6calc_HPvS_S_(void *, void *, void *);
extern void __device_stub__Z6calc_EPvS_S_(void *, void *, void *);
extern void __device_stub__Z11calc_full_EPvS_S_(void *, void *, void *);
static void __sti____cudaRegisterAll_13_naive_cpp1_ii_51e07f2f(void);
#pragma section(".CRT$XCU",read)
__declspec(allocate(".CRT$XCU"))static void (*__dummy_static_init__sti____cudaRegisterAll_13_naive_cpp1_ii_51e07f2f[])(void) = {__sti____cudaRegisterAll_13_naive_cpp1_ii_51e07f2f};
void __device_stub__Z5fillUPvS_(void *__par0, void *__par1){ struct __T20 *__T211;
__cudaInitArgBlock(__T211);__cudaSetupArg(__par0, __T211);__cudaSetupArg(__par1, __T211);__cudaLaunch(((char *)((void ( *)(void *, void *))fillU)));}
void fillU( void *__cuda_0,void *__cuda_1)
#line 11 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{__device_stub__Z5fillUPvS_( __cuda_0,__cuda_1);
#line 47 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 1 "naive.cudafe1.stub.c"
void __device_stub__Z6calc_HPvS_S_( void *__par0,  void *__par1,  void *__par2) {  struct __T21 *__T212;
__cudaInitArgBlock(__T212); __cudaSetupArg(__par0, __T212); __cudaSetupArg(__par1, __T212); __cudaSetupArg(__par2, __T212); __cudaLaunch(((char *)((void ( *)(void *, void *, void *))calc_H))); }
void calc_H( void *__cuda_0,void *__cuda_1,void *__cuda_2)
#line 52 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{__device_stub__Z6calc_HPvS_S_( __cuda_0,__cuda_1,__cuda_2);
#line 72 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 1 "naive.cudafe1.stub.c"
void __device_stub__Z6calc_EPvS_S_( void *__par0,  void *__par1,  void *__par2) {  struct __T22 *__T213;
__cudaInitArgBlock(__T213); __cudaSetupArg(__par0, __T213); __cudaSetupArg(__par1, __T213); __cudaSetupArg(__par2, __T213); __cudaLaunch(((char *)((void ( *)(void *, void *, void *))calc_E))); }
void calc_E( void *__cuda_0,void *__cuda_1,void *__cuda_2)
#line 75 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{__device_stub__Z6calc_EPvS_S_( __cuda_0,__cuda_1,__cuda_2);
#line 100 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 1 "naive.cudafe1.stub.c"
void __device_stub__Z11calc_full_EPvS_S_( void *__par0,  void *__par1,  void *__par2) {  struct __T23 *__T214;
__cudaInitArgBlock(__T214); __cudaSetupArg(__par0, __T214); __cudaSetupArg(__par1, __T214); __cudaSetupArg(__par2, __T214); __cudaLaunch(((char *)((void ( *)(void *, void *, void *))calc_full_E))); }
void calc_full_E( void *__cuda_0,void *__cuda_1,void *__cuda_2)
#line 104 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
{__device_stub__Z11calc_full_EPvS_S_( __cuda_0,__cuda_1,__cuda_2);
#line 147 "c:\\users\\tio\\documents\\visual studio 2008\\projects\\neo\\neo\\kernels.cu"
}
#line 1 "naive.cudafe1.stub.c"
static void __sti____cudaRegisterAll_13_naive_cpp1_ii_51e07f2f(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(void *, void *, void *))calc_full_E), _Z11calc_full_EPvS_S_, (-1)); __cudaRegisterEntry(((void ( *)(void *, void *, void *))calc_E), _Z6calc_EPvS_S_, (-1)); __cudaRegisterEntry(((void ( *)(void *, void *, void *))calc_H), _Z6calc_HPvS_S_, (-1)); __cudaRegisterEntry(((void ( *)(void *, void *))fillU), _Z5fillUPvS_, (-1)); __cudaRegisterVariable(__shadow_var(globalPrintfBuffer,globalPrintfBuffer), 0, 8, 1, 0); __cudaRegisterVariable(__shadow_var(printfBufferLength,printfBufferLength), 0, 4, 1, 0); __cudaRegisterVariable(__shadow_var(restrictRules,restrictRules), 0, 8, 0, 0); __cudaRegisterVariable(__shadow_var(printfBufferPtr,printfBufferPtr), 0, 8, 0, 0);  }
