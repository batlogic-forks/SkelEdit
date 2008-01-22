/*==============================================================================
	C++ class definitions exported from script.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .uc files instead!
==============================================================================*/


#ifndef __EDITORCLASSES_H__
#define __EDITORCLASSES_H__

/*------------------------------------------------------------------------------
	CAppSettings class (declared in AppSettings.uc)
------------------------------------------------------------------------------*/


struct CWndPos
{
	int							x;
	int							y;
	int							w;
	int							h;
	bool						maximized;
};


class CAppSettings
{
	DECLARE_BASE_CLASS(CAppSettings)
public:
	int							Splitter1;
	int							Splitter2;
	CWndPos						MainFramePos;
	CWndPos						LogFramePos;
	CWndPos						SettingsFramePos;
	int							MeshPropSplitter;
	int							AnimSetPropSplitter;
	int							AnimSeqPropSplitter;
	int							PrefsPropSplitter;
	/**
	 * Base directory with game resources
	 */
	TString<256>				ResourceRoot;
};


#endif // __EDITORCLASSES_H__
