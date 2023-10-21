/* See LICENSE file for copyright and license details. */
typedef unsigned int uint;
#define SCRIPTDIR "/home/oizero/.local/bin/"
#define CIMPL "/home/oizero/.local/bin/Cimpl/"
/* separator used for separating modules */
static const char *sep = " | ";
/* length of the given separator */
static const uint sep_len = 3;

/* If update interval is set to 0 then given command will be executed only
 * after receiving given signal. If update signal is set to 0, then there is no
 * signal that will trigger execution of the command.
 * To send signal use command 'kill -n $(pidof slbar)'
 * where n is 34 + update signal. */
static const Module modules[] = {
  /* command                  update interval    update signal */
  { SCRIPTDIR "dwm-cpu.sh",         2,                 0 },
  { CIMPL "dwm-temp",               2,                 0 },
  { SCRIPTDIR "dwm-mem.sh",         2,                 0 },
  { SCRIPTDIR "dwm-disk.sh",     3600,                 0 },
  { CIMPL "dwm-bat",               20,                 0 },
  { SCRIPTDIR "dwm-back.sh",        0,                11 },
  { SCRIPTDIR "dwm-audio.sh",       0,                10 },
  { SCRIPTDIR "dwm-xkb.sh",         0,                12 },
  { CIMPL "dwm-date",               1,                 0 },
};
