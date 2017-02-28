#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking008_GetFavoriteGame(void *, int, AppId_t *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking008_AddFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking008_RemoveFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyList(void *);
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListStringFilter(void *, const char *, const char *, ELobbyComparison);
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNumericalFilter(void *, const char *, int, ELobbyComparison);
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListNearValueFilter(void *, const char *, int);
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListFilterSlotsAvailable(void *, int);
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListDistanceFilter(void *, ELobbyDistanceFilter);
extern void cppISteamMatchmaking_SteamMatchMaking008_AddRequestLobbyListResultCountFilter(void *, int);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking008_GetLobbyByIndex(void *, int);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking008_CreateLobby(void *, ELobbyType, int);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking008_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking008_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking008_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking008_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking008_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyData(void *, CSteamID, const char *, const char *);
extern int cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataCount(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking008_GetLobbyDataByIndex(void *, CSteamID, int, char *, int, char *, int);
extern bool cppISteamMatchmaking_SteamMatchMaking008_DeleteLobbyData(void *, CSteamID, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking008_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking008_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking008_RequestLobbyData(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking008_SetLobbyGameServer(void *, CSteamID, uint32, uint16, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking008_GetLobbyGameServer(void *, CSteamID, uint32 *, uint16 *, CSteamID *);
extern bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyMemberLimit(void *, CSteamID, int);
extern int cppISteamMatchmaking_SteamMatchMaking008_GetLobbyMemberLimit(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyType(void *, CSteamID, ELobbyType);
extern bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyJoinable(void *, CSteamID, bool);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking008_GetLobbyOwner(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking008_SetLobbyOwner(void *, CSteamID, CSteamID);
#ifdef __cplusplus
}
#endif
