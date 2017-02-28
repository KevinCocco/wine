#ifdef __cplusplus
extern "C" {
#endif
extern uint32 cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive(void *);
extern uint32 cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive(void *);
extern EUniverse cppISteamUtils_SteamUtils004_GetConnectedUniverse(void *);
extern uint32 cppISteamUtils_SteamUtils004_GetServerRealTime(void *);
extern const char * cppISteamUtils_SteamUtils004_GetIPCountry(void *);
extern bool cppISteamUtils_SteamUtils004_GetImageSize(void *, int, uint32 *, uint32 *);
extern bool cppISteamUtils_SteamUtils004_GetImageRGBA(void *, int, uint8 *, int);
extern bool cppISteamUtils_SteamUtils004_GetCSERIPPort(void *, uint32 *, uint16 *);
extern uint8 cppISteamUtils_SteamUtils004_GetCurrentBatteryPower(void *);
extern uint32 cppISteamUtils_SteamUtils004_GetAppID(void *);
extern void cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition(void *, ENotificationPosition);
extern bool cppISteamUtils_SteamUtils004_IsAPICallCompleted(void *, SteamAPICall_t, bool *);
extern ESteamAPICallFailure cppISteamUtils_SteamUtils004_GetAPICallFailureReason(void *, SteamAPICall_t);
extern bool cppISteamUtils_SteamUtils004_GetAPICallResult(void *, SteamAPICall_t, void *, int, int, bool *);
extern void cppISteamUtils_SteamUtils004_RunFrame(void *);
extern uint32 cppISteamUtils_SteamUtils004_GetIPCCallCount(void *);
extern void cppISteamUtils_SteamUtils004_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamUtils_SteamUtils004_IsOverlayEnabled(void *);
#ifdef __cplusplus
}
#endif
