/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"monospace:size=10",
};


static char *prompt            = NULL;      /* -p  option; prompt to the left of input field */
static const char *dynamic     = NULL;      /* -dy option; dynamic command to run on input change */
static const char *symbol_1 = "⬱"; // "<";
static const char *symbol_2 = "⇶"; // ">";

static char normfgcolor[]   = "#bbbbbb",
            normbgcolor[]   = "#222222";
static char selfgcolor[]    = "#eeeeee",
            selbgcolor[]    = "#005577";
static char selhlfgcolor[]  = "#ffc978",
            selhlbgcolor[]  = "#005577";
static char normhlfgcolor[] = "#ffc978",
            normhlbgcolor[] = "#222222";
static char outfgcolor[]    = "#000000",
            outbgcolor[]    = "#00ffff";
static char hpfgcolor[]     = "#bbbbbb",
            hpbgcolor[]     = "#333333";
static char *colors[SchemeLast][2] = {
	/*                                  fg              bg          */
	[SchemeNorm]            = {     normfgcolor,    normbgcolor     },
	[SchemeSel]             = {     selfgcolor,     selbgcolor      },
	[SchemeSelHighlight]    = {     selhlfgcolor,   selhlbgcolor    },
	[SchemeNormHighlight]   = {     normhlfgcolor,  normhlbgcolor   },
	[SchemeOut]             = {     outfgcolor,     outbgcolor      },
	[SchemeHp]              = {     hpfgcolor,      hpbgcolor       },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",           STRING, &font           },
	{ "normfgcolor",    STRING, &normfgcolor    },
	{ "normbgcolor",    STRING, &normbgcolor    },
	{ "selfgcolor",     STRING, &selfgcolor     },
	{ "selbgcolor",     STRING, &selbgcolor     },
	{ "normfgcolor",    STRING, &normfgcolor    },
	{ "normbgcolor",    STRING, &normbgcolor    },
	{ "selfgcolor",     STRING, &selfgcolor     },
	{ "selbgcolor",     STRING, &selbgcolor     },
	{ "selhlfgcolor",   STRING, &selhlfgcolor   },
	{ "selhlbgcolor",   STRING, &selhlbgcolor   },
	{ "normhlfgcolor",  STRING, &normhlfgcolor  },
	{ "normhlbgcolor",  STRING, &normhlbgcolor  },
	{ "outfgcolor",     STRING, &outfgcolor     },
	{ "outbgcolor",     STRING, &outbgcolor     },
	{ "hpfgcolor",      STRING, &hpfgcolor      },
	{ "hpbgcolor",      STRING, &hpbgcolor      },
	{ "prompt",         STRING, &prompt         },
};

