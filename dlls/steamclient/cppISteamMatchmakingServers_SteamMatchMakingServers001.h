#ifdef __cplusplus
extern "C" {
#endif
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestInternetServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestLANServerList(void *, AppId_t, ISteamMatchmakingServerListResponse *);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFriendsServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestFavoritesServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestHistoryServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RequestSpectatorServerList(void *, AppId_t, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse *);
extern gameserveritem_t * cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerDetails(void *, EMatchMakingType, int);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelQuery(void *, EMatchMakingType);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshQuery(void *, EMatchMakingType);
extern bool cppISteamMatchmakingServers_SteamMatchMakingServers001_IsRefreshing(void *, EMatchMakingType);
extern int cppISteamMatchmakingServers_SteamMatchMakingServers001_GetServerCount(void *, EMatchMakingType);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_RefreshServer(void *, EMatchMakingType, int);
extern HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers001_PingServer(void *, uint32, uint16, ISteamMatchmakingPingResponse *);
extern HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers001_PlayerDetails(void *, uint32, uint16, ISteamMatchmakingPlayersResponse *);
extern HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers001_ServerRules(void *, uint32, uint16, ISteamMatchmakingRulesResponse *);
extern void cppISteamMatchmakingServers_SteamMatchMakingServers001_CancelServerQuery(void *, HServerQuery);
#ifdef __cplusplus
}
#endif
