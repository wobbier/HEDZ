typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void * UniqueProcess;
    void * UniqueThread;
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo * LPCPINFO;

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void * HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void * PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef ushort WORD;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef long LONG;

typedef wchar_t WCHAR;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef char CHAR;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _MEMORYSTATUS _MEMORYSTATUS, *P_MEMORYSTATUS;

typedef ULONG_PTR SIZE_T;

struct _MEMORYSTATUS {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    SIZE_T dwTotalPhys;
    SIZE_T dwAvailPhys;
    SIZE_T dwTotalPageFile;
    SIZE_T dwAvailPageFile;
    SIZE_T dwTotalVirtual;
    SIZE_T dwAvailVirtual;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef void * LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR * LPSTR;

typedef BYTE * LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _MEMORYSTATUS * LPMEMORYSTATUS;

typedef DWORD (* PTHREAD_START_ROUTINE)(LPVOID);

typedef struct _TIME_ZONE_INFORMATION * LPTIME_ZONE_INFORMATION;

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _OVERLAPPED * LPOVERLAPPED;

typedef struct _WIN32_FIND_DATAA * LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _SYSTEMTIME * LPSYSTEMTIME;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef DWORD ULONG;

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef char * va_list;

typedef struct tagOFNA tagOFNA, *PtagOFNA;

typedef struct tagOFNA * LPOPENFILENAMEA;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

typedef CHAR * LPCSTR;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef UINT_PTR (* LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNA {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpstrFilter;
    LPSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPSTR lpstrFile;
    DWORD nMaxFile;
    LPSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCSTR lpstrInitialDir;
    LPCSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
    void * pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

struct HINSTANCE__ {
    int unused;
};

struct HWND__ {
    int unused;
};


// WARNING! conflicting data type names: /rpcndr.h/byte - /byte

typedef uint size_t;

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

typedef struct DLGTEMPLATE * LPCDLGTEMPLATEA;

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef LONG_PTR LRESULT;

typedef LRESULT (* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ * HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ * HBRUSH;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct tagMSG * LPMSG;

typedef LRESULT (* HOOKPROC)(int, WPARAM, LPARAM);

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct tagWNDCLASSEXA tagWNDCLASSEXA, *PtagWNDCLASSEXA;

typedef struct tagWNDCLASSEXA WNDCLASSEXA;

struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
};

typedef LPCDLGTEMPLATEA LPCDLGTEMPLATE;

typedef void (* TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef int INT_PTR;

typedef INT_PTR (* DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
};

typedef struct tagLOGFONTA LOGFONTA;

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef struct _devicemodeA DEVMODEA;

typedef union _union_655 _union_655, *P_union_655;

typedef union _union_658 _union_658, *P_union_658;

typedef struct _struct_656 _struct_656, *P_struct_656;

typedef struct _struct_657 _struct_657, *P_struct_657;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

struct _POINTL {
    LONG x;
    LONG y;
};

struct _struct_657 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _struct_656 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

union _union_655 {
    struct _struct_656 field0;
    struct _struct_657 field1;
};

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _devicemodeA {
    BYTE dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_655 field6_0x2c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_658 field17_0x74;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef double ULONGLONG;

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

typedef WCHAR * PCNZWCH;

typedef LONG * PLONG;

typedef ULARGE_INTEGER * PULARGE_INTEGER;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA * LPOSVERSIONINFOA;

typedef DWORD ACCESS_MASK;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef WCHAR * LPWSTR;

typedef WCHAR * LPWCH;

typedef WCHAR * LPCWSTR;

typedef long HRESULT;

typedef CHAR * LPCH;

typedef DWORD LCID;

typedef CHAR * PCNZCH;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef ULONG_PTR DWORD_PTR;

typedef struct _PROPSHEETPAGEA _PROPSHEETPAGEA, *P_PROPSHEETPAGEA;

typedef union _union_1933 _union_1933, *P_union_1933;

typedef union _union_1934 _union_1934, *P_union_1934;

typedef UINT (* LPFNPSPCALLBACKA)(HWND, UINT, struct _PROPSHEETPAGEA *);

typedef union _union_1935 _union_1935, *P_union_1935;

typedef LPCDLGTEMPLATE PROPSHEETPAGE_RESOURCE;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ * HBITMAP;

struct HBITMAP__ {
    int unused;
};

union _union_1934 {
    HICON hIcon;
    LPCSTR pszIcon;
};

union _union_1935 {
    HBITMAP hbmHeader;
    LPCSTR pszbmHeader;
};

union _union_1933 {
    LPCSTR pszTemplate;
    PROPSHEETPAGE_RESOURCE pResource;
};

struct _PROPSHEETPAGEA {
    DWORD dwSize;
    DWORD dwFlags;
    HINSTANCE hInstance;
    union _union_1933 u;
    union _union_1934 u2;
    LPCSTR pszTitle;
    DLGPROC pfnDlgProc;
    LPARAM lParam;
    LPFNPSPCALLBACKA pfnCallback;
    UINT * pcRefParent;
    LPCSTR pszHeaderTitle;
    LPCSTR pszHeaderSubTitle;
    HANDLE hActCtx;
    union _union_1935 u3;
};

typedef struct _PSP _PSP, *P_PSP;

typedef struct _PSP * HPROPSHEETPAGE;

struct _PSP {
};

typedef struct _PROPSHEETHEADERA_V2 _PROPSHEETHEADERA_V2, *P_PROPSHEETHEADERA_V2;

typedef struct _PROPSHEETHEADERA_V2 PROPSHEETHEADERA_V2;

typedef union _union_1954 _union_1954, *P_union_1954;

typedef union _union_1955 _union_1955, *P_union_1955;

typedef union _union_1956 _union_1956, *P_union_1956;

typedef int (* PFNPROPSHEETCALLBACK)(HWND, UINT, LPARAM);

typedef union _union_1957 _union_1957, *P_union_1957;

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

typedef struct HPALETTE__ * HPALETTE;

typedef union _union_1958 _union_1958, *P_union_1958;

typedef struct _PROPSHEETPAGEA PROPSHEETPAGEA_V4;

typedef PROPSHEETPAGEA_V4 * LPCPROPSHEETPAGEA_V4;

typedef LPCPROPSHEETPAGEA_V4 LPCPROPSHEETPAGEA;

union _union_1956 {
    LPCPROPSHEETPAGEA ppsp;
    HPROPSHEETPAGE * phpage;
};

union _union_1957 {
    HBITMAP hbmWatermark;
    LPCSTR pszbmWatermark;
};

struct HPALETTE__ {
    int unused;
};

union _union_1958 {
    HBITMAP hbmHeader;
    LPCSTR pszbmHeader;
};

union _union_1954 {
    HICON hIcon;
    LPCSTR pszIcon;
};

union _union_1955 {
    UINT nStartPage;
    LPCSTR pStartPage;
};

struct _PROPSHEETHEADERA_V2 {
    DWORD dwSize;
    DWORD dwFlags;
    HWND hwndParent;
    HINSTANCE hInstance;
    union _union_1954 u;
    LPCSTR pszCaption;
    UINT nPages;
    union _union_1955 u2;
    union _union_1956 u3;
    PFNPROPSHEETCALLBACK pfnCallback;
    union _union_1957 u4;
    HPALETTE hplWatermark;
    union _union_1958 u5;
};

typedef PROPSHEETHEADERA_V2 * LPCPROPSHEETHEADERA_V2;

typedef LPCPROPSHEETHEADERA_V2 LPCPROPSHEETHEADERA;

typedef struct _IMAGELIST _IMAGELIST, *P_IMAGELIST;

typedef struct _IMAGELIST * HIMAGELIST;

struct _IMAGELIST {
};

typedef struct tagPOINT * LPPOINT;

typedef struct HFONT__ HFONT__, *PHFONT__;

struct HFONT__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

typedef struct HACCEL__ * HACCEL;

struct HACCEL__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef long * LPLONG;

typedef int (* FARPROC)(void);

typedef WORD ATOM;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT * LPRECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef BOOL * LPBOOL;

typedef void * HGDIOBJ;

typedef struct HKEY__ * HKEY;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ * HRSRC;

struct HRSRC__ {
    int unused;
};

typedef struct HHOOK__ HHOOK__, *PHHOOK__;

struct HHOOK__ {
    int unused;
};

typedef struct HHOOK__ * HHOOK;

typedef DWORD COLORREF;

typedef struct HFONT__ * HFONT;

typedef DWORD * LPDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct HTASK__ HTASK__, *PHTASK__;

struct HTASK__ {
    int unused;
};

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ * HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME * LPFILETIME;

typedef struct HDC__ * HDC;

typedef WORD * LPWORD;

typedef HKEY * PHKEY;

typedef struct HTASK__ * HTASK;

typedef HANDLE HGLOBAL;

typedef void * LPCVOID;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_14 IMAGE_RESOURCE_DIR_STRING_U_14, *PIMAGE_RESOURCE_DIR_STRING_U_14;

struct IMAGE_RESOURCE_DIR_STRING_U_14 {
    word Length;
    wchar16 NameString[7];
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef ACCESS_MASK REGSAM;

typedef LONG LSTATUS;

typedef void (TIMECALLBACK)(UINT, UINT, DWORD_PTR, DWORD_PTR, DWORD_PTR);

typedef struct _MMCKINFO _MMCKINFO, *P_MMCKINFO;

typedef struct _MMCKINFO MMCKINFO;

typedef DWORD FOURCC;

struct _MMCKINFO {
    FOURCC ckid;
    DWORD cksize;
    FOURCC fccType;
    DWORD dwDataOffset;
    DWORD dwFlags;
};

typedef struct _MMIOINFO _MMIOINFO, *P_MMIOINFO;

typedef struct _MMIOINFO * LPMMIOINFO;

typedef LRESULT (MMIOPROC)(LPSTR, UINT, LPARAM, LPARAM);

typedef MMIOPROC * LPMMIOPROC;

typedef char * HPSTR;

typedef struct HMMIO__ HMMIO__, *PHMMIO__;

typedef struct HMMIO__ * HMMIO;

struct HMMIO__ {
    int unused;
};

struct _MMIOINFO {
    DWORD dwFlags;
    FOURCC fccIOProc;
    LPMMIOPROC pIOProc;
    UINT wErrorRet;
    HTASK htask;
    LONG cchBuffer;
    HPSTR pchBuffer;
    HPSTR pchNext;
    HPSTR pchEndRead;
    HPSTR pchEndWrite;
    LONG lBufOffset;
    LONG lDiskOffset;
    DWORD adwInfo[3];
    DWORD dwReserved1;
    DWORD dwReserved2;
    HMMIO hmmio;
};

typedef struct _MMIOINFO MMIOINFO;

typedef TIMECALLBACK * LPTIMECALLBACK;

typedef UINT MMRESULT;

typedef struct _MMCKINFO * LPMMCKINFO;

typedef MMIOINFO * LPCMMIOINFO;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknownVtbl {
    HRESULT (* QueryInterface)(struct IUnknown *, IID *, void * *);
    ULONG (* AddRef)(struct IUnknown *);
    ULONG (* Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl * lpVtbl;
};

typedef struct IUnknown * LPUNKNOWN;




void ApplyStreamVolumes(void);
void FUN_004010f0(void);
void FUN_00401140(void);
void FUN_004011a0(void);
void FUN_00401230(void);
void FUN_00401660(float ****param_1);
undefined4 FUN_004025e0(undefined4 *******param_1,int *param_2,float param_3,int param_4,int param_5);
void FUN_00402a50(float param_1);
undefined4 FUN_00403ae0(float param_1,float param_2,uint param_3,float param_4,float *param_5);
undefined4 FUN_00403de0(int param_1,int param_2,int *param_3,float param_4,float param_5,int param_6,int param_7,float param_8,int param_9,float param_10,int param_11);
void FUN_00404620(int param_1);
void FUN_00404640(int param_1);
void FUN_004048b0(int param_1,undefined4 *param_2,int param_3,float param_4,undefined4 param_5,undefined4 param_6,int param_7);
bool FUN_00404da0(int param_1);
float10 FUN_00404df0(int param_1);
void FUN_00404e50(uint param_1);
undefined4 FUN_00404ec0(int param_1,float *param_2,int param_3);
float10 FUN_004050a0(undefined4 *param_1,undefined4 *param_2,float *param_3,float *param_4,undefined4 param_5,float param_6);
void FUN_004055f0(void);
void FUN_00405600(int *param_1,float param_2,float param_3,float param_4);
void FUN_00405b40(int param_1,int *param_2,float param_3,float param_4,float param_5);
void FUN_004064c0(void);
undefined4 FUN_00406510(char *param_1,int param_2);
void FUN_004071e0(char *param_1);
void FUN_00407780(int param_1);
undefined4 FUN_00407870(undefined4 *param_1,uint param_2);
void FUN_00407900(float param_1);
void FUN_004081f0(int param_1,int param_2);
void FUN_004083b0(int param_1,float param_2,int param_3);
void FUN_004085b0(int param_1);
void FUN_00408730(int param_1);
void FUN_00408910(int param_1,uint param_2);
void FUN_00409320(void);
void FUN_004099c0(int param_1,int param_2);
undefined4 FUN_00409bd0(int param_1,int param_2,int param_3);
void FUN_00409d50(int param_1,int param_2);
void FUN_00409f10(int param_1);
void FUN_0040a0b0(int param_1);
void FUN_0040a310(int param_1);
void * FUN_0040a500(int *param_1,int param_2,int param_3);
undefined4 * FUN_0040ac00(int param_1);
undefined4 FUN_0040acc0(undefined4 param_1,int *param_2,int *param_3);
uint __fastcall FUN_0040af70(undefined4 param_1_00,undefined4 param_2,byte *param_1);
void FUN_0040afc0(float param_1,uint param_2);
void FUN_0040b7a0(int param_1,uint param_2);
void FUN_0040bae0(int param_1,uint param_2);
void FUN_0040bee0(undefined4 param_1,float param_2,float param_3,float param_4);
float10 FUN_0040c180(int param_1,float *param_2);
undefined4 FUN_0040c200(undefined4 param_1,int **param_2,int **param_3);
undefined4 FUN_0040ce00(int param_1,undefined4 param_2);
void FUN_0040ce30(int param_1);
uint FUN_0040d1c0(int param_1,int param_2);
undefined2 * FUN_0040d1f0(int param_1,byte param_2,undefined4 param_3,int param_4,int param_5);
undefined2 * FUN_0040d510(char *param_1);
ushort * FUN_0040e070(uint *param_1,undefined4 param_2,undefined4 *param_3);
void FUN_0040e630(int param_1);
float10 FUN_0040e760(int param_1);
void FUN_0040e9f0(uint *param_1,int param_2,int param_3);
void FUN_0040ee00(int param_1,int param_2);
short * FUN_0040f110(int param_1);
void FUN_0040f280(int param_1);
void FUN_0040f3f0(void);
void FUN_0040f4a0(undefined4 param_1,int param_2,int param_3);
void FUN_0040f780(char *param_1,int param_2);
void FUN_0040fcf0(char *param_1,uint param_2);
uint FUN_004105f0(uint param_1,uint param_2);
void FUN_00410870(int param_1);
void FUN_004109b0(int param_1);
void FUN_00410b60(int param_1);
void FUN_00410c00(uint param_1);
undefined4 FUN_00410e40(int param_1,uint param_2);
void FUN_004110d0(int param_1);
void FUN_00411390(int param_1);
undefined4 FUN_004116d0(int *param_1,undefined4 param_2,undefined4 param_3,int **param_4);
undefined4 FUN_00411790(byte param_1);
uint FUN_004118e0(int *param_1,int *param_2);
undefined4 FUN_00411940(int param_1,int param_2,int param_3,int param_4,int param_5);
undefined4 FUN_004119c0(void);
bool FUN_00411dd0(int param_1);
void FUN_00411e40(undefined4 *param_1,int *param_2);
undefined4 FUN_00411e70(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6);
undefined4 FUN_00412400(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 FUN_00412640(undefined4 param_1,int param_2);
undefined4 FUN_004126f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
bool FUN_00412770(void);
undefined4 FUN_004127c0(void);
undefined4 FUN_00412840(void);
undefined4 FUN_004129d0(undefined4 param_1);
undefined4 FUN_00412a70(void);
bool FUN_00412af0(undefined4 param_1,LPCSTR param_2,LPCSTR param_3,int param_4,int param_5);
undefined4 FUN_00412ca0(void);
undefined4 FUN_00412cf0(int param_1);
undefined4 FUN_00412fa0(void);
undefined4 FUN_004133b0(void);
undefined4 FUN_00413420(int param_1);
void FUN_00413680(void);
undefined4 FUN_004136e0(void);
undefined4 FUN_00413710(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00413750(int *param_1,uint param_2);
undefined4 FUN_00413830(int param_1);
undefined4 FUN_004138a0(int *param_1,uint param_2);
undefined4 FUN_00413960(int *param_1,int *param_2);
void FUN_00413bf0(HWND param_1,int param_2,int param_3,int param_4);
void FUN_00413d00(HWND param_1);
void FUN_00413d80(LPCSTR param_1);
void FUN_00413de0(void);
void FUN_00413e60(void);
undefined4 FUN_00413eb0(int **param_1);
int FUN_00413f70(undefined4 param_1,undefined4 *param_2);
void FUN_00414000(void);
undefined4 FUN_00414090(void);
undefined4 FUN_00414160(undefined4 param_1,int *****param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 *param_7);
undefined4 FUN_004146b0(undefined4 *param_1,undefined4 *param_2,HWND param_3,uint param_4,undefined4 param_5,LPRECT param_6);
undefined4 FUN_00414850(void);
undefined4 FUN_00414bb0(void);
undefined4 FUN_00414d80(void);
undefined4 FUN_00414e20(void);
undefined4 FUN_00415270(void);
undefined4 FUN_00415380(void);
undefined4 FUN_00415440(void);
undefined4 FUN_00415650(void);
undefined4 FUN_00415690(void);
undefined4 FUN_004156d0(void);
undefined4 FUN_00415910(void);
undefined4 FUN_00415b30(void);
undefined4 FUN_00415d30(void);
uint FUN_00415dd0(int param_1,ushort param_2,uint param_3);
undefined4 FUN_00415e50(undefined4 *param_1,int param_2,int param_3,uint param_4);
void FUN_00415fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00415fc0(void);
void FUN_00416240(void);
undefined4 FUN_00416320(void);
undefined4 FUN_00416640(int param_1,short param_2);
undefined4 FUN_004166a0(int param_1,short param_2);
void FUN_00416710(void);
void FUN_00416e40(void);
int FUN_00417360(void);
void FUN_004173e0(int *param_1,undefined4 ***param_2,int param_3,int param_4,int param_5);
void FUN_00417590(int *param_1,undefined4 **param_2,int param_3,int param_4,int param_5,int *param_6);
void FUN_00417780(int *param_1,undefined4 **param_2,int param_3,int param_4,int param_5,int *param_6,char param_7);
void FUN_00417970(void);
int FUN_00417aa0(void);
void FUN_00417b70(int param_1);
void FUN_00417ba0(ushort *param_1);
int FUN_00417c90(int param_1);
bool FUN_00417cd0(int param_1,int param_2);
undefined4 FUN_00417e80(int param_1,int param_2);
undefined4 FUN_00418010(int param_1,int param_2,int param_3);
void FUN_004181b0(void);
void FUN_00418340(void);
void FUN_00418380(void);
void FUN_00418480(void);
void FUN_004184b0(int param_1);
void FUN_00418510(void);
void FUN_00418b10(float *param_1,int param_2,float *param_3,float param_4);
void FUN_0041a660(float *param_1,int param_2,float *param_3,float param_4);
void FUN_0041b890(int param_1,float param_2);
void FUN_0041b900(int param_1,float param_2);
void FUN_0041b970(void);
void FUN_0041bd00(undefined4 param_1,undefined4 param_2,float *param_3);
void FUN_0041be30(int param_1);
void FUN_0041be50(int param_1);
undefined4 FUN_0041c1c0(void);
longlong FUN_0041c320(uint param_1);
undefined * FUN_0041c3f0(undefined4 param_1);
undefined4 * FUN_0041c4a0(undefined4 param_1);
void FUN_0041c4e0(void);
void FUN_0041c500(int param_1,int param_2);
void FUN_0041c540(int param_1);
void FUN_0041c590(uint param_1);
undefined4 FUN_0041c610(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5);
float10 FUN_0041c650(float param_1,float param_2,undefined4 *param_3,undefined4 *param_4,float param_5,undefined4 *param_6);
float10 FUN_0041cd40(float param_1,float param_2,float *param_3,float *param_4);
float10 FUN_0041cd90(float param_1,float param_2,undefined4 *param_3,undefined4 param_4,int param_5,float param_6);
int FUN_0041ceb0(float *param_1,float *param_2,float param_3,float *param_4,int param_5,undefined4 param_6,undefined4 param_7,float param_8,float param_9,undefined4 param_10);
undefined4 *FUN_0041d230(float *param_1,float *param_2,uint *param_3,undefined4 param_4,uint *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,uint **param_9,uint *param_10);
undefined4 FUN_0041d8f0(undefined4 ****param_1,undefined *****param_2);
undefined *FUN_0041e9a0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,int param_6,float **param_7,float ***param_8,int param_9,int param_10);
int FUN_0041f7f0(undefined4 param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,float *param_6,undefined4 param_7,undefined4 param_8,float param_9,float param_10,float *param_11,undefined4 param_12,int param_13,undefined4 param_14,float *param_15);
undefined4 FUN_0041fa80(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6,float *param_7,float *param_8,float param_9,float **param_10,float *param_11,float *param_12,int param_13,int param_14);
undefined4 FUN_004202c0(int param_1,int param_2,float *param_3);
undefined4 FUN_00420410(int param_1,int param_2,float *param_3,float param_4);
undefined4 FUN_00420900(int param_1,float *param_2,float *param_3,float *param_4,int param_5,float *param_6,float *param_7);
undefined4 FUN_00420de0(float *param_1,float *param_2,float *param_3,undefined4 param_4,float *param_5,float *param_6,undefined4 param_7,undefined4 param_8,float *param_9,float *param_10);
undefined4 FUN_00421460(int param_1);
byte FUN_00421600(int param_1);
undefined4 FUN_00421640(float *param_1,float *param_2,float param_3,undefined4 param_4,float *param_5);
float10 FUN_00421a70(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,undefined4 param_8,uint param_9,int param_10);
bool FUN_00421c60(float *param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5);
int FUN_00421e00(float *param_1,undefined *param_2,undefined4 *param_3,int param_4,int param_5);
int FUN_00422190(float *param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,float param_9);
undefined *FUN_00422320(float *param_1,undefined4 param_2,undefined *param_3,undefined *param_4,undefined4 *param_5,int *param_6,undefined4 *param_7,undefined4 param_8,undefined4 param_9,int param_10,int param_11);
undefined4 FUN_00422730(int param_1,float param_2,undefined4 *param_3);
undefined4 FUN_004227b0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,float *param_8);
float10 FUN_00422950(float param_1,float param_2,undefined4 *param_3);
uint FUN_00422ac0(float *param_1,undefined4 param_2,float param_3);
void FUN_00422db0(void);
int FUN_00423750(int param_1,float *param_2);
int FUN_00423c40(int param_1,float *param_2,float *param_3,float param_4);
void FUN_00423dd0(float *param_1,float *param_2);
void FUN_00423e20(int param_1,float *param_2);
void FUN_00423f70(int param_1,float *param_2);
undefined4 FUN_00424150(char *param_1);
undefined4 FUN_00424490(int param_1,char *param_2,int param_3,undefined4 param_4);
undefined4 FUN_004244f0(float *param_1,int param_2,int param_3);
void FUN_004247d0(ushort *param_1,int param_2,size_t param_3);
void FUN_00424830(ushort *param_1,int param_2,size_t param_3);
undefined4 FUN_00424880(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4);
void * FUN_004248d0(ushort *param_1,uint param_2);
void FUN_00424940(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4);
void FUN_00424970(undefined4 *param_1);
void FUN_004249a0(int param_1,char param_2,int param_3);
undefined * FUN_00424a20(ushort *param_1,int *param_2);
undefined4 FUN_00424b40(int param_1,ushort param_2);
void ** FUN_00424b80(void);
void FUN_00424bc0(undefined4 *param_1,uint *param_2);
undefined4 FUN_00424c50(undefined4 *param_1,uint param_2,undefined *param_3);
undefined4 FUN_00424d60(int *param_1,int *param_2,int *param_3,int *param_4);
undefined4 FUN_00424e90(int *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,undefined4 **param_5,undefined4 param_6);
undefined4 FUN_00424fa0(int param_1,undefined4 param_2,int param_3);
void FUN_004250f0(int param_1,undefined4 param_2,int param_3);
void FUN_00425290(int param_1,undefined4 param_2,int param_3);
undefined4 FUN_00425410(void);
undefined4 FUN_00425a50(void);
undefined4 FUN_00425ce0(undefined4 param_1,byte *param_2);
void FUN_00425df0(int param_1,undefined4 param_2,int param_3);
void FUN_00425eb0(int param_1,undefined4 param_2,int param_3);
void FUN_00425f60(undefined4 param_1,int param_2);
void FUN_00425fa0(void);
void FUN_00425ff0(void);
void FUN_00426040(void);
void FUN_00426080(int param_1);
void FUN_004260d0(void);
int FUN_00426240(void);
void FUN_00426270(uint param_1);
void FUN_004262b0(int param_1,int param_2);
void FUN_00426350(int param_1,byte param_2);
void FUN_00426610(int param_1);
void FUN_004266e0(void);
void FUN_00426720(void);
void FUN_00426780(void);
void FUN_00426880(void);
void FUN_00426c70(void);
char * GetErrorStringFunc(int param_1);
void FUN_00427380(void);
int * FUN_00427390(int param_1);
void FUN_004273c0(uint *param_1,int param_2,int param_3,int param_4);
void FUN_00427490(void);
void FUN_00427700(int *param_1,undefined4 param_2,int param_3);
undefined4 FUN_004278f0(void);
void FUN_00427900(uint *param_1,int param_2);
int * FUN_004279c0(uint *param_1,int param_2);
undefined4 FUN_004279f0(void);
undefined4 FUN_00427b50(void);
void FUN_00427df0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_00428130(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6);
void FUN_004284a0(char *param_1,int param_2,undefined4 param_3,uint param_4,int param_5);
void FUN_00428d60(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5);
void FUN_00429170(undefined4 param_1,int param_2,int param_3,int param_4);
void FUN_00429330(void);
undefined4 FUN_00429350(void);
uint FUN_00429560(void);
void FUN_004295d0(void);
void FUN_00429630(void);
void FUN_00429800(void);
undefined4 FUN_00429880(void);
void FUN_00429cc0(void);
void FUN_00429cd0(void);
void FUN_00429cf0(void);
void FUN_0042a290(void);
void FUN_0042a3c0(void);
void FUN_0042a450(undefined4 param_1);
void FUN_0042a470(void);
void FUN_0042a490(void);
undefined4 FUN_0042a4a0(void);
void FUN_0042a520(HANDLE param_1);
void FUN_0042a630(void);
int FUN_0042a6c0(short param_1,int param_2);
void FUN_0042a770(void);
void FUN_0042a800(short param_1,int param_2);
undefined4 FUN_0042a850(void);
int ** FUN_0042abb0(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4);
void FUN_0042ac70(void);
void FUN_0042aea0(int param_1);
void FUN_0042b130(void);
void FUN_0042b190(void);
void FUN_0042b210(void);
undefined4 FUN_0042b270(void);
void FUN_0042b400(void);
void FUN_0042b430(void);
void FUN_0042b460(void);
void FUN_0042b4a0(void);
void FUN_0042b620(int param_1);
undefined4 FUN_0042b6a0(int param_1);
void FUN_0042bad0(void);
undefined4 FUN_0042be10(void);
void FUN_0042c010(void);
undefined4 FUN_0042c060(void);
void FUN_0042c070(void);
void FUN_0042c700(void);
void FUN_0042c830(void);
void FUN_0042ca60(void);
void FUN_0042cbe0(void);
undefined4 FUN_0042cc60(void);
uint FUN_0042cf90(int param_1,int param_2);
void * FUN_0042cfc0(size_t *param_1);
undefined4 FUN_0042d1f0(int param_1,uint param_2);
char * FUN_0042d490(char *param_1);
undefined4 FUN_0042d540(void);
void FUN_0042d6b0(undefined4 param_1,int param_2);
void FUN_0042d7b0(undefined4 param_1);
void FUN_0042d9a0(int param_1);
void FUN_0042d9e0(float *param_1,float *param_2);
void FUN_0042dae0(void);
void FUN_0042db30(void);
void FUN_0042db60(void);
undefined4 FUN_0042dcd0(void);
void * FUN_0042ddc0(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4);
void FUN_0042dfa0(void);
undefined4 FUN_0042dfe0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0042e060(void);
undefined4 FUN_0042e6b0(void);
bool FUN_0042e950(void);
void FUN_0042eb30(void);
void FUN_0042ec60(int param_1,int param_2);
uint FUN_0042ecf0(int param_1,int param_2);
void FUN_0042ed20(void);
undefined4 FUN_0042f000(uint param_1,int *param_2);
undefined4 FUN_0042f280(int param_1,int param_2);
undefined4 FUN_0042f6e0(int *param_1,undefined4 param_2);
void FUN_0042f760(void);
void FUN_0042fa80(void);
void FUN_0042fbd0(void);
int FUN_00430660(int param_1,int param_2);
undefined4 FUN_00430710(void);
void FUN_00430c20(void);
void FUN_00430c60(void);
undefined4 FUN_00431030(void);
void FUN_004311e0(int param_1,int param_2);
void FUN_004314d0(int param_1,int param_2);
uint FUN_00431770(void);
void FUN_004318e0(int param_1);
uint thunk_FUN_00431770(void);
void FUN_00431a20(int param_1);
void FUN_00431a40(char *param_1,int param_2);
int FUN_00431b70(int param_1);
void FUN_00431c80(void);
undefined4 FUN_00431cf0(void);
void * FUN_00431d80(short param_1);
void FUN_00431de0(undefined2 param_1);
void FUN_00432240(float param_1);
undefined4 FUN_00432260(int *param_1);
void FUN_00432320(int param_1,float param_2,int param_3);
void FUN_004328a0(void);
void FUN_004331f0(void);
undefined4 FUN_004332c0(void);
undefined4 FUN_004335d0(void);
void FUN_00433700(int param_1,uint param_2);
int FUN_004337f0(int param_1,int param_2);
void FUN_00433840(void);
void FUN_00433890(void);
undefined4 FUN_00433ae0(void);
void FUN_00433cd0(void);
void FUN_00433d40(void);
void FUN_00433f10(void);
void FUN_00434070(void);
undefined4 FUN_004340a0(void);
void FUN_00434110(void);
void FUN_00434410(undefined4 param_1,int param_2,int param_3,int param_4);
undefined4 FUN_00434550(void);
void FUN_00434560(void);
void FUN_00434fd0(void);
void FUN_00435160(void);
undefined4 FUN_00435390(void);
void FUN_00435680(void);
void FUN_004356a0(uint param_1);
void FUN_00435700(uint param_1);
undefined4 FUN_00435760(void);
void FUN_004357f0(undefined2 param_1,undefined4 param_2);
void FUN_00435810(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4);
int FUN_004358d0(int param_1);
bool FUN_00435910(void);
undefined4 FUN_00435940(void);
undefined4 FUN_00435950(void);
undefined4 FUN_004362d0(void);
undefined4 FUN_00436600(void);
undefined4 FUN_004368b0(void);
void FUN_00436a90(void);
void FUN_00436aa0(void);
void FUN_00436ad0(void);
void FUN_00436b20(void);
void FUN_00436bf0(void);
void FUN_00437320(void);
void FUN_004375e0(void);
void FUN_00437850(undefined4 param_1,undefined4 param_2,char *param_3);
undefined4 FUN_004378d0(void);
undefined4 FUN_00437ae0(int param_1);
void FUN_00437c30(void);
void FUN_00437ef0(void);
void FUN_00437fb0(void);
undefined4 FUN_00438cf0(int param_1);
undefined4 FUN_0043ac70(short param_1);
void FUN_0043ada0(void);
void FUN_0043b000(void);
void FUN_0043b190(void);
void FUN_0043b1f0(void);
undefined4 FUN_0043b2f0(void);
undefined4 FUN_0043b920(void);
undefined4 FUN_0043beb0(void);
void FUN_0043c420(void);
void FUN_0043c430(void);
void FUN_0043c490(void);
void FUN_0043c4c0(void);
void FUN_0043c700(void);
undefined4 FUN_0043c710(void);
void FUN_0043cac0(void);
void FUN_0043cc30(void);
void FUN_0043cd10(void);
void FUN_0043cd90(void);
bool FUN_0043d070(void);
undefined4 FUN_0043d2c0(void);
undefined4 FUN_0043d590(void);
void FUN_0043d680(void);
void FUN_0043d690(void);
void FUN_0043d740(void);
undefined4 FUN_0043d7f0(undefined4 param_1,undefined4 param_2);
void FUN_0043db20(int param_1);
undefined4 FUN_0043dcb0(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5);
void FUN_0043dee0(int param_1);
void FUN_0043df50(void);
void FUN_0043e0f0(void);
void FUN_0043e100(void);
void FUN_0043e140(void);
undefined4 FUN_0043e190(void);
void FUN_0043e1a0(void);
void FUN_0043e1c0(void);
void FUN_0043e270(void);
void FUN_0043e8e0(void);
void FUN_0043e8f0(void);
void FUN_0043e920(void);
undefined4 FUN_0043e9f0(void);
undefined4 FUN_0043ea30(void);
void FUN_0043ea40(void);
void FUN_0043eac0(void);
undefined4 FUN_0043eda0(void);
void FUN_0043f020(void);
void FUN_0043f030(void);
void FUN_0043f1b0(void);
undefined4 FUN_0043f290(void);
undefined4 FUN_0043f3f0(void);
undefined4 FUN_0043f400(void);
void FUN_0043f430(void);
void FUN_0043f550(void);
void FUN_0043f980(void);
undefined4 FUN_0043f9d0(void);
undefined4 FUN_0043fbc0(void);
void FUN_0043fda0(char *param_1);
undefined4 FUN_0043ff50(void);
void FUN_0043ffb0(void);
void FUN_00440030(void);
undefined4 FUN_00440060(void);
undefined4 FUN_00440920(void);
undefined4 FUN_00440e20(void);
void FUN_00440fa0(undefined4 param_1,undefined4 param_2);
int * FUN_00440fc0(uint param_1,int param_2);
void FUN_00441160(float *param_1,int param_2,float param_3);
void FUN_004412c0(undefined4 ******param_1,undefined4 ******param_2,int param_3);
uint FUN_00441a40(uint param_1);
undefined4 FUN_00441a80(undefined4 param_1);
undefined2 * FUN_00441b30(undefined2 param_1);
void FUN_00441bd0(void);
void FUN_00441bf0(int param_1,int param_2);
void FUN_00441c30(int param_1);
void FUN_00441c80(ushort param_1);
undefined4 FUN_00441d30(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5);
void FUN_00441d70(void);
undefined4 FUN_00441dd0(undefined2 *param_1);
void * FUN_004420e0(undefined4 param_1,int param_2);
void FUN_00442220(int param_1,undefined2 param_2);
void FUN_004422c0(void);
uint FUN_004422d0(undefined4 param_1,undefined4 param_2);
void FUN_004423f0(void **param_1,undefined8 param_2,undefined4 param_4);
void FUN_004424b0(void);
void FUN_00442630(void);
undefined4 FUN_00442690(ushort param_1,undefined4 *param_2);
undefined4 FUN_00442710(int param_1,byte param_2,char param_3);
undefined2 * FUN_00442950(undefined2 param_1);
int FUN_004429a0(int param_1,undefined4 param_2,undefined4 param_3);
byte FUN_00442a60(int param_1,short *param_2);
undefined4 FUN_00442d10(int param_1,byte param_2,char param_3);
void FUN_00442f00(int param_1);
undefined4 FUN_00442fa0(void);
void FUN_00443000(int param_1,int param_2);
undefined4 FUN_00443050(int param_1,undefined4 param_2,int param_3);
undefined4 FUN_00443120(void);
undefined4 FUN_004432f0(void);
void FUN_004433c0(void);
void FUN_004433f0(undefined4 param_1,undefined4 param_2);
void FUN_00443560(void);
void FUN_004436c0(void);
void FUN_004437c0(void);
int FUN_00443910(void);
undefined4 FUN_00443ba0(void);
undefined4 FUN_00443c70(void);
void FUN_00443e40(int param_1);
undefined4 FUN_00443ea0(uint param_1);
undefined4 FUN_00443f30(uint param_1);
void FUN_00443fc0(void);
void FUN_00444020(void);
undefined4 FUN_00444070(void);
undefined4 FUN_004441a0(void);
undefined4 FUN_00444390(void);
void FUN_00444460(void);
void FUN_004444b0(void);
undefined4 FUN_00444540(void);
undefined4 FUN_00444660(void);
bool FUN_00444930(uint param_1);
bool FUN_00444e60(uint param_1);
void FUN_00445250(uint param_1);
void FUN_00445e40(uint param_1);
uint FUN_00446480(undefined param_1);
void FUN_004465d0(void);
void FUN_00446840(int param_1,int param_2);
undefined FUN_00446c50(void);
char FUN_00446c80(undefined4 *param_1);
void FUN_00446d20(void);
undefined4 FUN_00446d40(void);
uint FUN_00446db0(void);
undefined4 FUN_004470b0(int param_1);
undefined4 FUN_004471c0(int param_1);
undefined4 FUN_004473d0(int param_1);
undefined4 FUN_00447460(int param_1);
void FUN_004474f0(uint param_1);
void FUN_00447590(uint param_1);
void FUN_00447650(uint param_1);
undefined4 FUN_004476e0(void);
void FUN_004477f0(void);
void FUN_00447840(void);
undefined4 FUN_004478e0(undefined4 param_1,undefined4 param_2);
void FUN_00447b80(void);
undefined4 FUN_00447c70(int *param_1);
void FUN_00447ea0(int *param_1,undefined4 param_2);
undefined4 FUN_00447ef0(void);
void FUN_00447f80(void);
void FUN_00448020(undefined4 param_1,char param_2,uint param_3);
void FUN_00448130(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4);
uint FUN_00448210(char param_1,uint param_2,byte param_3);
undefined4 FUN_004486b0(char param_1,undefined4 param_2,char param_3);
uint FUN_00448700(char param_1,byte param_2,char param_3);
void FUN_00448a80(uint param_1);
undefined FUN_00448b30(undefined param_1);
undefined FUN_00448d20(undefined param_1);
uint FUN_00448f90(undefined4 param_1);
void FUN_004491c0(void);
void FUN_004491d0(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,int param_6,int param_7);
void FUN_00449720(void);
undefined4 FUN_004497c0(void);
undefined4 FUN_00449860(void);
undefined4 FUN_00449900(undefined4 param_1,undefined4 param_2,int *param_3);
void FUN_00449c80(void);
bool FUN_00449cf0(void);
void FUN_00449d30(int param_1,float param_2,int *param_3);
void FUN_00449dd0(int *param_1,int param_2);
void FUN_00449e60(void);
void FUN_0044a320(undefined4 param_1,int param_2,undefined4 param_3,float param_4,int param_5);
void FUN_0044a650(undefined4 param_1,int param_2,undefined4 param_3,float param_4,int param_5);
void FUN_0044a9e0(void);
undefined4 FUN_0044aac0(void);
void FUN_0044abe0(int param_1);
void FUN_0044b390(int param_1);
undefined4 FUN_0044b3b0(void);
undefined4 FUN_0044b620(int param_1,int param_2);
undefined4 FUN_0044b6b0(int param_1);
undefined4 FUN_0044b8d0(undefined4 param_1,char *param_2,char *param_3);
int * FUN_0044ba00(undefined4 param_1,int *param_2);
int FUN_0044bae0(int *param_1,HDC param_2,int param_3,int param_4,int param_5,undefined *param_6);
undefined4 FUN_0044bc00(void);
undefined4 FUN_0044be60(undefined4 param_1,int **param_2,undefined4 param_3);
bool FUN_0044bf70(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0044c060(undefined2 *param_1);
undefined4 FUN_0044c110(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6);
undefined4 FUN_0044c3a0(undefined4 param_1,int *param_2,int *param_3);
undefined4 FUN_0044c540(int *param_1,int param_2,int param_3);
void FUN_0044c970(void);
uint FUN_0044c9c0(undefined4 param_1);
undefined4 FUN_0044ca40(undefined4 param_1,undefined4 param_2);
undefined4 FUN_0044cb10(undefined4 param_1,undefined4 param_2,int **param_3,int param_4);
uint __fastcall FUN_0044cd60(undefined4 param_1_00,undefined4 param_2,byte *param_1);
void FUN_0044cd90(int param_1);
void FUN_0044d060(void);
void FUN_0044d100(int param_1);
void FUN_0044d1b0(undefined4 *param_1,undefined4 *param_2,int *param_3);
undefined4 FUN_0044d210(void);
undefined4 FUN_0044d250(void);
void FUN_0044d300(void);
void FUN_0044d5b0(void);
undefined4 FUN_0044d600(int *param_1,undefined4 param_2);
void FUN_0044d6e0(void);
void FUN_0044d740(int param_1);
void FUN_0044d8e0(void);
undefined4 FUN_0044dc30(void);
undefined4 FUN_0044ddb0(void);
int FUN_0044dee0(void);
undefined4 FUN_0044df10(HWND param_1,uint param_2,uint param_3,LONG param_4);
undefined4 FUN_0044e530(HWND param_1,int param_2,short param_3);
void FUN_0044e910(HWND param_1);
void FUN_0044e9e0(HWND param_1,uint param_2);
void FUN_0044ea70(undefined4 param_1);
void FUN_0044eb90(int param_1,int param_2,HWND param_3);
undefined2 FUN_0044ec80(uint param_1,uint param_2,HWND param_3);
int FUN_0044ecf0(uint param_1);
int FUN_0044ee00(uint param_1);
undefined4 FUN_0044ef00(undefined2 param_1);
undefined4 FUN_0044f010(undefined2 param_1);
int FUN_0044f110(uint param_1);
undefined4 FUN_0044f210(void);
undefined4 FUN_0044f3b0(void);
undefined4 FUN_0044f550(void);
void FUN_0044f560(undefined param_1,char *param_2);
void FUN_00450740(void);
undefined4 FUN_004507a0(uint param_1);
void FUN_00450980(void);
undefined4 FUN_004509c0(int param_1);
undefined4 FUN_00450a60(int param_1,undefined4 param_2,int param_3);
undefined4 FUN_00450bd0(void);
undefined4 FUN_00450dd0(void);
undefined4 FUN_00450ec0(void);
undefined4 FUN_00450f20(int param_1,int param_2);
undefined4 FUN_00450f80(void);
void FUN_00451290(int param_1);
void FUN_00451350(int param_1);
int FUN_00451410(void);
undefined4 FUN_00451480(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void FUN_004514d0(void);
void FUN_00451780(char *param_1,char *param_2);
undefined4 FUN_004518f0(void);
uint FUN_00451a60(float *param_1,float *param_2,undefined4 *param_3);
void FUN_00451de0(int param_1,int param_2,int param_3,int param_4,int *param_5);
undefined4 FUN_00452000(undefined4 param_1);
void FUN_00452160(uint param_1,int param_2,int param_3,int param_4,int *param_5);
undefined4 FUN_00452360(float *param_1,float *param_2);
undefined4 * FUN_004523e0(undefined4 *param_1,float **param_2);
void FUN_00452470(void);
undefined4 FUN_00452770(int param_1);
undefined4 FUN_00452810(float *param_1,float *param_2,undefined4 param_3,float *param_4);
undefined4 FUN_00452900(void);
void FUN_00452ca0(void);
void FUN_00453010(int param_1);
void thunk_FUN_004533b0(void);
uint FUN_00453070(int param_1,int param_2,int param_3,int param_4);
uint FUN_004531c0(int param_1);
void FUN_00453260(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,float param_8);
void FUN_004532f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5);
undefined4 FUN_00453350(float param_1,float param_2,float param_3);
void FUN_004533b0(void);
void FUN_004533e0(uint *param_1);
undefined4 FUN_00453440(undefined2 *param_1,int param_2);
undefined4 FUN_00454a20(int param_1);
void FUN_00454e70(undefined4 param_1);
void FUN_00454f30(int param_1);
void FUN_004551b0(int param_1);
void FUN_00455230(int param_1);
void FUN_004554e0(int param_1,int param_2);
void FUN_004557d0(int param_1,int param_2);
void FUN_00455b50(int param_1,int param_2);
void FUN_00455c10(int param_1,int param_2);
void FUN_00455ca0(int param_1);
void FUN_00455e00(int param_1);
void FUN_00455fb0(void);
void FUN_004561c0(int param_1);
void FUN_004563f0(void);
void FUN_004565a0(void);
void FUN_00456660(void);
void FUN_00456740(int param_1,int param_2);
undefined4 FUN_00456880(undefined4 param_1,short param_2,int param_3);
int FUN_00456e70(void);
void FUN_00456ea0(LPCSTR param_1);
void FUN_00456f40(int param_1);
void FUN_00456f80(int param_1);
void FUN_00457050(int param_1);
void FUN_00457120(int param_1);
void FUN_00457150(int param_1);
void FUN_004571c0(int param_1);
void FUN_00457350(int param_1);
void FUN_004573a0(int param_1);
void FUN_00457570(int param_1);
void FUN_00457620(void);
void FUN_00457650(void);
int FUN_00457730(undefined4 param_1,uint param_2,undefined4 param_3);
void FUN_00457770(void);
undefined4 FUN_00457850(float param_1,float param_2,float param_3,float *param_4,float *param_5,float *param_6);
float10 FUN_00457a20(float param_1,float param_2,float param_3);
undefined4 FUN_00457ac0(float *param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6);
undefined4 FUN_00457ba0(ushort *param_1,int param_2,int param_3,int param_4);
undefined4 FUN_00457d50(uint param_1,int **param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6,int *param_7);
undefined4 FUN_00458360(void);
undefined4 FUN_00458470(uint param_1);
undefined4 FUN_00458980(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int **param_6,int **param_7,int param_8);
void FUN_00458d80(void);
undefined4 FUN_00458ea0(void);
undefined4 FUN_004593d0(void);
void FUN_00459a20(ushort *param_1,ushort param_2,uint param_3,char param_4,int param_5);
void FUN_00459cc0(undefined2 param_1,byte param_2);
undefined4 FUN_00459d30(byte param_1,int **param_2,int *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6,int *param_7);
undefined4 FUN_0045a100(char *param_1,int **param_2,int *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6,int *param_7);
undefined4 FUN_0045a900(int *param_1,int *param_2);
undefined2 *FUN_0045a9e0(undefined2 *param_1,uint param_2,uint param_3,ushort param_4,ushort param_5);
undefined4 FUN_0045aaa0(int *param_1,int param_2,uint param_3,uint param_4);
undefined4 FUN_0045ab40(void);
void * FUN_0045ac80(uint param_1,uint param_2,uint param_3,undefined4 param_4);
void FUN_0045ad90(undefined4 param_1,undefined *param_2);
ushort FUN_0045ae70(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4);
undefined2 FUN_0045b0d0(short param_1,char param_2);
undefined4 FUN_0045b160(short param_1,char param_2);
undefined4 FUN_0045b1f0(short param_1,char param_2);
void FUN_0045b280(int *param_1);
void FUN_0045b360(int *param_1);
void FUN_0045b3d0(int *param_1);
undefined4 FUN_0045b630(uint param_1,ushort *param_2);
void FUN_0045bb90(int param_1);
void FUN_0045c0d0(void);
void FUN_0045c450(void);
void FUN_0045c4e0(void);
undefined4 FUN_0045c730(int param_1);
int FUN_0045cad0(int *param_1,int param_2,int param_3);
void FUN_0045cb80(undefined4 param_1);
undefined4 FUN_0045cbc0(int *param_1,float param_2,float param_3);
undefined4 FUN_0045cc90(int *param_1,int param_2);
undefined4 FUN_0045cdc0(int *param_1,int param_2,float param_3,float param_4);
undefined4 FUN_0045ceb0(float param_1,float param_2);
void FUN_0045cf80(int param_1);
void FUN_0045d1b0(void);
int FUN_0045d1d0(char *param_1,undefined4 param_2);
void FUN_0045d280(int param_1);
void FUN_0045d2e0(void);
void FUN_0045d300(int param_1);
void FUN_0045d380(int param_1);
void FUN_0045d3a0(int param_1);
void FUN_0045d4c0(undefined2 *param_1);
void FUN_0045d610(int param_1);
void FUN_0045d730(undefined4 param_1);
void FUN_0045d760(int param_1);
void FUN_0045dc90(int param_1);
void FUN_0045df00(int param_1);
void FUN_0045e1b0(int param_1);
void FUN_0045e5d0(int param_1);
void FUN_0045e660(int param_1);
void FUN_0045e6a0(int param_1);
void FUN_0045e700(void);
void FUN_0045e720(uint param_1);
void FUN_0045e950(int param_1);
void FUN_0045e9c0(void);
float10 FUN_0045e9e0(void);
void FUN_0045ea10(void);
float10 FUN_0045ea60(void);
float10 FUN_0045ea80(void);
float * FUN_0045eab0(float *param_1);
void FUN_0045eb50(float *param_1,float *param_2,float *param_3);
float10 FUN_0045eba0(float *param_1,float *param_2);
void FUN_0045ebd0(float *param_1,float *param_2,float *param_3);
void FUN_0045ec00(float *param_1,float *param_2,float param_3);
void FUN_0045ec30(float *param_1,float *param_2,float *param_3);
float10 FUN_0045ec60(float param_1);
void FUN_0045ec80(float *param_1,float *param_2,float *param_3);
void FUN_0045ecb0(float *param_1,float *param_2,float *param_3);
void FUN_0045ef80(float *param_1,float *param_2,float *param_3);
void FUN_0045f140(undefined4 *param_1,undefined4 *param_2);
void FUN_0045f1b0(undefined4 *param_1,float *param_2,float *param_3);
void FUN_0045f2b0(float *param_1,float param_2,float *param_3,float *param_4,float *param_5,float *param_6);
void FUN_0045f420(float *param_1,float *param_2,float *param_3);
void FUN_0045f520(float *param_1,float *param_2,float *param_3);
void FUN_0045f620(float *param_1,float *param_2);
void FUN_0045f6b0(float *param_1,float *param_2,float *param_3);
float * FUN_0045f760(float *param_1,float *param_2,float *param_3);
void FUN_0045f830(float *param_1,float *param_2,float *param_3);
void FUN_0045f8b0(float *param_1,float *param_2,float *param_3);
void FUN_0045f950(float *param_1,float *param_2,float *param_3);
void FUN_0045f990(int param_1,undefined4 *param_2);
void FUN_0045f9b0(undefined4 *param_1,undefined4 *param_2);
void FUN_0045f9d0(int param_1,undefined4 *param_2);
void FUN_0045f9f0(int param_1,float param_2);
undefined4 FUN_0045fa30(undefined4 *param_1,undefined4 *param_2,float param_3);
float10 FUN_0045fc00(float param_1);
float10 FUN_0045fc20(float *param_1,float *param_2);
void FUN_0045fc50(float *param_1,float param_2,float *param_3);
void FUN_0045fc80(int param_1);
void FUN_0045fcd0(float *param_1,float *param_2);
undefined2 FUN_0045fe00(void);
void FUN_0045fe30(void);
void FUN_0045fe60(void);
void FUN_0045ff60(void);
undefined FUN_00460710(int param_1);
undefined4 FUN_00460830(char *param_1);
undefined4 FUN_00460a30(uint param_1);
void FUN_00460c20(void);
void FUN_00460dd0(void);
void FUN_00460e20(void);
undefined4 FUN_00460e40(int param_1,int param_2,int param_3);
undefined4 FUN_00461220(uint param_1);
int FUN_00461410(undefined *param_1,float *param_2);
int FUN_004614a0(undefined *param_1,undefined4 *param_2);
int FUN_00461530(undefined4 param_1,char *param_2);
void FUN_004615c0(float *param_1,float param_2,float param_3,float param_4,float param_5);
void FUN_00461700(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7);
void FUN_00461850(undefined4 *param_1);
void FUN_00461930(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 *param_4,double param_5,undefined4 param_6,undefined4 param_7);
void FUN_00461b20(void);
void FUN_00461d40(float *param_1);
undefined4 FUN_00461ea0(int param_1,int param_2,int param_3,undefined4 *param_4);
void FUN_004623a0(int param_1,int param_2);
void FUN_00462410(int param_1,int param_2,undefined4 *param_3,undefined4 param_4);
void FUN_00462520(int param_1,char *param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_004625e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00462750(void);
undefined4 FUN_004627e0(void);
void FUN_00462860(void);
void FUN_00462a10(int param_1);
undefined4 FUN_00462a60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00462ad0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00462b50(undefined4 param_1);
undefined4 FUN_00462b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00462ba0(undefined4 param_1);
undefined4 FUN_00462c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_00462c50(void);
bool FUN_00462cf0(void);
undefined4 FUN_00462d00(undefined4 *param_1);
undefined4 FUN_00462d90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_00462dc0(void);
undefined4 FUN_00462e30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_00462e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00462e90(uint param_1);
void FUN_00462ed0(undefined4 param_1);
void FUN_00462ef0(undefined4 param_1);
void FUN_00462f10(void);
void FUN_00462f20(void);
uint FUN_00462f30(uint param_1,uint param_2);
uint FUN_00463070(uint param_1,uint param_2);
undefined2 * FUN_00463110(undefined4 param_1);
void FUN_00463170(uint param_1);
undefined4 FUN_00463200(void);
void FUN_004632d0(void);
undefined4 FUN_00463310(int param_1);
int FUN_00463450(void);
undefined4 FUN_00463550(void);
void FUN_00463670(void);
void FUN_004636d0(void);
bool FUN_004637a0(undefined4 param_1,void *param_2);
undefined4 FUN_004637d0(int **param_1);
void FUN_00463840(undefined4 param_1);
undefined4 FUN_004638b0(int **param_1);
void FUN_00463a50(void);
void FUN_00463a60(LPCSTR param_1);
void FUN_00463aa0(void);
undefined4 * FUN_00463d50(void);
void FUN_00465100(UINT param_1);
void FUN_00465170(UINT param_1);
void FUN_004651a0(int param_1,undefined4 param_2,uint param_3);
void FUN_00465240(int param_1,undefined4 param_2,uint param_3);
void FUN_004652b0(int param_1);
void FUN_004653c0(int param_1,int param_2,int param_3);
void FUN_004655e0(void);
int FUN_00465790(uint *param_1,byte param_2,float *param_3);
undefined4 FUN_00465a00(void);
int * FUN_00465a50(int *param_1,uint param_2);
void FUN_00465d40(void);
void FUN_00465e20(void);
void FUN_00465e30(int param_1,HANDLE *param_2,HANDLE param_3,int param_4,int param_5,int param_6);
void FUN_00465f80(int param_1,int param_2,char param_3,char param_4);
void FUN_00466130(char param_1);
void FUN_00466470(short *param_1,int param_2,char param_3);
undefined4 FUN_00466530(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_00466f40(void);
undefined4 FUN_00467080(int param_1,undefined2 *param_2);
undefined4 FUN_00467100(int *param_1,int *param_2);
int FUN_00467140(char *param_1);
void FUN_00467180(int param_1,char **param_2,int param_3,int param_4);
undefined4 FUN_00467210(undefined4 param_1,void *param_2);
void FUN_004672d0(LPSTR param_1,LPCWSTR param_2,int param_3);
void FUN_00467300(LPWSTR param_1,LPCSTR param_2,int param_3);
int FUN_00467320(int param_1,int param_2);
float10 FUN_00467340(double param_1,undefined4 param_2,undefined4 param_3);
void FUN_00467370(HDC param_1);
void FUN_00467440(void);
void FUN_00467470(LPCSTR param_1,BYTE *param_2,DWORD param_3);
void FUN_004674a0(LPCSTR param_1,BYTE *param_2,DWORD param_3);
void FUN_004674d0(LPCSTR param_1,LPBYTE param_2,LPDWORD param_3);
undefined4 FUN_00467500(void);
undefined4 FUN_00467700(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,HWND param_6);
undefined4 FUN_00467780(HWND param_1,int param_2,uint param_3,int param_4);
undefined4 FUN_00467980(HWND param_1,int param_2,uint param_3,int param_4);
undefined4 FUN_00467b30(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_00467b60(int param_1,undefined4 param_2,byte param_3,HWND param_4);
void FUN_00467c80(HWND param_1);
void FUN_00467d10(HWND param_1);
undefined4 FUN_00467db0(HWND param_1,undefined4 param_2,uint param_3,undefined4 *param_4);
undefined4 FUN_00468490(HWND param_1,undefined4 param_2,uint param_3,int param_4);
undefined4 FUN_00469480(HWND param_1);
LPARAM FUN_00469520(HWND param_1,void *param_2);
LRESULT FUN_004695d0(HWND param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_004696f0(HWND param_1);
void FUN_00469770(void);
void FUN_004697f0(HWND param_1,HWND param_2,ushort *param_3);
undefined4 FUN_00469a30(HWND param_1,int param_2,ushort param_3);
undefined2 * FUN_0046a720(uint param_1);
undefined4 FUN_0046a810(LRESULT param_1,HWND param_2);
undefined4 FUN_0046a900(int param_1);
undefined4 FUN_0046ac80(char *param_1,int param_2,int param_3,int param_4);
void FUN_0046b780(void);
void FUN_0046b7c0(void);
void FUN_0046b7e0(void);
void FUN_0046b800(void);
void FUN_0046b840(void);
void FUN_0046b8e0(void);
void FUN_0046b960(void);
void FUN_0046b990(void);
void FUN_0046b9b0(void);
void FUN_0046b9d0(void);
void FUN_0046b9f0(void);
void FUN_0046ba20(void);
void FUN_0046baa0(void);
void FUN_0046bb20(void);
void FUN_0046bb50(void);
void FUN_0046bc40(void);
void FUN_0046bc90(void);
void FUN_0046bcd0(void);
void FUN_0046bd10(void);
void FUN_0046bd50(void);
void FUN_0046bd90(void);
void FUN_0046bdd0(void);
void FUN_0046be10(void);
void FUN_0046be20(void);
void FUN_0046be70(undefined4 param_1);
undefined4 FUN_0046be90(undefined4 *param_1);
undefined4 FUN_0046bef0(int *param_1,int param_2);
undefined4 FUN_0046bf40(int *param_1,int param_2);
void FUN_0046bfc0(void);
undefined4 FUN_0046bff0(int param_1,int param_2);
undefined4 FUN_0046c230(int param_1);
undefined4 FUN_0046c280(int param_1,int param_2);
undefined4 FUN_0046c510(int param_1);
undefined4 FUN_0046c550(int param_1,int param_2);
undefined4 FUN_0046c5a0(int param_1,int param_2);
undefined4 FUN_0046c600(int param_1);
undefined4 FUN_0046c680(int param_1);
undefined4 FUN_0046c6c0(undefined4 *param_1);
undefined4 FUN_0046c830(undefined4 param_1,undefined4 param_2,undefined2 param_3);
undefined4 FUN_0046c870(void);
undefined4 FUN_0046c880(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined2 param_10);
undefined4 FUN_0046c910(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0046c9f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8);
undefined4 FUN_0046cb20(int param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7,uint param_8);
undefined4 FUN_0046cc80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,uint param_6);
undefined4 FUN_0046cdc0(undefined4 param_1);
undefined4 FUN_0046ce10(undefined2 param_1,undefined4 param_2,int param_3,undefined2 param_4);
undefined4 FUN_0046cf20(int param_1,undefined4 param_2);
undefined4 FUN_0046d020(int param_1,undefined4 param_2);
undefined4 FUN_0046d130(int param_1);
undefined4 FUN_0046d2a0(int param_1,int param_2,undefined4 *param_3,float param_4,float param_5);
undefined4 FUN_0046d420(int param_1,float param_2,float param_3,undefined4 *param_4);
undefined4 FUN_0046d4e0(void);
undefined4 FUN_0046d540(void);
void FUN_0046d6f0(void);
void FUN_0046d760(void);
void FUN_0046d770(int param_1,undefined4 param_2);
void FUN_0046d7e0(int param_1);
undefined4 FUN_0046da60(HINSTANCE param_1);
void FUN_0046dd30(void);
void FUN_0046dd90(void);
void FUN_0046ddf0(void);
undefined4 FUN_0046de70(void);
void FUN_0046de90(void);
void FUN_0046deb0(void);
bool CreateMainWindowFunc(HINSTANCE param_1);
undefined4 FUN_0046dfc0(LPCSTR param_1,DWORD param_2);
undefined FUN_0046e020(void);
char LoadMusicFileFunc(void);
undefined4 FUN_0046e450(void);
undefined4 FUN_0046e850(void);
undefined4 FUN_0046e970(undefined4 param_1,undefined4 param_2,int **param_3);
undefined4 FUN_0046ea90(void);
undefined4 FUN_0046eae0(void);
undefined4 FUN_0046eb50(HWND param_1,int param_2,undefined2 param_3);
void FUN_0046ef10(HWND *param_1);
undefined4 FUN_0046ef50(HWND param_1,int param_2,short param_3);
undefined4 FUN_0046f660(HWND param_1,int param_2,short param_3);
undefined4 FUN_0046f820(void);
undefined4 FUN_0046f980(void);
LRESULT FUN_0046fa40(HWND param_1,uint param_2,uint param_3,LPARAM param_4);
void FUN_004707c0(void);
void FUN_00470800(void);
void FUN_00470820(int param_1);
void FUN_00470960(void);
void FUN_00470970(LPCSTR param_1);
void FUN_00470a20(void);
void FUN_00470a40(void);
void FUN_00470b60(void);
void FUN_00470d40(void);
LRESULT FUN_00471380(int param_1,WPARAM param_2,LPARAM param_3);
undefined4 FUN_004713d0(void);
undefined4 FUN_00471510(int param_1);
undefined4 FUN_00471660(void);
undefined4 FUN_004717f0(HWND param_1,int param_2,ushort param_3);
void FUN_00471ae0(undefined4 param_1,int param_2);
void FUN_00472320(int param_1,int param_2,int param_3);
void FUN_00472480(float *param_1,int param_2,int param_3,float param_4);
void FUN_004725c0(int param_1,int param_2,float *param_3);
void FUN_00472830(int param_1);
void FUN_00472bb0(int param_1,int param_2,int param_3,int param_4);
void FUN_00472ec0(int param_1,ushort param_2,uint param_3,int param_4);
void FUN_004731a0(void);
void FUN_00473620(void);
void FUN_00473650(void);
undefined4 FUN_00473760(void);
int FUN_00473ca0(float param_1,int param_2,int param_3,float param_4);
void FUN_004740d0(void);
int FUN_004740f0(int param_1,undefined4 param_2,undefined4 *param_3);
void FUN_004747f0(void);
void ** FUN_00474810(uint param_1);
void FUN_00474980(int *param_1,int param_2);
void FUN_004749b0(uint *param_1,undefined4 param_2);
undefined4 FUN_00474a30(undefined4 param_1);
undefined4 FUN_00474a60(void);
int FUN_00474bd0(undefined2 param_1,undefined4 *param_2,undefined param_3);
undefined4 FUN_00474d40(int param_1);
void FUN_00474db0(int param_1,byte param_2);
undefined4 FUN_00474f20(undefined2 *param_1);
void FUN_00474fb0(void);
void FUN_00474ff0(void);
void FUN_00475150(void);
void FUN_00475230(int param_1);
void FUN_00475290(undefined2 *param_1);
uint FUN_00475400(void);
void FUN_00475460(int param_1);
void FUN_00475490(undefined4 param_1,undefined4 param_2);
int FUN_004754d0(void);
void FUN_00475690(void);
void FUN_004756c0(void);
void FUN_00475860(int *param_1);
void FUN_004759a0(undefined4 *param_1);
void FUN_00475a90(void);
void FUN_00475af0(void);
void FUN_00475b10(void);
undefined * FUN_00475bb0(void);
void FUN_00475bf0(undefined4 *param_1,float param_2,int param_3,undefined param_4);
void FUN_00475d60(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_00475da0(int param_1);
void FUN_00475dd0(int *param_1);
void FUN_00475e50(void);
void FUN_00475ec0(void);
void FUN_00475fb0(void);
void FUN_00476070(int param_1,int param_2);
void FUN_00476110(undefined4 **param_1);
void FUN_00476350(void);
void FUN_00476380(void);
int FUN_00476410(int param_1);
uint FUN_00476480(int param_1);
void FUN_00476500(uint *param_1,uint param_2);
void FUN_00476630(int param_1);
undefined4 FUN_00476740(int param_1);
void FUN_00476780(void);
void FUN_004767a0(void);
void FUN_00476850(int param_1);
void FUN_004768e0(void);
void FUN_004769c0(void);
undefined4 FUN_00476a20(void);
undefined4 FUN_00476b80(uint param_1);
void FUN_00476e10(undefined4 *param_1,int param_2,int param_3,int param_4);
void FUN_00477080(float *param_1,int param_2);
void FUN_004771e0(int param_1);
void FUN_004772f0(undefined4 *param_1);
void FUN_00477820(int param_1,int param_2);
void FUN_00477b00(int param_1);
void FUN_00477c20(uint param_1);
void FUN_00477cd0(uint param_1);
void FUN_00477d80(uint param_1);
undefined4 FUN_00477e20(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,short *param_5,undefined4 *param_6);
void FUN_004780b0(int param_1);
void FUN_00478200(int param_1);
void FUN_004783e0(uint param_1);
void FUN_00478480(int param_1,int param_2);
void FUN_00478780(int param_1,int param_2);
void FUN_00478a90(int param_1);
void FUN_00478d40(void);
void FUN_00478fb0(int param_1);
void FUN_00479070(undefined4 param_1,undefined4 param_2);
void FUN_004790d0(void);
void FUN_00479210(void);
void FUN_004792a0(int param_1);
void FUN_0047a0c0(int *param_1,undefined4 param_2,int param_3);
void FUN_0047a1c0(void);
void FUN_0047a250(int param_1,int param_2);
void FUN_0047a890(int param_1,int param_2);
void FUN_0047ae90(int param_1,char *param_2);
void FUN_0047b3e0(int param_1,int param_2,float *param_3,float param_4);
void FUN_0047b620(undefined4 *******param_1,int param_2);
void FUN_0047ce20(void);
void FUN_0047ced0(void);
undefined4 FUN_0047cfd0(int param_1);
void FUN_0047d120(int param_1);
void FUN_0047d1f0(int param_1,byte param_2,undefined4 param_3);
void FUN_0047d230(undefined4 param_1,byte param_2,undefined4 param_3);
void FUN_0047d270(int param_1,int param_2,undefined4 param_3,int param_4,int param_5);
void FUN_0047d510(int param_1,int param_2);
undefined4 FUN_0047d5c0(undefined4 param_1,int param_2);
undefined4 FUN_0047d660(undefined4 param_1);
undefined4 FUN_0047d6c0(undefined4 param_1);
undefined4 FUN_0047d720(undefined4 param_1);
float10 FUN_0047d780(float param_1);
float10 FUN_0047d7b0(float param_1);
float10 FUN_0047d7e0(float param_1);
float10 FUN_0047d810(float param_1);
float10 FUN_0047d830(float param_1);
void FUN_0047d860(float *param_1,float *param_2,float param_3);
void FUN_0047d970(float *param_1,float *param_2,float param_3);
void FUN_0047da80(float *param_1,float *param_2);
float FUN_0047db60(float param_1,int param_2,undefined4 *param_3,undefined4 param_4);
float10 FUN_0047df80(float param_1,float *param_2,float *param_3);
void FUN_0047e000(float *param_1,float param_2,float *param_3,float *param_4);
float10 FUN_0047e0d0(float param_1,float *param_2,float *param_3);
void FUN_0047e150(int param_1,int param_2);
void FUN_0047e450(int param_1,int param_2);
void FUN_0047e640(int param_1,int param_2);
void FUN_0047e850(float *param_1,undefined4 ***param_2,int param_3,uint param_4);
void FUN_0047eb70(int param_1,int param_2);
void FUN_0047ecf0(float param_1);
void FUN_0047ef80(float param_1,float param_2);
undefined4 FUN_0047f330(int param_1);
void FUN_0047f360(int *param_1,int param_2,int param_3);
undefined4 FUN_0047f450(void);
void FUN_0047f480(void);
undefined4 FUN_0047f4d0(void);
undefined4 FUN_0047f560(void);
void FUN_0047f650(void);
undefined4 FUN_0047f6a0(void);
undefined4 FUN_0047f860(void);
uint FUN_0047f870(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0047fa00(void);
void FUN_00480010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void FUN_004800e0(void);
undefined4 FUN_00480850(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,undefined4 param_6,int param_7);
undefined8 FUN_00480990(float param_1,float param_2,float param_3,float param_4,float param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined4 FUN_00480bc0(float *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_00480e20(void);
void FUN_00481120(float param_1,float param_2,float param_3,int param_4,float *param_5);
void FUN_004811b0(void);
undefined4 FUN_004811d0(void);
undefined4 FUN_004811e0(void);
undefined4 FUN_00482470(undefined4 param_1,undefined4 param_2,int *param_3);
undefined4 FUN_00482800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_00482880(undefined4 param_1,undefined4 param_2,int *param_3);
void FUN_00483230(void);
void FUN_00483290(void);
void FUN_004832b0(int *param_1,int param_2);
undefined4 FUN_00483320(int param_1);
void FUN_00483340(int param_1,undefined4 param_2);
byte FUN_00483370(float param_1,float param_2,float param_3,int param_4);
void FUN_00483470(float *param_1,float param_2);
void FUN_00483730(float *param_1,float *param_2,float *param_3);
void FUN_00483790(int param_1,undefined4 param_2);
void FUN_004837f0(float *param_1,float *param_2,float *param_3);
undefined4 FUN_004838e0(int param_1,undefined4 param_2,float param_3,float param_4);
float10 FUN_00483ac0(int param_1,float param_2,float param_3,float param_4);
float10 FUN_00483b60(float *param_1,float param_2,float param_3,float param_4);
void FUN_00483c00(float *param_1,float param_2,float param_3,float param_4);
uint FUN_00483cd0(undefined4 param_1,int *param_2,int **param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_00483db0(void);
void FUN_00484230(void);
undefined FUN_00484300(int *param_1,float *param_2);
undefined4 FUN_00484610(float param_1,float *param_2);
void FUN_004849a0(void);
int FUN_004855e0(int param_1,int param_2,int param_3,float *param_4);
bool CreateEventHandle(void);
undefined4 FUN_004858c0(void);
void FUN_004858f0(undefined4 param_1);
void FUN_00485920(void);
void FUN_00485990(undefined4 param_1,undefined4 param_2);
void FUN_004859e0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00485a30(int *param_1,int *param_2);
void FUN_00485a70(void);
void FUN_00485bf0(void);
void FUN_00485c30(float param_1,undefined4 param_2,float param_3);
void FUN_00485cf0(void);
undefined4 FUN_00485ea0(int param_1,float *param_2);
void FUN_004861c0(int param_1,undefined4 *param_2,undefined *param_3);
undefined4 FUN_004863f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 FUN_00486530(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_00486650(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_00486780(undefined4 param_1,undefined4 *param_2);
void FUN_004868a0(void);
undefined4 FUN_004868b0(int param_1);
undefined4 FUN_00486920(char *param_1,undefined4 param_2,int param_3,int param_4);
void FUN_004880b0(char *param_1,uint param_2);
void FUN_00488940(char *param_1,int param_2);
void FUN_00489680(int param_1);
void FUN_00489830(int param_1);
void FUN_00489960(char *param_1);
undefined4 FUN_00489a00(char *param_1);
void FUN_00489ab0(void);
undefined4 FUN_00489ae0(void);
void FUN_00489ee0(void);
undefined4 FUN_00489f30(int param_1);
undefined4 FUN_0048a1f0(void);
undefined4 FUN_0048a480(float ******param_1);
void FUN_0048a8f0(int *param_1);
undefined4 FUN_0048a940(float param_1,float param_2,float param_3,int param_4,float *param_5,undefined4 *param_6);
undefined4 FUN_0048aeb0(int param_1,float *param_2);
void FUN_0048af30(float *param_1,uint param_2);
void FUN_0048afc0(void);
undefined4 * FUN_0048b030(void);
undefined4 FUN_0048b070(undefined *param_1,int param_2);
void * FUN_0048b1f0(undefined4 param_1,int param_2,undefined4 param_3);
void FUN_0048b2a0(undefined4 param_1,undefined4 param_2);
bool FUN_0048b2f0(int param_1);
void FUN_0048b320(int param_1);
void FUN_0048b3b0(int param_1);
void FUN_0048b540(int param_1);
void FUN_0048b580(int param_1);
void FUN_0048b5d0(int param_1);
void FUN_0048b690(undefined4 param_1,undefined4 param_2);
void FUN_0048b6d0(void);
undefined4 FUN_0048b860(char *param_1);
undefined4 FUN_0048b930(uint param_1,undefined4 param_2);
void FUN_0048b9f0(void);
undefined4 FUN_0048ba60(void);
uint FUN_0048baf0(int *param_1,undefined4 param_2,int param_3,uint param_4);
undefined4 FUN_0048bbc0(int param_1,LPSTR param_2,size_t param_3);
undefined4 FUN_0048bcd0(int param_1,LONG param_2);
undefined4 FUN_0048bcf0(int param_1,int param_2);
undefined4 FUN_0048be30(uint param_1);
void FUN_0048c020(int param_1,int *param_2);
void FUN_0048c060(int param_1);
undefined4 FUN_0048c080(int param_1);
void FUN_0048c0d0(void);
undefined4 FUN_0048d5a0(undefined4 param_1);
bool FUN_0048da50(void);
undefined4 FUN_0048da70(void);
void FUN_0048daa0(undefined4 param_1);
void FUN_0048dbb0(void);
void FUN_0048dd70(int param_1);
undefined4 FUN_0048e210(undefined4 param_1,undefined4 param_2,int *param_3);
void FUN_0048ef50(void);
void FUN_0048efb0(void);
undefined4 * FUN_0048f000(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0048f1a0(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0048f340(int param_1);
undefined4 FUN_0048f360(int param_1);
undefined4 FUN_0048f380(int param_1,uint param_2);
uint FUN_0048f3a0(int param_1,ushort param_2);
undefined4 FUN_0048f4c0(int param_1,ushort param_2);
int FUN_0048f5a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0048f630(int param_1);
undefined4 FUN_0048f680(int param_1);
undefined4 FUN_0048f6c0(int param_1);
void FUN_0048f750(int param_1);
void FUN_0048fb90(int param_1);
void FUN_0048fcd0(int param_1);
void FUN_00490280(int param_1);
void FUN_00490380(int param_1);
void FUN_004903e0(int param_1);
float10 FUN_00490440(int param_1,int param_2);
void FUN_00490490(float *param_1,undefined4 param_2);
void FUN_00490590(undefined4 param_1,int param_2,float *param_3);
undefined4 FUN_00490640(void);
int FUN_004906c0(void);
void FUN_00490740(undefined4 *param_1,undefined4 *param_2);
void FUN_004907b0(int param_1,float *param_2);
void FUN_004908b0(undefined4 param_1);
bool FUN_004908d0(int param_1,int param_2,uint *param_3,uint param_4);
bool FUN_004909f0(int param_1,int param_2,uint *param_3,uint param_4);
void FUN_00490af0(char *param_1,undefined4 param_2);
void FUN_00490b20(void);
float10 FUN_00490b60(float *param_1,float *param_2);
void FUN_00490b90(float *param_1);
void FUN_00490be0(undefined4 param_1,undefined4 param_2);
float10 FUN_00490c30(float param_1);
void FUN_00490c40(float *param_1,float *param_2,float *param_3);
void FUN_00490d60(void);
void LoadIntroMovieFunc(void);
LRESULT FUN_00490f60(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
HWND FUN_00490fa0(void);
void FUN_00491160(HWND param_1);
void FUN_004911c0(void);
void FUN_004912b0(void);
void FUN_004913a0(void);
void FUN_00491610(HDC param_1,char *param_2,int param_3);
void FUN_00491670(void);
void FUN_00491910(void);
undefined2 *FUN_004919a0(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,int *param_6,uint *param_7);
short * FUN_00491bb0(uint param_1,byte *param_2,uint param_3,uint param_4);
void FUN_00491d80(HDC param_1);
uint FUN_00492070(undefined4 param_1,undefined4 param_2);
void FUN_00492100(short param_1,LPCSTR param_2,undefined param_3,undefined4 param_4,undefined param_5,undefined param_6,short *param_7,undefined4 param_8,undefined4 param_9);
void FUN_00492230(void);
void FUN_00492270(void);
void FUN_004922a0(int param_1,undefined4 param_2);
void FUN_00492300(void);
void FUN_004923e0(void);
void FUN_00492550(int *param_1);
void FUN_00492630(int *param_1);
void FUN_00492660(short param_1,undefined param_2);
void FUN_004926c0(short param_1,undefined2 param_2);
void FUN_00492720(short param_1);
void FUN_00492780(void);
void FUN_004927e0(void);
undefined4 FUN_00492840(int param_1);
void FUN_00492ba0(int param_1);
void FUN_00492d70(void);
void FUN_00492ec0(undefined2 param_1,undefined2 param_2,undefined param_3,undefined2 param_4,undefined2 param_5,int param_6);
void FUN_00492f30(uint param_1);
void FUN_004931d0(byte param_1);
void FUN_00493280(void);
int * FUN_004932c0(LPCSTR param_1,undefined4 param_2,HDC param_3,uint param_4,COLORREF param_5,UINT param_6);
void FUN_00493450(void);
void FUN_00493470(void);
void FUN_004934c0(undefined2 param_1,undefined4 param_2);
void FUN_00493530(void);
void FUN_00493630(undefined2 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_00493800(void);
void FUN_00493dd0(void);
void FUN_00493e40(void);
void FUN_00493f90(void);
void FUN_00494090(void);
void FUN_004942a0(float param_1);
void FUN_00494670(char *param_1,char *param_2,float *param_3,int param_4,int param_5,int param_6);
void FUN_00494da0(void);
void FUN_00494f70(void);
void FUN_00494fc0(void);
void FUN_00495390(int param_1);
bool FUN_004955a0(void);
int FUN_004955e0(undefined4 *param_1);
undefined4 FUN_004956e0(void);
int FUN_004957e0(char *param_1,char param_2);
undefined4 FUN_00495860(uint param_1);
undefined4 FUN_00495d60(undefined4 param_1,int param_2);
undefined4 FUN_00496280(void);
undefined4 FUN_00496310(void);
undefined4 FUN_00496450(void);
undefined4 FUN_00496500(void);
undefined4 FUN_00496680(void);
undefined4 FUN_00496a40(void);
undefined4 FUN_00496b80(void);
undefined4 FUN_00496d90(void);
undefined4 FUN_00496ed0(void);
undefined4 FUN_00497320(void);
int FUN_00497420(void);
undefined4 FUN_00497630(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6);
float10 FUN_004979d0(int param_1,undefined4 param_2,undefined4 param_3);
float10 FUN_00497ac0(float param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00497bf0(void);
undefined4 FUN_00497cc0(int param_1);
undefined4 FUN_00498670(void);
uint FUN_00498680(void);
undefined4 FUN_004988b0(void);
undefined4 FUN_00498da0(int param_1);
undefined4 FUN_00498e20(void);
undefined4 FUN_00498f60(void);
uint FUN_00499090(void);
undefined4 FUN_00499160(void);
void FUN_00499240(void);
undefined4 FUN_00499310(void);
undefined4 FUN_00499540(void);
undefined4 FUN_00499740(void);
undefined4 FUN_00499760(void);
undefined4 FUN_004999d0(void);
undefined4 FUN_00499c10(void);
undefined4 FUN_00499f50(void);
undefined4 FUN_0049a1b0(void);
undefined4 FUN_0049a200(void);
undefined4 FUN_0049a300(void);
undefined4 FUN_0049a420(void);
undefined4 FUN_0049a660(void);
undefined4 FUN_0049a6b0(void);
undefined4 FUN_0049a6e0(void);
undefined4 FUN_0049a930(void);
undefined4 FUN_0049ab80(void);
undefined4 FUN_0049ae80(void);
undefined4 FUN_0049b1a0(void);
undefined4 FUN_0049b3d0(void);
undefined4 FUN_0049b660(void);
undefined4 FUN_0049b8c0(void);
undefined4 FUN_0049b940(void);
undefined4 FUN_0049b990(void);
undefined4 FUN_0049bbb0(void);
undefined4 FUN_0049bbc0(int param_1);
undefined4 FUN_0049bc10(int param_1);
undefined4 FUN_0049bc50(int param_1);
undefined4 FUN_0049bcb0(int param_1);
undefined4 FUN_0049bcf0(int *param_1);
undefined4 FUN_0049bd30(int *param_1);
undefined4 FUN_0049bd70(int param_1,uint param_2);
undefined4 FUN_0049be70(int param_1);
undefined4 FUN_0049c010(int param_1);
undefined4 FUN_0049c110(int param_1);
undefined4 FUN_0049c1d0(int param_1);
undefined4 FUN_0049c220(short param_1,short param_2,short param_3);
undefined4 FUN_0049c2d0(void);
undefined4 FUN_0049c5d0(void);
undefined4 FUN_0049c630(float param_1);
undefined4 FUN_0049c8e0(int param_1);
undefined4 FUN_0049c920(int param_1);
undefined4 FUN_0049caf0(int param_1);
undefined4 FUN_0049cbf0(void);
undefined4 FUN_0049cca0(undefined4 param_1,int param_2,uint param_3);
undefined4 FUN_0049cd10(void);
undefined4 FUN_0049cf00(void);
undefined4 FUN_0049d3c0(void);
void FUN_0049d4b0(void);
undefined4 FUN_0049d5d0(undefined4 *param_1);
undefined4 FUN_0049d8d0(float *param_1);
void FUN_0049dbd0(int param_1);
void FUN_0049dd40(int param_1);
undefined4 FUN_0049deb0(void);
void FUN_0049df90(int param_1);
undefined4 FUN_0049e020(void);
void FUN_0049e170(void);
undefined4 FUN_0049e1e0(void);
undefined4 FUN_0049e2d0(int param_1);
undefined4 FUN_0049e3f0(int param_1,float *param_2);
void FUN_0049e7d0(void);
void FUN_0049e940(int param_1);
float10 FUN_0049e9c0(float param_1,float param_2);
undefined4 FUN_0049ea00(void);
undefined4 FUN_0049ec60(void);
float10 FUN_0049ee00(float param_1,int param_2);
undefined4 FUN_0049ef50(void);
void FUN_0049f140(int param_1);
void FUN_0049f260(void);
undefined4 FUN_0049f2d0(void);
void FUN_0049f4a0(int param_1);
undefined4 FUN_0049f550(void);
void FUN_0049f610(int param_1);
bool FUN_0049f6a0(void);
undefined4 FUN_0049f6f0(uint param_1);
undefined4 FUN_0049f750(int param_1);
undefined4 FUN_0049f7f0(void);
undefined4 FUN_0049f8f0(void);
void FUN_0049fa20(int param_1);
undefined4 FUN_0049fc10(void);
void FUN_0049fce0(float **param_1);
undefined4 FUN_004a00f0(int param_1,int param_2,byte param_3,int param_4);
void FUN_004a0390(int param_1);
undefined4 FUN_004a03d0(void);
void FUN_004a0510(void);
undefined4 FUN_004a0560(void);
undefined4 FUN_004a0620(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_004a06c0(undefined4 param_1,undefined4 *param_2,float *param_3);
undefined4 FUN_004a0760(void);
void FUN_004a0850(int param_1);
undefined4 FUN_004a08a0(int *param_1);
undefined4 FUN_004a0a20(void);
void FUN_004a0a50(int param_1);
void FUN_004a0b10(int param_1);
undefined4 FUN_004a0b30(int param_1);
undefined4 FUN_004a0b80(int param_1);
undefined4 FUN_004a0bd0(int param_1);
undefined4 FUN_004a0d70(int param_1,float param_2);
undefined4 FUN_004a0ef0(void);
void FUN_004a1410(void);
void FUN_004a1510(void);
void FUN_004a1630(uint param_1);
void FUN_004a1770(void);
undefined4 FUN_004a1890(void);
void FUN_004a2100(int param_1);
void FUN_004a2200(void);
bool FUN_004a2320(void);
bool FUN_004a2350(void);
undefined4 FUN_004a2380(void);
void FUN_004a2440(int *param_1);
undefined4 FUN_004a24d0(int param_1,int param_2);
undefined4 FUN_004a2660(void);
undefined4 FUN_004a26c0(void);
undefined4 FUN_004a2710(undefined4 param_1,undefined4 *param_2,float *param_3);
undefined4 FUN_004a2990(void);
undefined4 FUN_004a29a0(void);
undefined4 FUN_004a29c0(void);
undefined4 FUN_004a2e60(void);
undefined4 FUN_004a32f0(void);
undefined4 FUN_004a3750(void);
undefined4 FUN_004a39d0(void);
undefined4 FUN_004a4200(int *param_1,undefined4 param_2,int param_3);
undefined4 FUN_004a4320(undefined4 param_1,int **param_2,int param_3);
undefined4 FUN_004a4540(int *param_1,int *param_2,int param_3,undefined2 *param_4);
undefined4 FUN_004a4840(void);
undefined4 FUN_004a49f0(void);
void FUN_004a4a00(void);
undefined4 FUN_004a4bc0(float param_1,int param_2,int param_3,byte param_4);
void FUN_004a5300(int param_1);
undefined4 FUN_004a5340(int param_1,float param_2,float param_3,float **param_4,undefined4 *param_5,int *param_6,int *param_7);
undefined4 FUN_004a5540(float param_1,int param_2,undefined4 *param_3,float param_4,float param_5,float param_6,void **param_7,void **param_8,int *param_9,int *param_10);
undefined4 FUN_004a59d0(undefined2 param_1,int param_2);
undefined4 FUN_004a5a00(void);
undefined4 FUN_004a5a20(void);
undefined4 FUN_004a6400(void);
void FUN_004a6760(int param_1);
void FUN_004a6a00(int param_1,byte param_2,int param_3);
undefined4 FUN_004a6b40(float param_1,int *param_2);
void FUN_004a6c30(void);
undefined4 FUN_004a6c50(int *param_1,int param_2,int param_3,int param_4);
void FUN_004a6d40(void);
int * FUN_004a8885(int param_1,int param_2,float param_3);
uint FUN_004a8c65(int param_1,ushort param_2,int param_3);
undefined4 FUN_004a8d85(int param_1);
uint FUN_004a98c5(int param_1,ushort param_2,int param_3);
undefined4 FUN_004a9985(int param_1);
undefined4 FUN_004a9a15(void);
undefined FUN_004a9ad5(void);
int FUN_004a9af0(uint param_1,uint param_2);
undefined4 FUN_004a9bb0(uint param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
undefined4 FUN_004aa830(int param_1,int param_2);
void * FUN_004aa8d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void FUN_004aab50(int param_1,int param_2);
undefined4 FUN_004aae70(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6,float *param_7);
undefined4 FUN_004ab080(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6,float *param_7);
undefined4 FUN_004ab290(float *param_1,float *param_2,float *param_3);
undefined4 FUN_004ab620(float *param_1,float *param_2,float *param_3);
undefined4 FUN_004ab9a0(undefined4 param_1,float param_2,float param_3);
void FUN_004aba00(void);
void FUN_004abae0(void);
undefined4 FUN_004abe10(void);
undefined4 FUN_004abf70(int param_1,undefined4 param_2);
undefined4 FUN_004abfc0(int **param_1,undefined4 param_2);
undefined4 FUN_004ac0c0(int param_1,int param_2);
undefined4 FUN_004ac330(int *param_1,int param_2,int param_3);
undefined4 FUN_004ac520(undefined4 param_1,undefined4 param_2);
undefined4 FUN_004ac5b0(uint param_1,undefined4 *param_2,void **param_3,void **param_4);
undefined4 FUN_004ac6e0(uint param_1,void **param_2);
undefined4 FUN_004ac7c0(undefined4 param_1,void **param_2);
undefined4 FUN_004ac8b0(undefined4 param_1,size_t *param_2,void **param_3,void **param_4);
MMRESULT FUN_004ac990(LPSTR param_1,HMMIO *param_2,HGLOBAL *param_3,LPMMCKINFO param_4);
void FUN_004acb30(HMMIO *param_1,LPMMCKINFO param_2,MMCKINFO *param_3);
uint FUN_004acb70(HMMIO param_1,uint param_2,int param_3,int param_4,uint *param_5,int param_6);
undefined4 FUN_004accb0(HMMIO *param_1,HGLOBAL *param_2);
undefined4 FUN_004accf0(HMMIO *param_1,LPMMCKINFO param_2,MMCKINFO *param_3,undefined4 *param_4);
undefined4 FUN_004acdb0(HMMIO param_1,HMMIO param_2,int param_3);
int FUN_004ace90(HGLOBAL param_1,undefined4 *param_2,HGLOBAL *param_3,HMMIO param_4);
undefined4 FUN_004acf80(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 FUN_004acfc0(code **param_1);
void CreateThreadFunc(LPSECURITY_ATTRIBUTES param_1,SIZE_T param_2,LPTHREAD_START_ROUTINE param_3,LPVOID param_4,DWORD param_5,LPDWORD param_6);
void FUN_004ad120(code *param_1,undefined4 param_2);
void FUN_004ad150(short *param_1,undefined4 param_2,size_t param_3);
void FUN_004ad1d0(short *param_1,undefined4 *param_2);
void FUN_004ad250(short *param_1);
void DirectDrawCreate(void);
void DirectDrawEnumerateA(void);
BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1);
DWORD CommDlgExtendedError(void);
BOOL GetSaveFileNameA(LPOPENFILENAMEA param_1);
void __cdecl __fpmath(int param_1);
void FUN_004ad2c0(void);
void FUN_004ad2d0(void);
void FUN_004ad310(void);
longlong __ftol(void);
int __cdecl FID_conflict:_fwprintf(FILE *_File,wchar_t *_Format,...);
float10 FUN_004ad3c0(undefined4 param_1,undefined4 param_2);
void FUN_004ad4b0(LPVOID param_1);
uint FUN_004ad534(int param_1,uint param_2);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
void FUN_004ad640(undefined4 param_1);
int FUN_004ad660(uint param_1,int param_2);
LPVOID FUN_004ad6b0(int param_1);
int __cdecl _strcmp(char *_Str1,char *_Str2);
undefined4 * FUN_004ad7a0(undefined4 *param_1,undefined4 *param_2,uint param_3);
int FUN_004adae0(byte *param_1);
void FUN_004adb80(undefined4 param_1);
float10 FUN_004adb90(byte *param_1);
char * __cdecl FID_conflict:__mbscpy(char *_Dest,char *_Source);
char * __cdecl FID_conflict:_strcat(char *_Dest,char *_Source);
undefined4 FUN_004adcf0(int param_1);
undefined4 FUN_004add30(int param_1);
undefined4 FUN_004adda0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_004adde0(undefined4 *param_1,uint param_2,uint param_3,int *param_4);
undefined4 FUN_004adf20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_004adf60(undefined4 param_1,undefined4 param_2);
size_t __cdecl _strlen(char *_Str);
void FID_conflict:__CIsin_default(void);
ushort FUN_004ae014(int param_1);
ushort start(int param_1);
void FID_conflict:__CIcos_default(void);
ushort FUN_004ae0c4(int param_1);
ushort start(int param_1);
void FUN_004ae160(void);
void FUN_004ae1a0(uint param_1,uint param_2,uint param_3,code *param_4);
void FUN_004ae350(uint param_1,uint param_2,int param_3,code *param_4);
void FUN_004ae3b0(undefined *param_1,undefined *param_2,int param_3);
undefined4 FUN_004ae3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_004ae420(undefined4 *param_1,uint param_2,uint param_3,int *param_4);
char * __cdecl _strstr(char *_Str,char *_SubStr);
undefined4 FUN_004ae5f0(int param_1,undefined4 param_2,int param_3);
void FUN_004ae630(uint param_1,char *param_2,uint param_3,int param_4);
undefined4 FUN_004ae6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_004ae6e0(int param_1,int param_2,int param_3);
uint FUN_004ae780(byte *param_1,byte *param_2);
uint FUN_004ae870(byte param_1,char *param_2);
undefined4 FUN_004ae940(LPCSTR param_1,int *param_2);
undefined4 FUN_004aec80(char *param_1);
int FUN_004aed00(int param_1);
undefined4 FUN_004aed10(uint param_1);
undefined4 FUN_004aed80(uint param_1);
undefined4 FUN_004aee10(uint param_1,undefined4 param_2,undefined4 param_3);
int FUN_004aee90(uint param_1,char *param_2,DWORD param_3);
undefined4 FUN_004af0c0(uint param_1,int param_2,DWORD param_3);
uint FUN_004af210(LPCSTR param_1,uint param_2,uint param_3,undefined4 param_4);
void FUN_004af5b0(int param_1);
void FUN_004af630(undefined4 param_1);
uint FUN_004af640(void);
void FUN_004af670(undefined4 *param_1);
undefined4 * FUN_004af7a0(undefined4 *param_1);
uint FUN_004af934(uint param_1,uint param_2);
float10 FUN_004af9f0(undefined4 param_1,undefined4 param_2,double *param_3);
int FUN_004afb50(void);
undefined4 FUN_004afbb0(undefined4 param_1,undefined4 param_2);
uint FUN_004afbf0(byte **param_1);
void FUN_004afc40(undefined4 param_1);
uint FUN_004afc64(uint param_1,uint param_2);
HANDLE FUN_004afd20(undefined4 param_1,SIZE_T param_2,undefined4 param_3);
undefined4 FUN_004afda0(LPVOID param_1);
void FUN_004afe50(void);
longlong __fastcall __allshl(byte param_1,int param_2);
undefined4 FUN_004afec0(LPCSTR param_1);
undefined4 FUN_004afef0(LPCSTR param_1);
undefined4 FUN_004aff90(undefined4 param_1);
void FUN_004affb0(void);
void FUN_004afff0(void);
void FUN_004b0010(void);
int __cdecl __isindst(tm *_Time);
bool FUN_004b0320(int *param_1);
void FUN_004b0590(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11);
undefined8 __fastcall __allshr(byte param_1,int param_2);
int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size);
void FUN_004b0810(void);
void FUN_004b0840(undefined4 param_1);
void __cdecl __exit(int _Code);
void FUN_004b0880(UINT param_1,int param_2,int param_3);
void FUN_004b0940(void);
void FUN_004b0950(void);
void FUN_004b0960(code **param_1,code **param_2);
int FUN_004b0980(int param_1);
uint FUN_004b0a10(uint param_1);
uint FUN_004b0b10(int param_1,uint param_2);
undefined4 FUN_004b0bb0(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_004b0be0(int param_1,undefined4 *param_2,uint param_3);
undefined4 FUN_004b0d10(uint param_1);
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);
undefined4 FUN_004b0e50(undefined *param_1,undefined4 param_2);
char * FUN_004b0ec0(char *param_1);
void FUN_004b0f80(void);
void __global_unwind2(PVOID param_1);
void __local_unwind2(int param_1,int param_2);
void FUN_004b1096(void);
void FUN_004b1175(int param_1);
void entry(void);
void __cdecl __amsg_exit(int param_1);
void FUN_004b1370(undefined4 param_1);
void __setdefaultprecision(void);
undefined4 FUN_004b13c0(void);
void FUN_004b1410(void);
void FUN_004b1440(char *param_1);
int FUN_004b1590(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
undefined * FUN_004b1610(undefined *param_1,int param_2,int param_3,int *param_4,char param_5);
int FUN_004b1710(undefined4 *param_1,int param_2,int param_3);
undefined * FUN_004b1780(undefined *param_1,uint param_2,int *param_3,char param_4);
void FUN_004b1840(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
void FUN_004b1970(char *param_1,int param_2);
void FUN_004b19a0(void);
void FUN_004b19d0(int param_1);
void LeaveCriticalSectionFunc(int param_1);
void FUN_004b1a70(uint param_1);
void FUN_004b1ab0(int param_1,int param_2);
void LeaveCriticalSection1Param(uint param_1);
void LeaveCriticalSectionFunc2Params(int param_1,int param_2);
undefined4 FUN_004b1b50(undefined4 *param_1);
void FUN_004b1c10(int param_1,undefined4 *param_2);
int FUN_004b1c50(undefined4 param_1,char *param_2,undefined4 *param_3);
void FUN_004b25e0(uint param_1,int *param_2,int *param_3);
void FUN_004b2630(undefined4 param_1,int param_2,undefined4 param_3,int *param_4);
void FUN_004b2670(char *param_1,int param_2,undefined4 param_3,int *param_4);
undefined4 FUN_004b26b0(int *param_1);
undefined8 FUN_004b26d0(int *param_1);
undefined4 FUN_004b26f0(undefined4 *param_1);
float10 FUN_004b2710(undefined4 param_1,undefined4 param_2,undefined4 param_3_00,undefined4 param_3);
float10 FUN_004b2760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6_00,undefined4 param_6);
void FUN_004b2820(uint *param_1,uint *param_2,byte param_3,uint param_4,uint *param_5,uint *param_6);
bool FUN_004b2b60(uint param_1,double *param_2,uint param_3);
float10 FUN_004b2e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8_00,undefined4 param_8);
void FUN_004b2f40(int param_1);
undefined * FUN_004b2f70(int param_1);
int FUN_004b2fa0(uint param_1);
float10 FUN_004b2fe0(undefined4 param_1,undefined4 param_2,short param_3);
undefined4 FUN_004b3020(int param_1,uint param_2);
float10 FUN_004b3080(uint param_1,uint param_2,int *param_3);
int FUN_004b3190(void);
int FUN_004b31a0(void);
int FUN_004b31c0(void);
void FUN_004b31f0(void);
undefined4 FUN_004b3250(void);
undefined ** FUN_004b3290(void);
void FUN_004b3400(undefined **param_1);
void FUN_004b3460(int param_1);
int FUN_004b3530(undefined *param_1,int **param_2,uint *param_3);
void FUN_004b3590(int param_1,int param_2,byte *param_3);
int * FUN_004b35f0(uint param_1);
int FUN_004b3830(int **param_1,int *param_2,int *param_3);
undefined4 FUN_004b39b0(int param_1,int **param_2,int **param_3,uint param_4);
void __fastcall __trandisp1(undefined4 param_1,int param_2);
void __fastcall __trandisp2(undefined4 param_1,int param_2);
float10 FUN_004b3b86(void);
void FUN_004b3c43(void);
float10 __fastcall FUN_004b3c50(undefined4 param_1_00,undefined4 param_2_00,undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
float10 __fastcall __startOneArgErrorHandling(undefined4 param_1_00,undefined4 param_2_00,undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_004b3cc5(void);
undefined4 __convertTOStoQNaN(void);
uint __fastcall __fload_withFB(undefined4 param_1,int param_2);
uint FUN_004b3d38(undefined4 param_1,uint param_2);
void __math_exit(void);
undefined4 FUN_004b3e40(undefined4 param_1);
longlong __allmul(uint param_1,uint param_2,uint param_3,uint param_4);
void FUN_004b3ea0(uint *param_1,int param_2);
void FUN_004b3f40(undefined4 *param_1);
undefined4 FUN_004b3fc0(int *param_1);
uint FUN_004b4100(byte **param_1);
undefined4 * FUN_004b41f0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4);
undefined4 * FUN_004b43c0(void);
void __cintrindisp2(void);
void __cintrindisp1(void);
void __ctrandisp2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_004b4563(void);
void FUN_004b456a(void);
void __ctrandisp1(undefined4 param_1,undefined4 param_2);
float10 __fload(uint param_1,int param_2);
undefined4 FUN_004b4f16(undefined4 param_1,uint param_2,ushort param_3_00);
float10 FUN_004b511c(void);
uint FUN_004b54a0(uint param_1,int *param_2);
undefined4 FUN_004b55d0(uint param_1,undefined4 param_2,undefined4 param_3);
int FUN_004b5650(uint param_1,char *param_2,uint param_3);
uint * FUN_004b5870(uint *param_1,char param_2);
uint * FUN_004b5876(uint *param_1);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4);
void FUN_004b5a20(uint param_1);
int FUN_004b5aa0(void);
int FUN_004b5ab0(void);
undefined4 FUN_004b5ac0(uint param_1,undefined4 param_2,undefined4 param_3);
DWORD FUN_004b5b40(uint param_1,LONG param_2,DWORD param_3);
int FUN_004b5bc0(char **param_1);
undefined4 FUN_004b5d70(void);
void FUN_004b5dd0(int param_1);
DWORD * FUN_004b5df0(void);
void FUN_004b5e70(LPVOID param_1);
int FUN_004b5f20(byte *param_1,byte *param_2);
byte * FUN_004b60d0(byte *param_1,uint param_2);
int FUN_004b6160(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
LPSTR FUN_004b6250(LPSTR param_1,LPCSTR param_2,LPSTR param_3);
int FUN_004b6320(void);
uint FUN_004b6370(uint param_1);
char * FUN_004b6410(byte *param_1,byte *param_2);
int FUN_004b64c0(void);
undefined4 FUN_004b6630(uint param_1,HANDLE param_2);
undefined4 FUN_004b66e0(uint param_1);
undefined4 FUN_004b6780(uint param_1);
void FUN_004b67d0(uint param_1);
void FUN_004b6840(uint param_1);
void FUN_004b6870(void);
int FUN_004b6a80(void);
int FUN_004b6bd0(LCID param_1,uint param_2,LPCSTR param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,UINT param_7,int param_8);
float10 FUN_004b6e00(double param_1);
float10 FUN_004b6e20(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4);
void FUN_004b6e50(undefined4 *param_1);
int FUN_004b6f10(undefined4 param_1,byte *param_2,longlong **param_3);
uint FUN_004b7c50(uint param_1);
uint FUN_004b7c90(byte **param_1);
void FUN_004b7cc0(int param_1,undefined4 param_2);
undefined4 FUN_004b7ce0(int *param_1,undefined4 param_2);
undefined4 * FUN_004b7d30(int param_1,int param_2);
uint FUN_004b8030(uint param_1);
char * FUN_004b80d0(undefined4 *param_1);
char * FUN_004b81c0(char *param_1,int param_2);
tm * FUN_004b8200(int *param_1);
undefined4 FUN_004b83f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_004b8470(LPSTR param_1,LPCWSTR param_2,uint param_3);
int FUN_004b8660(short *param_1,int param_2);
char * FUN_004b86a0(char *param_1);
BOOL FUN_004b8730(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6);
BOOL FUN_004b88c0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,int param_7);
unkbyte10 FUN_004b8a6c(void);
undefined4 FUN_004b8ab0(int param_1);
uint FUN_004b8cc0(int param_1,uint param_2);
void FUN_004b8d00(void);
void FUN_004b8d40(int param_1);
void FUN_004b8f20(undefined4 param_1);
undefined4 FUN_004b8f40(uint param_1,uint param_2,byte param_3);
void FUN_004b8f80(void);
void FUN_004b9070(void);
void FUN_004b9110(byte *param_1,byte **param_2,byte *param_3,int *param_4,int *param_5);
undefined4 * FUN_004b9320(void);
undefined4 FUN_004b9480(undefined4 param_1);
int FUN_004b96b0(int param_1);
undefined4 FUN_004b9700(undefined4 param_1);
void FUN_004b9760(void);
void FUN_004b97a0(void);
void FUN_004b9980(void);
uint FUN_004b9990(uint param_1,uint param_2);
void FUN_004b99d0(undefined4 param_1,uint param_2);
uint FUN_004b99f0(uint param_1);
void FUN_004b9a90(void);
int FUN_004b9b20(int param_1);
uint FUN_004b9bb0(uint param_1);
undefined4 FUN_004b9cb0(int param_1,int param_2);
void FUN_004b9d20(int param_1,int param_2);
undefined4 FUN_004b9d90(int param_1,int param_2);
void FUN_004b9e30(int param_1,undefined4 *param_2);
void FUN_004b9e50(undefined4 *param_1);
undefined4 FUN_004b9e60(int *param_1);
void FUN_004b9e80(uint *param_1,int param_2);
undefined4 FUN_004b9f40(ushort *param_1,uint *param_2,int *param_3);
void FUN_004ba110(undefined4 param_1,undefined4 param_2);
void FUN_004ba130(undefined4 param_1,undefined4 param_2);
void FUN_004ba150(undefined4 param_1,undefined4 param_2);
void FUN_004ba190(undefined4 param_1,undefined4 param_2);
void FUN_004ba1d0(undefined4 *param_1,int param_2,int param_3);
int * FUN_004ba270(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4);
void FUN_004ba300(uint *param_1,uint *param_2);
undefined4 * FUN_004ba3c0(undefined4 *param_1,undefined4 *param_2,uint param_3);
void FUN_004ba700(void);
byte FUN_004ba7f0(uint param_1);
undefined4 FUN_004ba820(undefined4 param_1,undefined4 param_2);
LPSTR FUN_004ba890(LPSTR param_1,WCHAR param_2);
undefined4 FUN_004ba910(void);
void FUN_004ba920(int param_1,int *param_2,ushort *param_3);
undefined4 FUN_004baa40(ushort *param_1,byte **param_2,byte *param_3,undefined4 param_4,int param_5,int param_6,int param_7);
void FUN_004bb270(int *param_1);
byte FUN_004bb2d0(byte *param_1,byte *param_2);
char * __cdecl _strrchr(char *_Str,int _Ch);
char * __cdecl _strpbrk(char *_Str,char *_Control);
int FUN_004bb410(uint param_1,int param_2);
uint FUN_004bb530(int param_1);
void FUN_004bb8b0(undefined4 *param_1);
uint FUN_004bbaf0(char *param_1,int param_2);
void FUN_004bbdf0(char *param_1);
uint FUN_004bbf20(int param_1);
void FUN_004bc070(int param_1);
size_t __cdecl _strcspn(char *_Str,char *_Control);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
void FUN_004bc420(undefined4 param_1);
int FUN_004bc430(int *param_1,int param_2);
undefined4 FUN_004bc670(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_004bc6f0(LPWSTR param_1,byte *param_2,uint param_3);
uint FUN_004bc7f0(int param_1);
uint FUN_004bc820(uint param_1,char **param_2);
int * FUN_004bc8b0(int *param_1);
int FUN_004bca20(short *param_1);
int FUN_004bca40(undefined4 param_1,undefined4 param_2,int param_3);
LPCWSTR FUN_004bca80(void);
int ShowMessageBoxFunc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_004bcb90(uint param_1,uint param_2,uint *param_3);
void FUN_004bcbc0(undefined4 *param_1,undefined4 *param_2);
void FUN_004bcc30(uint *param_1);
void FUN_004bcc60(uint *param_1);
void FUN_004bcc90(char *param_1,int param_2,uint *param_3);
undefined4 FUN_004bcd90(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6);
void FUN_004bd1c0(int *param_1,int *param_2);
void FUN_004bd480(undefined2 *param_1,uint param_2,int param_3);
undefined4 FUN_004bd510(int param_1,undefined4 param_2,undefined4 param_3,char **param_4);
int FUN_004bd6c0(byte *param_1,char *param_2,int param_3);
int FUN_004bd7d0(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,UINT param_7);
int FUN_004bdaa0(char *param_1,int param_2);
undefined4 FUN_004bdad0(char *param_1,int param_2);
int FUN_004bdce0(undefined4 param_1,int param_2);
undefined4 * FUN_004bdd60(int *param_1);
int FUN_004bddd0(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5);
int FUN_004bdf00(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5);
undefined4 * FUN_004be040(undefined4 *param_1,uint param_2);
byte * FUN_004be1f0(byte *param_1,uint param_2);
undefined4 * FUN_004be2c0(char *param_1);
void DirectInputCreateA(void);
void tp_DestroyScreen(void);
void tp_SetKey(void);
void tp_StatusGet(void);
void tp_HaveScreen(void);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);

