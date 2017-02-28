#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init(void *);
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown(void *);
extern SteamAPICall_t cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser(void *, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize(void *, HHTMLBrowser, uint32, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript(void *, HHTMLBrowser, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel(void *, HHTMLBrowser, int32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find(void *, HHTMLBrowser, const char *, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie(void *, const char *, const char *, const char *, const char *, RTime32, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor(void *, HHTMLBrowser, float, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse(void *, HHTMLBrowser, const char **);
#ifdef __cplusplus
}
#endif
