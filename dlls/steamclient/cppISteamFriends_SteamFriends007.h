#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends007_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends007_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends007_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends007_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends007_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends007_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends007_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends007_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends007_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends007_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends007_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends007_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends007_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends007_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends007_GetClanTag(void *, CSteamID);
extern int cppISteamFriends_SteamFriends007_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends007_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends007_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends007_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlayToStore(void *, AppId_t);
extern void cppISteamFriends_SteamFriends007_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends007_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends007_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends007_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends007_GetLargeFriendAvatar(void *, CSteamID);
#ifdef __cplusplus
}
#endif
