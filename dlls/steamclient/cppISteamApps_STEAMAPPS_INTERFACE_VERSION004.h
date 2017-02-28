#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribed(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsLowViolence(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsCybercafe(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsVACBanned(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetCurrentGameLanguage(void *);
extern const char * cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetAvailableGameLanguages(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedApp(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsDlcInstalled(void *, AppId_t);
extern uint32 cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetEarliestPurchaseUnixTime(void *, AppId_t);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BIsSubscribedFromFreeWeekend(void *);
extern int cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_GetDLCCount(void *);
extern bool cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_BGetDLCDataByIndex(void *, int, AppId_t *, bool *, char *, int);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_InstallDLC(void *, AppId_t);
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION004_UninstallDLC(void *, AppId_t);
#ifdef __cplusplus
}
#endif
