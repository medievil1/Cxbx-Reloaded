#include "..\XbD3D8Types.h"

// enum for xbox D3DDevice APIs
typedef enum _X_D3DAPI_ENUM {

    X_CDevice_SetStateUP,
    X_CDevice_SetStateVB,
    X_D3DDevice_ApplyStateBlock,
    X_D3DDevice_Begin,
    X_D3DDevice_BeginPush,
    X_D3DDevice_BeginPushBuffer,
    X_D3DDevice_BeginScene,
    X_D3DDevice_BeginState,
    X_D3DDevice_BeginStateBig,
    X_D3DDevice_BeginStateBlock,
    X_D3DDevice_BeginVisibilityTest,
    X_D3DDevice_BlockOnFence,
    X_D3DDevice_BlockUntilIdle,
    X_D3DDevice_BlockUntilVerticalBlank,
    X_D3DDevice_CaptureStateBlock,
    X_D3DDevice_Clear,
    X_D3DDevice_CopyRects,
    X_D3DDevice_CreateCubeTexture,
    X_D3DDevice_CreateDepthStencilSurface,
    X_D3DDevice_CreateFixup,
    X_D3DDevice_CreateImageSurface,
    X_D3DDevice_CreateIndexBuffer,
    X_D3DDevice_CreatePalette,
    X_D3DDevice_CreatePixelShader,
    X_D3DDevice_CreatePushBuffer,
    X_D3DDevice_CreateRenderTarget,
    X_D3DDevice_CreateStateBlock,
    X_D3DDevice_CreateTexture,
    X_D3DDevice_CreateTexture2,
    X_D3DDevice_CreateVertexBuffer,
    X_D3DDevice_CreateVertexBuffer2,
    X_D3DDevice_CreateVertexShader,
    X_D3DDevice_CreateVolumeTexture,
    X_D3DDevice_DeletePatch,
    X_D3DDevice_DeletePixelShader,
    X_D3DDevice_DeleteStateBlock,
    X_D3DDevice_DeleteVertexShader,
    X_D3DDevice_DrawIndexedPrimitive,
    X_D3DDevice_DrawIndexedPrimitiveUP,
    X_D3DDevice_DrawIndexedVertices,
    X_D3DDevice_DrawIndexedVerticesUP,
    X_D3DDevice_DrawPrimitive,
    X_D3DDevice_DrawPrimitiveUP,
    X_D3DDevice_DrawRectPatch,
    X_D3DDevice_DrawTriPatch,
    X_D3DDevice_DrawVertices,
    X_D3DDevice_DrawVerticesUP,
    X_D3DDevice_EnableOverlay,
    X_D3DDevice_End,
    X_D3DDevice_EndPush,
    X_D3DDevice_EndPushBuffer,
    X_D3DDevice_EndScene,
    X_D3DDevice_EndState,
    X_D3DDevice_EndStateBlock,
    X_D3DDevice_EndVisibilityTest,
    X_D3DDevice_FlushVertexCache,
    X_D3DDevice_GetBackBuffer, X_D3DDevice_GetBackBuffer2,
    X_D3DDevice_GetBackBufferScale,
    X_D3DDevice_GetBackMaterial,
    X_D3DDevice_GetCopyRectsState,
    X_D3DDevice_GetCreationParameters,
    X_D3DDevice_GetDebugMarker,
    X_D3DDevice_GetDepthClipPlanes,
    X_D3DDevice_GetDepthStencilSurface, X_D3DDevice_GetDepthStencilSurface2,
    X_D3DDevice_GetDeviceCaps,
    X_D3DDevice_GetDirect3D,
    X_D3DDevice_GetDisplayFieldStatus,
    X_D3DDevice_GetDisplayMode,
    X_D3DDevice_GetGammaRamp,
    X_D3DDevice_GetIndices,
    X_D3DDevice_GetLight,
    X_D3DDevice_GetLightEnable,
    X_D3DDevice_GetMaterial,
    X_D3DDevice_GetModelView,
    X_D3DDevice_GetOverlayUpdateStatus,
    X_D3DDevice_GetOverscanColor,
    X_D3DDevice_GetPalette,
    X_D3DDevice_GetPersistedSurface,
    X_D3DDevice_GetPixelShader,
    X_D3DDevice_GetPixelShaderConstant,
    X_D3DDevice_GetPixelShaderFunction,
    X_D3DDevice_GetProjectionViewportMatrix,
    X_D3DDevice_GetPushBufferOffset,
    X_D3DDevice_GetPushDistance,
    X_D3DDevice_GetRasterStatus,
    X_D3DDevice_GetRenderState,
    X_D3DDevice_GetRenderTarget, X_D3DDevice_GetRenderTarget2,
    X_D3DDevice_GetScissors,
    X_D3DDevice_GetScreenSpaceOffset,
    X_D3DDevice_GetShaderConstantMode,
    X_D3DDevice_GetStipple,
    X_D3DDevice_GetStreamSource,
    X_D3DDevice_GetTexture,
    X_D3DDevice_GetTextureStageState,
    X_D3DDevice_GetTile,
    X_D3DDevice_GetTileCompressionTags,
    X_D3DDevice_GetTransform,
    X_D3DDevice_GetVertexBlendModelView,
    X_D3DDevice_GetVertexShader,
    X_D3DDevice_GetVertexShaderConstant,
    X_D3DDevice_GetVertexShaderDeclaration,
    X_D3DDevice_GetVertexShaderFunction,
    X_D3DDevice_GetVertexShaderInput,
    X_D3DDevice_GetVertexShaderSize,
    X_D3DDevice_GetVertexShaderType,
    X_D3DDevice_GetViewport,
    X_D3DDevice_GetViewportOffsetAndScale,
    X_D3DDevice_GetVisibilityTestResult,
    X_D3DDevice_InsertCallback,
    X_D3DDevice_InsertFence,
    X_D3DDevice_IsBusy,
    X_D3DDevice_IsFencePending,
    X_D3DDevice_KickPushBuffer,
    X_D3DDevice_LightEnable,
    X_D3DDevice_LoadVertexShader,
    X_D3DDevice_LoadVertexShaderProgram,
    X_D3DDevice_MultiplyTransform,
    X_D3DDevice_Nop,
    X_D3DDevice_PersistDisplay,
    X_D3DDevice_Present,
    X_D3DDevice_PrimeVertexCache,
    X_D3DDevice_Reset,
    X_D3DDevice_RunPushBuffer,
    X_D3DDevice_RunVertexStateShader,
    X_D3DDevice_SelectVertexShader,
    X_D3DDevice_SelectVertexShaderDirect,
    X_D3DDevice_SetBackBufferScale,
    X_D3DDevice_SetBackMaterial,
    X_D3DDevice_SetCopyRectsState,
    X_D3DDevice_SetDebugMarker,
    X_D3DDevice_SetDepthClipPlanes,
    X_D3DDevice_SetFlickerFilter,
    X_D3DDevice_SetGammaRamp,
    X_D3DDevice_SetIndices,
    X_D3DDevice_SetLight,
    X_D3DDevice_SetMaterial,
    X_D3DDevice_SetModelView,
    X_D3DDevice_SetOverscanColor,
    X_D3DDevice_SetPalette,
    X_D3DDevice_SetPixelShader,
    X_D3DDevice_SetPixelShaderConstant,
    X_D3DDevice_SetPixelShaderProgram,
    X_D3DDevice_SetRenderState,
    X_D3DDevice_SetRenderState_Simple,
    X_D3DDevice_SetRenderStateNotInline,
    X_D3DDevice_SetRenderTarget,
    X_D3DDevice_SetScissors,
    X_D3DDevice_SetScreenSpaceOffset,
    X_D3DDevice_SetShaderConstantMode,
    X_D3DDevice_SetSoftDisplayFilter,
    X_D3DDevice_SetStipple,
    X_D3DDevice_SetStreamSource,
    X_D3DDevice_SetSwapCallback,
    X_D3DDevice_SetTexture,
    X_D3DDevice_SetTextureStageState,
    X_D3DDevice_SetTextureStageStateNotInline,
    X_D3DDevice_SetTile,
    X_D3DDevice_SetTimerCallback,
    X_D3DDevice_SetTransform,
    X_D3DDevice_SetVertexBlendModelView,
    X_D3DDevice_SetVertexData2f,
    X_D3DDevice_SetVertexData2s,
    X_D3DDevice_SetVertexData4f, X_D3DDevice_SetVertexData4f_16,
    X_D3DDevice_SetVertexData4s,
    X_D3DDevice_SetVertexData4ub,
    X_D3DDevice_SetVertexDataColor,
    X_D3DDevice_SetVertexShader,
    X_D3DDevice_SetVertexShaderConstant,
    X_D3DDevice_SetVertexShaderInput,
    X_D3DDevice_SetVertexShaderInputDirect,
    X_D3DDevice_SetVerticalBlankCallback,
    X_D3DDevice_SetViewport,
    X_D3DDevice_SetWaitCallback,
    X_D3DDevice_Swap,
    X_D3DDevice_SwitchTexture,
    X_D3DDevice_UpdateOverlay,
    X_D3DResource_BlockUntilNotBusy,
    X_D3D_BlockOnTime,
    X_D3D_CommonSetRenderTarget,
    X_D3D_DestroyResource,
    X_D3D_LazySetPointParams,
    X_D3D_SetCommonDebugRegisters,
    X_Direct3D_CreateDevice,
    X_Lock2DSurface,
    X_Lock3DSurface,
    X_EmuKickOffWait,
    X_D3DAPI_FORCE_DWORD = 0x7fffffff,

} X_D3DAPI_ENUM;

// virtual NV2A register for HLE API handler
#   define NV097_HLE_API                                      0x00000080 /* Snugged this method in the middle between
#   define NV097_SET_OBJECT                                   0x00000000    the first method, and the next known one :
#   define NV097_NO_OPERATION                                 0x00000100    Aternatively, move to the end, after NV097_DEBUG_INIT */

#define HLE_PUSH_ENCODE(dword_count) PUSH_ENCODE(PUSH_INSTR_IMM_NOINC, dword_count, PUSH_SUBCH_0, NV097_HLE_API, PUSH_TYPE_METHOD)

static inline DWORD FtoDW(FLOAT f) { return *((DWORD*)&f); }
static inline FLOAT DWtoF(DWORD f) { return *((FLOAT*)&f); }

// prototypes for xbox D3DDevice API HLE handlers in NV2A pgraph, implemented in Direct3D9.cpp, called in EmuNV2A_PGRAPH.cpp
// we create defines for each patched api in general format USEPGRAPH_ + apu post names without D3DDevice_. define it as 1 to enable the patch and prgaph handler, as 0 to keep original Cxbxr behavior. this is to speed up the test which api is not feasible for this POC.
void CxbxrImpl_Begin(xbox::X_D3DPRIMITIVETYPE PrimitiveType);
void CxbxrImpl_BlockUntilVerticalBlank();
#define USEPGRAPH_BlockUntilVerticalBlank 0
void CxbxrImpl_Clear(xbox::dword_xt Count, CONST D3DRECT* pRects, xbox::dword_xt Flags, D3DCOLOR Color, float Z, xbox::dword_xt Stencil);
#define USEPGRAPH_Clear 1
void WINAPI CxbxrImpl_CopyRects(xbox::X_D3DSurface* pSourceSurface, CONST RECT* pSourceRectsArray, xbox::uint_xt cRects, xbox::X_D3DSurface* pDestinationSurface, CONST POINT* pDestPointsArray);
#define USEPGRAPH_CopyRects 1 /*CopyRects() is not permitted in pushbuffer recording.*/
;
;
//void WINAPI CxbxrImpl_DrawIndexedVertices(xbox::X_D3DPRIMITIVETYPE  PrimitiveType, xbox::uint_xt VertexCount, CONST PWORD pIndexData);
//void WINAPI CxbxrImpl_DrawIndexedVerticesUP(xbox::X_D3DPRIMITIVETYPE  PrimitiveType, xbox::uint_xt VertexCount, CONST PVOID pIndexData, CONST PVOID pVertexStreamZeroData, xbox::uint_xt VertexStreamZeroStride);
//void WINAPI CxbxrImpl_DrawRectPatch(xbox::uint_xt	Handle, CONST xbox::float_xt* pNumSegs, CONST D3DRECTPATCH_INFO* pRectPatchInfo);
//void WINAPI CxbxrImpl_DrawTriPatch(xbox::uint_xt	Handle, CONST xbox::float_xt* pNumSegs, CONST D3DTRIPATCH_INFO* pTriPatchInfo);
//void WINAPI CxbxrImpl_DrawVertices(xbox::X_D3DPRIMITIVETYPE PrimitiveType, xbox::uint_xt StartVertex, xbox::uint_xt VertexCount);
#define USEPGRAPH_DrawVertices 0
void WINAPI CxbxrImpl_DrawVerticesUP(xbox::X_D3DPRIMITIVETYPE  PrimitiveType, xbox::uint_xt VertexCount, CONST PVOID pVertexStreamZeroData, xbox::uint_xt VertexStreamZeroStride);
#define USEPGRAPH_DrawVerticesUP 0
void CxbxrImpl_End();
void CxbxrImpl_InsertCallback(xbox::X_D3DCALLBACKTYPE Type, xbox::X_D3DCALLBACK pCallback, xbox::dword_xt Context);
//void WINAPI CxbxrImpl_LightEnable(xbox::dword_xt Index, xbox::bool_xt bEnable);
void CxbxrImpl_LoadVertexShader(DWORD Handle, DWORD ProgramRegister);
#define USEPGRAPH_LoadVertexShader 1
void CxbxrImpl_LoadVertexShaderProgram(CONST DWORD* pFunction, DWORD Address);
#define USEPGRAPH_LoadVertexShaderProgram 0
#define USEPGRAPH_Lock2DSurface 0
#define USEPGRAPH_Lock3DSurface 0
void WINAPI CxbxrImpl_RunVertexStateShader(xbox::dword_xt Address, CONST xbox::float_xt* pData);
void CxbxrImpl_SelectVertexShader(DWORD Handle, DWORD Address);
#define USEPGRAPH_SelectVertexShader 1
void WINAPI CxbxrImpl_SetBackBufferScale(xbox::float_xt x, xbox::float_xt y);
// todo: CxbxrImpl_SetFlickerFilter() not implemented yet.
//void WINAPI CxbxrImpl_SetFlickerFilter(xbox::dword_xt Filter);
void CxbxrImpl__SetGammaRamp(xbox::dword_xt dwFlags, CONST D3DGAMMARAMP* pRamp);
void WINAPI CxbxrImpl_SetIndices(xbox::X_D3DIndexBuffer* pIndexData, xbox::uint_xt BaseVertexIndex);
xbox::hresult_xt WINAPI CxbxrImpl_LightEnable(xbox::dword_xt Index, xbox::bool_xt bEnable);
xbox::hresult_xt WINAPI CxbxrImpl_SetLight(xbox::dword_xt Index, CONST xbox::X_D3DLIGHT8* pLight);
xbox::hresult_xt WINAPI CxbxrImpl_SetMaterial(CONST xbox::X_D3DMATERIAL8* pMaterial);
void WINAPI CxbxrImpl_SetModelView(CONST D3DMATRIX* pModelView, CONST D3DMATRIX* pInverseModelView, CONST D3DMATRIX* pComposite);
void CxbxrImpl_SetPalette(xbox::dword_xt Stage, xbox::X_D3DPalette* pPalette);
void CxbxrImpl_SetPixelShader(xbox::dword_xt Handle);
//void WINAPI CxbxrImpl_SetRenderState_Simple(xbox::dword_xt Method, xbox::dword_xt Value);
void CxbxrImpl_SetRenderTarget(xbox::X_D3DSurface* pRenderTarget, xbox::X_D3DSurface* pNewZStencil);
void WINAPI CxbxrImpl_D3D_CommonSetRenderTarget(xbox::X_D3DSurface* pRenderTarget, xbox::X_D3DSurface* pNewZStencil, void* unknown);
void CxbxrImpl_ReleaseRenderTarget(xbox::X_D3DSurface* pTarget, xbox::X_D3DSurface* pZbuffer);
#define USEPGRAPH_SetRenderTarget 0 /*SetRenderTarget() is used in D3DDevice_Create() and we need it to be implemented right away. to do: */
void CxbxrImpl_SetScreenSpaceOffset(float x, float y);
#define USEPGRAPH_SetScreenSpaceOffset 0
void WINAPI CxbxrImpl_SetShaderConstantMode(xbox::X_VERTEXSHADERCONSTANTMODE Mode);
// todo: CxbxrImpl_SetSoftDisplayFilter() not implemented yet.
//void WINAPI CxbxrImpl_SetSoftDisplayFilter(xbox::bool_xt Enable);
void CxbxrImpl_SetStreamSource(UINT StreamNumber, xbox::X_D3DVertexBuffer* pStreamData, UINT Stride);
//#define USEPGRAPH_SetStreamSource 0 /*not permitted in pushbuffer recording*/
void WINAPI CxbxrImpl_SetTexture(xbox::dword_xt Stage, xbox::X_D3DBaseTexture* pTexture);
void CxbxrImpl_SwitchTexture(xbox::dword_xt Method, xbox::dword_xt Data, xbox::dword_xt Format);
void CxbxrImpl_SetTransform(xbox::X_D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix);
void CxbxrImpl_SetVertexData4f(int Register, FLOAT a, FLOAT b, FLOAT c, FLOAT d);
void CxbxrImpl_SetVertexShader(DWORD Handle);
#define USEPGRAPH_SetVertexShader 1
//all SetVertexShaderConstant variants are unpatched now. but we have to use CxbxrImpl_SetVertexShaderConstant() to handle the constant change in pgraph.
//void CxbxrImpl_GetVertexShaderConstant(INT Register, PVOID pConstantData, DWORD ConstantCount);
//void CxbxrImpl_SetVertexShaderConstant(INT Register, PVOID pConstantData, DWORD ConstantCount);
//void CxbxrImpl_SetVertexShaderInput(DWORD Handle, UINT StreamCount, xbox::X_STREAMINPUT* pStreamInputs);
//void WINAPI CxbxrImpl_SetVertexShaderInputDirect(xbox::X_VERTEXATTRIBUTEFORMAT* pVAF, UINT StreamCount, xbox::X_STREAMINPUT* pStreamInputs);
void CxbxrImpl_SetViewport(xbox::X_D3DVIEWPORT8* pViewport);
#define USEPGRAPH_SetViewport 1
// Present() also calls Swap(), patched LTCG version of Swap also calls Swap(). so we only handle Swap().
xbox::void_xt WINAPI CxbxrImpl_Present(xbox::dword_xt Flags);
#define USEPGRAPH_Present 1
DWORD CxbxrImpl_Swap(xbox::dword_xt Flags);
#define USEPGRAPH_Swap 1 /*Present() calles Swap() implementation. Present() is not permitted in pushbuffer recording*/
//void WINAPI CxbxrImpl_SwitchTexture(xbox::dword_xt Method, xbox::dword_xt Data, xbox::dword_xt Format);
#define PGRAPHUSE_EmuKickOff 1
#define PGRAPHUSE_EmuKickOffWait 1
// Warning: CxbxrImpl_MakeSpace() uses trampoline inside, do not use this function in pgraph. only use it in xbox/HLE patch.
xbox::dword_xt* CxbxrImpl_MakeSpace(void);
void CxbxrImpl_ReleaseRenderTarget(xbox::X_D3DSurface*pTarget, xbox::X_D3DSurface*pZbuffer);

// D3D api
void WINAPI CxbxrImpl_DestroyResource(xbox::X_D3DResource* pResource);
void WINAPI CxbxrImpl_Lock2DSurface(xbox::X_D3DPixelContainer* pPixelContainer, D3DCUBEMAP_FACES FaceType, xbox::uint_xt Level, D3DLOCKED_RECT* pLockedRect, RECT* pRect, xbox::dword_xt Flags);
void WINAPI CxbxrImpl_Lock3DSurface(xbox::X_D3DPixelContainer* pPixelContainer, xbox::uint_xt Level, D3DLOCKED_BOX* pLockedVolume, D3DBOX* pBox, xbox::dword_xt Flags);
//helper functions
ULONG CxbxrImpl_Resource_AddRef(xbox::X_D3DResource* pResource);
ULONG CxbxrImpl_Resource_Release(xbox::X_D3DResource* pResource);
void EmuKickOff(void);

IDirect3DBaseTexture* CxbxConvertXboxSurfaceToHostTexture(xbox::X_D3DBaseTexture* pBaseTexture);
void EmuSetDepthStencil(xbox::X_D3DSurface* pDepthBufferSurface);
void EmuSetRenderTarget(xbox::X_D3DSurface* pBackBufferSurface);

/*
List of HLE apis synced with pgraph
most of them are draw call related.

//handled by pgraph
D3DDevice_Clear 

//synced using waiting flag
D3DDevice_CopyRects

D3DDevice_DrawIndexedPrimitive
D3DDevice_DrawIndexedPrimitiveUP
D3DDevice_DrawIndexedVertices
D3DDevice_DrawIndexedVerticesUP
D3DDevice_DrawPrimitive
D3DDevice_DrawPrimitiveUP
D3DDevice_DrawRectPatch
D3DDevice_DrawTriPatch
D3DDevice_DrawVertices
D3DDevice_DrawVertices_4__LTCG_ecx2_eax3
D3DDevice_DrawVertices_8__LTCG_eax3
D3DDevice_DrawVerticesUP
D3DDevice_DrawVerticesUP_12__LTCG_ebx3

D3DDevice_Reset
D3DDevice_Reset_0__LTCG_edi1
D3DDevice_Reset_0__LTCG_ebx1

D3DDevice_GetGammaRamp
D3DDevice_SetGammaRamp
//special flow, pgraph handle the CxbxrImpl_SetGammaRamp()
//which HLE is waiting for the waiting flag to be cleard. after running CxbxrImpl_SetGammaRamp(),
//then the HLE presumes execution. this is to ensure both followed HLE draw call and LLE draw call run after CxbxrImpl_SetGammaRamp()

D3DDevice_SetIndices
D3DDevice_SetIndices_4

*/


/*
jackchen notes for my trials and errors.

Original idea was to use a virtual pushbuffer method to represent each patched HLE api and push the virtual pushbuffer method to pushbuffer then let pgraph method handler handle the patched HLE api later.
this should solve the sync issue between pushbuffer and HLE api.
So I introudced a new virtual method 0x00000080, with method count 15, NOINC, sub channel 0. each HLE api has a unique token represented with a enum X_D3DAPI_ENUM, which will be the first argument.
this left me 14 dword arguments and I put each arguments for the api call to the method arguments one by one.
but some apis needs more data to be pushed to pushbuffer when the api was called, for example, DrawVerticesUp(), which pushes all vertixes data to pushbuffer. In such case, we can't use this approach, unless we copied all necessary data to a seperate buffer for later use which is way too complicate.
so for such apis, I decide to unpatch them directly and create praph method handler instead.

these global variables are essential for converting xbox side status to vertex shader/pixel shader/host D3D status.

XboxRenderStateConverter XboxRenderStates; // this var directly access Xbox internal renderstate variables.
XboxTextureStateConverter XboxTextureStates; // this var directly access Xbox intern TextureState variables.

NV2ARenderStates and NV2ATextureStates are counter parts which we store states composed from NV2A/KelvinPrimitive.

D3D8LightState d3d8LightState = D3D8LightState();
D3D8TransformState d3d8TransformState = D3D8TransformState();
FixedFunctionVertexShaderState ffShaderState = {0}; // this var converts xbox states to vertex shader/pixel shader settings/constants.
   
ATTN: ***do not trampoline to xbox code from pgraph handler. this will cause pushbuffer data corruption.

todos:
   * I tried to keep original xbox globals untouched as possible as I could so it would be easier if we wanna implement a hybrid rendering with both HLE and pushbuffer based rendering. 
   * in GetXboxViewportOffsetAndScale() we use viewport scale and offsets from vsh_constants[][] directly when we're in NV2A mode. but whether scale[3] should be set with 0.0 like the actual content in vsh_constants or should it be 1.0 like our code need verifications.
   * Essential trampolines/patches for this branch to work.
   * KickOff() and MakeSpace or MakeRequestedSpace(), these two trampolines are essential for pgraph token handling because we need to access the pushbuffer directly.
   * D3DDevice_SetRenderTarget()/D3DDevice_SetRenderTargetFast(): this patch could be removed if we compose the render target/depth buffer via NV097_SET_SURFACE_FORMAT, NV097_SET_SURFACE_PITCH, NV097_SET_SURFACE_COLOR_OFFSET, NV097_SET_SURFACE_ZETA_OFFSET
   * the reason we keep this patch is for the ease of mapping to xbox resource cache.
   * D3DDevice_SetTexture()/D3DDevice_SwitchTexture(), these two patches can be removed since we're already capable of recomposing xbox textures via NV2A. again this patch is for the ease of mapping to xbox resource cache.
   * D3DDevice_SetTransform(), this patch is merely for us to access xbox view transform matrix which is necessary for fixed mode vertex shader state input. If we could revise the fixed mode vertex shader from requiring view matrix, we could remove this patch.
   * D3DDevice_Clear(), this patch could be removed once we reverse engineer the related pushbuffer command
   * D3DDevice_Swap(), this patch could be removed  once we reverse engineer the related pushbuffer command
   * D3DDevice_Reset(), so far I have no ideas regarding to this patch, need further study.
   * some xbox titles/samples uses depth buffer as texture stage input texture. they render the scene in 1st pass, take the output depth buffer as input texture, and render in 2nd pass.
   * currently in D3D9 we have no feasible way to get a lockable depth buffer working with correct render output in first pass. known lockable depth buffer format includes D32_Lockable, D16_Lockable, FOURCC(INTZ), FOURCC(R32F)
   * this will require further study or wait for D3D11 implementation.
   * D3DDevice_SetGammaRamps(), need to implement additional rendering pass in CxbxrImpl_Swap() to render xbox backbuffer to host backbuffer with color swap texture for Gamma Ramps conversion.
   * D3DDevice_DrawRectPatch()/D3DDevice_DrawTriPatch(), these two patches require high order tessellation implementation in D3D11 or if an software tessellation implementation.

*/

