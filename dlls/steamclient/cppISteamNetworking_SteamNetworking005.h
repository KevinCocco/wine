#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamNetworking_SteamNetworking005_SendP2PPacket(void *, CSteamID, const void *, uint32, EP2PSend, int);
extern bool cppISteamNetworking_SteamNetworking005_IsP2PPacketAvailable(void *, uint32 *, int);
extern bool cppISteamNetworking_SteamNetworking005_ReadP2PPacket(void *, void *, uint32, uint32 *, CSteamID *, int);
extern bool cppISteamNetworking_SteamNetworking005_AcceptP2PSessionWithUser(void *, CSteamID);
extern bool cppISteamNetworking_SteamNetworking005_CloseP2PSessionWithUser(void *, CSteamID);
extern bool cppISteamNetworking_SteamNetworking005_CloseP2PChannelWithUser(void *, CSteamID, int);
extern bool cppISteamNetworking_SteamNetworking005_GetP2PSessionState(void *, CSteamID, P2PSessionState_t *);
extern bool cppISteamNetworking_SteamNetworking005_AllowP2PPacketRelay(void *, bool);
extern SNetListenSocket_t cppISteamNetworking_SteamNetworking005_CreateListenSocket(void *, int, uint32, uint16, bool);
extern SNetSocket_t cppISteamNetworking_SteamNetworking005_CreateP2PConnectionSocket(void *, CSteamID, int, int, bool);
extern SNetSocket_t cppISteamNetworking_SteamNetworking005_CreateConnectionSocket(void *, uint32, uint16, int);
extern bool cppISteamNetworking_SteamNetworking005_DestroySocket(void *, SNetSocket_t, bool);
extern bool cppISteamNetworking_SteamNetworking005_DestroyListenSocket(void *, SNetListenSocket_t, bool);
extern bool cppISteamNetworking_SteamNetworking005_SendDataOnSocket(void *, SNetSocket_t, void *, uint32, bool);
extern bool cppISteamNetworking_SteamNetworking005_IsDataAvailableOnSocket(void *, SNetSocket_t, uint32 *);
extern bool cppISteamNetworking_SteamNetworking005_RetrieveDataFromSocket(void *, SNetSocket_t, void *, uint32, uint32 *);
extern bool cppISteamNetworking_SteamNetworking005_IsDataAvailable(void *, SNetListenSocket_t, uint32 *, SNetSocket_t *);
extern bool cppISteamNetworking_SteamNetworking005_RetrieveData(void *, SNetListenSocket_t, void *, uint32, uint32 *, SNetSocket_t *);
extern bool cppISteamNetworking_SteamNetworking005_GetSocketInfo(void *, SNetSocket_t, CSteamID *, int *, uint32 *, uint16 *);
extern bool cppISteamNetworking_SteamNetworking005_GetListenSocketInfo(void *, SNetListenSocket_t, uint32 *, uint16 *);
extern ESNetSocketConnectionType cppISteamNetworking_SteamNetworking005_GetSocketConnectionType(void *, SNetSocket_t);
extern int cppISteamNetworking_SteamNetworking005_GetMaxPacketSize(void *, SNetSocket_t);
#ifdef __cplusplus
}
#endif
