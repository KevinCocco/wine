#ifdef __cplusplus
extern "C" {
#endif
extern uint32 cppISteamUtils_SteamUtils007_GetSecondsSinceAppActive(void *);
extern uint32 cppISteamUtils_SteamUtils007_GetSecondsSinceComputerActive(void *);
extern EUniverse cppISteamUtils_SteamUtils007_GetConnectedUniverse(void *);
extern uint32 cppISteamUtils_SteamUtils007_GetServerRealTime(void *);
extern const char * cppISteamUtils_SteamUtils007_GetIPCountry(void *);
extern bool cppISteamUtils_SteamUtils007_GetImageSize(void *, int, uint32 *, uint32 *);
extern bool cppISteamUtils_SteamUtils007_GetImageRGBA(void *, int, uint8 *, int);
extern bool cppISteamUtils_SteamUtils007_GetCSERIPPort(void *, uint32 *, uint16 *);
extern uint8 cppISteamUtils_SteamUtils007_GetCurrentBatteryPower(void *);
extern uint32 cppISteamUtils_SteamUtils007_GetAppID(void *);
extern void cppISteamUtils_SteamUtils007_SetOverlayNotificationPosition(void *, ENotificationPosition);
extern bool cppISteamUtils_SteamUtils007_IsAPICallCompleted(void *, SteamAPICall_t, bool *);
extern ESteamAPICallFailure cppISteamUtils_SteamUtils007_GetAPICallFailureReason(void *, SteamAPICall_t);
extern bool cppISteamUtils_SteamUtils007_GetAPICallResult(void *, SteamAPICall_t, void *, int, int, bool *);
extern uint32 cppISteamUtils_SteamUtils007_GetIPCCallCount(void *);
extern void cppISteamUtils_SteamUtils007_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamUtils_SteamUtils007_IsOverlayEnabled(void *);
extern bool cppISteamUtils_SteamUtils007_BOverlayNeedsPresent(void *);
extern SteamAPICall_t cppISteamUtils_SteamUtils007_CheckFileSignature(void *, const char *);
extern bool cppISteamUtils_SteamUtils007_ShowGamepadTextInput(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *);
extern uint32 cppISteamUtils_SteamUtils007_GetEnteredGamepadTextLength(void *);
extern bool cppISteamUtils_SteamUtils007_GetEnteredGamepadTextInput(void *, char *, uint32);
extern const char * cppISteamUtils_SteamUtils007_GetSteamUILanguage(void *);
extern bool cppISteamUtils_SteamUtils007_IsSteamRunningInVR(void *);
extern void cppISteamUtils_SteamUtils007_SetOverlayNotificationInset(void *, int, int);
#ifdef __cplusplus
}
#endif
