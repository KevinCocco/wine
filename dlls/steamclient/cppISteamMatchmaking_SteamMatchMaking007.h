#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking007_GetFavoriteGame(void *, int, AppId_t *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking007_AddFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking007_RemoveFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyList(void *);
extern void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListStringFilter(void *, const char *, const char *, ELobbyComparison);
extern void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNumericalFilter(void *, const char *, int, ELobbyComparison);
extern void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListNearValueFilter(void *, const char *, int);
extern void cppISteamMatchmaking_SteamMatchMaking007_AddRequestLobbyListFilterSlotsAvailable(void *, int);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking007_GetLobbyByIndex(void *, int);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking007_CreateLobby(void *, ELobbyType, int);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking007_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking007_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking007_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking007_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking007_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking007_SetLobbyData(void *, CSteamID, const char *, const char *);
extern int cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataCount(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking007_GetLobbyDataByIndex(void *, CSteamID, int, char *, int, char *, int);
extern bool cppISteamMatchmaking_SteamMatchMaking007_DeleteLobbyData(void *, CSteamID, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking007_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking007_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking007_RequestLobbyData(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking007_SetLobbyGameServer(void *, CSteamID, uint32, uint16, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking007_GetLobbyGameServer(void *, CSteamID, uint32 *, uint16 *, CSteamID *);
extern bool cppISteamMatchmaking_SteamMatchMaking007_SetLobbyMemberLimit(void *, CSteamID, int);
extern int cppISteamMatchmaking_SteamMatchMaking007_GetLobbyMemberLimit(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking007_SetLobbyType(void *, CSteamID, ELobbyType);
extern bool cppISteamMatchmaking_SteamMatchMaking007_SetLobbyJoinable(void *, CSteamID, bool);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking007_GetLobbyOwner(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking007_SetLobbyOwner(void *, CSteamID, CSteamID);
#ifdef __cplusplus
}
#endif
