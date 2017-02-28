#ifdef __cplusplus
extern "C" {
#endif
extern uint32 cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive(void *);
extern uint32 cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive(void *);
extern EUniverse cppISteamUtils_SteamUtils005_GetConnectedUniverse(void *);
extern uint32 cppISteamUtils_SteamUtils005_GetServerRealTime(void *);
extern const char * cppISteamUtils_SteamUtils005_GetIPCountry(void *);
extern bool cppISteamUtils_SteamUtils005_GetImageSize(void *, int, uint32 *, uint32 *);
extern bool cppISteamUtils_SteamUtils005_GetImageRGBA(void *, int, uint8 *, int);
extern bool cppISteamUtils_SteamUtils005_GetCSERIPPort(void *, uint32 *, uint16 *);
extern uint8 cppISteamUtils_SteamUtils005_GetCurrentBatteryPower(void *);
extern uint32 cppISteamUtils_SteamUtils005_GetAppID(void *);
extern void cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition(void *, ENotificationPosition);
extern bool cppISteamUtils_SteamUtils005_IsAPICallCompleted(void *, SteamAPICall_t, bool *);
extern ESteamAPICallFailure cppISteamUtils_SteamUtils005_GetAPICallFailureReason(void *, SteamAPICall_t);
extern bool cppISteamUtils_SteamUtils005_GetAPICallResult(void *, SteamAPICall_t, void *, int, int, bool *);
extern void cppISteamUtils_SteamUtils005_RunFrame(void *);
extern uint32 cppISteamUtils_SteamUtils005_GetIPCCallCount(void *);
extern void cppISteamUtils_SteamUtils005_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamUtils_SteamUtils005_IsOverlayEnabled(void *);
extern bool cppISteamUtils_SteamUtils005_BOverlayNeedsPresent(void *);
extern SteamAPICall_t cppISteamUtils_SteamUtils005_CheckFileSignature(void *, const char *);
extern bool cppISteamUtils_SteamUtils005_ShowGamepadTextInput(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32);
extern uint32 cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength(void *);
extern bool cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput(void *, char *, uint32);
#ifdef __cplusplus
}
#endif
