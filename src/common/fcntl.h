#ifndef _COMMON_FCNTL_H
#define _COMMON_FCNTL_H

#define O_ACCMODE       00000003
#define O_RDONLY        00000000
#define O_WRONLY        00000001
#define O_RDWR          00000002
#define __O_STATONLY	00000004	/* Internal mode */
#define O_CREAT         00000100
#define O_EXCL          00000200
#define O_NOCTTY        00000400
#define O_TRUNC         00001000
#define O_APPEND        00002000
#define O_NONBLOCK      00004000
#define O_DSYNC         00010000
#define FASYNC          00020000
#define O_DIRECT        00040000
#define O_LARGEFILE     00100000
#define O_DIRECTORY     00200000
#define O_NOFOLLOW      00400000
#define O_NOATIME       01000000
#define O_CLOEXEC       02000000
#define __O_SYNC        04000000
#define O_SYNC			(__O_SYNC | O_DSYNC)
#define O_PATH          010000000
#define __O_TMPFILE     020000000
#define O_TMPFILE		(__O_TMPFILE | O_DIRECTORY)
#define O_TMPFILE_MASK	(__O_TMPFILE | O_DIRECTORY | O_CREAT)
#define O_NDELAY        O_NONBLOCK

#endif
