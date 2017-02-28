#ifdef __cplusplus
extern "C" {
#endif
extern HTTPRequestHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest(void *, EHTTPMethod, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(void *, HTTPRequestHandle, uint64);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(void *, HTTPRequestHandle, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(void *, HTTPRequestHandle, const char *, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(void *, HTTPRequestHandle, const char *, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(void *, HTTPRequestHandle, SteamAPICall_t *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse(void *, HTTPRequestHandle, SteamAPICall_t *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(void *, HTTPRequestHandle, const char *, uint32 *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(void *, HTTPRequestHandle, const char *, uint8 *, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(void *, HTTPRequestHandle, uint32 *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(void *, HTTPRequestHandle, uint8 *, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData(void *, HTTPRequestHandle, uint32, uint8 *, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(void *, HTTPRequestHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(void *, HTTPRequestHandle, float *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(void *, HTTPRequestHandle, const char *, uint8 *, uint32);
extern HTTPCookieContainerHandle cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer(void *, bool);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer(void *, HTTPCookieContainerHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie(void *, HTTPCookieContainerHandle, const char *, const char *, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer(void *, HTTPRequestHandle, HTTPCookieContainerHandle);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo(void *, HTTPRequestHandle, const char *);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate(void *, HTTPRequestHandle, bool);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS(void *, HTTPRequestHandle, uint32);
extern bool cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut(void *, HTTPRequestHandle, bool *);
#ifdef __cplusplus
}
#endif
