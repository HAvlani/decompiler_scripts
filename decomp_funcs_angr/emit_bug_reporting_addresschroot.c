extern unsigned int g_408da5;
extern unsigned int g_408dcf;
extern unsigned int g_409020;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_408da5, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_408dcf, 0x5));
    dcgettext(0x0, &g_409020, 0x5);
}
