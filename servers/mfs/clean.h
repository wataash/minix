
#ifndef _MFS_CLEAN_H
#define _MFS_CLEAN_H 1

#define MARKDIRTY(b) do { if(superblock.s_dev == (b)->b_dev && superblock.s_rd_only) { printf("%s:%d: dirty block on rofs! ", __FILE__, __LINE__); util_stacktrace(); } else { (b)->b_dirt = BP_DIRTY; } } while(0)
#define MARKCLEAN(b) ((b)->b_dirt = BP_CLEAN)

#define ISDIRTY(b)	((b)->b_dirt == BP_DIRTY)
#define ISCLEAN(b)	((b)->b_dirt == BP_CLEAN)

#endif
