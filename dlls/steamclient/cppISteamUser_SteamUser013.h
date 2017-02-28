#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser013_GetHSteamUser(void *);
extern bool cppISteamUser_SteamUser013_BLoggedOn(void *);
extern CSteamID cppISteamUser_SteamUser013_GetSteamID(void *);
extern int cppISteamUser_SteamUser013_InitiateGameConnection(void *, void *, int, CSteamID, uint32, uint16, bool);
extern void cppISteamUser_SteamUser013_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser013_TrackAppUsageEvent(void *, CGameID, int, const char *);
extern bool cppISteamUser_SteamUser013_GetUserDataFolder(void *, char *, int);
extern void cppISteamUser_SteamUser013_StartVoiceRecording(void *);
extern void cppISteamUser_SteamUser013_StopVoiceRecording(void *);
extern EVoiceResult cppISteamUser_SteamUser013_GetAvailableVoice(void *, uint32 *, uint32 *);
extern EVoiceResult cppISteamUser_SteamUser013_GetVoice(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *);
extern EVoiceResult cppISteamUser_SteamUser013_DecompressVoice(void *, const void *, uint32, void *, uint32, uint32 *);
extern HAuthTicket cppISteamUser_SteamUser013_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamUser_SteamUser013_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamUser_SteamUser013_EndAuthSession(void *, CSteamID);
extern void cppISteamUser_SteamUser013_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamUser_SteamUser013_UserHasLicenseForApp(void *, CSteamID, AppId_t);
#ifdef __cplusplus
}
#endif
