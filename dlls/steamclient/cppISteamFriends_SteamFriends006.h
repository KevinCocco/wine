#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends006_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends006_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends006_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends006_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends006_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends006_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends006_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends006_GetFriendPersonaName(void *, CSteamID);
extern int cppISteamFriends_SteamFriends006_GetFriendAvatar(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends006_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends006_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends006_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends006_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends006_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends006_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends006_GetClanTag(void *, CSteamID);
extern int cppISteamFriends_SteamFriends006_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends006_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends006_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends006_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlayToStore(void *, AppId_t);
extern void cppISteamFriends_SteamFriends006_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends006_ActivateGameOverlayInviteDialog(void *, CSteamID);
#ifdef __cplusplus
}
#endif
