typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char complement;
extern char delim;
extern unsigned int g_408099;
extern char g_4080e1;
extern unsigned int g_4080ee;
extern char g_4080fa;
extern unsigned int g_408898;
extern char g_408910;
extern char g_408948;
extern char g_408990;
extern struct_0 g_4089e0;
extern char have_read_stdin;
extern char line_delim;
extern unsigned int longopts;
extern char optarg[2];
extern struct_0 optind;
extern char output_delimiter_default[2];
extern unsigned long long output_delimiter_length;
extern char output_delimiter_string[2];
extern char suppress_non_delimited;

int main()
{
    unsigned long long v11;  // rcx
    unsigned long long|char [2] v15;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r15
    char v19;  // cc_dep2
    unsigned long v20;  // d
    unsigned long long v7;  // rax

    v7 = 1;
    line_delim = 0;
    suppress_non_delimited = 1;
    v17 = 0;
    v16 = v15;
    set_program_name();
    setlocale();
    bindtextdomain(&g_408099, &g_408898);
    textdomain(&g_408099);
    atexit();
    suppress_non_delimited = 0;
    delim = 0;
    have_read_stdin = 0;
    if (*(optarg) != 0)
    {
        v11 = 18446744069414584319;
        v15 = optarg;
        /* goto 4204667; */
    }
    if (((long long)*(optarg)) != 0)
    {
        if (*(optarg + 1) != 0)
        {
            "the delimiter must be a single character" = "the delimiter must be a single character";
            error(0x0, 0x0, dcgettext(0x0, "the delimiter must be a single character", 0x5));
            usage(); /* do not return */
        }
    }
    v11 -= 1;
    v19 = ((char)v15[0]);
    v15 += v20;
    /* goto 4204669; */
    if (((long long)*(optarg)) == 0 || *(optarg + 1) == 0)
    {
        delim = *(optarg);
        v17 = 1;
    }
    v7 = !(rcx<8>) - 1;
    output_delimiter_length = v7;
    output_delimiter_string = optarg;
}
