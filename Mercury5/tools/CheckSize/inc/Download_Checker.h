
#ifndef __DOWNLOAD_CHECKER__
#define __DOWNLOAD_CHECKER__

#define __DOWNLOADER__
#define s32  signed int
#define u32  unsigned int
#define s8   signed int
#define u8   unsigned int
#define s16  signed short
#define u16  unsigned short
#define bool unsigned char

#define S32 s32
#define U32 u32
#define S8  s8
#define U8  u8
#define S16 s16
#define U16 u16
#define TRUE  0
#define FALSE 1

#define CUS_HEADER           "WCUS"
#define CUS_HEADER_SIZE      4
#define MAX_PATH_LENGTH      200
#define LANGPACK             "*Lang*.CUS"
#define DSP_PAT              "dsp.pat"
#define STACK_E2P            "stack.e2p"
#define WPB                  "*.wpb"
#define TRACE_HEADER         "WTrcNumberOf32k"
#define RAI_HEADER           "WRaiSizeIn32k"
#define SEPERATOR            "/"
#define INIFILE              "check.ini"


#define KB                   *1024
#define TO_KB(X)             (X%1024==0?(X/1024):(X/1024 +1))
#define GET_SECTOR_KB(X)     (1<<(X-10))
#define get_e2p_size(X)      get_file_size(X)
#define get_langpack_size(X) get_file_size(X)
#define get_bin_size(X)      get_file_size(X)
#define get_trace_size(X)    parse_stack_cus(X,TRACE_HEADER)
#define get_rai_size(X)      parse_stack_cus(X,RAI_HEADER)

typedef enum{
  INI_OK,
  INI_NO_EXIST,
  INI_PARSE_ERROR,
}IniParseError_e;

typedef struct {
  int BinarySize;
  int CusSize;
  int RaiSize;
  int TraceSize;
  int TotalSize;
} DownLoadSize_t;



#endif
























