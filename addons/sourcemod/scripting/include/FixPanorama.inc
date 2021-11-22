#if defined _FixPanorama_included
  #endinput
#endif
#define _FixPanorama_included

/**
* Gets if a client is running the panorama UI or scale form UI.
*
* @param client		Client index.
*
* @return 			True if client is using panorama; false otherwise.
*/
native bool IsClientUsePanorama(int client);

public SharedPlugin __pl_FixPanorama = {
	name = "FixPanorama",
	file = "FixPanorama.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public void __pl_FixPanorama_SetNTVOptional() {
	MarkNativeAsOptional("IsClientUsePanorama");
}
#endif