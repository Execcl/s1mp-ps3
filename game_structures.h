#pragma once

#pragma region Material/Font_s
struct MaterialInfo
{
	const char* name;
};

struct Material
{
	MaterialInfo info;
};

struct Glyph
{
	uint16_t letter;
	char x0;
	char y0;
	char dx;
	char pixelWidth;
	char pixelHeight;
	float s0;
	float t0;
	float s1;
	float t1;
};

struct Font_s
{
	const char* fontName;
	int pixelHeight;
	int glyphCount;
	Material* material;
	Material* glowMaterial;
	Glyph* glyphs;
};
#pragma endregion

#pragma region UiContext
class UiContext
{
public:
	int32_t localClientNum; //0x0000
	char pad_0004[4]; //0x0004
	int32_t realTime; //0x0008
	int32_t frameTime; //0x000C
	char pad_0010[16]; //0x0010
	int32_t screenWidth; //0x0020
	int32_t screenHeight; //0x0024
	float screenAspect; //0x0028
	float FPS; //0x002C

}; 
extern UiContext* cgDc;
#pragma endregion

#pragma region ScreenPlacement
struct ScreenPlacement
{
	float scaleVirtualToReal[2];
	float scaleVirtualToFull[2];
	float scaleRealToVirtual[2];
	float realViewportPosition[2];
	float realViewportSize[2];
	float virtualViewableMin[2];
	float virtualViewableMax[2];
	float realViewableMin[2];
	float realViewableMax[2];
	float virtualAdjustableMin[2];
	float virtualAdjustableMax[2];
	float realAdjustableMin[2];
	float realAdjustableMax[2];
	float subScreenLeft;
};
extern ScreenPlacement* scrPlaceView;
#pragma endregion

#pragma region XAsset
enum XAssetType
{
	ASSET_TYPE_PHYSPRESET,
	ASSET_TYPE_PHYS_COLLMAP,
	ASSET_TYPE_XANIM,
	ASSET_TYPE_XMODELSURFS,
	ASSET_TYPE_XMODEL,
	ASSET_TYPE_MATERIAL,
	ASSET_TYPE_VERTEXSHADER,
	ASSET_TYPE_PIXELSHADER,
	ASSET_TYPE_TECHSET,
	ASSET_TYPE_IMAGE,
	ASSET_TYPE_SOUND,
	ASSET_TYPE_SOUNDSUBMIX,
	ASSET_TYPE_SNDCURVE,
	ASSET_TYPE_LPFCURVE,
	ASSET_TYPE_REVERBSENDCURVE,
	ASSET_TYPE_SNDCONTEXT,
	ASSET_TYPE_LOADED_SOUND,
	ASSET_TYPE_COL_MAP_MP,
	ASSET_TYPE_COM_MAP,
	ASSET_TYPE_GLASS_MAP,
	ASSET_TYPE_AIPATHS,
	ASSET_TYPE_VEHICLE_TRACK,
	ASSET_TYPE_MAP_ENTS,
	ASSET_TYPE_FX_MAP,
	ASSET_TYPE_GFX_MAP,
	ASSET_TYPE_GFX_MAP_TRZONE,
	ASSET_TYPE_COL_MAP_TRZONE,
	ASSET_TYPE_LIGHTDEF,
	ASSET_TYPE_UI_MAP,
	ASSET_TYPE_FONT,
	ASSET_TYPE_MENUFILE,
	ASSET_TYPE_MENU,
	ASSET_TYPE_ANIMCLASS,
	ASSET_TYPE_LOCALIZE,
	ASSET_TYPE_ATTACHMENT,
	ASSET_TYPE_WEAPON,
	ASSET_TYPE_SNDDRIVERGLOBALS,
	ASSET_TYPE_FX,
	ASSET_TYPE_IMPACTFX,
	ASSET_TYPE_SURFACEFX,
	ASSET_TYPE_AITYPE,
	ASSET_TYPE_MPTYPE,
	ASSET_TYPE_CHARACTER,
	ASSET_TYPE_XMODELALIAS,
	ASSET_TYPE_RAWFILE,
	ASSET_TYPE_SCRIPTFILE,
	ASSET_TYPE_STRINGTABLE,
	ASSET_TYPE_LEADERBOARDDEF,
	ASSET_TYPE_STRUCTUREDDATADEF,
	ASSET_TYPE_TRACER,
	ASSET_TYPE_VEHICLE,
	ASSET_TYPE_ADDON_MAP_ENTS,
	ASSET_TYPE_NETCONSTSTRINGS,
	ASSET_TYPE_REVERBPRESET,
	ASSET_TYPE_LUAFILE,
	ASSET_TYPE_SCRIPTABLE,
	ASSET_TYPE_EQUIPSNDTABLE,
	ASSET_TYPE_DOPPLERPRESET,
	ASSET_TYPE_LASER,
	ASSET_TYPE_SKELETONSCRIPT,
	ASSET_TYPE_CLUT,
};
#pragma endregion