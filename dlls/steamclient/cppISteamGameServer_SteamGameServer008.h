#ifdef __cplusplus
extern "C" {
#endif
extern void cppISteamGameServer_SteamGameServer008_LogOn(void *);
extern void cppISteamGameServer_SteamGameServer008_LogOff(void *);
extern bool cppISteamGameServer_SteamGameServer008_BLoggedOn(void *);
extern bool cppISteamGameServer_SteamGameServer008_BSecure(void *);
extern CSteamID cppISteamGameServer_SteamGameServer008_GetSteamID(void *);
extern bool cppISteamGameServer_SteamGameServer008_SendUserConnectAndAuthenticate(void *, uint32, const void *, uint32, CSteamID *);
extern CSteamID cppISteamGameServer_SteamGameServer008_CreateUnauthenticatedUserConnection(void *);
extern void cppISteamGameServer_SteamGameServer008_SendUserDisconnect(void *, CSteamID);
extern bool cppISteamGameServer_SteamGameServer008_BUpdateUserData(void *, CSteamID, const char *, uint32);
extern bool cppISteamGameServer_SteamGameServer008_BSetServerType(void *, uint32, uint32, uint16, uint16, uint16, const char *, const char *, bool);
extern void cppISteamGameServer_SteamGameServer008_UpdateServerStatus(void *, int, int, int, const char *, const char *, const char *);
extern void cppISteamGameServer_SteamGameServer008_UpdateSpectatorPort(void *, uint16);
extern void cppISteamGameServer_SteamGameServer008_SetGameType(void *, const char *);
extern bool cppISteamGameServer_SteamGameServer008_BGetUserAchievementStatus(void *, CSteamID, const char *);
extern void cppISteamGameServer_SteamGameServer008_GetGameplayStats(void *);
extern bool cppISteamGameServer_SteamGameServer008_RequestUserGroupStatus(void *, CSteamID, CSteamID);
extern uint32 cppISteamGameServer_SteamGameServer008_GetPublicIP(void *);
#ifdef __cplusplus
}
#endif
