/*
 * This file was originally distributed as part of
 * shadow-utils-4.0.17-12.fc6.src.rpm and has been modified
 * in WRLinux for inclusion in rpm.
 */

extern struct spwd *__spw_dup (const struct spwd *);
extern void __spw_set_changed (void);
extern int spw_close (void);
extern int spw_file_present (void);
extern const struct spwd *spw_locate (const char *);
extern int spw_lock (void);
extern int spw_name (const char *);
extern const struct spwd *spw_next (void);
extern int spw_open (int);
extern int spw_remove (const char *);
extern int spw_rewind (void);
extern int spw_unlock (void);
extern int spw_update (const struct spwd *);
extern int spw_sort (void);
